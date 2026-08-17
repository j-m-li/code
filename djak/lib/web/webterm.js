
var term = 0;

function WebTerm(div, pw, ph, out)
{
	if (term !== 0) {
		return term;
	}
	term = this;
	this.out = out;
	this.div = div;
	this.class_ = "";
	this.escape_state = 0;
	this.escape_val = 0;
	this.escape_args = new Array();
	this.escape_save = new Array();
	this.escape_gfx = document.createElement('span');
	
	this.safe = getComputedStyle(document.documentElement).getPropertyValue("--sat");
	s = getComputedStyle(document.documentElement).getPropertyValue("--sar");
	if (s > this.safe) {
		this.safe = s;
	}
	s = getComputedStyle(document.documentElement).getPropertyValue("--sab");
	if (s > this.safe) {
		this.safe = s;
	}
	s = getComputedStyle(document.documentElement).getPropertyValue("--sal");
	if (s > this.safe) {
		this.safe = s;
	}
	if (isNaN(this.safe)) {
		this.safe = 5;
	}
	var w = 80;
	var h = 25;
	for (var i = 0; i < h; i++) {
		var row = document.createElement('div');
		for (var j = 0; j < w; j++) {
			var cell = document.createElement('span');
			var txt = document.createTextNode("\u{a0}");
			cell.classList.add("hidden");
			cell.appendChild(txt);
			row.appendChild(cell);
		}
		div.appendChild(row);
	}
	this.x = 0;
	this.y = 0;
	this.w = w;
	this.h = h;
	this.reset();
	var cursor = this.div.children[0].children[0];
	cursor.classList.add("cursor");
	resize(pw, ph);
	var viewport = document.querySelector('meta[name="viewport"]');
    	if (viewport) {
		//viewport.content = 'width=device-width, initial-scale=1';
		//viewport.content = 'width=device-width';
	}
	return this;
}

WebTerm.prototype.reset = function()
{
	var cursor = this.div.children[this.y].children[this.x];
	cursor = this.escape_gfx;
	cursor.classList.add("cursor");
	cursor.style.setProperty("font-style", "normal"); // "italic"
	cursor.style.setProperty("font-weight", "normal"); // "bold"
	cursor.style.setProperty("text-decoration-line", "none"); // "underline"
	cursor.style.setProperty("color", "#FFFFFF");
	cursor.style.setProperty("background-color", "#000000");
	this.style = cursor.style;
	this.class_ = cursor.getAttribute("class");
}

// Select Graphics Rendition
// https://en.wikipedia.org/wiki/ANSI_escape_code
WebTerm.prototype.sgr = function()
{
	var f = 0;
	if (this.escape_args.length > 1) {
        	f = this.escape_args[0];
        }
        if (f == 0) {
        	this.reset();
	} else if (f == 1) {
		this.escape_gfx.style.setProperty("font-weight", "bold"); 
        } else if (f == 2) {
            // do nothing
        } else if (f == 3) {
		this.escape_gfx.style.setProperty("font-style", "italic"); 
        } else if (f == 4) {
		this.escape_gfx.style.setProperty(
			"text-decoration-line", "underline");
        } else if (f >= 30 && f <= 37) {
		this.escape_gfx.style.setProperty("color", 
			this.get_ansi_color(f - 30));
        } else if (f >= 40 && f <= 47) {
		this.escape_gfx.style.setProperty("background-color", 
			this.get_ansi_color(f - 40));
        } else if (f >= 90 && f <= 97) {
		// FIXME brighter
		this.escape_gfx.style.setProperty("color", 
			this.get_ansi_color(f - 90));
        } else if (f >= 100 && f <= 107) {
		// FIXME brighter
		this.escape_gfx.style.setProperty("background-color", 
			this.get_ansi_color(f - 100));
        }
}

WebTerm.prototype.ansi_private = function(c)
{
	var cursor = this.div.children[this.y].children[this.x];
        if (c == 104) {    //'h' show caret
            	if (this.escape_args.length > 1) {
                	var cmd = this.escape_args[1];
                	if (cmd == 25) {
				cursor.classList.add("cursor");
                	}
            	}
        } else if (c == 108) {   // 'l' hide caret
            	if (escape_args.size > 1) {
                	var cmd = escape_args[1]
                	if (cmd == 25) {
				cursor.classList.remove("cursor");
                	}
            	}
        }
}

/* parse escape sequences */
WebTerm.prototype.ansi_term = function(c)
{
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797
// https://sourceforge.net/p/pdos/gitcode/ci/master/tree/src/pdos.c#l5493
	var n = 1;
        if (this.escape_args.length > 0) {
		if (this.escape_args[0] == -63) { // '?'
                	this.ansi_private(c)
                	return
            	}
            	n = this.escape_args[0];
        }
        if (c == 65) { // 'A'
            	this.y -= n;
        } else if (c == 66) { // 'B'
		this.y += n;
        } else if (c == 67) { // 'C'
            	this.x += n;
        } else if (c == 68) { // 'D'
            	this.x -= n;
        } else if (c == 69) { // 'E'
            	this.y += n;
		this.x = 0;
        } else if (c == 70) { // 'F'
		this.y -= n;
		this.x = 0;
        } else if (c == 71 || c == 102) { // 'G' || 'f'
        	if (this.escape_args.length > 0) {
                	this.x = this.escape_args[0] - 1;
            	}
        } else if (c == 72) { // 'H' set cursor position
		if (this.escape_args.length > 0) {
                	this.y = this.escape_args[0] - 1;
                	if (this.escape_args.length > 1) {
                    		this.x = this.escape_args[1] - 1;
                	} else {
				this.x = 0;
                	}
            	}
        } else if (c == 74) { // 'J' clear screen
		if (this.escape_args.length == 0) {
                	n = 0;
            	}
            	if (n == 0) {
                	this.earse(this.x, this.y, this.w - 1, this.h - 1);
            	} else if (n == 1) {
                	this.earse(0, 0, this.x, this.y);
            	} else if (n == 2) {
                	this.earse(0, 0, this.w - 1, this. y - 1);
            	}
        } else if (c == 75) { // 'K' clear line
		if (this.escape_args.length == 0) {
                	n = 0;
            	}
            	if (n == 0) {
                	this.earse(this.x, this.y, this.w - 1, this.y);
            	} else if (n == 1) {
                	this.earse(0, this.y, this.x, this.y);
            	} else if (n == 2) {
                	earse(0, this.y, this.w - 1, this.y);
            	}
        } else if (c == 83) { // 'S'
            	this.scroll(n);
        } else if (c == 84) { // 'T'
            	this.scroll(-n);
        } else if (c == 99) { // 'c'
		if (n == 0) { // Device attributes: VT101 with no options
			this.output("\u001b[?1;0c");
		}
        } else if (c == 115) { // 's'
            	this.escape_save.push(this.y)
            	this.escape_save.push(this.x);
        } else if (c == 117) { // 'u'
            	if (this.escape_save.length > 1) {
                	this.x = this.escape_save.pop();
                	this.y = this.escape_save.pop();
            	}
        } else if (c == 109) { // 'm'
		this.sgr();
        } else if (c == 110) { // 'n'
		if (n == 6) { // report cursor position
			this.output("\u001b[" + (this.y + 1)  + ";" 
				+ (this.x + 1) + "R");
		}
        }
}

WebTerm.prototype.resize = function(pw, ph)
{
	if (pw > 320) {
		pw -= 2 * this.safe;
		ph -= 2 * this.safe;
	}
	var w = 80;
	var h = 25;
	if (pw < 960) {
		w = 40;
	}
	if (ph < 600) {
		h = 15;
	}
	this.w = w;
	this.h = h;
	for (var i = 0; i < 25; i++) {
		var row = this.div.children[i];
		for (var j = 0; j < 80; j++) {
			var cell = row.children[j];
			if (i < h && j < w) {
				cell.classList.remove("hidden");
			} else {
				cell.classList.add("hidden");
			}
		}
	}
	var scale = ph / (h * 16);
	var lh = 16 * scale;
	lh = Math.floor(lh);
	var lw = 8 * scale;
	if (lw * w > pw) {
		scale = pw / (w * lw);
		lh = lh * scale;
		lh = Math.floor(lh);
	}
	if (lh < 16) {
		lh = 16;
	} else if (lh > 24) {
		//lh = 24;
	}
	var fs = Math.floor(lh * 20 / 24);
	fs = lh / 1.3;
	this.div.style.fontSize = fs + "px";
	this.div.style.lineHeight = lh + "px";
	if (pw > 320) {
		this.div.style.padding = this.safe + "px";
	}
	var dw = this.div.getBoundingClientRect().width;
	var dh = this.div.getBoundingClientRect().height;
	if (pw > dw && pw > 320) {
		this.div.style.paddingLeft = this.safe + (pw - dw) / 2 + "px";
	}
}

WebTerm.prototype.set_style = function(cell)
{
	cell.setAttribute('class', this.escape_gfx.getAttribute('class'));
	var style = this.escape_gfx.style;
	cell.classList.remove("cursor");
	var p = new Array("color", "background-color", "font-style",
		"font-weight", "text-decoration-line");
	p.forEach(function (item) {
		var s = style.getPropertyValue(item);
		cell.style.setProperty(item, s);
	});
}

WebTerm.prototype.get_ansi_color = function(index)
{
	switch (index) {
	case 0: return "Black";
	case 1: return "Red";
	case 2: return "Green";
	case 3: return "Yellow";
	case 4: return "Blue";
	case 5: return "Magenta";
	case 6: return "Cyan";
	case 7: return "White";
	default: return "Gray";
	}
}

WebTerm.prototype.earse = function(scol, srow, ecol, erow)
{
	var r = srow;
	while (r <= erow) {
		var row = this.div.children[r];
		var c = 0;
		var ec = this.w;
		if (r == srow) {
			c = scol;
		}
		if (r == erow) {
			ec = ecol;
		}
		while (c <= ec) {
			var cell = row.children[c];
			cell.innerText = "\u{a0}";
			if (c < this.w && this.h == 25) {
				this.set_style(cell);
			} else {
				cell.setAttribute('class', "hidden");
			}
			c++;
		}
		r++;
	}
}

WebTerm.prototype.scroll = function(amount)
{
	while (amount < 0) {
		var row = this.div.lastChild;
		this.div.removeChild(row);
		for (var j = 0; j < 80; j++) {
			var cell = row.children[j];
			cell.innerText = "\u{a0}";
			if (j < this.w && this.h == 25) {
				this.set_style(cell);
			} else {
				cell.setAttribute('class', "hidden");
			}
		}
		this.div.insertBefore(this.div.firstChild, row);
		row = this.div.children[this.h -1];
		for (var j = 0; j < 80; j++) {
			var cell = row.children[j];
			cell.innerText = "\u{a0}";
			if (j < this.w) {
				this.set_style(cell);
			}
		}
	}
	while (amount > 0) {
		amount--;
		var row = this.div.firstChild;
		this.div.removeChild(row);
		for (var j = 0; j < 80; j++) {
			var cell = row.children[j];
			cell.innerText = "\u{a0}";
			if (j < this.w && this.h == 25) {
				this.set_style(cell);
			} else {
				cell.setAttribute('class', "hidden");
			}
		}
		this.div.appendChild(row);
		row = this.div.children[this.h -1];
		for (var j = 0; j < 80; j++) {
			var cell = row.children[j];
			cell.innerText = "\u{a0}";
			if (j < this.w) {
				this.set_style(cell);
			}
		}
	}

}

// https://sourceforge.net/p/pdos/gitcode/ci/master/tree/src/pdos.c#l1764
WebTerm.prototype.keydown = function(code, shift, ctrl, alt, meta)
{
	var s = "";
	switch (code) {
//	case 'Enter':
//	case 'NumpadEnter': s = "\n"; break;
	case 'Tab': s = "\t"; break;
	case 'Escape': s = "\u001b\u001b"; break;
//	case 'Backspace': s = "\b"; break;
	case 'Delete': s = "\u001b[3~"; break;
	case 'ArrowUp': s = "\u001b[A"; break;
	case 'ArrowDown': s = "\u001b[B"; break;
	case 'ArrowRight':
		if (ctrl) {
			s = "\u001b[1;5C"; break;
		} else {
			s = "\u001b[C"; break;
		}
	case 'ArrowLeft': 
		if (ctrl) {
			s = "\u001b[1;5D"; break;
		} else {
			s = "\u001b[D"; break;
		}
	case 'Insert': s = "\u001b[2~"; break;
	case 'Home': s = "\u001b[1~"; break;
	case 'End': s = "\u001b[4~"; break;
	case 'PageDown': 
		if (ctrl) {
			s = "\u001b[6;5~"; break;
		} else {
			s = "\u001b[6~"; break;
		}
	case 'PageUp': 
		if (ctrl) {
			s = "\u001b[5;5~"; break;
		} else {
			s = "\u001b[5~"; break;
		}
	}
	if (alt) {
		if (code.startsWith("Key")) {
			var k = code.codePointAt(3);
			if (k >= 65 && k <= 90) { // 'A' && 'Z'
				// k + 'a'
				s = "\u001b" + String.fromCodePoint(k + 97); 
			}
		}
	}
	if (ctrl && s.length == 0) {
		var k = code.codePointAt(3);
		if (k >= 65 && k <= 90) { // 'A' && 'Z'
			s =  String.fromCodePoint(k + 1); 
		}
	}
	return s;
}

// https://learn.microsoft.com/en-us/windows/console/console-virtual-terminal-sequences
WebTerm.prototype.add_cp = function(c)
{
	var i = 1;
	if (this.escape_state == 3) {
		this.escape_state = 0;
	}
	if (this.escape_state == 1) {
                // https://notes.burke.libbey.me/ansi-escape-codes/
                if (c == 91) { // '['
                    	this.escape_state = 2;
                    	this.escape_val = -1;
                    	this.escape_args.length = 0;
                } else {
                    	this.escape_state = 0;
                    	i--; // rescan the current character
                }
	} else if (this.escape_state == 2) {
                if (c >= 48 && c <= 57) { //'0' && '9'
                    	if (this.escape_val == -1) {
                        	this.escape_val = 0;
                    	}
                    	this.escape_val *= 10;
                    	this.escape_val += c - 48; // c - '0'
                } else if (c == 59) { // ';'
                    	this.escape_args.push(this.escape_val);
                    	this.escape_val = -1;
                } else if (c == 61) { // '='
                    	this.escape_args.push(-61);
                    	this.escape_val = -1;
                } else if (c == 63) { // '?'
                    	this.escape_args.push(-63);
                    	this.escape_val = -1;
                } else if (c >= 0x40 && c <= 0x7E) { // '@' && '~'
                    	if (this.escape_val >= 0) {
                        	this.escape_args.push(this.escape_val);
                    	}
                    	this.ansi_term(c);
                    	this.escape_state = 3;
                }
	} else if (c == 10) { // \n
               	this.y++;
               	this.x = 0;
        } else if (c == 13) { // \r
        } else if (c == 8) {  // \b
		if (this.x > 0) {
               		this.x--;
			this.set_text("\u{a0}", this.x, this.y);
		}
        } else if (c == 9) { // \t
		var nx = this.x + 8 - (this.x % 8);
		while (this.x < nx && this.x < this.w) {
			this.set_text("\u{a0}", this.x, this.y);
			this.x++;
		}
        } else if (c == 0x1B) { // ESC
                this.escape_state = 1;
        } else {
		this.set_text(String.fromCodePoint(c), this.x, this.y);
		this.x++;
        }
        if (this.x < 0) {
                this.x = 0;
        }
	if (this.y < 0) {
		this.y = 0;
	}
	if (this.x >= this.w) {
		if (this.escape_state == 0) {
			this.y++;
			this.x = 0;
		} else {
			this.x = this.w - 1;
		}
	}
	if (this.y >= this.h) {
		if (this.escape_state == 0) {
			this.scroll(this.y - this.h + 1);
		}
		this.y = this.h - 1;
	}
	return i;
}

WebTerm.prototype.output = function(txt)
{
	this.out.send(txt);
}

WebTerm.prototype.input = function(txt)
{
	this.add_txt(txt);
}

WebTerm.prototype.add_txt = function(txt)
{
	var cursor = this.div.children[this.y].children[this.x];
	this.style = cursor.style;
	this.class_ = cursor.getAttribute("class");

	cursor.classList.remove("cursor");

	for (var i = 0; i < txt.length; ) {
		var c = txt.codePointAt(i);
		if (c >= 0xDC00 && c <= 0xDFFF) {
			// trailing surrogate
			i++;
		} else {
			 i += this.add_cp(c);
		}

	}
	cursor = this.div.children[this.y].children[this.x];
	this.set_style(cursor);
	cursor.classList.add("cursor");
}

WebTerm.prototype.set_text = function(txt, x, y)
{
	var cell = this.div.children[y].children[x];
	var cursor = this.div.children[this.y].children[this.x];
	var style = cursor.style;
	var class_ = cursor.getAttribute("class");
	if (txt.length < 1 || txt == " ") {
		txt = "\u{a0}";
	}
	cell.innerText = txt;
	this.set_style(cell);
}

function get()
{

	return term;
}

module.exports = {get, WebTerm};

