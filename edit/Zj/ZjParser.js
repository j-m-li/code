/*******************************************************************************

           6 January MMXXII PUBLIC DOMAIN by Jean-Marc Lienher

            The authors disclaim copyright to this source code.

 ******************************************************************************/


class ZjParser {

$(o) { return o; }

constructor()
{
    this.progressCB = null;
    this.tk = null;
    this.s = "";
    this.ast = new ZjAst("", 0, null);
    this.root = this.ast;
    this.ok = true;
    this.member = this.root;
}

dispose()
{
    this.ast.dispose();
    delete this;
}

reset()
{
    delete this.ast;
    this.ast = new ZjAst("", 0, null);
    this.root = ast;
    this.ok = true;
}

log(d)
{
    this.s += "" + d;
}

parse(tok, cb)
{
    this.s = ">>>";
    this.progressCB = cb;
    this.tk = tok;

    setTimeout(this.parseCB.bind(this), 1);
}

match(token, id, precedence, advance) 
{
	let a = this.ast;
    	if (advance) {
        	this.advance();
    	}
    	if (token == null) {
        	if (id != this.tk.type) {
            		return false;
        	}
    	} else {
        	if (token != this.tk.token) {
            		return false;
        	}
    	}

	switch (id) {
	case ZjT.RIGHT_CURLY_BRACKET:
		while (a.parent != null && a.id != ZjT.LEFT_CURLY_BRACKET) {
			a = a.parent;
		}
		
		if (a.id != ZjT.LEFT_CURLY_BRACKET) {
			this.log("unmatched }");
			return false;
		}
		this.ast = a;
		return true;
	case ZjT.RIGHT_SQUARE_BRACKET:
		while (a.parent != null && a.id != ZjT.LEFT_SQUARE_BRACKET) {
			a = a.parent;
		}
		
		if (a.id != ZjT.LEFT_SQUARE_BRACKET) {
			this.log("unmatched ]");
			return false;
		}
		this.ast = a;
		return true;
	case ZjT.RIGHT_PARENTHESIS:
		while (a.parent != null && a.id != ZjT.LEFT_PARENTHESIS) {
			a = a.parent;
		}
		if (a.id != ZjT.LEFT_PARENTHESIS) {
			this.log("unmatched )");
			return false;
		}
		this.ast = a;
		return true;
    	}
	if (precedence < 0) {
		if (this.ast.right == null) {
			this.ast = this.ast.add_right(id, this.tk.token, precedence);
		} else {
			this.ast = this.ast.add_next(id, this.tk.token, precedence);
		}
		return true;
	}
	if (precedence > 0) {
		// 0xA = left to right
            	// 0xB = right to left
		let to = precedence & 0x0F;
		if (to == 0x0B) {
			this.ast = this.ast.add_left(id, this.tk.token, precedence);
			return true;
		}
	}
    	this.ast = this.ast.add_right(id, this.tk.token, precedence);
    	return true;
}

semicolon()
{
	while (this.ast.parent) {
		if (this.ast.id == ZjT.LEFT_CURLY_BRACKET ||
			this.ast.id == ZjT.LEFT_PARENTHESIS)
		{
			break;
		}
		this.ast = this.ast.parent;
	}
}

advance()
{
    if (this.tk.hasMoreTokens()) {
        return this.tk.advance();
    }
    return null;
}

parseCB() 
{ 
    let n = 10;
    while (this.ok && this.tk.hasMoreTokens()) {
        this.ast = this.root;
        let t = this.tk.advance();
        if (t == null) {
            break;
        }
        switch (t) {
        case "include":
            break;
        case "class":
            if (!this.parseClass()) {
                this.ok = false;
            } 
            
            break;
        default:
            this.s += "Unknown " + t;
            this.ok = false;
            break;
        }

        
        //n--;
        if (this.ok && n <= 0) {
            setTimeout(this.parseCB.bind(this), 1);
            return;
        }
    }
    if (this.ok || true) {
        
        this.root.process(this.log.bind(this), 0);
    }
    let r = [];
    r.status = 200;
    r.response = "OK...";
    r.response = this.s + "END";
    this.progressCB(r);
}

parseClass()
{
    let z = false;
    z = this.match("class", ZjT.CLASS, -1, false);
    z = this.match(null, ZjT.IDENTIFIER, 0x00, true);
    if (!z) {
        this.log("missing identifier");
        return false;
    }
    z = this.match("{", ZjT.LEFT_CURLY_BRACKET, 0, true);
    if (!z) {
        this.log("missing {");
        return false;  
    }
    let b = this.ast;
    this.advance();
    
    z = this.classWrap();
    if (!z) {
	this.log("missing $(o) { return o; } !!!");
        return false;
    }
    
    while (this.tk.token != null) {
        this.ast = b;
	this.log("JJJJ " + this.tk.token + "KK");
        z = this.match("}", ZjT.RIGHT_CURLY_BRACKET, 0, false);
        if (z) {
            return true;
        }
        //this.advance();
        z = this.classStatic();
        if (!z) {
            z = this.classMethod();
        }
	if (!z) {
		return false;
	}
    }
    this.log("missing } got " + this.tk.token);
    return false;
}

classStatic()
{
    let z = false;
    
    z = this.match("static", ZjT.STATIC, -1, false);
    if (!z) {
        return false;
    }
    this.log("sTATIIIC------------");
    this.member = this.ast;

    z = this.match(null, ZjT.IDENTIFIER, 0, true);
    if (!z) {
        this.log("missing identifier");
        return false;
    }
    z = this.match("(", ZjT.LEFT_PARENTHESIS, 0, true);
    if (z) {
        this.member.id = ZjT.STATIC_METHOD;
        this.advance();
        return this.classMethod();
    }
    this.member.id = ZjT.STATIC_VAR;
    z = this.match("=", ZjT.ASSIGN, 0x02B, false);
    if (z) {
        this.advance();
        z = this.expression();
        if (!z) {
            return false;
        }
    }
    if (this.token == ";") {
	    this.semicolon();
	    return true;
    }
    //z = this.match(";", ZjT.SEMICOLON, -1, false);
    return false;
}

classMethod()
{
    let z = false;
    this.log("paramLIST");
    z = this.parameterList();
    if (!z) {
        return false;
    }
    this.log("paramLIST");
    z = this.match(")", ZjT.RIGHT_PARENTHESIS, -1, false);
    if (!z) {
        return false;
    }
    z = this.match("{", ZjT.LEFT_CURLY_BRACKET, -1, true);
    if (!z) {
        return false;
    }
    this.advance();
    z = this.methodBody();
    if (!z) {
        return false;
    }
    z = this.match("}", ZjT.RIGHT_CURLY_BRACKET, -1, false);
    if (!z) {
        return false;
    }
    this.advance();
    return true;
}

methodBody()
{
    let z = true;
    while (z) {
        z = this.statement();
        if (!z) {
            return true;
        }
    }
    return true;
}

statement()
{
    let z = true;
    switch(this.tk.token) {
    case "if":
        this.match("if", ZjT.IF, -1, false);
        z = this.ifStatement();
        break;
    case "switch":
        this.match("switch", ZjT.SWITCH, -1, false);
        z = this.switchStatement();
        break;
    case "for":
        this.match("for", ZjT.FOR, -1, false);
        z = this.forStatement();
        break;
    case "while":
        this.match("while", ZjT.WHILE, -1, false);
        z = this.whileStatement();
        break;
    case "do":
        this.match("do", ZjT.DO, -1, false);
        z = this.doStatement();
        break;
    case "let":
        this.match("let", ZjT.LET, -1, false);
        z = this.letStatement();
        break;
    case "}":
        z = false;
        break;
    default:
        z = this.expressionStatement();
        break;
    }
    return z;
}

parameterList()
{
    let z = this.match(null, ZjT.IDENTIFIER, -1, false);
    if (!z) {
        return true;
    }
    while (z) {
        z = this.match(",", ZjT.COMMA, -1, true);
        if (!z) {
            return true;
        }
        z = this.match(null, ZjT.IDENTIFIER, -1, true);
        if (!z) {
            return true;
        }     
    }
    return false;
}

ifStatement()
{
    let z = this.match("(", ZjT.LEFT_PARENTHESIS, -1, true);

    return z;
}

switchStatement()
{

}

forStatement()
{

}

whileStatement()
{

}

doStatement()
{

}

letStatement()
{
	let z = true;
	while (z) {
		z = this.varAssign();
		if (this.tk.token == ";") {
			return true;
		}
		z = this.match(",", ZjT.COMMA, 0x01A, false);
		if (!z) {
			return true;
		}
		this.advance();
	}
	
	return false;
}

varAssign()
{
	let z = false;
	z = this.match(null, ZjT.IDENTIFIER, 0, false);
	if (!z) {
	    this.log("missing identifier");
	    return false;
	}
	this.advance();
	if (this.tk.token == ";") {
		return false;
	}
	z = this.assignOp();
	if (!z) {
		this.log("missing assignment op");
		return false;
	}
	z = this.expression();
	if (!z) {
		return false;
	}
	return true;
}

expressionStatement()
{
	let z = false;
    if (this.tk.type == ZjT.IDENTIFIER) {
        z = this.match(null, ZjT.IDENTIFIER, -1, false);
        this.advance();
        switch (this.tk.token) {
            case "(":
            case "[":
            case ".":
                // TODO:
                break;
            case "++":
                this.match("++", ZjT.POSTFIX_INCREMENT, 0x160, false);
                this.advance();
                return true;
            case "--":
                this.match("--", ZjT.POSTFIX_DECREMENT, 0x160, false);
                this.advance();
                return true;
                break;
            case ";":
		this.semicolon();
                this.advance();
                return true;
            default:
                z = this.assignOp();
                if (!z) {
                    return false;
                }
                // FIXME
                return this.expression();
            }       
    } else {
        switch (this.tk.token) {
        case "++":
        case "--":
            return this.expresssion();
        case ";":
	    this.semicolon();
            this.advance();
            return true;
        }
    }
    return false;
}

expression()
{
    // TODO:
    let z = this.term();
    if (!z) {
        return false;
    }
    while (z) {
        z = this.op();
        if (z) {
            z = this.term();
        }
    }
    //return true;

    switch (this.tk.token) {
        case "++":
            // 0xA = left to right
            // 0xB = right to left
            this.match("++", ZjT.PREFIX_INCREMENT, 0x15B, false);
            this.advance();
            return true;
        case "--":
            this.match("--", ZjT.PREFIX_DECREMENT, 0x15B, false);
            this.advance();
            return true;
        case ";":
	    this.semicolon();
            return true;
        }
    return true;
}

term()
{
    return false;
}

op()
{
    return false;
}

assignOp()
{
    let t = 0;
    switch(this.tk.token) {
    case "=":
        t = ZjT.ASSIGN;
        break;
    case "|=":
    case "^=":
    case "&=":
    case "%=":
    case "/=":
    case "*=":
    case "-=":
    case "+=":
    case "??=":
    case "||=":
    case "&&=":
    case ">>=":
    case "<<=":
    case "**=":
    case ">>>=":
 
        break;
    default:
         return false;       
    }
    this.match(this.tk.token, t, 0x02B, false);
    this.advance();
    return true;
}

classWrap()
{
    let z = false;
    z = this.match("$", ZjT.IDENTIFIER, -1, false);
    if (!z) {
        return false;
    }
    z = this.match("(", ZjT.LEFT_PARENTHESIS, 0, true);
    if (!z) {
        return false;
    }
    z = this.match(null, ZjT.IDENTIFIER, 0, true);
    if (!z) {
        return false;
    }
    z = this.match(")", ZjT.RIGHT_PARENTHESIS, 0, true);
    if (!z) {
        return false;
    }
    z = this.match("{", ZjT.LEFT_CURLY_BRACKET, -1, true);
    if (!z) {
        return false;
    }
    z = this.match("return", ZjT.RETURN, 0, true);
    if (!z) {
        return false;
    }
    z = this.match(null, ZjT.IDENTIFIER, 0, true);
    if (!z) {
        return false;
    }
    this.advance();
    if (this.tk.token == ";") {
	    this.semicolon();
    } else {
	    return false;
    }
    //z = this.match(";", ZjT.SEMICOLON, 0, true);
    //if (!z) {
    //    return false;
    //}
    z = this.match("}", ZjT.RIGHT_CURLY_BRACKET, 0, true);
    if (!z) {
        return false;
    }
    this.advance();
    return true;
}

}