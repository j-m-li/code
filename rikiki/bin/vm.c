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
struct vm3o3 {
	var b;
	var a;
	var c;
	var pages;
	var flag;
	var pc;
	var sel;
};
var vm3o3__new(void)
{
	var self;
	var p;
	self = (var)(void*)(malloc(sizeof(struct vm3o3)));
	(((struct vm3o3*)self)->a) = (var)(void*)(malloc(((4) & ~(sizeof(var) - 1)) + sizeof(var)));
	(((struct vm3o3*)self)->b) = (var)(void*)(malloc(((4) & ~(sizeof(var) - 1)) + sizeof(var)));
	(((struct vm3o3*)self)->c) = (var)(void*)(malloc(((4) & ~(sizeof(var) - 1)) + sizeof(var)));
	(((struct vm3o3*)self)->pc) = (var)(void*)(malloc(((32) & ~(sizeof(var) - 1)) + sizeof(var)));
	(((struct vm3o3*)self)->sel) = (var)(void*)(malloc(((4) & ~(sizeof(var) - 1)) + sizeof(var)));
	p = (var)(void*)(malloc((6) * sizeof(var)));
	(((struct vm3o3*)self)->pages) = (var)(void*)(p);
	(((var*)p)[0]) = (var)(void*)(malloc(((32) & ~(sizeof(var) - 1)) + sizeof(var)));
	(((var*)p)[1]) = (var)(void*)(malloc(((32) & ~(sizeof(var) - 1)) + sizeof(var)));
	(((var*)p)[2]) = (var)(void*)(malloc(((32) & ~(sizeof(var) - 1)) + sizeof(var)));
	(((var*)p)[3]) = (var)(void*)(malloc(((32) & ~(sizeof(var) - 1)) + sizeof(var)));
	(((var*)p)[4]) = (var)(void*)(malloc(((32) & ~(sizeof(var) - 1)) + sizeof(var)));
	(((var*)p)[5]) = (var)(void*)(malloc(((32) & ~(sizeof(var) - 1)) + sizeof(var)));
	(((struct vm3o3*)self)->flag) = (var)(void*)(malloc(((2) & ~(sizeof(var) - 1)) + sizeof(var)));
	return self;
}
var vm3o3__dispose(var self)
{
	var p;
	free((void*)(((struct vm3o3*)self)->a));
	free((void*)(((struct vm3o3*)self)->b));
	free((void*)(((struct vm3o3*)self)->c));
	free((void*)(((struct vm3o3*)self)->pc));
	free((void*)(((struct vm3o3*)self)->sel));
	p = (var)(void*)((((struct vm3o3*)self)->pages));
	free((void*)(((var*)p)[0]));
	free((void*)(((var*)p)[1]));
	free((void*)(((var*)p)[2]));
	free((void*)(((var*)p)[3]));
	free((void*)(((var*)p)[4]));
	free((void*)(((var*)p)[5]));
	free((void*)p);
	free((void*)(((struct vm3o3*)self)->flag));
	free((void*)self);
	return 0;
}
var set(var r, var n)
{
	poke(r, 0, 0);
	poke(r, 1, 0);
	poke(r, 2, 0);
	poke(r, 3, 0);
	switch ((var)(n)) {
	case -4: {
		poke(r, 1, 1);
		poke(r, 3, 1);
		break;
	}
	case -3: {
		poke(r, 3, 1);
		break;
	}
	case -2: {
		poke(r, 0, 1);
		poke(r, 3, 1);
		break;
	}
	case -1: {
		poke(r, 1, 1);
		break;
	}
	case 0: {
		break;
	}
	case +1: {
		poke(r, 0, 1);
		break;
	}
	case +2: {
		poke(r, 1, 1);
		poke(r, 2, 1);
		break;
	}
	case +3: {
		poke(r, 2, 1);
		break;
	}
	case +4: {
		poke(r, 0, 1);
		poke(r, 2, 1);
		break;
	}
	};
	return 0;
}
var get(var n)
{
	var r;
	r = (var)(void*)(0);
	switch ((var)(peek(n, 0))) {
	case 1: {
		r = (var)(void*)(r + 1);
		break;
	}
	};
	switch ((var)(peek(n, 1))) {
	case 1: {
		r = (var)(void*)(r - 1);
		break;
	}
	};
	switch ((var)(peek(n, 2))) {
	case 1: {
		r = (var)(void*)(r + 3);
		break;
	}
	};
	switch ((var)(peek(n, 3))) {
	case 1: {
		r = (var)(void*)(r - 3);
		break;
	}
	};
	return r;
}
var vm3o3__write_to_pc(var self)
{
	var b;
	var i;
	var r;
	var p;
	var pc;
	p = (var)(void*)((((struct vm3o3*)self)->pages));
	pc = (var)(void*)((((struct vm3o3*)self)->pc));
	b = (var)(void*)(get((((struct vm3o3*)self)->sel))) + 4;
	r = (var)(void*)((((var*)p)[b]));
	i = (var)(void*)(0);
	while (i < 32) {
		poke(pc, i, peek(r, i));
		i = (var)(void*)(i + 1);
	};
	return 0;
}
var vm3o3__high_op(var self)
{
	var op;
	op = (var)(void*)(get((((struct vm3o3*)self)->a)));
	switch ((var)(op)) {
	case -4: {
		break;
	}
	case -3: {
		break;
	}
	case -2: {
		break;
	}
	case -1: {
		break;
	}
	case 0: {
		vm3o3__write_to_pc(self);
		break;
	}
	case +1: {
		break;
	}
	case +2: {
		break;
	}
	case +3: {
		break;
	}
	case +4: {
		break;
	}
	};
	return 0;
}
var vm3o3__st(var self, var cell)
{
	var p;
	var r;
	var i;
	var b;
	b = (var)(void*)(get((((struct vm3o3*)self)->sel))) + 4;
	switch ((var)(cell)) {
	case +4: {
		return vm3o3__high_op(self);
		break;
	}
	};
	p = (var)(void*)((((struct vm3o3*)self)->pages));
	r = (var)(void*)((((struct vm3o3*)self)->a));
	i = (var)(void*)((cell + 4) * 4);
	poke((((var*)p)[b]), i, peek(r, 0));
	poke((((var*)p)[b]), i + 1, peek(r, 1));
	poke((((var*)p)[b]), i + 2, peek(r, 2));
	poke((((var*)p)[b]), i + 3, peek(r, 3));
	return 0;
}
var vm3o3__ld(var self, var cell)
{
	var p;
	var r;
	var i;
	var b;
	p = (var)(void*)((((struct vm3o3*)self)->pages));
	r = (var)(void*)((((struct vm3o3*)self)->a));
	b = (var)(void*)(get((((struct vm3o3*)self)->sel))) + 4;
	i = (var)(void*)((cell + 4) * 4);
	poke(r, 0, peek((((var*)p)[b]), i));
	poke(r, 1, peek((((var*)p)[b]), i + 1));
	poke(r, 2, peek((((var*)p)[b]), i + 2));
	poke(r, 3, peek((((var*)p)[b]), i + 3));
	return 0;
}
var vm3o3__ldi(var self, var r, var i)
{
	var r1;
	switch ((var)(r)) {
	case -1: {
		r1 = (var)(void*)((((struct vm3o3*)self)->b));
		break;
	}
	case 0: {
		r1 = (var)(void*)((((struct vm3o3*)self)->a));
		break;
	}
	case +1: {
		r1 = (var)(void*)((((struct vm3o3*)self)->c));
		break;
	}
	};
	set(r1, i);
	return 0;
}
var vm3o3__reg(var self, var r)
{
	switch ((var)(r)) {
	case -1: {
		return (((struct vm3o3*)self)->b);
		break;
	}
	case 0: {
		return (((struct vm3o3*)self)->a);
		break;
	}
	case +1: {
		return (((struct vm3o3*)self)->c);
		break;
	}
	};
	return 0;
}
var vm3o3__getpc(var self)
{
	var m;
	var i;
	var j;
	var pc;
	var n;
	pc = (var)(void*)((((struct vm3o3*)self)->pc));
	m = (var)(void*)(1);
	i = (var)(void*)(0);
	n = (var)(void*)(0);
	while (i < 16) {
		j = (var)(void*)(i * 2);
		switch ((var)(peek(pc, j))) {
		case 1: {
			n = (var)(void*)(n + m);
			break;
		}
		case 0:
		case -1: {
			switch ((var)(peek(pc, j + 1))) {
			case 1: {
				n = (var)(void*)(n - m);
				break;
			}
			};
			break;
		}
		};
		m = (var)(void*)(m * 3);
		i = (var)(void*)(i + 1);
	};
	return n;
}
var vm3o3__addpc(var self, var n)
{
	var m;
	var i;
	var h;
	var j;
	var pc;
	n = (var)(void*)(n + vm3o3__getpc(self));
	pc = (var)(void*)((((struct vm3o3*)self)->pc));
	m = (var)(void*)(1);
	i = (var)(void*)(1);
	while (i <= 16) {
		m = (var)(void*)(m * 3);
		i = (var)(void*)(i + 1);
	};
	i = (var)(void*)(i - 1);
	while (i > 0) {
		i = (var)(void*)(i - 1);
		m = (var)(void*)(m / 3);
		h = (var)(void*)(m / 2);
		j = (var)(void*)(i * 2);
		switch ((var)(n > h)) {
		case 1: {
			n = (var)(void*)(n - m);
			poke(pc, j, 1);
			break;
		}
		case 0:
		case -1: {
			poke(pc, j, 0);
			switch ((var)(n <  - h)) {
			case 1: {
				n = (var)(void*)(n + m);
				poke(pc, j + 1, 1);
				break;
			}
			case 0:
			case -1: {
				poke(pc, j + 1, 0);
				break;
			}
			};
			break;
		}
		};
	};
	return 0;
}
var vm3o3__add(var self, var dest, var src1)
{
	var f;
	var r;
	var d;
	var s1;
	var s2;
	s2 = (var)(void*)(get((((struct vm3o3*)self)->a)));
	f = (var)(void*)((((struct vm3o3*)self)->flag));
	poke(f, 0, 0);
	poke(f, 1, 0);
	s1 = (var)(void*)(get(vm3o3__reg(self, src1)));
	d = (var)(void*)(vm3o3__reg(self, dest));
	poke(d, 0, 0);
	poke(d, 1, 0);
	poke(d, 2, 0);
	poke(d, 3, 0);
	r = (var)(void*)(s1 + s2);
	switch ((var)(r > 4)) {
	case 1: {
		r = (var)(void*)(r - 9);
		poke(f, 0, 1);
		break;
	}
	case 0:
	case -1: {
		switch ((var)(r <  - 4)) {
		case 1: {
			r = (var)(void*)(r + 9);
			poke(f, 1, 1);
			break;
		}
		};
		break;
	}
	};
	switch ((var)(r > 1)) {
	case 1: {
		r = (var)(void*)(r - 3);
		poke(d, 2, 1);
		break;
	}
	case 0:
	case -1: {
		switch ((var)(r <  - 1)) {
		case 1: {
			r = (var)(void*)(r + 3);
			poke(d, 3, 1);
			break;
		}
		};
		break;
	}
	};
	switch ((var)(r > 0)) {
	case 1: {
		r = (var)(void*)(r - 1);
		poke(d, 0, 1);
		break;
	}
	case 0:
	case -1: {
		switch ((var)(r < 0)) {
		case 1: {
			r = (var)(void*)(r + 1);
			poke(d, 1, 1);
			break;
		}
		};
		break;
	}
	};
	return 0;
}
var vm3o3__swp(var self, var r1)
{
	var r;
	var o;
	var v;
	var i;
	r = (var)(void*)(vm3o3__reg(self, r1));
	v = (var)(void*)((((struct vm3o3*)self)->a));
	i = (var)(void*)(0);
	while (i < 4) {
		o = (var)(void*)(peek(r, i));
		poke(r, i, peek(v, i));
		poke(v, i, o);
		i = (var)(void*)(1 + 1);
	};
	return 0;
}
var vm3o3__neg(var self)
{
	var f;
	var o;
	var v;
	f = (var)(void*)((((struct vm3o3*)self)->flag));
	v = (var)(void*)((((struct vm3o3*)self)->a));
	o = (var)(void*)(peek(f, 0));
	poke(f, 0, peek(f, 1));
	poke(f, 1, o);
	o = (var)(void*)(peek(v, 0));
	poke(v, 0, peek(v, 1));
	poke(v, 1, o);
	o = (var)(void*)(peek(v, 2));
	poke(v, 2, peek(v, 3));
	poke(v, 3, o);
	return 0;
}
var vm3o3__mul(var self)
{
	var v;
	var f;
	f = (var)(void*)((((struct vm3o3*)self)->flag));
	v = (var)(void*)((((struct vm3o3*)self)->a));
	poke(f, 0, peek(v, 2));
	poke(f, 1, peek(v, 3));
	poke(v, 2, peek(v, 0));
	poke(v, 3, peek(v, 1));
	poke(v, 0, 0);
	poke(v, 1, 0);
	return 0;
}
var vm3o3__div(var self)
{
	var v;
	var f;
	f = (var)(void*)((((struct vm3o3*)self)->flag));
	v = (var)(void*)((((struct vm3o3*)self)->a));
	poke(f, 0, peek(v, 0));
	poke(f, 1, peek(v, 1));
	poke(v, 0, peek(v, 2));
	poke(v, 1, peek(v, 3));
	poke(v, 2, 0);
	poke(v, 3, 0);
	return 0;
}
var vm3o3__cmp(var self, var ri1, var ri2)
{
	var r1;
	var r2;
	var a;
	var b;
	var f;
	switch ((var)(ri1 == ri2 && ri1 != 0)) {
	case 1: {
		return vm3o3__swp(self, ri1);
		break;
	}
	};
	r1 = (var)(void*)(vm3o3__reg(self, ri1));
	r2 = (var)(void*)(vm3o3__reg(self, ri2));
	a = (var)(void*)(get(r1));
	b = (var)(void*)(get(r2));
	f = (var)(void*)((((struct vm3o3*)self)->flag));
	poke(f, 0, 0);
	poke(f, 1, 0);
	switch ((var)(a > b)) {
	case 1: {
		poke(f, 0, 1);
		break;
	}
	};
	switch ((var)(a < b)) {
	case 1: {
		poke(f, 1, 1);
		break;
	}
	};
	return 0;
}
var vm3o3__b(var self, var when, var offset9)
{
	var c;
	var pc;
	c = (var)(void*)(get((((struct vm3o3*)self)->flag)));
	pc = (var)(void*)((((struct vm3o3*)self)->pc));
	switch ((var)(c == when)) {
	case 1: {
		poke(pc, 0, 0);
		poke(pc, 1, 1);
		poke(pc, 2, 0);
		poke(pc, 3, 1);
		vm3o3__addpc(self, offset9 * 9);
		break;
	}
	};
	return 0;
}
var vm3o3__beq(var self, var offset9)
{
	return vm3o3__b(self, 0, offset9);
}
var vm3o3__blt(var self, var offset9)
{
	return vm3o3__b(self,  - 1, offset9);
}
var vm3o3__bgt(var self, var offset9)
{
	return vm3o3__b(self,  + 1, offset9);
}
var vm3o3__sel(var self, var id)
{
	switch ((var)(id)) {
	case +4:
	case +3:
	case +2: {
		return 0;
		break;
	}
	};
	set((((struct vm3o3*)self)->sel), id);
	return 0;
}
var vm3o3__stpc(var self)
{
	vm3o3__ldi(self, 0, 0);
	vm3o3__st(self,  + 4);
	return 0;
}
var vm3o3__reset(var self)
{
	vm3o3__sel(self, 0);
	vm3o3__ldi(self, 0, 0);
	vm3o3__st(self,  - 4);
	vm3o3__st(self,  - 3);
	vm3o3__st(self,  - 2);
	vm3o3__st(self,  - 1);
	vm3o3__st(self, 0);
	vm3o3__st(self,  + 1);
	vm3o3__st(self,  + 2);
	vm3o3__st(self,  + 3);
	vm3o3__stpc(self);
	vm3o3__cmp(self, 0, 0);
	return 0;
}
var vm3o3__run(var self)
{
	var i;
	i = (var)(void*)(10);
	vm3o3__ldi(self, 0,  - 3);
	vm3o3__sel(self, 1);
	vm3o3__st(self,  - 4);
	vm3o3__sel(self, 0);
	vm3o3__stpc(self);
	while (i > 0) {
		i = (var)(void*)(i - 1);
		print2(vm3o3__getpc(self));
		print(((var)(void*)"\n"));
		vm3o3__addpc(self, 1);
	};
	return 0;
}
var startup(var argc, var argv)
{
	var vm;
	print(((var)(void*)"3o3 ternary Virtual Machine\n"));
	vm = (var)(void*)(vm3o3__new());
	vm3o3__reset(vm);
	vm3o3__run(vm);
	vm3o3__dispose(vm);
	print(((var)(void*)"done.\n"));
	return 0;
}
