class ZjAst2C {

static $(o) { return o; }

constructor(complete_cb)
{
	this.s = new ZjBuf(80);
	this.dst = new ZjBuf(8);
	this.hbuf = new ZjBuf(1024);
	this.cbuf = new ZjBuf(1024);
	this.cb = complete_cb;
	this.write_cb = new ZjCallback(this, ZjAst2C.write_cb);
	this.ctx = new ZjContext(null);
}

dispose()
{
	delete this;
}

ident(level)
{
	while (level > 0) {
		level--;
		this.log("  ");
	}
}

log(t)
{
	this.s.from_string(t);
}

add(data)
{
	this.hbuf.from_string(data);
}

addc(data)
{
	this.cbuf.from_string(data);
}

run(ast, dst)
{
	this.s.clear();
	this.dst.clear();
	this.dst.add(dst);
	this.add("// ");
	this.add(dst.to_string());
	this.add("\n");
	this.process(ast, 0);

	this.add("union var__ {int i; void *p; char *s;};\n");
	this.add("struct cb__ {union var__ self; int (*f)();};\n");
	this.add("#define var union var__\n");

	this.head(ast);
	this.body(ast);
	this.add("int main(int argc, char *argv[]) {puts(\"start\");puts(argv[0]);return Main__main().i;}\n");
	this.dst.from_string(".c");
	Fs.write(this.dst, this.hbuf, -1, -1, this.write_cb);
}

static write_cb(r, a, b)
{
	
	if (r.status === 200) {
		
	} else if (r.status === 102) {

	} else {

	}
	r.self.cb.set(r.status, r.self.s);
	r.self.cb.fork(null, null);
	//r.self.cb.exec(null, null);
}


process(ast, level)
{
	this.ident(level);
	this.log(ast.token.to_string());
	this.log("\n");

	if (ast.left) {
		this.ident(level);
		this.log("L:");
		this.process(ast.left, level + 1);
	}
	let c = ast.right;
	if (c !== null) {
		this.ident(level);
		this.log("R:");
		this.process(c, level + 1);
	}
	c = ast.child;
	if (c) {
		this.ident(level);
		this.log("C:\n");
	}
	while (c !== null) {
		this.process(c, level + 1);
		c = c.next;
	}

}

head(ast)
{
	let c = ast.child;

	while (c !== null) {
		if (c.id === ZjT.CLASS) {
			let cls = "";
			let ext = "";
			let d = c.child;
			let f = null;
			if (d !== null) {
				cls = d.token.to_string() ;
				if (d.child) {
					ext = d.child.token.to_string();
				}
				d = d.next;
				if (d.id === ZjT.LEFT_CURLY_BRACKET) {
					d = d.child;
				} else {
					this.log("Bad class declaration");
					return;
				}
			}

			this.add("struct ");
			this.add(cls);
			this.add("__class {\n");
			if (ext !== "") {
				this.add("// extends ");
				this.add(ext);
				this.add("\n");
			}
			f = d;
			while (d !== null) {
				switch (d.id) {
				case ZjT.CONSTRUCTOR:
					this.constructor_members(d.child);
					break;
				}
				d = d.next;
			}
			this.add("};\n");
			d = f;
			while (d !== null) {
				switch (d.id) {
				case ZjT.STATIC_VAR:
					
					break;
				case ZjT.DEFINE:
					if (d.child === null || d.child.right === null) {
						this.log("bad getter");
					}
					this.add("#define ");
					this.add(cls);
					this.add("__");
					this.add(d.child.token.to_string());
					this.add(" ");
					this.add(d.child.right.token.to_string());
					this.add("\n");
					break;
				}
				d = d.next;
			}
		}
		c = c.next;
	}
}

body(ast)
{
	let c = ast.child;

	while (c !== null) {
		if (c.id === ZjT.CLASS) {
			let cls = "";
			let d = c.child;
			let f = null;
			if (d !== null) {
				cls = d.token.to_string() ;
				d = d.next;
				if (d.id === ZjT.LEFT_CURLY_BRACKET) {
					d = d.child;
				} else {
					this.log("Bad class declaration");
					return;
				}
			}

			f = d;

			d = f;
			while (d !== null) {
				switch (d.id) {
				case ZjT.CONSTRUCTOR:
				case ZjT.METHOD:
				case ZjT.STATIC_METHOD:
					if (d.child !== null && d.child.token.to_string()  !== "$") {
						let arg = 0;
						this.add("var ");
						this.add(cls);
						this.add("__");
						this.add(d.child.token.to_string());
						this.add("(");
						if (d.id !== ZjT.STATIC_METHOD) {
							this.add("var t__");
							arg = 1;
						}
						if (d.child.next !== null &&
							d.child.next.id === ZjT.LEFT_PARENTHESIS) 
						{
							let p = d.child.next.child;
							while (p) {
								if (arg > 0) {
									this.add(", ");
								}
								arg++;
								this.add("var ");
								this.add(p.token.to_string());
								p = p.next;
							}
							this.add(") {\n");
							this.method_body(d.child.next.next);
							this.add("}\n");
						}
					}
				}
				d = d.next;
			}
			this.add("var ");
			this.add(cls);
			this.add("__new() { var c; c.p = (void*)malloc(sizeof(struct ");
			this.add(cls);
			this.add("__class)); return c;}\n");
		}
		c = c.next;
	}
}

 method_body(bod)
 {
	ZjAst.$(bod);
	if (bod === null || bod.id !== ZjT.LEFT_CURLY_BRACKET) {
		this.log("Missing method body");
		return;
	}
	let d = bod.child;
	while (d) {
		switch (d.id) {
		case ZjT.LET:
			this.expression(d.child);
			break;
		case ZjT.STATEMENT:
			this.expression(d);
			break;
		default:
			this.add("// ");
			this.add(d.token.to_string());
			this.add("\n");
		}
		
		d = d.next;
	}
}

expression(ast)
{
	this.add(ast.token.to_string());
	this.add("\n");
}

constructor_members(ast)
{
	let c = ast;
	let d = c.next;
	if (d.next === null) {
		return;
	}
	d = d.next;
	if (d.id !== ZjT.LEFT_CURLY_BRACKET) {
		return;
	}
	d = d.child;
	while (d != null) {
		if (d.id === ZjT.STATEMENT) {
			let f = d.right;
			if (f !== null && f.token.to_string()  === "this") {
				if (f.child !== null && f.child.id === ZjT.DOT) {
					f = f.child.right;
					if (f !== null && f.id === ZjT.ASSIGN) {
						f = f.right;
						if (f !== null) {
							this.add("\tvar " + f.token.to_string()  + ";\n");
						}
					}

				}
			}
		}
		d = d.next;
	}
}

} // class ZjAst2C
