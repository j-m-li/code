"use strict";
var __extends = (this && this.__extends) || (function () {
	var extendStatics = function (d, b) {
		if (Object.setPrototypeOf) {
			return Object.setPrototypeOf(d, b);
		} else if ({ __proto__: [] } instanceof Array) {
			d.__proto__ = b;
		} else {
                	for (var p in b) {
                    		if (Object.prototype.hasOwnProperty.
					call(b, p)) 
				{
                        		d[p] = b[p]; 
                    	    	}
                	}
		} 
    	};
    	return function (d, b) {
        	if (typeof b !== "function" && b !== null) {
            		throw new TypeError("Class extends value " + 
				String(b) + " is not a constructor or null");
		}
        	extendStatics(d, b);
        	function proto() { 
			this.constructor = d; 
		}
        	if (b === null) {
            		d.prototype = Object.create(b);
        	} else {
       	    		proto.prototype = b.prototype;
       	    		d.prototype =  new proto();
        	}
    	};
})();

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
        root.MyClass = modu;
    }
})(this, function(exports) {
"use strict";
exports.__esModule = true;

var  MyClass = (function () {
    __extends(MyClass, MyBaseClass);
    function MyClass() {
	MyBaseClass.call(this);
	this.data = "hello";
        this.reset();
	return this;
    }

    MyClass.prototype.reset = function () {
        this.data = "Hello 2 " + this.mesg;
    };

    return MyClass;
}());

function MyBaseClass ()
{
	this.mesg = "Yes it is";
}

exports.MyClass = MyClass;
exports.default = MyClass;

});
