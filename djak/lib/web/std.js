
// the authors disclam copyright to this source code
//
function std() {
}

std.init = function(url, cb, this_cb) 
{
	var t = {};
	t.url = url;
	t.user = "";
	t.password = "";
	t.id = 0;

	std.request(t, "init", 
		"", "", 0, -1, -1,
		cb, this_cb);

	return t;
}

std.echo = function(sess, txt, cb, this_cb)
{
	std.request(sess, "echo", 
		"", txt, 0, -1, -1,
		cb, this_cb);
}
std.write = function(sess, filename, data, type, seek, size, cb, this_cb)
{
	std.request(sess, "write", 
		filename, data, type, seek, size,
		cb, this_cb);
}

std.read = function(sess, filename, type, seek, size, cb, this_cb)
{
	std.request(sess, "read", 
		filename, "", type, seek, size,
		cb, this_cb);
}

std.unlink = function(sess, filename, cb,  this_cb)
{
	std.request(sess, "unlink", 
		filename, "", 0, -1, -1,
		cb, this_cb);
}

std.filesize = function(sess, filename, cb,  this_cb)
{
	std.request(sess, "filesize", 
		filename, "", 0, -1, -1,
		cb, this_cb);
}

std.mkdir = function(sess, filename, cb,  this_cb)
{
	std.request(sess, "mkdir", 
		filename, "", 0, -1, -1,
		cb, this_cb);
}

std.rmdir = function(sess, filename, cb,  this_cb)
{
	std.request(sess, "rmdir", 
		filename, "", 0, -1, -1,
		cb, this_cb);
}

std.scandir = function(sess, dir, cb, this_cb)
{
	std.request(sess, "scandir", 
		dir, "", 0, -1, -1,
		cb, this_cb);
}

std.login = function(sess, cb, this_cb)
{
	sess.password = std.sha256("cod5.com" + sess.user + sess.password);
	std.request(sess, "login", 
		sess.user, 0, 0, -1, -1,
		cb, this_cb);
}

std.logout = function(sess, cb, this_cb)
{
	std.request(sess, "logout", 
		sess.user, 0, 0, -1, -1,
		cb, this_cb);
}

std.adduser = function(sess, name, passwd, cb, this_cb)
{
	var p  = std.sha256("cod5.com" + name + passwd);
	std.request(sess, "adduser", 
		name, p, 0, -1, -1,
		cb, this_cb);
}

std.passwd = function(sess, passwd, cb, this_cb)
{
	var p  = std.sha256("cod5.com" + sess.user + passwd);
	std.request(sess, "passwd", 
		"", p, 0, -1, -1,
		cb, this_cb);
}

std.request = function(ses, func, name, data, type, seek, size, cb, this_cb)
{
	var xhr = new XMLHttpRequest();
	var fd = new FormData();

	fd.set("PHPSESSID", ses.id);
	fd.set("seek", seek);
	fd.set("size", size);
	fd.set("user", ses.user);
	if (func == "login") {
		fd.set("password", ses.password);
	}
	if (func != 'write') {
		fd.set("data", data);
	} else {
		if (type == 0) {
			fd.set("file", new Blob([data.toString()], {type: 
				"text/plain; charset=utf-8"}));
		} else if (type == 1) {
			fd.set("file", new Blob(data, {type: 
				"text/plain; charset=x-user-defined"}));
		} else {
			fd.set("file", data); 
		}
	}
	xhr.open('POST', ses.url + "/"  + func + "/?" + 
		encodeURIComponent(name));
	xhr.onreadystatechange = function() {
		if (xhr.readyState === 4) {
			ses.id = xhr.getResponseHeader("Session-Id");
			cb.bind(this_cb)(xhr.status, xhr.response, type);
		}
	}
	if (type == 0 || func == 'write') {
		xhr.overrideMimeType("text/plain; charset=utf-8");
		xhr.responseType = "text";
	} else if (type == 1) {
		xhr.overrideMimeType("text/plain; charset=x-user-defined");
		xhr.responseType = "arraybuffer";
	} else {
		xhr.overrideMimeType("text/plain; charset=x-user-defined");
		xhr.responseType = "blob";
	}
	xhr.send(fd);
}

std.byte2string = function (j)
{
	if (j == 0) {
		return '\x00';
	}
	return String.fromCharCode(j & 0xFF);
}

std.string2string8 = function(utf16)
{
	var r = "";
	var i;
	var j;
	for (i = 0; i < utf16['length']; i++) {
		j = utf16.codePointAt(i);
		if (j < 0x80) {
			r += std.byte2string(j);
		} else if (j >= 0xDC00 && j <= 0xDFFF){
			// ignore trailing surrogate
		} else if (j <= 0x07FF) {
			r += std.byte2string(0xC0 | ((j >> 6) & 0x1F));
			r += std.byte2string(0x80 | (j & 0x3F));
		} else if (j <= 0xFFFF) {
			r += std.byte2string(0xE0 | ((j >> 12) & 0x0F));
			r += std.byte2string(0x80 | ((j >> 6) & 0x3F));
			r += std.byte2string(0x80 | (j & 0x3F));
		} else if (j <= 0x10FFFF) {
			r += std.byte2string(0xF0 | ((j >> 18) & 0x07));
			r += std.byte2string(0x80 | ((j >> 12) & 0x3F));
			r += std.byte2string(0x80 | ((j >> 6) & 0x3F));
			r += std.byte2string(0x80 | (j & 0x3F));
		} else {
			console.log("error in string to utf8");
		}
	}
	return r;
}

// https://github.com/geraintluff/sha256
// Input must be an ASCII string - if character codes outside the range 0-255 are received, undefined is returned.
// This library is released as "public domain". You can copy, modify, re-release and re-license, or incorporate into any other project without restriction of any kind.
//
std.sha256 = function (utf16) {
	function rightRotate(value, amount) {
		return (value>>>amount) | (value<<(32 - amount));
	};
	var ascii = std.string2string8(utf16);
	var mathPow = Math.pow;
	var maxWord = mathPow(2, 32);
	var lengthProperty = 'length';
	var i, j; // Used as a counter across the whole file
	var result = '';

	var words = [];
	var asciiBitLength = ascii[lengthProperty]*8;

	//* caching results is optional - remove/add slash from front of this line to toggle
	// Initial hash value: first 32 bits of the fractional parts of the square roots of the first 8 primes
	// (we actually calculate the first 64, but extra values are just ignored)
	var hash = std.sha256.h = std.sha256.h || [];
	// Round constants: first 32 bits of the fractional parts of the cube roots of the first 64 primes
	var k = std.sha256.k = std.sha256.k || [];
	var primeCounter = k[lengthProperty];
	/*/
	var hash = [], k = [];
	var primeCounter = 0;
	//*/

	var isComposite = {};
	for (var candidate = 2; primeCounter < 64; candidate++) {
		if (!isComposite[candidate]) {
			for (i = 0; i < 313; i += candidate) {
				isComposite[i] = candidate;
			}
			hash[primeCounter] = (mathPow(candidate, .5)*maxWord)|0;
			k[primeCounter++] = (mathPow(candidate, 1/3)*maxWord)|0;
		}
	}

	ascii += '\x80'; // Append '1' bit (plus zero padding)
	while (ascii[lengthProperty]%64 - 56) ascii += '\x00'; // More zero padding
	for (i = 0; i < ascii[lengthProperty]; i++) {
		j = ascii.charCodeAt(i);
		if (j>>8) return; // ASCII check: only accept characters in range 0-255
		words[i>>2] |= j << ((3 - i)%4)*8;
	}
	words[words[lengthProperty]] = ((asciiBitLength/maxWord)|0);
	words[words[lengthProperty]] = (asciiBitLength)

	// process each chunk
	for (j = 0; j < words[lengthProperty];) {
		var w = words.slice(j, j += 16); // The message is expanded into 64 words as part of the iteration
		var oldHash = hash;
		// This is now the "working hash", often labelled as variables a...g
		// (we have to truncate as well, otherwise extra entries at the end accumulate
		hash = hash.slice(0, 8);

		for (i = 0; i < 64; i++) {
			var i2 = i + j;
			// Expand the message into 64 words
			// Used below if
			var w15 = w[i - 15], w2 = w[i - 2];

			// Iterate
			var a = hash[0], e = hash[4];
			var temp1 = hash[7]
				+ (rightRotate(e, 6) ^ rightRotate(e, 11) ^ rightRotate(e, 25)) // S1
				+ ((e&hash[5])^((~e)&hash[6])) // ch
				+ k[i]
				// Expand the message schedule if needed
				+ (w[i] = (i < 16) ? w[i] : (
						w[i - 16]
						+ (rightRotate(w15, 7) ^ rightRotate(w15, 18) ^ (w15>>>3)) // s0
						+ w[i - 7]
						+ (rightRotate(w2, 17) ^ rightRotate(w2, 19) ^ (w2>>>10)) // s1
					)|0
				);
			// This is only used once, so *could* be moved below, but it only saves 4 bytes and makes things unreadble
			var temp2 = (rightRotate(a, 2) ^ rightRotate(a, 13) ^ rightRotate(a, 22)) // S0
				+ ((a&hash[1])^(a&hash[2])^(hash[1]&hash[2])); // maj

			hash = [(temp1 + temp2)|0].concat(hash); // We don't bother trimming off the extra ones, they're harmless as long as we're truncating when we do the slice()
			hash[4] = (hash[4] + temp1)|0;
		}

		for (i = 0; i < 8; i++) {
			hash[i] = (hash[i] + oldHash[i])|0;
		}
	}

	for (i = 0; i < 8; i++) {
		for (j = 3; j + 1; j--) {
			var b = (hash[i]>>(j*8))&255;
			result += ((b < 16) ? 0 : '') + b.toString(16);
		}
	}
	return result;
};

module.exports = { std };

