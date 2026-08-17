
var std = include(module, 'std', './std.js');
//var term = include(module, 'term', './terminal.js');
//var gfx = include(module, 'gfx', './gfx.js');
var term = include(module, 'term', './webterm.js');

var file_input = 0;
var out = [];
out.Out = function ()
{

	var self = this;
	this.file_input = document.createElement('input');
	this.file_input.type = 'file';
	this.file_input.onchange = function (ev) {
		var file = ev.target.files[0];
		//var fr = new FileReader();
		//fr.onload = function (rev) {
		//	console.log(rev.target.result);
		//}
		//fr.readAsText(file, 'UTF-8');
		self.upload(file);
	}
	this.filename = "";
	this.cmd = "";
	this.tmp = "";
	this.tmp1 = "";
	this.index = 0;
	this.session = 0;
	this.term = 0;
	this.state = 'uninit';
	return this;	
}

out.Out.prototype.set_session = function(s)
{
	this.session = s;
}

out.Out.prototype.set_term = function(t)
{
	this.term = t;
}

out.Out.prototype.get_cmd = function()
{
	var t = this.cmd;
	this.cmd = "";
	this.index = 0;
	return t;
}

out.Out.prototype.add = function(txt)
{
	var r = "";
	while (txt.codePointAt(0) == 8) {
		if (this.index > 0) {
			this.cmd = this.cmd.substr(0, this.index - 1)
				+ this.cmd.substr(this.index, 
					this.cmd.length - 1 - this.index);
		} else {
			this.cmd = this.cmd.substr(0, this.cmd.length - 1);
		}
		txt = txt.substr(1);
		if (this.index > 0) {
			this.index--;
			r += "\b";
		}
	}
	if (txt[0] == "\u001b") {
		switch (txt) { // FIXME
		case "\u001b[D":
			if (this.index > 0) {
				this.index--;
			}
			break;
		case "\u001b[C":
			if (this.index < this.cmd.length) {
				this.index++;
			}
			break;
		}
	} else {
		this.index += txt.length;
		this.cmd += txt;
		if (txt.length > 0) {
			r += "*";
		}
	}
	return r;
}

out.Out.prototype.upload = function(file)
{
	this.state = 'upload';
	std.std.write(this.session, this.filename, 
		file, 2, 0, 0, this.cb, this);
}

out.Out.prototype.send = function(txt)
{
	switch (this.state) {
	case 'uninit':
		this.get_cmd();
		break;
	case 'user':
		this.term.add_txt(txt);
		if (txt == "\n") {
			this.session.user = this.get_cmd();
			this.cb(200, "\n", 0);
		} else {
			this.add(txt);
		}
		break;
	case 'password':
		if (txt == "\n") {
			this.session.password = this.get_cmd();
			this.term.add_txt("\n");
			this.cb(200, "\n", 0);
		} else {
			this.term.add_txt(this.add(txt));
		}
		break;
	case 'adduser1':
		if (txt == "\n") {
			this.tmp1 = this.get_cmd();
			this.tmp = "";
			this.term.add_txt( "\nNew user password: ");
			this.state = 'adduser2';
		} else {
			this.term.add_txt(txt);
			this.add(txt);
		}
		break;
	case 'passwd1':
	case 'adduser2':
		if (txt == "\n") {
			this.tmp = this.get_cmd();
			this.term.add_txt("\nRetype new password: ");
			if (this.state == "passwd1") {
				this.state = 'passwd2';
			} else {
				this.state = 'adduser3';
			}
		} else {
			this.term.add_txt(this.add(txt));
		}
		break;
	case 'passwd2':
	case 'adduser3':
		if (txt == "\n") {
			var p = this.get_cmd();
			if (p !== this.tmp) {
				this.term.add_txt(
					"\nError passwords don't match.\n");
				this.state = 'idle';
			} else {
				this.term.add_txt("\n");
				if (this.state == "passwd2") {
					std.std.passwd(this.session, p, 
						this.cb, this);
				} else {
					std.std.adduser(this.session, 
						this.tmp1, p, this.cb, this);
				}
			}
		} else {
			this.term.add_txt(this.add(txt));
		}
		break;
	default:
		if (txt == "\n") {
			this.term.add_txt(txt);
			var cmd = this.get_cmd();
			var args = cmd.split(' ');
			var a = ".";
			var ax = "";
			if (args.length > 1) {
				a = args[1];
			}
			for (var i = 2; i < args.length; i++) {
				if (i > 2) {
					ax += " ";
				}
				ax += args[i];
			}
			ax += "\n";
			switch (args[0]) {
			case "exit":
			case "quit":
			case "logout":
			case "logoff":
			case "reboot":
			case "shutdown":
				std.std.logout(this.session, this.cb, this);
				this.state = 'logout';
				break;
			case "passwd":
			case "changepassword":
				this.state = 'passwd1';
				this.tmp = "";
				this.term.add_txt("New password: ");
				break;
			case "adduser":
			case "useradd":
				this.tmp1 = "";
				this.tmp = "";
				this.state = 'adduser1';
				this.term.add_txt("New user name: ");
				break;
			case 'help':
			case '?':
				this.term.add_txt("\nAvailable commands:\n");
				this.term.add_txt("\tlist adduser passwd\n");
				this.term.add_txt("\tmkdir rmdir filesize\n");
				this.term.add_txt("\twrite show remove\n");
				this.term.add_txt("\texit upload download\n\n");
				break;
			case "ls":
			case "dir":
			case "list":
				this.state = 'cmd';
				std.std.scandir(this.session, a, this.cb, this);
				break;
			case "mkdir":
			case "md":
				this.state = 'cmd';
				std.std.mkdir(this.session, a, this.cb, this);
				break;
			case "rmdir":
				this.state = 'cmd';
				std.std.rmdir(this.session, a, this.cb, this);
				break;
			case "rm":
			case "del":
			case "remove":
			case "unlink":
				this.state = 'cmd';
				std.std.unlink(this.session, a, this.cb, this);
				break;
			case "filesize":
			case "du":
				this.state = 'cmd';
				std.std.filesize(this.session, a, 
					this.cb, this);
				break;
			case "cat":
			case "type":
			case "show":
			case "more":
				this.state = 'cmd';
				std.std.read(this.session, 
					a, 0, 0, -1, this.cb, this);
				break;
			case "write":
			case "touch":
			case "append":
				this.state = 'cmd';
				std.std.write(this.session, a, 
					ax, 0, -1, -1, this.cb, this);
				break;
			case "upload":
			case "push":
			case "put":
				this.filename = a;
				this.file_input.dispatchEvent(
					new MouseEvent('click'));
				break;
			case "download":
			case "get":
			case "pull":
				this.state = 'download';
				this.filename = a;
				std.std.read(this.session, 
					a, 2, 0, -1, this.cb, this);
				break;
			default:
				std.std.echo(this.session, cmd, this.cb, this);
			}
		} else {
			this.term.add_txt(txt);
			this.add(txt);
		}
	}
	
}

out.Out.prototype.cb = function(status, response, type)
{
	var txt = "";
	switch (this.state) {
	case 'uninit':
		txt = "Please login as 'guest' and\ncreate an account.\n\nLogin: ";
		this.state = 'user';
		this.session.user = "";
		break;
	case 'user':
		this.state = 'password';
		this.session.password = "";
		txt = "Password: ";
		break;
	case 'password':
		this.state = 'login';
		txt = "";
		std.std.login(this.session, this.cb, this);
		break;
	case 'login':
		if (status == 200) {
			txt = "GREETINGS PROFESSOR FALKEN\n";
			this.state = 'idle';
		} else {
			txt = response + "\nLogin: ";
			this.state = 'user';
			this.session.user = "";
		}
		break;
	case 'passwd2':
		if (status == 200) {
			txt = "Password successfully changed.\n";
			this.state = 'idle';
		} else {
			txt = response + "\nPassword not changed\n";
			this.state = 'idle';
		}
		break;
	case 'adduser3':
		if (status == 200) {
			txt = "new user successfully created.\n";
			this.state = 'idle';
		} else {
			txt = response + "\nUser not created\n";
			this.state = 'idle';
		}
		break;
	
	case 'logout':
		txt = response + "\nLogin: ";
		this.state = 'user';
		this.session.user = "";
		break;
	case 'download':
		if (status == 200) {
			var a = document.createElement('a');
			a.href = window.URL.createObjectURL(response);
			a.download = this.filename;
			a.dispatchEvent(new MouseEvent('click'));
		} else {
			txt = "error downloading file\n";
		}
		this.state = 'idle';
		break;
	case 'upload':
		if (status == 200) {
			txt = "upload success\n";
		} else {
			txt = response + "\n";
		}
		this.state = 'idle';
		break;
	case 'cmd':
		txt = response + "\n";
		this.state = 'idle';
		break;
	case 'idle':
	default:
		txt = response;
	}
	if (this.state != 'user' && status == 403) {
		txt = txt + "\nLogin: ";
		this.state = 'user';
		this.session.user = "";
	}
	if (txt.length > 0) {
		this.term.add_txt(txt);
	}
}

var output = 0;
out.get = function()
{
	if (output !== 0) {
		return output;
	}
	output = new out.Out();
	return output;
}

function main()
{
	var t = new term.WebTerm(document.getElementById('screen'),
		window.innerWidth, window.innerHeight, out.get());
	var sess = std.std.init(window.location.href + "bin", out.get().cb, out.get());
	out.get().set_session(sess);
	out.get().set_term(t);
}

module.exports = {main, std, term, out};

