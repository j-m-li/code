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
#define MY_CONST 47
struct myst {
	var one;
	var next;
	var three;
	var four;
};
var test(void);
var t2(var a, var b);
var startup(var argc, var argv)
{
	var i;
	var a;
	var s;
	var b;
	var end;
	var n;
	var f;
	var y;
	a = (var)(void*)(malloc((123) * sizeof(var)));
	s = (var)(void*)(malloc(sizeof(struct myst)));
	b = (var)(void*)(malloc(((3) & ~(sizeof(var) - 1)) + sizeof(var)));
	poke(b, 0, 'B');
	poke(b, 1, '\n');
	poke(b, 2, 0);
	print(b);
	f = (var)(void*)(t2);
	((var (*)())f)(100, 2, 3, 4, 5);
	f = (var)(void*)(((var (*)())f)());
	n = (var)(void*)(1 * 20 % 2 / 3 + (17 - 4));
	print2(n);
	(((struct myst*)s)->one) = (var)(void*)(10001);
	(((struct myst*)s)->next) = (var)(void*)(((var)(void*)"two"));
	(((struct myst*)s)->three) = (var)(void*)(3);
	(((struct myst*)s)->four) = (var)(void*)('4');
	i = (var)(void*)((((var*)a)[1]));
	(((var*)a)[0]) = (var)(void*)(((var)(void*)"yo"));
	(((var*)a)[122]) = (var)(void*)(((var)(void*)"lAst"));
	print(((var)(void*)"hello world\n"));
	print2(peek((((var*)a)[122]), 1));
	print(((var)(void*)"\n"));
	print((((var*)argv)[argc - 1]));
	print2((((var*)argv)[argc - 1]));
	i = (var)(void*)(0);
	y = (var)(void*)(i);
	while (i == y && i != y && i < y && i <= y && i > y && i >= y) {
	};
	switch ((var)(argc > 2)) {
	case +1: {
		print(((var)(void*)"yo \n"));
		i = (var)(void*)(2);
		end = (var)(void*)(0);
		while (i < argc && (end == 0 || 3 == 2)) {
			print(((var)(void*)"."));
			i = (var)(void*)(i + 1);
			switch ((var)(i)) {
			case +10: {
				end = (var)(void*)(1);
				break;
			}
			};
		};
		break;
	}
	case 0:
	case -1: {
		print((((struct myst*)s)->next));
		break;
	}
	};
	free((void*)a);
	test();
	free((void*)(((struct myst*)s)));
	f = (var)(void*)(file_size((((var*)argv)[1])));
	switch ((var)(f > 0)) {
	case -5:
	case 2:
	case 3:
	case +1: {
		f = (var)(void*)(file_load((((var*)argv)[1]), f));
		print(f);
		break;
	}
	case -1:
	case 0: {
		break;
	}
	};
	return 0;
}
var test(void)
{
	print(((var)(void*)"test\n"));
	print2(47);
	t2(1, 2);
	return 0;
}
var t2(var a, var b)
{
	print2(a + b);
	print(((var)(void*)"\n"));
	return 0;
}
