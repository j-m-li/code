(function (root, factory) {
    var exports = {};
    factory(exports);
    var modu = exports["default"];
    for (var k in exports) {
        modu[k] = exports[k];
    }
        
    if (typeof module === 'object' && typeof module.exports === 'object') {
        module.exports = modu;
    } else if (typeof define === 'function' && define.amd) {
        define(function() { return modu; }); 
    } else {
        root.Session = modu;
    }
})(this, function(exports) {
"use strict";
exports.__esModule = true;

var  Session = /** @class */ (function () {

    function Session() {
        //this.reset();
    }

    /* static */
    Session.login_dialog = function () {
	Session.show();
    };

    Session.toHexString = function (byteArray) {
  	return Array.from(byteArray, function(byte) {
    		return ('0' + (byte & 0xFF).toString(16)).slice(-2);
		}).join('');
    };

    /*
     * https://stackoverflow.com/questions/18729405/how-to-convert-utf8-string-to-byte-array
     */
    Session.hash = function (str) {
	var s = unescape(encodeURIComponent(str));
	//s = str;
	console.log(s + "_" + s.length);
	var arr = [];
	arr = new Uint8Array(s.length);
	for (var i = 0; i < s.length; i++) {
		arr[i] = (s.charCodeAt(i));
	}
	console.log(arr);
	var h = sha256.hash(arr);
	console.log(h);
	return Session.toHexString(h);

    }
    Session.login_validate = function (b) {
	var f = b.form.elements;
	var p = Session.hash(f['user'].value + f['password'].value); 
	console.log(f['user'].value + p + " " + f['password'].value);
	Ajax.login(f['user'].value, p, Session.login_cb);
    };

    Session.logout = function () {
	Ajax.logout(Session.logout_cb);
    };


    Session.signup_validate = function (b) {
	var f = b.form.elements;
	var p = Session.hash(f['user'].value + f['password'].value); 
	console.log(f['user'].value + p + " " + f['password'].value);
	Ajax.signup(f['user'].value, p, f['email'].value, Session.signup_cb);
    };

    Session.error = function (e, err) {
	switch (e.status) {
	case 200:
		Session.hide();
		break;
	case 308:
		err = "No active session";
		Session.show();
		break;
	case 305:
		err = "Invalid user or password";
		break;
	case 429:
		err = "Server Busy";
		Session.show();
		break;
	default:
		err = "Error " + e.status;
	}
	document.getElementById("status").innerText = err;
	console.log(err);
    }

    Session.logout_cb = function (e) {
	Session.error(e, "Disconnected");
    }

    Session.login_cb = function (e) {
	Session.error(e, "Logged in");
    }

    Session.signup_cb = function (e) {
	Session.error(e, "Account created");
    }
 
    Session.reject = function () {
	Session.hide();
    };

    Session.init = function () {
	if (Session.get('accept')) {
		Session.hide();
	} else {
		Session.show();
	}
    };

    Session.hide = function () {
	document.getElementById("session").classList.add('hidden');
    }
    
    Session.show = function () {
	document.getElementById("session").classList.remove('hidden');
    }

    return Session;
}());

exports.Session = Session;
exports.default = Session;

});

