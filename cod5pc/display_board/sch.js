//
//      The authors and contributors disclaim copyright, 
//      patents and all related rights to this software.
//

class e_r {
constructor(name,value,pack)
{
	this.name = name;
	this.value = value;
	this.pack = pack;
	this.io =[["1","inout",null],["2","inout",null]];
}
} // e_r

class e_c {
constructor(name,value,pack)
{
	this.name = name;
	this.value = value;
	this.pack = pack;
	this.io =[["1","inout",null],["2","inout",null]];
}
} // e_c

class e_pol_c {
constructor(name,value,pack)
{
	this.name = name;
	this.value = value;
	this.pack = pack;
	this.io =[["+","inout",null],["-","inout",null]];
}
} // e_c


class e_l {
constructor(name,value,pack)
{
	this.name = name;
	this.value = value;
	this.pack = pack;
	this.io =[["1","inout",null],["2","inout",null]];
}
} // e_l

class e_d {
constructor(name,value,pack)
{
	this.name = name;
	this.value = value;
	this.pack = pack;
	this.io =[["A","inout",null],["K","inout",null]];
}
} // e_d



class sch {
constructor()
{
	this.buf = "";	
	this.modules = [];
	this.nodes = []; 
}

strcmp(str1, str2)
{
	return ((str1 == str2) ? 0 : ((str1 > str2) ? 1 : -1));
}

println(str)
{
	console.log(this.buf + str);
	this.buf = "";
}

print(str)
{
	this.buf += str;
}

printn(n)
{
	this.buf += n|0;
}

printf(n)
{
	n = n;
	if (n < 0) {
		this.print("-");
		n = -n;
	}
	this.printn(n / 1000);
	if ((n % 1000) > 0) {
		this.print(".");
		this.printn(n % 1000 / 100);
		this.printn(n % 100 / 10);
		this.printn(n % 10);
	}
}

inv_sqrt(x)
{
	if (x <= 0) {
		return 0;
	}
	var y = 100;
	var last = 0;
	for (var i = 0; i < 15; i++) {
		var y2 = ((y * y)) / 1000;
		var xy2 = ((x * y2)) / 1000;
		var factor = 1500 - (((500 * xy2)) / 1000);
		y = ((y * factor))  / 1000;
		if (y == last) {
			break;
		}
		last = y;
	}
	return y;
}

mul(x, y)
{
	var v  = x * y;
	if (v < 0) {
		return ((v - 500) / 1000) | 0;
	}
	return ((v + 500) / 1000) | 0;
}


elem(cls, name, value, pack)
{
	var m = new cls(name, value, pack);
	this.modules.push(m);
	return m;
}

node(name) {
	var n = [name];
	this.nodes.push(n);
	return n;
}

bus(name, width)
{
	var b = new Array(width);
	var i;
	for (i = 0; i < width; i++) {
		b[i] = node(name);
	}
	return b;
}

w(m, pin, net)
{
	var i;
	for (i = 0; i < m.io.length; i++) {
		if (!this.strcmp(m.io[i][0], pin)) {
			if (m.io[i][2] != null) {
				this.print("Pin ");
				this.print(pin);
				this.print(" in ");
				this.print(m.name);
				this.println(" is already connected.");

			}
			m.io[i][2] = net;
			return;
		}
	}
	this.print("Pin ");
	this.print(pin);
	this.print(" in ");
	this.print(m.name);
	this.println(" not found.");
}

} // sch

function setup()
{
	var s = new sch();
	var r1 = s.elem(e_r, "R1","R47", "0803");
	var gnd = s.node("GND");
	var vcc = s.node("VCC");
	var v1 = s.node("");
	s.w(r1,"1",v1);
	s.w(r1,"2",gnd);
}


function loop()
{
	process.exit(0);
}

setup();

loop();

