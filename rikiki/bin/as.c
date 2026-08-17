/*

   This software is dedicated to the public domain.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef var
#define var long
#endif

#define peek(buf, at) ((var)(((unsigned char*)buf)[at]))
#define poke(buf, at, v) ((unsigned char*)buf)[at] = (v)

var startup(var a, var b);

int main(int argc, char *argv[])
{
	return startup(argc, (var)(void*)argv);
}

var print(var str)
{
	printf("%s", (char*)str);
	return 0;
}

var print2(var n)
{
	printf("%ld", n);
	return 0;
}

var file_size(var path)
{
	FILE *fp;
	var si;
	fp = fopen((char*)path, "rb");
	if (!fp) {
		return 0;
	}
	fseek(fp, 0, SEEK_END);
	si = ftell(fp);
	fclose(fp);
	return si;
}

var file_load(var path, var size)
{
	char *buf;
	FILE *fp;
	var ret;

	fp = fopen((char*)path, "rb");
	if (!fp) {
		return 0;
	}
	buf = malloc(size+1);
	if (!buf) {
		return 0;
	}
	ret = fread(buf, 1, size, fp);
	if (ret != size) {
		free(buf);
		buf = 0;
	}
	buf[size] = '\0';
	fclose(fp);
	return (var)buf;
}

var file_save(var path, var size, var buf)
{
	FILE *fp;
	var ret;

	fp = fopen((char*)path, "wb");
	if (!fp) {
		return -1;
	}
	ret = fwrite((void*)buf, 1, size, fp);
	fclose(fp);
	return ret;
}


#define strcmp(a,b) strcmp((void*)a, (void*)b)
#define strdup(a) strdup((void*)a)

var print(var string);
var print2(var binary_number);
var print3(var ternary_number);
var ter2bin(var bin);
var bin2ter(var ter);
var and2(var a, var b);
var or2(var a, var b);
var xor2(var a, var b);
var inv2(var a);
var cons3(var a, var b);
var any3(var a, var b);
var xor3(var a, var b);
var neg3(var a);
struct buf {
	var data;
	var size;
	var alloced;
};
var buf__new(var size)
{
	var self;
	self = (var)(void*)(malloc(sizeof(struct buf)));
	(((struct buf*)self)->data) = (var)(void*)(malloc(((size * 8) & ~(sizeof(var) - 1)) + sizeof(var)));
	(((struct buf*)self)->size) = (var)(void*)(0);
	(((struct buf*)self)->alloced) = (var)(void*)(size);
	return self;
}
var buf__dispose(var self)
{
	free((void*)self);
	return 0;
}
struct sym {
	var symbols;
	var types;
	var values;
	var alloced;
	var size;
};
var sym__new(void)
{
	var self;
	var s;
	s = (var)(void*)(32);
	self = (var)(void*)(malloc(sizeof(struct sym)));
	(((struct sym*)self)->symbols) = (var)(void*)(malloc((s) * sizeof(var)));
	(((struct sym*)self)->types) = (var)(void*)(malloc((s) * sizeof(var)));
	(((struct sym*)self)->values) = (var)(void*)(malloc((s) * sizeof(var)));
	(((struct sym*)self)->alloced) = (var)(void*)(s);
	(((struct sym*)self)->size) = (var)(void*)(0);
	return self;
}
var sym__dispose(var self)
{
	free((void*)(((struct sym*)self)->symbols));
	free((void*)(((struct sym*)self)->types));
	free((void*)(((struct sym*)self)->values));
	free((void*)self);
	return 0;
}
var sym__cmp(var self, var s1, var s2, var len)
{
	var i;
	var c;
	i = (var)(void*)(0);
	while (i < len) {
		c = (var)(void*)(peek(s1, i)) - peek(s2, i);
		switch ((var)(c == 0)) {
		case 0:
		case -1: {
			return c;
			break;
		}
		};
		i = (var)(void*)(i + 1);
	};
	return 0;
}
var sym__get_index(var self, var name, var len)
{
	var i;
	var s;
	var a;
	i = (var)(void*)(0);
	s = (var)(void*)((((struct sym*)self)->size));
	a = (var)(void*)((((struct sym*)self)->symbols));
	while (i < s) {
		switch ((var)( ! sym__cmp(self, (((var*)a)[i]), name, len))) {
		case 1: {
			return i;
			break;
		}
		};
		i = (var)(void*)(i + 1);
	};
	return  - 1;
}
var sym__get_type(var self, var index)
{
	var a;
	switch ((var)(index >= (((struct sym*)self)->size))) {
	case 1: {
		return 0;
		break;
	}
	};
	a = (var)(void*)((((struct sym*)self)->types));
	return (((var*)a)[index]);
}
var sym__get_value(var self, var index)
{
	var a;
	switch ((var)(index >= (((struct sym*)self)->size))) {
	case 1: {
		return 0;
		break;
	}
	};
	a = (var)(void*)((((struct sym*)self)->values));
	return (((var*)a)[index]);
}
var sym__realloc(var self, var s, var n, var a)
{
	var i;
	var na;
	na = (var)(void*)(malloc((n) * sizeof(var)));
	i = (var)(void*)(0);
	while (i < s) {
		(((var*)na)[i]) = (var)(void*)((((var*)a)[i]));
		i = (var)(void*)(i + 1);
	};
	return na;
}
var sym__grow(var self, var new_size)
{
	var s;
	var n;
	s = (var)(void*)((((struct sym*)self)->size));
	n = (var)(void*)(s + new_size);
	(((struct sym*)self)->symbols) = (var)(void*)(sym__realloc(self, s, n, (((struct sym*)self)->symbols)));
	(((struct sym*)self)->types) = (var)(void*)(sym__realloc(self, s, n, (((struct sym*)self)->types)));
	(((struct sym*)self)->values) = (var)(void*)(sym__realloc(self, s, n, (((struct sym*)self)->values)));
	(((struct sym*)self)->size) = (var)(void*)(n);
	return 0;
}
var sym__add(var self, var name, var type, var value)
{
	var i;
	var a;
	i = (var)(void*)((((struct sym*)self)->size));
	switch ((var)((((struct sym*)self)->alloced) <= i + 1)) {
	case 1: {
		sym__grow(self, 32);
		break;
	}
	};
	a = (var)(void*)((((struct sym*)self)->symbols));
	(((var*)a)[i]) = (var)(void*)(name);
	a = (var)(void*)((((struct sym*)self)->types));
	(((var*)a)[i]) = (var)(void*)(type);
	a = (var)(void*)((((struct sym*)self)->values));
	(((var*)a)[i]) = (var)(void*)(value);
	(((struct sym*)self)->size) = (var)(void*)(i + 1);
	return 0;
}
struct as {
	var in;
	var insize;
	var inpos;
	var line;
	var tmp;
	var syms;
};
var as__init(var self, var a);
var as__new(void)
{
	var self;
	var a;
	self = (var)(void*)(malloc(sizeof(struct as)));
	a = (var)(void*)(malloc(sizeof(struct sym)));
	(((struct as*)self)->syms) = (var)(void*)(a);
	(((struct as*)self)->tmp) = (var)(void*)(malloc(((2) & ~(sizeof(var) - 1)) + sizeof(var)));
	as__init(self, a);
	return self;
}
var as__dispose(var self)
{
	free((void*)(((struct as*)self)->tmp));
	free((void*)self);
	return 0;
}
var as__load(var self, var src)
{
	(((struct as*)self)->insize) = (var)(void*)(file_size(src));
	switch ((var)((((struct as*)self)->insize) < 1)) {
	case 1: {
		print(((var)(void*)"invalid source file\n"));
		exit( - 1);
		break;
	}
	};
	(((struct as*)self)->in) = (var)(void*)(file_load(src, (((struct as*)self)->insize)));
	switch ((var)((((struct as*)self)->in))) {
	case 0:
	case -1: {
		print(((var)(void*)"cannot load source file\n"));
		exit( - 1);
		break;
	}
	};
	return 0;
}
var as__print(var self, var name, var len)
{
	var i;
	var tmp;
	i = (var)(void*)(0);
	tmp = (var)(void*)((((struct as*)self)->tmp));
	while (i < len) {
		poke(tmp, 0, peek(name, i));
		print(tmp);
		i = (var)(void*)(i + 1);
	};
	return 0;
}
var as__whitespaces(var self)
{
	var s;
	var b;
	var c;
	var done;
	s = (var)(void*)((((struct as*)self)->inpos) - 1);
	b = (var)(void*)((((struct as*)self)->in));
	done = (var)(void*)(0);
	while ( ! done) {
		s = (var)(void*)(s + 1);
		c = (var)(void*)(peek(b, s));
		done = (var)(void*)(1);
		switch ((var)(c)) {
		case ' ':
		case '\t':
		case '\r': {
			done = (var)(void*)(0);
			break;
		}
		case ';': {
			while (c != '\n' && c != '\0') {
				s = (var)(void*)(s + 1);
				c = (var)(void*)(peek(b, s));
			};
			break;
		}
		};
	};
	(((struct as*)self)->inpos) = (var)(void*)(s);
	return c;
}
var as__code32(var self)
{
	print(((var)(void*)"CODE32\n"));
	return 0;
}
var as__identifier(var self, var name, var len)
{
	var i;
	var s;
	var t;
	var v;
	as__print(self, name, len);
	switch ((var)(len < 1)) {
	case 1: {
		return  - 1;
		break;
	}
	};
	s = (var)(void*)((((struct as*)self)->syms));
	i = (var)(void*)(sym__get_index(s, name, len));
	print2(i);
	print(((var)(void*)"\n"));
	switch ((var)(i >= 0)) {
	case 1: {
		t = (var)(void*)(sym__get_type(s, i));
		v = (var)(void*)(sym__get_value(s, i));
		switch ((var)(t)) {
		case 0: {
			break;
		}
		case 1: {
			return ((var (*)())v)(self);
			break;
		}
		};
		break;
	}
	case 0:
	case -1: {
		break;
	}
	};
	print(((var)(void*)"#error at line "));
	print2((((struct as*)self)->line));
	print(((var)(void*)" '"));
	as__print(self, name, len);
	print(((var)(void*)"' unknown!\n"));
	(((struct as*)self)->inpos) = (var)(void*)((((struct as*)self)->inpos) + len);
	return  - 1;
}
var as__token(var self)
{
	var s;
	var so;
	var l;
	var b;
	var c;
	var done;
	so = (var)(void*)((((struct as*)self)->inpos));
	s = (var)(void*)(so - 1);
	b = (var)(void*)((((struct as*)self)->in));
	done = (var)(void*)(0);
	while ( ! done) {
		s = (var)(void*)(s + 1);
		c = (var)(void*)(peek(b, s));
		switch ((var)(c)) {
		case ' ':
		case '\t':
		case '\r':
		case '\n': {
			done = (var)(void*)(1);
			break;
		}
		case ';': {
			done = (var)(void*)(1);
			break;
		}
		case ',': {
			done = (var)(void*)(1);
			break;
		}
		};
	};
	(((struct as*)self)->inpos) = (var)(void*)(s);
	l = (var)(void*)(s - so);
	as__identifier(self, (((struct as*)self)->in) + so, l);
	return 0;
}
var as__line(var self)
{
	var done;
	(((struct as*)self)->line) = (var)(void*)((((struct as*)self)->line) + 1);
	done = (var)(void*)(0);
	as__whitespaces(self);
	c = (var)(void*)(as__token(self));
	switch ((var)(peek((((struct as*)self)->in), (((struct as*)self)->inpos)))) {
	case '\n': {
		(((struct as*)self)->inpos) = (var)(void*)((((struct as*)self)->inpos) + 1);
		done = (var)(void*)(1);
		break;
	}
	case '\0': {
		done = (var)(void*)(1);
		break;
	}
	};
	switch ((var)( ! done)) {
	case 1: {
		print(((var)(void*)"#error at line "));
		print2((((struct as*)self)->line));
		print(((var)(void*)"!\n"));
		exit( - 1);
		break;
	}
	};
	print2((((struct as*)self)->line));
	print(((var)(void*)":\n"));
	return 0;
}
var as__assemble(var self, var dst)
{
	(((struct as*)self)->inpos) = (var)(void*)(0);
	(((struct as*)self)->line) = (var)(void*)(0);
	while ((((struct as*)self)->inpos) < (((struct as*)self)->insize)) {
		as__line(self);
	};
	return 0;
}
var as__init(var self, var a)
{
	var f;
	var n;
	n = (var)(void*)(((var)(void*)".code32"));
	f = (var)(void*)(as__code32);
	sym__add(a, n, 1, f);
	return 0;
}
var startup(var argc, var argv)
{
	var app;
	switch ((var)(argc != 4)) {
	case 1: {
		print(((var)(void*)"usage: "));
		print((((var*)argv)[0]));
		print(((var)(void*)" -o prog.raw src.asm\n"));
		return  - 1;
		break;
	}
	};
	switch ((var)(strcmp((((var*)argv)[1]), ((var)(void*)"-o")))) {
	case 1: {
		print(((var)(void*)"first command line argument must be -o\n"));
		return  - 1;
		break;
	}
	};
	app = (var)(void*)(as__new());
	as__load(app, (((var*)argv)[3]));
	as__assemble(app, (((var*)argv)[2]));
	as__dispose(app);
	return 0;
}
