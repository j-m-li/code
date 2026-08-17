typedef long var;
#include "../src/std.h"
var print_hi();
#define MY_CONST 3
var array_of_integer[] = {
1,2,3,4};
unsigned char array_of_bytes[] = {
65,66,67,68,69,0};
var four_args();
struct my_struct {
	var one;
	var next;
	var three;
	var four;
};
var my_struct__init();
var my_struct__dispose();
var my_struct__print_this();
var my_struct__do_something();
var my_struct__call_hello();
var startup();
var check_zero();
var hello_world();
var ret_ten();
var (*wrapper(struct trip *st, char *clas, char *id, int *argc))() {
		if (!id_cmp("print_hi", id)) {
			*argc = 0;
			return &print_hi;
		}
		if (!id_cmp("four_args", id)) {
			*argc = 4;
			return &four_args;
		}
		if (!id_cmp("startup", id)) {
			*argc = 2;
			return &startup;
		}
		if (!id_cmp("check_zero", id)) {
			*argc = 1;
			return &check_zero;
		}
		if (!id_cmp("hello_world", id)) {
			*argc = 0;
			return &hello_world;
		}
		if (!id_cmp("ret_ten", id)) {
			*argc = 0;
			return &ret_ten;
		}
	if (!id_cmp("my_struct", clas)) {
		if (!id_cmp("init", id)) {
			*argc = 1;
			return &my_struct__init;
		}
		if (!id_cmp("dispose", id)) {
			*argc = 1;
			return &my_struct__dispose;
		}
		if (!id_cmp("print_this", id)) {
			*argc = 1;
			return &my_struct__print_this;
		}
		if (!id_cmp("do_something", id)) {
			*argc = 2;
			return &my_struct__do_something;
		}
		if (!id_cmp("call_hello", id)) {
			*argc = 1;
			return &my_struct__call_hello;
		}
	}
	return (void*)0;
}
var print_hi()
{
((var(*)())print)((var)"hi!\n");
	return 0;
}
var four_args(var a, var b, var c, var d)
{
return 0;
}
var startup(var argc, var argv)
{
	var  x, str, a, b, f;
	struct my_struct *s = (void*)0;
((var(*)())print)(((var*)(argv))[0]);
((var(*)())print)(((var*)(argv))[1]);
x = MY_CONST;
str = (var)"A string litteral YO\n multi-line\n";
a = (var)malloc(sizeof(var) * (10)) ;
b = (var)malloc(3) ;
(*((var*)&s)) = (var)malloc(sizeof(struct my_struct)) ;
((var(*)())my_struct__init)((var)s);
((var(*)())print)(str);
((var*)(a))[x] = 25;
((var*)(a))[0] = ((var*)(a))[x];
((var*)(a))[1] = 1 +  2 -  3;
((var*)(a))[1] = 1 +  2 -  (-3 * 4) / 5 % 6;
((var*)(a))[1] = 12 * 5+ (5 * (32 -  4)) +  3 -  203 ;
((var(*)())check_zero)(((var*)(a))[1]);
((var*)(a))[1] = ((3 *(2*x+ 1)) / 2) -  10;
((var(*)())check_zero)(((var*)(a))[1]);
((var*)(a))[1] = ((1 *(2*4+ 3))) -  11;
((var(*)())check_zero)(((var*)(a))[1]);
((var*)(a))[1] = 1- -2 -  3;
((var(*)())check_zero)(((var*)(a))[1]);
((var*)(a))[1] = 1- 2 +  1;
((var(*)())check_zero)(((var*)(a))[1]);
((var*)(a))[1] = 3*4+ 5 -  17;
((var(*)())check_zero)(((var*)(a))[1]);
((var*)(a))[1] = 3+ 4*5 -  23;
((var(*)())check_zero)(((var*)(a))[1]);
((var*)(a))[1] = 3*(4+ 5) -  27;
((var(*)())check_zero)(((var*)(a))[1]);
((var*)(a))[1] = 3*(4- -5) -  27;
((var(*)())check_zero)(((var*)(a))[1]);
((unsigned char*)b)[ 0] = 65;
((unsigned char*)b)[ 1] = (((unsigned char*)b)[ 0] +  2);
((unsigned char*)b)[ 2] = 0;
((var(*)())print)(b);
((var(*)())print)((var)"\n");
((var(*)())hello_world)();
((var(*)())print)((var)"\n");
f = (var)my_struct__call_hello ;
((var(*)())f)(((var)0));
((var(*)())print10)(((var(*)())ret_ten)());
((var(*)())print)((var)"\n");
{
	var if__cond = x -  5 ;
if ((if__cond > 0)) {
((var(*)())print)((var)"x greater than 5");
} else if ((if__cond < 0)) {
((var(*)())print)((var)"x less than 5");
} else if ((if__cond == 0)) {
((var(*)())print)((var)"x equal 5");
}
}
((var(*)())print)((var)"\n");
{
	var if__cond = x ;
if ((if__cond == 1)) {
((var(*)())print)((var)"x = 1");
} else if ((if__cond == 2)||(if__cond == 3)||(if__cond == 5)) {
((var(*)())print)((var)"x = 2");
} else if ((if__cond == -20)) {
((var(*)())print)((var)"x = -20");
} else if ((if__cond == 65)||(if__cond == 66)||(if__cond == 67)||(if__cond == 68)) {
((var(*)())print)((var)"x = A");
} else if ((if__cond != 0)) {
((var(*)())print)((var)"x not equal zero");
} else if ((if__cond >= 0)) {
((var(*)())print)((var)"x greater or equal zero");
} else if ((if__cond <= 0)) {
((var(*)())print)((var)"x less than or equal zero");
}
}
((var(*)())print)((var)"\n is 7 = ");
((var(*)())print10)((1+ 2*3));
((var(*)())print)((var)"\n");
((var(*)())print10)(((1+ 2)*3));
((var(*)())print)((var)"\n");
while (1) {
{
	var if__cond = x ;
if ((if__cond <= 0)) {
	break;
}
}
((var(*)())print10)(x);
((var(*)())print)((var)"\n");
x = x -  1;
{
	var if__cond = x -  2 ;
if ((if__cond <= 0)) {
	continue;
}
}
{
	var if__cond = x -  2 ;
if ((if__cond < 0)) {
	break;
}
}
}
((var(*)())my_struct__do_something)((var)s, (var)7);
((var(*)())my_struct__dispose)((var)s);
((var(*)())print)((var)"\n program ");
((var(*)())print)(((var*)(argv))[0]);
((var(*)())print)((var)" is terminated\n");
command((void*)0, (var)(var)"ref my_struct x;x.call_hello;            ", (var)30);
(*((var*)&s)) = ((var(*)())singleton)();
((var(*)())print10)(((var*)(s))[0]);
((var(*)())print)((var)"\n");
return 0;
}
var check_zero(var z)
{
{
	var if__cond = (z) ;
if ((if__cond != 0)) {
((var(*)())print10)(z);
((var(*)())print)((var)" <> 0 !! ERROR ERROR ERROR ERROR ERROR\n");
((var(*)())quit)(-1);
}
}
	return 0;
}
var hello_world()
{
((var(*)())print)((var)"Hello World!\n");
	return 0;
}
var ret_ten()
{
return 10;
}
var my_struct__init(var self)
{
	struct my_struct *__self = (void*)self;(void)__self;
__self->one = 1;
__self->next = ((var)0);
__self->three = 3;
__self->four = (var)"four!";
	return 0;
}
var my_struct__dispose(var self)
{
	struct my_struct *__self = (void*)self;(void)__self;
((var(*)())print)((var)"delete this\n");
free((void*)(self));
((var(*)())print)((var)"ok\n");
	return 0;
}
var my_struct__print_this(var self)
{
	struct my_struct *__self = (void*)self;(void)__self;
((var(*)())print)((var)"this pointer: ");
((var(*)())print10)(self);
((var(*)())print)((var)"\n");
	return 0;
}
var my_struct__do_something(var self, var inc)
{
	struct my_struct *__self = (void*)self;(void)__self;
	var  s, tmp;
__self->next = __self->next +  inc;
((var(*)())print)((var)"\n");
((var(*)())print10)(__self->next);
((var(*)())print)((var)"\n");
((var(*)())my_struct__print_this)(self);
s = ((var(*)())file__size)((var)"README.md");
((var(*)())print)((var)"\n");
((var(*)())print10)(s);
((var(*)())print)((var)"\n");
((var(*)())print10)(((var(*)())file__size)((var)"README.md"));
((var(*)())print)((var)"\n");
((var(*)())print)(__self->four);
((var(*)())print)((var)" ");
((var(*)())print10)(((var(*)())str_cmp)(__self->four, (var)(var)"four! "));
((var(*)())print)((var)"\n");
tmp = ((var(*)())file__load)((var)"README.md", (var)0, (var)((var(*)())file__size)((var)"README.md"));
((var(*)())print)(tmp);
free((void*)(tmp));
tmp = ((var(*)())folder__list)((var)((var)"."));
((var(*)())print)((var)"FOLDER:\n");
((var(*)())print)(tmp);
free((void*)(tmp));
((var(*)())four_args)((var)"bin/test.txt", (var)-1, (var)(var)"hello", (var)3);
((var(*)())file__save)((var)"bin/test.txt", (var)-1, (var)(var)"hello", (var)3);
((var(*)())file__save)((var)"bin/test.txt", (var)7, (var)(var)"!", (var)1);
s = ((var(*)())str_dup)((var)"\n\nYo!");
((var(*)())print)(s);
free((void*)(s));
((var(*)())print)(array_of_bytes);
((var(*)())print10)(((var*)(array_of_integer))[1]);
((var(*)())print)((var)"\n");
((var(*)())print_hi)();
((var(*)())print)((var)"\n");
return __self->one;
}
var my_struct__call_hello(var self)
{
	struct my_struct *__self = (void*)self;(void)__self;
((var(*)())print)((var)"This should be 0: ");
((var(*)())print10)(self);
((var(*)())print)((var)"\n");
((var(*)())hello_world)();
	return 0;
}
int main(int argc, char *argv[]) {
	return startup((var)argc,(var)argv);
}
