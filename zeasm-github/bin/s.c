#include "../src/std.zea.h"
const byte ar[] = "\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x00\x07\x00\x00\x00\x08\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00\x0b\x00\x00\x00\x0c\x00\x00\x00"; /* size : 52 */
const byte bar[] = "\x01\x23\x45\x67\x89\xAB\xCD\xEF"; /* size : 8 */
const byte str[] = "abc\x00"; /* size : 4 */
var hello(); /* nb_args = 2 */
struct myclass {
	var avalue;
	var arrr;
	var bptr;
	var logic;
};
var myclass__dispose(); /* nb_args = 1 */
var myclass__new() {
	struct myclass *self = (void*)pop();
	(void)self;
	push(sizeof(struct myclass));
	{var tmp = (var)malloc(pop());push(tmp);}
	self = (void*)pop();
	push(1024);
	{var tmp = (var)malloc(pop());push(tmp);}
	*((var*)&self->arrr) = pop();
	push(*((var*)&self->arrr));
	*((var*)&self->bptr) = pop();
	push((var)self);
	return 0;
}
var myclass__dispose() {
	struct myclass *self = (void*)pop();
	(void)self;
	push(*((var*)&self->arrr));
	free((void*)pop());
	push((var)self);
	free((void*)pop());
	push(0);
	return 0;
}
var myclass__methoda() {
	struct myclass *self = (void*)pop();
	var a = pop();
	var b = pop();
	(void)self;
	var aa;
	push(1);
	push((var)a);
	{var tmp = pop();push(tmp - pop());}
	*((var*)&aa) = pop();
	push(0);
	push((var)aa);
	{var tmp = pop();push(tmp > pop());}
	{var tmp = pop();
	if (tmp) {
		push((var)b);
		push((var)aa);
		push((var)self);
		((var(*)(void))myclass__methoda)();
		return 0;
	}}
	push(0);
	return 0;
}
var start() {
	var argc = pop();
	var argv = pop();
	struct term *t = NULL;
	var tmp;
	struct myclass *obj = NULL;
	var bs;
	struct file *fi = NULL;
	push((var)obj);
	((var(*)(void))myclass__new)();
	*((var*)&obj) = pop();
	push(*((var*)&obj->bptr));
	*((var*)&bs) = pop();
	push(3);
	push((var)bs);
	{var tmp = pop();push(tmp + pop());}
	*((var*)&bs) = pop();
	push(533);
	*((byte*)&bs) = pop();
	push(*((byte*)&bs));
	*((var*)&tmp) = pop();
	push((var)tmp);
	printf("%ld",pop());
	push((var)" equals 21 ?");
	printf("%s\n",(char*)pop());
	push(-3);
	push(15);
	push((var)obj);
	((var(*)(void))myclass__methoda)();
	pop();
	push(1);
	*((var*)&obj->avalue) = pop();
	push((var)obj);
	((var(*)(void))myclass__dispose)();
	pop();
	push(1);
	push((var)argc);
	{var tmp = pop();push(tmp > pop());}
	{var tmp = pop();
	if (tmp) {
		push((var)"too many arguments");
		printf("%s\n",(char*)pop());
	} else if (!tmp) {
		push(1);
		push((var)argc);
		{var tmp = pop();push(tmp == pop());}
		{var tmp = pop();
		if (tmp) {
			push((var)"hello world");
			printf("%s\n",(char*)pop());
		} else if (!tmp) {
			push((var)"panic");
			printf("%s\n",(char*)pop());
			push(-1);
			exit(pop());
		}}
	}}
	push(0);
	push((argc >> pop()) & 1);
	{var tmp = pop();
	if (tmp) {
		push(0);
		argc = argc & ~(1 << pop());
	} else if (!tmp) {
		push(0);
		argc = argc | (1 << pop());
	}}
	push(2);
	push((var)argc);
	pop();pop();push(0);/*FIXME*/
	{var tmp = pop();
	if (tmp) {
		push(2);
		push((var)argc);
	} else if (!tmp) {
		push(2);
		push((var)argc);
	} else if (!tmp) {
	}}
	push(1000000000);
	push(3);
	{var tmp = pop();push(tmp * pop());}
	pop();
	push(1000000000);
	push(3);
	{var tmp = pop();push(tmp * pop());}
	pop();
	push(1000000000);
	push(3);
	{var tmp = pop();push(tmp * pop());}
	push((var)"3 x 10000.. equals ");
	printf("%s",(char*)pop());
	printf("%ld",pop());
	push((var)"");
	printf("%s\n",(char*)pop());
	push((var)"a string");
	*((var*)&tmp) = pop();
	push((var)"program name equals ");
	printf("%s",(char*)pop());
	push((var)tmp);
	printf("%s\n",(char*)pop());
	push(0);
	push((var)argv);
	{var tmp = pop();push(tmp + (8 * pop()));}
	push(*((var*)pop()));
	printf("%s\n",(char*)pop());
	push(1);
	push((var)argc);
	{var tmp = pop();push(tmp > pop());}
	{var tmp = pop();
	if (tmp) {
		push((var)"arg1: ");
		printf("%s",(char*)pop());
		push(1);
		push((var)argv);
		{var tmp = pop();push(tmp + (8 * pop()));}
		push(*((var*)pop()));
		printf("%s\n",(char*)pop());
	}}
	push(4);
	*((var*)&tmp) = pop();
	while (1) {
		push(1);
		push((var)tmp);
		{var tmp = pop();push(tmp - pop());}
		*((var*)&tmp) = pop();
		push(0);
		push((var)tmp);
		{var tmp = pop();push(tmp > pop());}
		{var tmp = pop();
		if (tmp) {
			continue;
		} else if (!tmp) {
			break;
		}}
		push((var)tmp);
		printf("%ld",pop());
		push((var)"");
		printf("%s\n",(char*)pop());
	}
	push(12345);
	*((var*)&tmp) = pop();
	push((var)" yo");
	push((var)tmp);
	((var(*)(void))hello)();
	pop();
	push((var)"\x0D\x0A\x00");
	printf("%s",(char*)pop());
	push((var)" world");
	*((var*)&tmp) = pop();
	push((var)"hello");
	printf("%s",(char*)pop());
	push((var)tmp);
	printf("%s\n",(char*)pop());
	push((var)"\x00");
	*((var*)&tmp) = pop();
	push(0);
	*((var*)&t) = pop();
	push((var)t);
	((var(*)(void))term__new)();
	*((var*)&t) = pop();
	while (1) {
		push(10);
		push((var)t);
		((var(*)(void))term__wait)();
		push(0);
		{var tmp = pop();push(tmp <= pop());}
		{var tmp = pop();
		if (tmp) {
			push(*((var*)&t->evttype));
			{var tmp = pop();
			if (tmp == 1) {
				push(0);
				push(*((var*)&t->evtlength));
				{var tmp = pop();push(tmp > pop());}
				{var tmp = pop();
				if (tmp) {
					push(*((var*)&t->evtdata));
					push(*((var*)pop()));
					{var tmp = pop();
					if (tmp == 27) {
						break;
					}}
					push(*((var*)&t->evtdata));
					printf("%s",(char*)pop());
				}}
			}}
		} else  {
		}}
		((var(*)(void))flush)();
	}
	push(500);
	push((var)"file.h");
	push((var)fi);
	((var(*)(void))file__size)();
	{var tmp = pop();push(tmp - pop());}
	push(500);
	push((var)"file.h");
	push((var)fi);
	((var(*)(void))file__load)();
	printf("%s",(char*)pop());
	push((var)"done!\x0A!\x0A");
	printf("%s",(char*)pop());
	((var(*)(void))flush)();
	push((var)t);
	((var(*)(void))term__dispose)();
	push(-1);
	exit(pop());
	push(0);
	return 0;
}
var hello() {
	var value = pop();
	var data = pop();
	push((var)"the value of value is ");
	printf("%s\n",(char*)pop());
	push((var)value);
	printf("%ld",pop());
	push((var)data);
	printf("%s\n",(char*)pop());
	push(0);
	return 0;
}
var stack[MAX_STACK + 1];
var sp = 0;
int main(int argc, char *argv[]) {
	push((var)argv);
	push((var)argc);
	start();
	return (int)pop();
}
