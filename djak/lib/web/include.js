// 
// The authors disclam copyright to this source code
//

if (typeof navigator === "undefined") {
	global.include = global.include || include;
} else {
	window.include = window.include || include;
}

/**
 * m = root module object (window)
 * mod = string name of module ("main")
 * src = path of the file to include ("./script/main")
 */
function include(m, mod, src)
{
	if (typeof navigator === "undefined") {
		global.window = global.window || global;
		global.document = global.document || {};
		global.alert = global.alert || console.log;
		m[mod] = require(src);
		return m[mod];
	}
	window.process = window.process || {};
	window.includeloading = window.includeloading || 0;
	window.process.argv = window.process.argv || [];
	window.includeloading++;

	if (typeof m[mod] !== "undefined") {
		return m[mod];
	}

	var loc = document.getElementsByTagName("script");
	for (s in loc) {
		if (typeof s.src !== "undefined" && s.src.endsWidth("include.js")) {
			loc = s.src;
			break;
		}
	}

	m[mod] = {};
	m[mod].__filename = src; // FIXME
	m[mod].__dirname = loc; // FIXME
	m[mod].exports = {};
	if (typeof window.first_include_module === "undefined") {
		window.first_include_module = m[mod];
	}
	var xhr = new XMLHttpRequest();
	xhr.open("GET", src);
	xhr.onreadystatechange = function () {
		if (xhr.readyState === XMLHttpRequest.DONE && 
			xhr.status === 200)
		{
			//alert(xhr.responseText);
			m[mod].exports = (Function('exports', /*'require',*/ 'module', 
				'__filename', '__dirname', 
				'"use strict";' + xhr.responseText + '; return module;'))(
					m[mod].exports, /*require,*/ m[mod], 
					m[mod].__filename, m[mod].__dirname).exports;
			if (typeof m[mod].exports === "function") {
				var f = m[mod].exports;
				for (prop in m[mod]) {
					f[prop] = m[mod][prop];
				}
				m[mod] = f;
			} else {
				for (prop in m[mod].exports) {
					m[mod][prop] = m[mod].exports[prop];
				}
			}
			window.includeloading--;
			if (window.includeloading == 0) {
				if (typeof window.first_include_module.main !== "undefined") {
					var main = window.first_include_module.main;
					window.first_include_module.main = undefined;
					main();
				}
			}
		}
	}
	xhr.send();
	return m[mod];
}

