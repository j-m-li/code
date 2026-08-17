class ZjAst {

$(o) { return o; }

constructor(id, token, precedence, parent) 
{
    this.token = token;
    this.preced = precedence;
    this.parent = parent;
    this.left = null;
    this.right = null;
    this.next = null;
    this.line = 0;
    this.file = "";
    this.id = id;
}

dispose() 
{
    if (this.left != null) {
        this.left.dispose();
    }
    if (this.right != null) {
        this.right.dispose();
    }
    delete this;
}

setLine (line, file)
{
    this.file = file;
    this.line = line;
}

ident(log, level) 
{
	while (level > 0) {
		level--;
		log("  ");
	}
}

process(log, level) 
{
	this.ident(log, level);
    	log(this.token);
	log("\n");

    	if (this.left) {
		this.ident(log, level);
        	log("L:");
        	this.left.process(log, level + 1);
    	}
    	let c = this.right;
    	if (c != null) {
		this.ident(log, level);
        	log("R:");
		c.process(log, level + 1);
    	}
	c = this.next;
    	if (c != null) {
        	c.process(log, level);
        	//c = c.next;
    	}
    	log("\n");
}   


add_next(id, token, precedence) 
{
	if (this.parent == null) {
		return this.add_right(id, token, precedence);
	}
	let a = new ZjAst(id, token, precedence, this.parent);
	if (this.next == null) {
    		this.next = a;
	} else {
		console.log("we already have a next: " + token);
		return null;
	}
    	return a;	
}

add_right(id, token, precedence) 
{
	let a = new ZjAst(id, token, precedence, this);
	if (this.right == null) {
    		this.right = a;
	} else {
		console.log("we already have a right: " + token);
		return null;
	}
    	return a;
}

add_left(id, token, precedence) 
{
	if (this.parent == null) {
		console.log(this.token + " NULLPAR " + token);
		return null;
	}
	let a = new ZjAst(id, token, precedence, this.parent);
    	a.left = this;
	if (this.parent.left == this) {
		this.parent.left = a;
	} else if (this.parent.right == this) {
		this.parent.right = a;
	} else if (this.parent.right != null) {
		let n = this.parent.right;
		while (n.next) {
			if (n.next == this) {
				a.next = n.next;
				n.next = a;
				break;
			}
			n = n.next;
		}
		if (!n.next) {
			console.log("What a mess");
			return null;
		}
	} else {
		console.log("no left element!!!");
		return null;
	}
	this.parent = a;
    	return a;
}

append(a)
{
    let c = this.right;
    if (c == null) {
        this.right = a;
    } else {
        while (c.next != null) {
            c = c.next;
        }
        c.next = a;
    }
    return a;
}

set(id, token, precedence) 
{
    let c = this.right;
    while (c != null) {
        if (c.token == token) {
            return c;
            c = this.next;
        }
    }
    return this.add(id, token, precedence);
}

removeChild(old)
{
    let c = this.right;
    if (c == null) {
        return null;
    }
    if (old == c) {
        this.right = right.next;
        old.next = null;
        old.parent = null;
        return old;
    }
    let d = c.next;
    while (d != null) {
        if (d == old) {
            c.next = d.next;
            old.next = null;
            old.parent = null;
            return old;
        }
        c = d;
        d = c.next;
    }
    return null;
}

replaceChild(old, neww)
{
    let c = this.right;
    if (c == null) {
        return null;
    }
    if (c == old) {
        neww.next = c.next;
        c.next = null;
        this.right = neww;
        neww.parent = this;
        return null;
    }
    let n = c.next;
    while (n != null) {
        if (n == old) {
            neww.next = n.next;
            n.next = null;
            c.next = neww;
            neww.parent = this;
            return neww;
        }
        c = n;
        n = c.next;
    }
    return null;
}


}
