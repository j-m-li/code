/*
 * THE SOFTWARE AND/OR HARDWARE ARE PROVIDED "AS IS", WITHOUT WARRANTY
 * OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT OF ANY PATENT, COPYRIGHT, TRADE SECRET OR OTHER
 * PROPRIETARY RIGHT.  IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE AND/OR HARDWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE
 * AND/OR HARDWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 */

#define _DEFAULT_SOURCE
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>

/* #define JACKDEBUG 1 */

#ifdef __SUBC__
#define var int
#else
#define var long
#endif
#define STR(s) ((var)(s + 2))
#define GETSTR(s) ((char*) string__get_buf(s))
#define GETLEN(s) ((var)strlen((char*)string__get_buf(s)))

#define FREE(m) free(m)

#define std__free(mem) if (((var*)mem)[-1] > 0) \
	free((((var*)mem)-2))

#define MALLOC(s) malloc(s)

#define NEW(c) var __this; \
	__this = std__alloc(c##___DsizeD, __parent, c##___DcidD); \
	std__sweep()

#define std__this(a) this_##a

#define std__delete(a) \
	std__maybe_delete(a, __this)

#define std__maybe_delete(a,b) \
	if (a != 0 && ((((var*)a)[-2] == b) || (((var*)a)[-2]) == -1)) { \
		virtual__dispose(a); \
	}

#define std__move(a) std___move(a, __this)

#define std__move_to(a, b) std___move(a, b)

#define MAKETHIS(a) struct a *_this; \
		_this = (void*)__this; \
		(void)_this
#define FAKETHIS() var __this = 1; \
		(void)__this

var std__panic();
var std__sweep();
var main__main(void);
var std__lambda(var __this, var lambda_id, var status, var data, var type);

#define array___DsizeD 1
#define array___DcidD 11
var array__new(var size, var __parent);
#define array__dispose(___this) virtual__dispose(___this)
var array___V_dispose(var __this);
#define buffer___DsizeD 4
#define buffer___DcidD 12
var buffer___new(var __this, var initial_size, var take_, var __parent);
var buffer__new(var initial_size, var take_, var __parent);
#define buffer__delayed_dispose(___this) virtual__delayed_dispose(___this)
var buffer___V_delayed_dispose(var __this);
#define buffer__dispose(___this) virtual__dispose(___this)
var buffer___V_dispose(var __this);
var buffer__length(var __this);
var buffer__empty(var __this);
var buffer__delete_at(var __this, var idx);
var buffer__set_at(var __this, var idx, var elem);
var buffer__get_at(var __this, var idx);
var buffer__push(var __this, var elem);
var buffer__append(var __this, var buf);
var buffer__set_last(var __this, var elem);
var buffer__get_last(var __this);
var buffer__pop(var __this);
var buffer__unshift(var __this, var elem);
var buffer__shift(var __this);
#define bytes___DsizeD 2
#define bytes___DcidD 13
#define bytes__dispose(___this) virtual__dispose(___this)
var bytes___V_dispose(var __this);
var bytes__get_size(var __this);
var bytes__set_size(var __this, var size1);
#define console___DsizeD 0
#define console___DcidD 14
var console__log(var str);
var console__log_str(var str);
var console__log_int(var n);
#define file___DsizeD 1
#define file___DcidD 15
var file___new(var __this, var folder, var __parent);
var file__new(var folder, var __parent);
#define file__dispose(___this) virtual__dispose(___this)
var file___V_dispose(var __this);
var file__mkfolder(var __this, var cb, var this_cb);
var file__mkdir(var __this, var name, var cb, var this_cb);
var file__read(var __this, var name, var seek, var size_, var cb, var this_cb);
var file__write(var __this, var name, var data, var type, var seek, var size, var cb, var this_cb);
var file__filesize(var __this, var name, var cb, var this_cb);
var file__scandir(var __this, var name, var cb, var this_cb);
var file__rmdir(var __this, var name, var cb, var this_cb);
var file__unlink(var __this, var name, var cb, var this_cb);
#define hash___DsizeD 2
#define hash___DcidD 16
#define hash__Cnext 0
#define hash__Chash 1
#define hash__Ckey 2
#define hash__Cvalue 3
var hash___new(var __this, var size_, var __parent);
var hash__new(var size_, var __parent);
#define hash__dispose(___this) virtual__dispose(___this)
var hash___V_dispose(var __this);
var hash__add(var __this, var key, var value);
var hash__get(var __this, var key);
#define object___DsizeD 1
#define object___DcidD 17
var object___new(var __this, var __parent);
var object__new(var __parent);
#define object__dispose(___this) virtual__dispose(___this)
var object___V_dispose(var __this);
#define worker___DsizeD 5
#define worker___DcidD 18
var worker___new(var __this, var lambda_this_, var lambda_, var status_, var data_, var type_, var __parent);
var worker__new(var lambda_this_, var lambda_, var status_, var data_, var type_, var __parent);
#define worker__dispose(___this) virtual__dispose(___this)
var worker___V_dispose(var __this);
var worker__process(var __this);
#define std___DsizeD 0
#define std___DcidD 19
#define string___DsizeD 2
#define string___DcidD 20
var string___new(var __this, var alloc, var __parent);
var string__new(var alloc, var __parent);
#define string__dispose(___this) virtual__dispose(___this)
var string___V_dispose(var __this);
var string__get_buf(var __this);
var string__set_buf(var __this, var b);
var string__get_size(var __this);
var string__set_size(var __this, var ns);
var string__length(var __this);
var string__set_int(var __this, var num);
var string__set(var __this, var src);
var string__add_char(var __this, var num);
var string__add(var __this, var src);
var string__add_at(var __this, var tl, var src);
var string__indexof(var __this, var start_pos, var needle);
var string__substr(var __this, var start_pos, var length_, var result);
var string__to_string(var __this);
var string__to_int(var __this);
var string__compare(var __this, var other);
var string__get_hash(var __this);
var string__get_at(var __this, var at);
var string__set_at(var __this, var at, var v);
#define t_async___DsizeD 0
#define t_async___DcidD 21
var t_async___new(var __this, var __parent);
var t_async__new(var __parent);
#define t_async__dispose(___this) virtual__dispose(___this)
var t_async___V_dispose(var __this);
var t_async__go(var __this, var cb, var this_cb);
var t_async__letsgo(var __this);
var t_async__0(var __this, var status, var data, var type);
var t_async__test();
#define t_async__lambda(a,b,c,d,e) std__lambda(a,b,c,d,e)
var t_async___V_lambda(var __this, var fcn, var status, var data, var type);
#define t_switch___DsizeD 0
#define t_switch___DcidD 22
#define t_switch__b 4
var t_switch___new(var __this, var __parent);
var t_switch__new(var __parent);
#define t_switch__dispose(___this) virtual__dispose(___this)
var t_switch___V_dispose(var __this);
var t_switch__letsgo(var __this, var a);
var t_switch__test();
#define main___DsizeD 0
#define main___DcidD 23
var main__start(var msg);
var main__pass(var msg);
var main__fail(var msg);
var main__main();
var virtual__delayed_dispose(var __this);
var virtual__dispose(var __this);
static char __strings_array1[]="Size less than one";
static var __string_array1[]={0,-2, 0,-1};
static char __strings_string2[]="";
static var __string_string2[]={0,-2, 0,-1};
static char __strings_t_async3[]=": yes, async called";
static var __string_t_async3[]={0,-2, 0,-1};
static char __strings_t_async4[]="t_async";
static var __string_t_async4[]={0,-2, 0,-1};
static char __strings_t_async5[]="OK";
static var __string_t_async5[]={0,-2, 0,-1};
static char __strings_t_switch6[]="t_switch";
static var __string_t_switch6[]={0,-2, 0,-1};
static char __strings_t_switch7[]="OK";
static var __string_t_switch7[]={0,-2, 0,-1};
static char __strings_main8[]="Start test: ";
static var __string_main8[]={0,-2, 0,-1};
static char __strings_main9[]="Pass: ";
static var __string_main9[]={0,-2, 0,-1};
static char __strings_main10[]="Fail: ";
static var __string_main10[]={0,-2, 0,-1};
static char __strings_main11[]="Just A C Kit 3.0.3 tests...";
static var __string_main11[]={0,-2, 0,-1};
static void std__init_strings()
{
	__string_array1[2]=(var) __strings_array1;
	__string_string2[2]=(var) __strings_string2;
	__string_t_async3[2]=(var) __strings_t_async3;
	__string_t_async4[2]=(var) __strings_t_async4;
	__string_t_async5[2]=(var) __strings_t_async5;
	__string_t_switch6[2]=(var) __strings_t_switch6;
	__string_t_switch7[2]=(var) __strings_t_switch7;
	__string_main8[2]=(var) __strings_main8;
	__string_main9[2]=(var) __strings_main9;
	__string_main10[2]=(var) __strings_main10;
	__string_main11[2]=(var) __strings_main11;
}
/*
 *          MMXXIII December 11 PUBLIC DOMAIN by O'ksi'D
 *
 *        The authors disclaim copyright to this software.
 *
 * Anyone is free to copy, merge, modify, publish, use, compile, sell,
 * or distribute this software, either in source code form or as a
 * compiled binary, for any purpose, commercial or non-commercial, and
 * by any means.
 *
 * Anyone is free to create, communicate to the public, use, sell,
 * repair, modify, test, distribute or configure hardware in finished
 * or intermediate form, whether by manufacture, assembly, compiling,
 * processing, loading or applying this software or another hardware or
 * otherwise.
 *
 * THE SOFTWARE AND/OR HARDWARE ARE PROVIDED "AS IS", WITHOUT WARRANTY
 * OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT OF ANY PATENT, COPYRIGHT, TRADE SECRET OR OTHER
 * PROPRIETARY RIGHT.  IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE AND/OR HARDWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE
 * AND/OR HARDWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 */

var std__alloc(var size, var parent, var cid)
{
	var *m;
	m = (var*)MALLOC(sizeof(var) * (size + 2));
	m[0] = parent; /* reserved for memory managemnt (ref counting...) */
	m[1] = cid; /*  class ID */
	return (var)(m + 2);
}

var std___move(var obj, var parent)
{
	if (obj == 0) {
		return 0;
	}
	if (((var*)obj)[-2] >= 0) {
		((var*)obj)[-2] = parent;
	}
	return obj;
}

var std__panic()
{
	var m[1];
	m[0] = 0;
	printf("PANIC!\n");
	((int(*)())m[0])();
	exit(-1);
	return 0;
}

var std__new_string(var size, var __parent)
{
	var s;
	s = string__new(size, __parent);
	return s;
}

var bytes__new(var size, var __parent)
{
	var s;
	var *m;
	s = (size + sizeof(var) - 1) / sizeof(var);
	m = (var*)MALLOC((s+4) * sizeof(var));
	m[0] = __parent;
	m[1] = bytes___DcidD;
	m[2] = (var)(m + 4);
	m[3] = size;
	return (var)(m + 2);
}

var std__bytes_dispose(var bb)
{
	FREE((void*)(((var*)bb) - 2));
	return 0;
}

var bytes__get_buf(var bb)
{
	return (var)(((var*)bb) + 2);
}

#define bytes__get_at(bb, at) \
        ((char*)(((var*)bb) + 2))[at]

/*
var bytes__get_at(var bb, var at)
{
	char *b;
        b = (char*)(((var*)bb) + 1);
	return b[at];
}
*/

#define bytes__set_at(bb, at, v) \
	((char*)(((var*)(bb)) + 2))[at] = ((v) & 0xFF)

/*
var bytes__set_at(var bb, var at, var v)
{
	char *b;
	b = (char*)(((var*)bb) + 2);
	b[at] = v & 0xFF;
	return 0;
}
*/

var std__strfree(var b)
{
	void *m;

	if (((var*)b)[-1] >= 0) {
		m = (void*)string__get_buf(b);
		if (m) {
			FREE(m);
		}
	}
	return 0;
}

var std__string_release(var s)
{
	if (((var*)s)[-1] >= 0) {
		std__strfree(s);
		std__free(s);
	}
	return 0;
}

var std__stralloc(var obj, var len)
{
	char *b;
	b = MALLOC(len);
	b[0] = 0;
	std__strfree(obj);
	string__set_buf(obj, (var)b);
	return (var)b;
}

var std__strlen(var str)
{
	char *b;
	b =(char*)string__get_buf(str);
	if (!b) {
		return 0;
	}
#ifdef __SUBC__
	return (var)_strlen(b);
#else
	return (var)strlen(b);
#endif
}

/* dest size must be maxlen+1 */
var std__append(var dest, var dpos, var src, var start, var maxlen)
{
	char *d;
	char *s;
	d = (char*)string__get_buf(dest) + dpos;
	s = (char*)string__get_buf(src) + start;
	maxlen -= dpos;
	if (maxlen < 0) {
		maxlen = 0;
	}
	memmove(d, s, maxlen);
	d += maxlen;
	*d = '\0';
	return 0;
}

var std__str_set_int(var dest, var maxlen, var n)
{
#ifdef __SUBC__
	sprintf((char*)string__get_buf(dest), "%d", n);
#else
	sprintf((char*)string__get_buf(dest), "%ld", n);
#endif
	return 0;
}

var std__str_toint(var src)
{
	return atol((char*)string__get_buf(src));
}

var std__str_set_at(var dest, var pos, var val)
{
	char *b;
	b = (char*)string__get_buf(dest);
	b[pos] = (char)val;
	return 0;
}

var std__str_get_at(var dest, var pos)
{
	return ((char*)string__get_buf(dest))[pos];
}

var std__strindex(var haystack, var offset, var needle)
{
	char *r;
	char *h;
	char *n;
	h = (char*)string__get_buf(haystack);
	n = (char*)string__get_buf(needle);
	r = (char*)strstr(h + offset, n);
	if (r == NULL) {
		return -1;
	}
	return (var)(r - h);
}

var std__strcmp(var s1, var s2)
{
	return strcmp((char*)string__get_buf(s1), (char*)string__get_buf(s2));
}

var std__strhash(var s)
{
	char *p;
	var h = 0;
	p = (char*)string__get_buf(s);
	while (*p) {
		h += (h << 4) ^ *p;
		p++;
	}
	if (h < 0) {
		h = -h;
		if (h < 0) {
			h = 0;
		}
	}
	return h;
}

var std__get_size(var mem)
{
	var *m;
	m = (var*)((mem - 1) * sizeof(var));
	return (-m[0]) - 1;
}

var std__string2native(var data, char *buf, var maxlen)
{
	var l;
	char *sb;
	var i;

	l = GETLEN(data);
	sb = GETSTR(data);
	i = 0;
	while (i <= l && (i < maxlen)) {
		buf[i] = sb[i];
		i++;
	}
	if (i == maxlen) {
		buf[i-1] = 0;
	} else {
		buf[i] = 0;
	}
	return i;
}

var std__native2string(char *buf)
{
	var l;
	char *sb;
	var data;
	var i;

	l = strlen(buf);
	data = std__new_string(l + 1, -1);
	sb = GETSTR(data);
	i = 0;
	while (i <= l) {
		sb[i] = buf[i];
		i++;
	}
	return data;
}

var std__mkfolder(var cb, var this_cb)
{
	var status = 200;
	var data = 0;
	var t;
	struct tm *tp;
	char buf[255];
	int r;

	t = time(NULL);
	if (t < 0) {
		status = 403;
	} else {
		tp = gmtime(&t);
		if (tp == NULL) {
			status = 403;
		} else {
			sprintf(buf,
				"%s/%04d%02d%02d%02d%02d%02d",
				(char*)((var)getenv("HOME")),
				tp->tm_year + 1900,
				tp->tm_mon + 1, tp->tm_mday,
				tp->tm_hour, tp->tm_min, tp->tm_sec);
		}
	}
	if (status == 200) {
		r = mkdir(buf, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
		if (r == 0) {
			data = std__native2string(buf);
		} else {
			data = std__native2string(strerror(errno));
			status = 403;
		}
	}
	worker__new(this_cb, cb, status, data, 0, -1);
	return 0;
}

static var std__concat(var folder, var name, char *buf, var size)
{
	var l;
	var fullpath;

	fullpath = std__new_string(1024, 0);
	string__add(fullpath, folder);
	string__add(fullpath, name);
	l = std__string2native(fullpath, buf, size);
	if (l >= size) {
		std__string_release(fullpath);
		fullpath = 0;
	}
	return fullpath;
}

var std__mkdir(var folder, var name, var cb, var this_cb)
{
	char buf[1024];
	var status = 200;
	var data = 0;
	var fullpath;
	int r;

	fullpath = std__concat(folder, name, buf, sizeof(buf));

	if (fullpath == 0) {
		data = std__native2string("invalid name.");
		status = 403;
	} else {
		r = mkdir(buf, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
		if (r == 0) {
			data = fullpath;
		} else {
			std__string_release(fullpath);
			data = std__native2string(strerror(errno));
			status = 403;
		}
	}
	worker__new(this_cb, cb, status, data, 0, -1);
	return 0;
}

var std__read(var folder, var name, var seek, var size, var cb, var this_cb)
{
	char fname[1024];
	var status = 200;
	var data = 0;
	var fullpath;
	FILE *fp;
	char *buf;
	int r;
	struct stat st;

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		data = std__native2string("invalid name.");
		status = 403;
	} else {
		if (size < 1) {
			if (access(fname, 0) == 0) {
				stat(fname, &st);
				if (S_ISDIR(st.st_mode) != 0) {
					data = std__native2string(
						       "path is a directory.");
					status = 403;
				} else {
					size = st.st_size;
				}
			}
		}
		if (seek < 0) {
			seek = 0;
		}
		if (size > 0 && status == 200) {
			data = bytes__new(size + 1, -1);
			buf = (char*)bytes__get_buf(data);
			fp = fopen(fname, "r");
			if (fp) {
				fseek(fp, seek, SEEK_SET);
				r = fread(buf, 1, size, fp);
				fclose(fp);
			} else {
				r = -1;
			}
			bytes__set_size(data, r);
			if (r > size || r < 0) {
				bytes__dispose(data);
				data = std__native2string(
					       "error reading file.");
				status = 403;
			} else {
				if (r == 0) {
					status = 201;
				}
				buf[r] = '\0';
				bytes__set_size(data, r);
				worker__new(this_cb, cb, status, data, 1, -1);
				std__string_release(fullpath);
				return 0;
			}
		} else {
			data = std__native2string("nothing to read.");
			status = 403;
		}
	}
	worker__new(this_cb, cb, status, data, 0, -1);
	std__string_release(fullpath);
	return 0;
}

var std__write(var folder, var name, var data, var type, var seek,
	       var size, var cb, var this_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	FILE *fp;
	char *buf;
	int r;
	struct stat st;
	char *mode;

	mode = "w";
	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		if (access(fname, 0) == 0) {
			stat(fname, &st);
			if (S_ISDIR(st.st_mode) != 0) {
				std__string_release(fullpath);
				outstr = std__native2string(
						 "path is a directory.");
				status = 403;
			} else {
				mode = "rs+";
			}
		}
		if (seek < 0) {
			seek = 0;
			truncate(fname, 0);
		}
		if (size > 0 && status == 200) {
			if (type == 0) {
				buf = (char*)string__get_buf(data);
			} else {
				buf = (char*)bytes__get_buf(data);
			}
			fp = fopen(fname, mode);
			if (fp) {
				if (seek != 0) {
					fseek(fp, seek, SEEK_SET);
				}
				r = 0;
				if (r < size) {
					r = fwrite(buf, 1, size, fp);
				}
				fclose(fp);
			} else {
				r = -1;
			}
			if (type != 0) {
				bytes__set_size(data, r);
			}
			if (r != size) {
				std__string_release(fullpath);
				outstr = std__native2string(
						 "error writing file.");
				status = 403;
			} else {
				outstr = fullpath;
			}
		} else {
			std__string_release(fullpath);
			outstr = std__native2string("nothing to write.");
			status = 403;
		}
	}
	worker__new(this_cb, cb, status, outstr, 0, -1);
	return 0;
}

var std__filesize(var folder, var name, var cb, var this_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	var size;
	struct stat st;

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		if (access(fname, 0) == 0) {
			stat(fname, &st);
			if (S_ISDIR(st.st_mode) != 0) {
				std__string_release(fullpath);
				outstr = std__native2string(
						 "path is a directory.");
				status = 403;
			} else {
				size = st.st_size;
				string__set_int(fullpath, size);
				outstr = fullpath;
			}
		} else {
			std__string_release(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		}
	}
	worker__new(this_cb, cb, status, outstr, 0, -1);
	return 0;
}

var std__scandir(var folder, var name, var cb, var this_cb)
{
	char dname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	struct dirent *dp;
	DIR *dir;
	char *s;
	char *outp;
	var outl;
	var outa;
	var l;
	var dl;
	char *tmp;

	fullpath = std__concat(folder, name, dname, sizeof(dname));

	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		dir = opendir(dname);
		if (dir == (void*)0) {
			std__string_release(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		}
	}
	if (status == 200) {
		std__string_release(fullpath);

		std__string2native(name, dname, sizeof(dname) - 1);
		dl = strlen(dname);
		if (dl == 0) {
			std__string2native(folder, dname, sizeof(dname) - 1);
			dl = strlen(dname);
			if (dl == 0 || (dname[dl - 1] != '/')) {
				dname[0] = '\0';
				strcat(dname, "./");
				dl = 2;
			}
		} else {
			if (dname[dl - 1] != '/') {
				dname[dl] = '/';
				dl++;
				dname[dl] = '\0';
			}
		}
		dp = readdir(dir);
		outl = 0;
		outa = 4096;
		outp = MALLOC(outa);
		outp[0] = '\0';
		while (dp != (void*)0) {
			s = dp->d_name;
			if (s[0] == '.' && (s[1] == '\0' ||
					    (s[1] == '.' && s[2] == '\0'))) {

			} else {
				l = strlen(s);
				while ((outa - outl) <= (l + dl + 3)) {
					outa += 4096;
					tmp = MALLOC(outa);
					tmp[0] = '\0';
					strcat(tmp, outp);
					FREE(outp);
					outp = tmp;
				}
				strcat(outp + outl, dname);
				outl += dl;
				strcat(outp + outl, s);
				outl += l;
				if (dp->d_type == DT_DIR) {
					outp[outl] = '/';
					outl++;
				}
				outp[outl] = '\n';
				outl++;
			}
			dp = readdir(dir);
		}
		closedir(dir);
		outstr = std__native2string(outp);
		FREE(outp);
	}
	worker__new(this_cb, cb, status, outstr, 0, -1);
	return 0;
}

var std__rmdir(var folder, var name, var cb, var this_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	var r;

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		r = rmdir(fname);
		if (r != 0) {
			std__string_release(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		} else {
			outstr = fullpath;
		}
	}
	worker__new(this_cb, cb, status, outstr, 0, -1);
	return 0;
}

var std__unlink(var folder, var name, var cb, var this_cb)
{
	char fname[1024];
	var status = 200;
	var outstr = 0;
	var fullpath;
	var r;
	struct stat st;

	fullpath = std__concat(folder, name, fname, sizeof(fname));
	if (fullpath == 0) {
		outstr = std__native2string("invalid name.");
		status = 403;
	} else {
		if (access(fname, 0) == 0) {
			stat(fname, &st);
			if (S_ISDIR(st.st_mode) != 0) {
				std__string_release(fullpath);
				outstr = std__native2string(
						 "path is a directory.");
				status = 403;
			} else {
				r = remove(fname);
				if (r == -1) {
					std__string_release(fullpath);
					outstr = std__native2string(
							 strerror(errno));
					status = 403;
				} else {
					outstr = fullpath;
				}
			}
		} else {
			std__string_release(fullpath);
			outstr = std__native2string(strerror(errno));
			status = 403;
		}
	}
	worker__new(this_cb, cb, status, outstr, 0, -1);
	return 0;
}

var std__echo_nl()
{
	printf("\n");
	return 0;
}

var std__echo_int(var n)
{
#ifdef __SUBC__
	printf("%d", n);
#else
	printf("%ld", n);
#endif
	return 0;
}

var std__echo(var str)
{
	if (!str) return 0;
	fputs(GETSTR(str), stdout);
	return 0;
}

var std__exit(var n)
{
	exit(n);
	return 0;
}

static var std_args = 0;
static var std_argc = 0;

var std__get_args()
{
	return std_args;
}

var std__get_argc()
{
	return std_argc;
}

static var std__workers = 0;
static var std__delayed_dispose_buf = 0;

var std__push_worker(var ev)
{
	buffer__push(std__workers, ev);
	return 0;
}

var std__pending()
{
	if (buffer__length(std__workers) > 0) {
		return 1;
	}
	return 0;
}

var std__loop()
{
	var ev;
	ev = buffer__shift(std__workers);
	while (ev != 0) {
		if (worker__process(ev) != 0) {
			std__push_worker(ev);
		} else {
			worker__dispose(ev);
		}
		ev = buffer__shift(std__workers);
	}
	return 0;
}

var std__sweep()
{
	var ev;
	if (std__delayed_dispose_buf == 0) {
		return 0;
	}
	while (buffer__length(std__delayed_dispose_buf) > 0) {
		ev = buffer__shift(std__delayed_dispose_buf);
		if (ev != 0) {
			virtual__delayed_dispose(ev);
		}
	}
	return 0;
}

var std__delayed_delete(var obj)
{
	buffer__push(std__delayed_dispose_buf, obj);
	return 0;
}


int main(int argc, char *argv[])
{
	int i;
	var s;
	var __this = 2;

	std__init_strings();
	std__delayed_dispose_buf = buffer__new(4, 0, __this);

	std_argc = argc;
	std_args = array__new(argc+1, __this);
	for (i = 0; i < argc; i++) {
		s = std__native2string(argv[i]);
		((var*)std_args)[i] = s;
	}
	((var*)std_args)[i] = 0;

	std__workers = buffer__new(10, 1, __this);

	main__main();
	std__sweep();

	for (i = 0; i < argc; i++) {
		std__string_release(((var*)std_args)[i]);
	}
	array__dispose(std_args);
	std_args = 0;
	buffer__dispose(std__workers);
	std__workers = 0;
	std__sweep();
	buffer__delayed_dispose(std__delayed_dispose_buf);
	std__delayed_dispose_buf = 0;
	return 0;
}

#undef GETSTR
#undef GETLEN
#undef FREE
#undef MALLOC

/* class array */
struct array {
	var dummy;
};
var array__new(var size, var __parent)
{
	static var recursive = 0;
	var __return__ = 0;
	var a;
	FAKETHIS();
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"array.new\"\n");std__panic();
	}
	if (size<1) {
		console__log((var)(__string_array1+ 2));
		std__panic();
	}
	a=std__alloc(size,__parent,array___DcidD);
	__return__ = a;
	recursive--;
	return __return__;
}
var array___V_dispose(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(array);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"array.dispose\"\n");std__panic();
	}
	std__free(__this);
	recursive--;
	return __return__;
}
/* class buffer */
struct buffer {
	var _arr;
	var size;
	var pos;
	var take;
};
var buffer___new(var __this, var initial_size, var take_, var __parent)
{
	static var recursive = 0;
	var __return__ = 0;
	var i;
	MAKETHIS(buffer);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.new\"\n");std__panic();
	}
	_this->take=take_;
	_this->_arr=array__new(initial_size,__this);
	_this->size=initial_size;
	_this->pos=0;
	i=0;
	while (i<initial_size) {
		((var*)_this->_arr)[i]=0;
		i=i+1;
	}
	__return__ = __this;
	recursive--;
	return __return__;
}
var buffer__new(var initial_size, var take_, var __parent)
{
	NEW(buffer);
	return buffer___new(__this, initial_size, take_, __parent);
}
var buffer___V_delayed_dispose(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	var i;
	MAKETHIS(buffer);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.delayed_dispose\"\n");std__panic();
	}
	if ((_this->_arr!=0)&&(_this->take!=0)) {
		i=0;
		while (i<_this->pos) {
			buffer__delete_at(__this, i);
			i=i+1;
		}
	}
	std__delete(_this->_arr);
	_this->_arr=0;
	std__free(__this);
	recursive--;
	return __return__;
}
var buffer___V_dispose(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(buffer);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.dispose\"\n");std__panic();
	}
	std__delayed_delete(__this);
	recursive--;
	return __return__;
}
var buffer__length(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.length\"\n");std__panic();
	}
	__return__ = _this->pos;
	recursive--;
	return __return__;
}
var buffer__empty(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.empty\"\n");std__panic();
	}
	if (_this->pos>0) {
		__return__ = 0;
	recursive--;
	return __return__;
	}
	__return__ = 1;
	recursive--;
	return __return__;
}
var buffer__delete_at(var __this, var idx)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.delete_at\"\n");std__panic();
	}
	std__delete(((var*)_this->_arr)[idx]);
	((var*)_this->_arr)[idx]=0;
	recursive--;
	return __return__;
}
var buffer__set_at(var __this, var idx, var elem)
{
	static var recursive = 0;
	var __return__ = 0;
	var a;
	var i;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.set_at\"\n");std__panic();
	}
	if (((idx+1))>=_this->size) {
		a=array__new(idx+8,__this);
		i=0;
		while (i<_this->pos) {
			((var*)a)[i]=((var*)_this->_arr)[i];
			i=i+1;
		}
		_this->size=idx+8;
		while (i<_this->size) {
			((var*)a)[i]=0;
			i=i+1;
		}
		array__dispose(_this->_arr);
		_this->_arr=a;
	} else if ((_this->take!=0)&&(idx<_this->pos)) {
		buffer__delete_at(__this, idx);
	}
	if (_this->take!=0) {
		std__move(elem);
	}
	while (_this->pos<idx) {
		((var*)_this->_arr)[_this->pos]=0;
		_this->pos=_this->pos+1;
	}
	((var*)_this->_arr)[idx]=elem;
	if (idx>=_this->pos) {
		_this->pos=idx+1;
	}
	recursive--;
	return __return__;
}
var buffer__get_at(var __this, var idx)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.get_at\"\n");std__panic();
	}
	__return__ = ((var*)_this->_arr)[idx];
	recursive--;
	return __return__;
}
var buffer__push(var __this, var elem)
{
	static var recursive = 0;
	var __return__ = 0;
	var p;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.push\"\n");std__panic();
	}
	p=_this->pos+1;
	buffer__set_at(__this, _this->pos,elem);
	_this->pos=p;
	__return__ = 0;
	recursive--;
	return __return__;
}
var buffer__append(var __this, var buf)
{
	static var recursive = 0;
	var __return__ = 0;
	var l;
	var j;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.append\"\n");std__panic();
	}
	j=buffer__length(buf);
	l=(buffer__length(__this))+j;
	while (j>0) {
		l=l-1;
		j=j-1;
		buffer__set_at(__this, l,buffer__get_at(buf,j));
	}
	recursive--;
	return __return__;
}
var buffer__set_last(var __this, var elem)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.set_last\"\n");std__panic();
	}
	if (_this->pos<1) {
		recursive--;
	return __return__;
	}
	((var*)_this->_arr)[_this->pos-1]=elem;
	recursive--;
	return __return__;
}
var buffer__get_last(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.get_last\"\n");std__panic();
	}
	if (_this->pos<1) {
		__return__ = 0;
	recursive--;
	return __return__;
	}
	__return__ = ((var*)_this->_arr)[_this->pos-1];
	recursive--;
	return __return__;
}
var buffer__pop(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	var elem;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.pop\"\n");std__panic();
	}
	elem=0;
	if (_this->pos>0) {
		elem=buffer__get_at(__this, _this->pos-1);
		_this->pos=_this->pos-1;
	}
	__return__ = elem;
	recursive--;
	return __return__;
}
var buffer__unshift(var __this, var elem)
{
	static var recursive = 0;
	var __return__ = 0;
	var i;
	var p;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.unshift\"\n");std__panic();
	}
	p=_this->pos+1;
	buffer__set_at(__this, _this->pos,0);
	i=_this->pos;
	while (i>1) {
		i=i-1;
		((var*)_this->_arr)[i]=((var*)_this->_arr)[i-1];
	}
	((var*)_this->_arr)[0]=elem;
	_this->pos=p;
	__return__ = 0;
	recursive--;
	return __return__;
}
var buffer__shift(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	var elem;
	var i;
	var p;
	MAKETHIS(buffer);
	if (((var*)__this)[-1]!=buffer___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"buffer.shift\"\n");std__panic();
	}
	if (_this->pos<1) {
		__return__ = 0;
	recursive--;
	return __return__;
	}
	p=_this->pos-1;
	elem=buffer__get_at(__this, 0);
	i=0;
	while (i<p) {
		((var*)_this->_arr)[i]=((var*)_this->_arr)[i+1];
		i=i+1;
	}
	_this->pos=p;
	__return__ = elem;
	recursive--;
	return __return__;
}
/* class bytes */
struct bytes {
	var buf;
	var size;
};
var bytes___V_dispose(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(bytes);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"bytes.dispose\"\n");std__panic();
	}
	std__bytes_dispose(__this);
	recursive--;
	return __return__;
}
var bytes__get_size(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(bytes);
	if (((var*)__this)[-1]!=bytes___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"bytes.get_size\"\n");std__panic();
	}
	__return__ = _this->size;
	recursive--;
	return __return__;
}
var bytes__set_size(var __this, var size1)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(bytes);
	if (((var*)__this)[-1]!=bytes___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"bytes.set_size\"\n");std__panic();
	}
	_this->size=size1;
	recursive--;
	return __return__;
}
/* class console */
var console__log(var str)
{
	static var recursive = 0;
	var __return__ = 0;
	FAKETHIS();
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"console.log\"\n");std__panic();
	}
	std__echo(str);
	std__echo_nl();
	recursive--;
	return __return__;
}
var console__log_str(var str)
{
	static var recursive = 0;
	var __return__ = 0;
	FAKETHIS();
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"console.log_str\"\n");std__panic();
	}
	std__echo(str);
	recursive--;
	return __return__;
}
var console__log_int(var n)
{
	static var recursive = 0;
	var __return__ = 0;
	FAKETHIS();
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"console.log_int\"\n");std__panic();
	}
	std__echo_int(n);
	recursive--;
	return __return__;
}
/* class file */
struct file {
	var _folder;
};
var file___new(var __this, var folder, var __parent)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(file);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"file.new\"\n");std__panic();
	}
	_this->_folder=string__to_string(folder);
	__return__ = __this;
	recursive--;
	return __return__;
}
var file__new(var folder, var __parent)
{
	NEW(file);
	return file___new(__this, folder, __parent);
}
var file___V_dispose(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(file);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"file.dispose\"\n");std__panic();
	}
	string__dispose(_this->_folder);
	std__free(__this);
	recursive--;
	return __return__;
}
var file__mkfolder(var __this, var cb, var this_cb)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(file);
	if (((var*)__this)[-1]!=file___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"file.mkfolder\"\n");std__panic();
	}
	std__mkfolder(cb,this_cb);
	recursive--;
	return __return__;
}
var file__mkdir(var __this, var name, var cb, var this_cb)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(file);
	if (((var*)__this)[-1]!=file___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"file.mkdir\"\n");std__panic();
	}
	std__mkdir(_this->_folder,name,cb,this_cb);
	recursive--;
	return __return__;
}
var file__read(var __this, var name, var seek, var size_, var cb, var this_cb)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(file);
	if (((var*)__this)[-1]!=file___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"file.read\"\n");std__panic();
	}
	std__read(_this->_folder,name,seek,size_,cb,this_cb);
	recursive--;
	return __return__;
}
var file__write(var __this, var name, var data, var type, var seek, var size, var cb, var this_cb)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(file);
	if (((var*)__this)[-1]!=file___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"file.write\"\n");std__panic();
	}
	std__write(_this->_folder,name,data,type,seek,size,cb,this_cb);
	recursive--;
	return __return__;
}
var file__filesize(var __this, var name, var cb, var this_cb)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(file);
	if (((var*)__this)[-1]!=file___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"file.filesize\"\n");std__panic();
	}
	std__filesize(_this->_folder,name,cb,this_cb);
	recursive--;
	return __return__;
}
var file__scandir(var __this, var name, var cb, var this_cb)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(file);
	if (((var*)__this)[-1]!=file___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"file.scandir\"\n");std__panic();
	}
	std__scandir(_this->_folder,name,cb,this_cb);
	recursive--;
	return __return__;
}
var file__rmdir(var __this, var name, var cb, var this_cb)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(file);
	if (((var*)__this)[-1]!=file___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"file.rmdir\"\n");std__panic();
	}
	std__rmdir(_this->_folder,name,cb,this_cb);
	recursive--;
	return __return__;
}
var file__unlink(var __this, var name, var cb, var this_cb)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(file);
	if (((var*)__this)[-1]!=file___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"file.unlink\"\n");std__panic();
	}
	std__unlink(_this->_folder,name,cb,this_cb);
	recursive--;
	return __return__;
}
/* class hash */
struct hash {
	var _arr;
	var size;
};
var hash___new(var __this, var size_, var __parent)
{
	static var recursive = 0;
	var __return__ = 0;
	var i;
	MAKETHIS(hash);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"hash.new\"\n");std__panic();
	}
	_this->size=size_;
	_this->_arr=array__new(_this->size,__this);
	i=0;
	while (i<size_) {
		((var*)_this->_arr)[i]=0;
		i=i+1;
	}
	__return__ = __this;
	recursive--;
	return __return__;
}
var hash__new(var size_, var __parent)
{
	NEW(hash);
	return hash___new(__this, size_, __parent);
}
var hash___V_dispose(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	var i;
	var next;
	var cur;
	MAKETHIS(hash);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"hash.dispose\"\n");std__panic();
	}
	i=0;
	while (i<_this->size) {
		cur=((var*)_this->_arr)[i];
		while (cur!=0) {
			next=((var*)cur)[hash__Cnext];
			std__delete(cur);
			cur=next;
		}
		((var*)_this->_arr)[i]=0;
		i=i+1;
	}
	std__delete(_this->_arr);
	std__free(__this);
	recursive--;
	return __return__;
}
var hash__add(var __this, var key, var value)
{
	static var recursive = 0;
	var __return__ = 0;
	var h;
	var hh;
	var cur;
	var old;
	var next;
	var prev;
	var ret;
	var cmp;
	MAKETHIS(hash);
	if (((var*)__this)[-1]!=hash___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"hash.add\"\n");std__panic();
	}
	h=string__get_hash(key);
	hh=h;
	h=h%_this->size;
	old=((var*)_this->_arr)[h];
	cur=0;
	if (old==0) {
		cur=array__new(4,__this);
		((var*)cur)[hash__Cnext]=0;
		((var*)_this->_arr)[h]=cur;
	}
	next=old;
	prev=0;
	ret=0;
	while (((cur==0))&&((next!=0))) {
		if ((((var*)next)[hash__Chash])==hh) {
			cmp=string__compare(key,((var*)next)[hash__Ckey]);
			if (cmp>0) {
				cur=array__new(4,__this);
				((var*)cur)[hash__Cnext]=next;
				if (prev==0) {
					((var*)_this->_arr)[h]=cur;
				} else {
					((var*)prev)[hash__Cnext]=cur;
				}
			} else if (cmp==0) {
				cur=next;
				ret=((var*)next)[hash__Cvalue];
			}
		} else if ((((var*)next)[hash__Chash])>hh) {
			cur=array__new(4,__this);
			((var*)cur)[hash__Cnext]=next;
			if (prev==0) {
				((var*)_this->_arr)[h]=cur;
			} else {
				((var*)prev)[hash__Cnext]=cur;
			}
		}
		prev=next;
		next=((var*)next)[hash__Cnext];
	}
	if (cur==0) {
		cur=array__new(4,__this);
		((var*)cur)[hash__Cnext]=0;
		if (prev==0) {
			((var*)_this->_arr)[h]=cur;
		} else {
			((var*)prev)[hash__Cnext]=cur;
		}
	}
	((var*)cur)[hash__Chash]=hh;
	((var*)cur)[hash__Ckey]=key;
	((var*)cur)[hash__Cvalue]=value;
	__return__ = ret;
	recursive--;
	return __return__;
}
var hash__get(var __this, var key)
{
	static var recursive = 0;
	var __return__ = 0;
	var h;
	var hh;
	var next;
	var cmp;
	MAKETHIS(hash);
	if (((var*)__this)[-1]!=hash___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"hash.get\"\n");std__panic();
	}
	h=string__get_hash(key);
	hh=h;
	h=h%_this->size;
	next=((var*)_this->_arr)[h];
	while (next!=0) {
		if ((((var*)next)[hash__Chash])==hh) {
			cmp=string__compare(key,((var*)next)[hash__Ckey]);
			if (cmp>0) {
				__return__ = 0;
	recursive--;
	return __return__;
			} else if (cmp==0) {
				__return__ = ((var*)next)[hash__Cvalue];
	recursive--;
	return __return__;
			}
		} else if ((((var*)next)[hash__Chash])>hh) {
			__return__ = 0;
	recursive--;
	return __return__;
		}
		next=((var*)next)[hash__Cnext];
	}
	__return__ = 0;
	recursive--;
	return __return__;
}
/* class object */
struct object {
	var dummy;
};
var object___new(var __this, var __parent)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(object);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"object.new\"\n");std__panic();
	}
	__return__ = __this;
	recursive--;
	return __return__;
}
var object__new(var __parent)
{
	NEW(object);
	return object___new(__this, __parent);
}
var object___V_dispose(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(object);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"object.dispose\"\n");std__panic();
	}
	std__free(__this);
	recursive--;
	return __return__;
}
/* class worker */
struct worker {
	var status;
	var data;
	var lambda_this;
	var lambda;
	var type;
};
var worker___new(var __this, var lambda_this_, var lambda_, var status_, var data_, var type_, var __parent)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(worker);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"worker.new\"\n");std__panic();
	}
	_this->type=type_;
	_this->lambda_this=lambda_this_;
	_this->lambda=lambda_;
	_this->status=status_;
	if (_this->type!=1) {
		_this->data=std__move(data_);
	} else {
		_this->data=data_;
	}
	std__push_worker(__this);
	__return__ = __this;
	recursive--;
	return __return__;
}
var worker__new(var lambda_this_, var lambda_, var status_, var data_, var type_, var __parent)
{
	NEW(worker);
	return worker___new(__this, lambda_this_, lambda_, status_, data_, type_, __parent);
}
var worker___V_dispose(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(worker);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"worker.dispose\"\n");std__panic();
	}
	if (_this->data) {
		if (_this->type==1) {
			std__bytes_dispose(_this->data);
		} else {
			std__delete(_this->data);
		}
		_this->data=0;
	}
	std__free(__this);
	recursive--;
	return __return__;
}
var worker__process(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(worker);
	if (((var*)__this)[-1]!=worker___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"worker.process\"\n");std__panic();
	}
	__return__ = std__lambda(_this->lambda_this,_this->lambda,_this->status,_this->data,_this->type);
	recursive--;
	return __return__;
}
/* class std */
/* class string */
struct string {
	var _str;
	var size;
};
var string___new(var __this, var alloc, var __parent)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(string);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.new\"\n");std__panic();
	}
	_this->_str=0;
	std__stralloc(__this,alloc+1);
	_this->size=alloc;
	__return__ = __this;
	recursive--;
	return __return__;
}
var string__new(var alloc, var __parent)
{
	NEW(string);
	return string___new(__this, alloc, __parent);
}
var string___V_dispose(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(string);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.dispose\"\n");std__panic();
	}
	std__string_release(__this);
	recursive--;
	return __return__;
}
var string__get_buf(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD&& ((var*)__this)[-1]!=-2&& ((var*)__this)[-1]!=0){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.get_buf\"\n");std__panic();
	}
	__return__ = _this->_str;
	recursive--;
	return __return__;
}
var string__set_buf(var __this, var b)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.set_buf\"\n");std__panic();
	}
	_this->_str=b;
	recursive--;
	return __return__;
}
var string__get_size(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.get_size\"\n");std__panic();
	}
	__return__ = _this->size;
	recursive--;
	return __return__;
}
var string__set_size(var __this, var ns)
{
	static var recursive = 0;
	var __return__ = 0;
	var ops;
	var b;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.set_size\"\n");std__panic();
	}
	if (_this->size>ns) {
		recursive--;
	return __return__;
	}
	ops=string__new(ns+1,__this);
	std__append(ops,0,__this,0,_this->size);
	b=_this->_str;
	_this->_str=string__get_buf(ops);
	string__set_buf(ops,b);
	std__delete(ops);
	_this->size=ns;
	recursive--;
	return __return__;
}
var string__length(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	var l;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD&& ((var*)__this)[-1]!=-2&& ((var*)__this)[-1]!=0){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.length\"\n");std__panic();
	}
	l=std__strlen(__this);
	__return__ = l;
	recursive--;
	return __return__;
}
var string__set_int(var __this, var num)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.set_int\"\n");std__panic();
	}
	__return__ = std__str_set_int(__this,_this->size,num);
	recursive--;
	return __return__;
}
var string__set(var __this, var src)
{
	static var recursive = 0;
	var __return__ = 0;
	var sl;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.set\"\n");std__panic();
	}
	sl=std__strlen(src);
	if (_this->size<sl) {
		std__stralloc(__this,sl+1);
		_this->size=sl;
	}
	std__str_set_at(__this,0,'\0');
	std__append(__this,0,src,0,sl);
	recursive--;
	return __return__;
}
var string__add_char(var __this, var num)
{
	static var recursive = 0;
	var __return__ = 0;
	var sl;
	var tl;
	var ns;
	var i;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.add_char\"\n");std__panic();
	}
	sl=6;
	tl=std__strlen(__this);
	ns=(sl+tl)+1;
	i=0;
	if (_this->size<=ns) {
		ns=ns+8;
		string__set_size(__this, ns);
	}
	i=tl;
	std__str_set_at(__this,i,num);
	i=i+1;
	std__str_set_at(__this,i,'\0');
	recursive--;
	return __return__;
}
var string__add(var __this, var src)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.add\"\n");std__panic();
	}
	string__add_at(__this, std__strlen(__this),src);
	recursive--;
	return __return__;
}
var string__add_at(var __this, var tl, var src)
{
	static var recursive = 0;
	var __return__ = 0;
	var sl;
	var ns;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.add_at\"\n");std__panic();
	}
	sl=std__strlen(src);
	ns=(sl+tl)+1;
	if (ns>=_this->size) {
		string__set_size(__this, ns*2);
	}
	std__append(__this,tl,src,0,ns);
	__return__ = sl+tl;
	recursive--;
	return __return__;
}
var string__indexof(var __this, var start_pos, var needle)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.indexof\"\n");std__panic();
	}
	__return__ = std__strindex(__this,start_pos,needle);
	recursive--;
	return __return__;
}
var string__substr(var __this, var start_pos, var length_, var result)
{
	static var recursive = 0;
	var __return__ = 0;
	var len;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.substr\"\n");std__panic();
	}
	len=std__strlen(__this);
	if (start_pos<0) {
		start_pos=start_pos+len;
	}
	if (start_pos<0) {
		start_pos=0;
	}
	if (length_<0) {
		length_=(len+length_)-start_pos;
	} else if (length_==0) {
		length_=len;
	}
	if (((start_pos>=len))||((length_<1))) {
		string__set(result,(var)(__string_string2+ 2));
		recursive--;
	return __return__;
	}
	string__set_size(result,length_+1);
	std__str_set_at(result,0,'\0');
	std__append(result,0,__this,start_pos,length_);
	recursive--;
	return __return__;
}
var string__to_string(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	var str;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD&& ((var*)__this)[-1]!=-2&& ((var*)__this)[-1]!=0){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.to_string\"\n");std__panic();
	}
	str=string__new((string__length(__this))+1,__this);
	string__set(str,__this);
	__return__ = str;
	recursive--;
	return __return__;
}
var string__to_int(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.to_int\"\n");std__panic();
	}
	__return__ = std__str_toint(__this);
	recursive--;
	return __return__;
}
var string__compare(var __this, var other)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.compare\"\n");std__panic();
	}
	__return__ = std__strcmp(__this,other);
	recursive--;
	return __return__;
}
var string__get_hash(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.get_hash\"\n");std__panic();
	}
	__return__ = std__strhash(__this);
	recursive--;
	return __return__;
}
var string__get_at(var __this, var at)
{
	static var recursive = 0;
	var __return__ = 0;
	var l;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.get_at\"\n");std__panic();
	}
	l=_this->size;
	if (l<1) {
		l=std__strlen(__this);
	}
	if (((at<l))&&((at>=0))) {
		__return__ = std__str_get_at(__this,at);
	recursive--;
	return __return__;
	}
	__return__ = '\0';
	recursive--;
	return __return__;
}
var string__set_at(var __this, var at, var v)
{
	static var recursive = 0;
	var __return__ = 0;
	var l;
	MAKETHIS(string);
	if (((var*)__this)[-1]!=string___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"string.set_at\"\n");std__panic();
	}
	l=_this->size;
	if (l<1) {
		l=std__strlen(__this);
	}
	if (((at<l))&&((at>=0))) {
		std__str_set_at(__this,at,v);
	}
	recursive--;
	return __return__;
}
/* class t_async */
var t_async___new(var __this, var __parent)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(t_async);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"t_async.new\"\n");std__panic();
	}
	__return__ = __this;
	recursive--;
	return __return__;
}
var t_async__new(var __parent)
{
	NEW(t_async);
	return t_async___new(__this, __parent);
}
var t_async___V_dispose(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(t_async);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"t_async.dispose\"\n");std__panic();
	}
	std__free(__this);
	recursive--;
	return __return__;
}
var t_async__go(var __this, var cb, var this_cb)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(t_async);
	if (((var*)__this)[-1]!=t_async___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"t_async.go\"\n");std__panic();
	}
	worker__new(std__this(cb),cb,200,(var)(__string_t_async3+ 2),0,__this);
	recursive--;
	return __return__;
}
var t_async__letsgo(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(t_async);
	if (((var*)__this)[-1]!=t_async___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"t_async.letsgo\"\n");std__panic();
	}
	t_async__go(__this, 0,__this);
	recursive--;
	return __return__;
}
var t_async__0(var __this, var status, var data, var type)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(t_async);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"t_async.0\"\n");std__panic();
	}
	console__log_int(status);
	console__log(data);
	recursive--;
	return __return__;
}
var t_async__test()
{
	static var recursive = 0;
	var __return__ = 0;
	var t;
	FAKETHIS();
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"t_async.test\"\n");std__panic();
	}
	main__start((var)(__string_t_async4+ 2));
	t=t_async__new(__this);
	t_async__letsgo(t);
	std__loop();
	std__delete(t);
	main__pass((var)(__string_t_async5+ 2));
	recursive--;
	return __return__;
}
var t_async___V_lambda(var __this, var fcn, var status, var data, var type)
{	switch(fcn) {
	case 0:
		return t_async__0(__this, status, data, type);
	}
	return 0;
}
/* class t_switch */
var t_switch___new(var __this, var __parent)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(t_switch);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"t_switch.new\"\n");std__panic();
	}
	__return__ = __this;
	recursive--;
	return __return__;
}
var t_switch__new(var __parent)
{
	NEW(t_switch);
	return t_switch___new(__this, __parent);
}
var t_switch___V_dispose(var __this)
{
	static var recursive = 0;
	var __return__ = 0;
	MAKETHIS(t_switch);
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"t_switch.dispose\"\n");std__panic();
	}
	std__free(__this);
	recursive--;
	return __return__;
}
var t_switch__letsgo(var __this, var a)
{
	static var recursive = 0;
	var __return__ = 0;
	var b;
	MAKETHIS(t_switch);
	if (((var*)__this)[-1]!=t_switch___DcidD){
		printf("CID: %ld ", ((var*)__this)[-1]);
		std__panic();
	}
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"t_switch.letsgo\"\n");std__panic();
	}
	b=0;
	a=a+1;
	
	switch (a) {
	case 3: 
		__return__ = 3;
	recursive--;
	return __return__;
		break;
	case 5: 
		__return__ = -(4);
	recursive--;
	return __return__;
		break;
	case 4: 
		__return__ = -(1);
	recursive--;
	return __return__;
		break;
	default:
		__return__ = -(a);
	recursive--;
	return __return__;
		break;
	} 
	a=a+(t_switch__b);
	
	switch (a) {
	case 30: 
		a=1;
		break;
	case t_switch__b: 
		a=2;
		break;
	case 34: 
	case 35: 
		a=4;
		break;
	case 33: 
		a=5;
		break;
	} 
	if (30==b) {
		a=1;
	} else if (b==(t_switch__b)) {
		a=2;
	} else if (34==b) {
		a=4;
	} else if (b==33) {
		a=5;
	} else {
		a=90;
	}
	__return__ = 0;
	recursive--;
	return __return__;
}
var t_switch__test()
{
	static var recursive = 0;
	var __return__ = 0;
	var t;
	FAKETHIS();
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"t_switch.test\"\n");std__panic();
	}
	main__start((var)(__string_t_switch6+ 2));
	t=t_switch__new(__this);
	t_switch__letsgo(t,2);
	std__delete(t);
	main__pass((var)(__string_t_switch7+ 2));
	recursive--;
	return __return__;
}
/* class main */
static var main__passed = 0;
static var main__failed = 0;
var main__start(var msg)
{
	static var recursive = 0;
	var __return__ = 0;
	FAKETHIS();
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"main.start\"\n");std__panic();
	}
	console__log_str((var)(__string_main8+ 2));
	console__log(msg);
	recursive--;
	return __return__;
}
var main__pass(var msg)
{
	static var recursive = 0;
	var __return__ = 0;
	FAKETHIS();
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"main.pass\"\n");std__panic();
	}
	console__log_str((var)(__string_main9+ 2));
	console__log(msg);
	main__passed=main__passed+1;
	recursive--;
	return __return__;
}
var main__fail(var msg)
{
	static var recursive = 0;
	var __return__ = 0;
	FAKETHIS();
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"main.fail\"\n");std__panic();
	}
	console__log_str((var)(__string_main10+ 2));
	console__log(msg);
	main__failed=main__failed+1;
	recursive--;
	return __return__;
}
var main__main()
{
	static var recursive = 0;
	var __return__ = 0;
	FAKETHIS();
	recursive++;
	if (recursive != 1) {
		fprintf(stderr, "recursive call in \"main.main\"\n");std__panic();
	}
	console__log((var)(__string_main11+ 2));
	main__passed=0;
	main__failed=0;
	t_async__test();
	t_switch__test();
	std__loop();
	__return__ = 0;
	recursive--;
	return __return__;
}
var virtual__delayed_dispose(var __this)
{
	var cid;
	cid = ((var*)__this)[-1];
	switch (cid) {
	case buffer___DcidD:
		return buffer___V_delayed_dispose(__this);
	default:
		break;
	}
	return 0;
}
var virtual__dispose(var __this)
{
	var cid;
	cid = ((var*)__this)[-1];
	switch (cid) {
	case array___DcidD:
		return array___V_dispose(__this);
	case t_switch___DcidD:
		return t_switch___V_dispose(__this);
	case t_async___DcidD:
		return t_async___V_dispose(__this);
	case string___DcidD:
		return string___V_dispose(__this);
	case worker___DcidD:
		return worker___V_dispose(__this);
	case object___DcidD:
		return object___V_dispose(__this);
	case hash___DcidD:
		return hash___V_dispose(__this);
	case file___DcidD:
		return file___V_dispose(__this);
	case bytes___DcidD:
		return bytes___V_dispose(__this);
	case buffer___DcidD:
		return buffer___V_dispose(__this);
	default:
		break;
	}
	return 0;
}
var std__lambda(var __this, var fcn, var status, var data, var type)
{
	var cid;
	cid = ((var*)__this)[-1];
	switch (cid) {
	case t_async___DcidD:
		return t_async___V_lambda(__this, fcn, status, data, type);
	}
	return 0;
}
