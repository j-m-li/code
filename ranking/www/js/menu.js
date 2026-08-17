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
        root.Menu = modu;
    }
})(this, function(exports) {
"use strict";
exports.__esModule = true;

/* class */
var  Menu = (function () {

    function Menu() {
	this.nav = document.getElementsByTagName("nav")[0];
	var a = this.nav.getElementsByTagName("a");
	for (var i = 0; i < a.length; i++) {
		a[i].addEventListener('click', this.click.bind(this), false);
		window.translate.do(a[i]);
	}
	this.toolbar = document.getElementById("toolbar");
	var b = this.toolbar.getElementsByTagName("img");
	for (var j = 0; j < b.length; j++) {
		b[j].addEventListener('click', this.click.bind(this), false);
	}
	return this;
    }

    Menu.prototype.click = function (e) {
	console.log(e.currentTarget.innerText + " boo");
   	var m = e.currentTarget.getAttribute("data-text");
	if (!m) {
   		m = e.currentTarget.getAttribute("alt");
	}
	switch (m) {
	case "New":
		this.new_dialog();
		break;
	case "Sign in":
		Session.login_dialog();
		break;
	case "Disconnect":
		Session.logout();
		break;
	}
    }

    Menu.prototype.translate = function (el) {
        this.data = "Hello 2";
        return this;
    };

    Menu.prototype.new_dialog = function () {
	Ajax.write("jml/bob", "myfile1.txt", "hello", -1, -1, this.new_cb);
    }

    Menu.prototype.new_cb = function (e) {
	Session.error(e, "New file created");
    }

    return Menu;
}());

exports.Menu = Menu;
exports.default = Menu;

});
