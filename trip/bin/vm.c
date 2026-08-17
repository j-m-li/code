typedef long var;
#include "../src/std.h"
#define BLOCK_SIZE 512
#define MEM_SIZE 32768
#define MINUS_ONE 256
#define PLUS_ONE 1
#define RESET_VECTOR 0
#define ALU_ADD_SUB 0
#define ALU_DIV2 1
#define ALU_DIV3 2
#define ALU_MUL2 3
#define ALU_MUL3 4
#define ALU_SET 5
#define ALU_BAD 6
#define ALU_SEL_REG 0
#define ALU_SEL_IMM 1
#define ALU_SEL_PC 2
#define ALU_SEL_CSR 3
#define CMP_EQ 0
#define CMP_NE 1
#define CMP_LT 2
#define CMP_GT 3
#define WRITE_SEL_ALU 0
#define WRITE_SEL_LOAD 1
#define WRITE_SEL_NEXT_PC 2
#define WRITE_SEL_CSR 3
struct vm_fetch {
	var I_reset;
	var I_branch;
	var I16_branch_vector;
	var I_trap;
	var I_mret;
	var I16_trap_vector;
	var I16_mret_vector;
	var I_stall;
	var I_invalidate;
	var O16_fetch_address;
	var I16_fetch_data;
	var O16_pc_out;
	var O16_next_pc_out;
	var O16_instruction_out;
	var O_valid_out;
	var V16_pc;
};
var vm_fetch__new();
var vm_fetch__dispose();
var vm_fetch__always();
var vm_fetch__clk();
struct vm3o3 {
	var file_name_;
	var file_length_;
	var file_pos_;
	var file_buf_;
	var power_;
	var R;
	var PC;
	var SP;
	var FLAGS;
	var MEM;
	var if_next_PC;
	var if_branch_PC;
	var if_instr;
	var id_instr;
	var fetch;
	var test;
};
var vm3o3__init();
var vm3o3__dispose();
var vm3o3__read_block();
var vm3o3__bad();
var vm3o3__sum3();
var vm3o3__cons3();
var vm3o3__any3();
var vm3o3__add();
var vm3o3__div2();
var vm3o3__div3();
var vm3o3__mul2();
var vm3o3__mul3();
var vm3o3__neg();
var vm3o3__clrt();
var vm3o3__post();
var vm3o3__negt();
var vm3o3__gett();
var vm3o3__ldi();
var vm3o3__bgt();
var vm3o3__blt();
var vm3o3__bra();
var vm3o3__ld();
var vm3o3__st();
var vm3o3__cmp();
var vm3o3__decode();
var vm3o3__execute();
var vm3o3__memory();
var vm3o3__writeback();
var vm3o3__pipeline();
var vm3o3__run();
var set_trit();
var get_trit();
var t2b();
var tprint10();
var startup();
var (*wrapper(struct trip *st, char *clas, char *id, int *argc))() {
		if (!id_cmp("set_trit", id)) {
			*argc = 3;
			return &set_trit;
		}
		if (!id_cmp("get_trit", id)) {
			*argc = 2;
			return &get_trit;
		}
		if (!id_cmp("t2b", id)) {
			*argc = 1;
			return &t2b;
		}
		if (!id_cmp("tprint10", id)) {
			*argc = 1;
			return &tprint10;
		}
		if (!id_cmp("startup", id)) {
			*argc = 2;
			return &startup;
		}
	if (!id_cmp("vm_fetch", clas)) {
		if (!id_cmp("new", id)) {
			*argc = 1;
			return &vm_fetch__new;
		}
		if (!id_cmp("dispose", id)) {
			*argc = 1;
			return &vm_fetch__dispose;
		}
		if (!id_cmp("always", id)) {
			*argc = 1;
			return &vm_fetch__always;
		}
		if (!id_cmp("clk", id)) {
			*argc = 1;
			return &vm_fetch__clk;
		}
	}
	if (!id_cmp("vm3o3", clas)) {
		if (!id_cmp("init", id)) {
			*argc = 1;
			return &vm3o3__init;
		}
		if (!id_cmp("dispose", id)) {
			*argc = 1;
			return &vm3o3__dispose;
		}
		if (!id_cmp("read_block", id)) {
			*argc = 2;
			return &vm3o3__read_block;
		}
		if (!id_cmp("bad", id)) {
			*argc = 3;
			return &vm3o3__bad;
		}
		if (!id_cmp("sum3", id)) {
			*argc = 3;
			return &vm3o3__sum3;
		}
		if (!id_cmp("cons3", id)) {
			*argc = 3;
			return &vm3o3__cons3;
		}
		if (!id_cmp("any3", id)) {
			*argc = 3;
			return &vm3o3__any3;
		}
		if (!id_cmp("add", id)) {
			*argc = 3;
			return &vm3o3__add;
		}
		if (!id_cmp("div2", id)) {
			*argc = 2;
			return &vm3o3__div2;
		}
		if (!id_cmp("div3", id)) {
			*argc = 2;
			return &vm3o3__div3;
		}
		if (!id_cmp("mul2", id)) {
			*argc = 2;
			return &vm3o3__mul2;
		}
		if (!id_cmp("mul3", id)) {
			*argc = 2;
			return &vm3o3__mul3;
		}
		if (!id_cmp("neg", id)) {
			*argc = 2;
			return &vm3o3__neg;
		}
		if (!id_cmp("clrt", id)) {
			*argc = 3;
			return &vm3o3__clrt;
		}
		if (!id_cmp("post", id)) {
			*argc = 3;
			return &vm3o3__post;
		}
		if (!id_cmp("negt", id)) {
			*argc = 3;
			return &vm3o3__negt;
		}
		if (!id_cmp("gett", id)) {
			*argc = 3;
			return &vm3o3__gett;
		}
		if (!id_cmp("ldi", id)) {
			*argc = 2;
			return &vm3o3__ldi;
		}
		if (!id_cmp("bgt", id)) {
			*argc = 2;
			return &vm3o3__bgt;
		}
		if (!id_cmp("blt", id)) {
			*argc = 2;
			return &vm3o3__blt;
		}
		if (!id_cmp("bra", id)) {
			*argc = 2;
			return &vm3o3__bra;
		}
		if (!id_cmp("ld", id)) {
			*argc = 3;
			return &vm3o3__ld;
		}
		if (!id_cmp("st", id)) {
			*argc = 3;
			return &vm3o3__st;
		}
		if (!id_cmp("cmp", id)) {
			*argc = 3;
			return &vm3o3__cmp;
		}
		if (!id_cmp("decode", id)) {
			*argc = 2;
			return &vm3o3__decode;
		}
		if (!id_cmp("execute", id)) {
			*argc = 2;
			return &vm3o3__execute;
		}
		if (!id_cmp("memory", id)) {
			*argc = 2;
			return &vm3o3__memory;
		}
		if (!id_cmp("writeback", id)) {
			*argc = 2;
			return &vm3o3__writeback;
		}
		if (!id_cmp("pipeline", id)) {
			*argc = 2;
			return &vm3o3__pipeline;
		}
		if (!id_cmp("run", id)) {
			*argc = 2;
			return &vm3o3__run;
		}
	}
	return (void*)0;
}
var set_trit(var a, var n, var v)
{
	var  x, x1, i, a0;
x = 256;
i = 8;
a0 = a;
while (1) {
	i = (i -  1);
	x1 = (x / 2);
	{
		var if__cond = (x1) ;
		if ((if__cond == 0)) {
break;
		}
	}
	{
		var if__cond = (i -  n) ;
		if ((if__cond == 0)) {
			{
				var if__cond = ((a0 % x) / x1) ;
				if ((if__cond != 0)) {
					a0 = (a0 -  x1);
				}
			}
			{
				var if__cond = ((a0 % (x*256)) / (x1 * 256)) ;
				if ((if__cond != 0)) {
					a0 = (a0 -  (x1*256));
				}
			}
			{
				var if__cond = (v) ;
				if ((if__cond == PLUS_ONE)) {
					a0 = (a0 +  x1);
				} else if ((if__cond == MINUS_ONE)) {
					a0 = (a0 +  (256 * x1));
				}
			}
break;
		}
	}
	x = x1;
}
return a0;
}
var get_trit(var a, var n)
{
	var  x, x1, i, a0;
x = 256;
i = 8;
while (1) {
	i = (i -  1);
	x1 = (x / 2);
	a0 = 0;
	{
		var if__cond = ((a % x) / x1) ;
		if ((if__cond != 0)) {
			a0 = PLUS_ONE;
		}
	}
	{
		var if__cond = ((a % (x*256)) / (x1 * 256)) ;
		if ((if__cond != 0)) {
			a0 = MINUS_ONE;
		}
	}
	x = x1;
	{
		var if__cond = (i -  n) ;
		if ((if__cond == 0)) {
break;
		}
	}
	{
		var if__cond = (x) ;
		if ((if__cond == 0)) {
break;
		}
	}
}
return a0;
}
var t2b(var a)
{
	var  i, s;
i = 8;
s = 0;
while (1) {
	{
		var if__cond = (i) ;
		if ((if__cond == 0)) {
break;
		}
	}
	i = (i -  1);
	{
		var if__cond = ((var(*)())get_trit)(a, (var)i) ;
		if ((if__cond == MINUS_ONE)) {
			s = (s +  s +  s) -  1;
		} else if ((if__cond == 0)) {
			s = (s +  s +  s);
		} else if ((if__cond == PLUS_ONE)) {
			s = (s +  s +  s) +  1;
		}
	}
}
return s;
}
var tprint10(var a)
{
((var(*)())print10)(	((var(*)())t2b)(a));
	return 0;
}
var startup(var argc, var argv)
{
	struct vm3o3 *s = (void*)0;
(*((var*)&s)) = (var)malloc(sizeof(struct vm3o3)) ;
((var(*)())vm3o3__init)((var)s);
((var(*)())vm3o3__run)((var)s, (var)((var*)(argv))[1]);
((var(*)())vm3o3__dispose)((var)s);
return 0;
}
var vm_fetch__new(var self)
{
	struct vm_fetch *__self = (void*)self;(void)__self;
return (var)malloc(sizeof(struct vm_fetch));
}
var vm_fetch__dispose(var self)
{
	struct vm_fetch *__self = (void*)self;(void)__self;
free((void*)(self));
	return 0;
}
var vm_fetch__always(var self)
{
	struct vm_fetch *__self = (void*)self;(void)__self;
	return 0;
}
var vm_fetch__clk(var self)
{
	struct vm_fetch *__self = (void*)self;(void)__self;
	var  pc, next_pc;
pc = __self->V16_pc;
next_pc = (pc +  1);
{
	var if__cond = (__self->I_reset) ;
	if ((if__cond != 0)) {
		pc = RESET_VECTOR;
	} else if ((if__cond == 0)) {
		{
			var if__cond = (__self->I_trap) ;
			if ((if__cond != 0)) {
				pc = __self->I16_trap_vector;
			} else if ((if__cond == 0)) {
				{
					var if__cond = (__self->I_mret) ;
					if ((if__cond != 0)) {
						pc = __self->I16_mret_vector;
					} else if ((if__cond == 0)) {
						{
							var if__cond = (__self->I_branch) ;
							if ((if__cond != 0)) {
								pc = __self->I16_branch_vector;
							} else if ((if__cond == 0)) {
								{
									var if__cond = (__self->I_stall +  __self->I_invalidate);
									if ((if__cond == 0)) {
										pc = next_pc;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
{
	var if__cond = (__self->I_stall) ;
	if ((if__cond != 0)) {
		__self->O_valid_out = __self->O_valid_out;
	} else if ((if__cond == 0)) {
		__self->O_valid_out = 1;
		__self->O16_pc_out = __self->V16_pc ;
		__self->O16_next_pc_out = next_pc ;
		__self->O16_instruction_out = __self->I16_fetch_data ;
	}
}
{
	var if__cond = (__self->I_invalidate) ;
	if ((if__cond != 0)) {
		__self->O_valid_out = 0;
	}
}
__self->V16_pc = pc;
__self->O16_fetch_address = __self->V16_pc;
	return 0;
}
var vm3o3__init(var self)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
__self->fetch = ((var(*)())vm_fetch__new)((var)__self->fetch);
((var(*)())vm_fetch__clk)((var)__self->fetch);
((struct vm_fetch *)__self->fetch)->I_reset = 1;
__self->R = ((struct vm_fetch *)__self->fetch)->I_reset;
__self->file_buf_ = 0;
__self->MEM = (var)malloc(MEM_SIZE);
__self->R = (var)malloc(sizeof(var) * (9));
	return 0;
}
var vm3o3__dispose(var self)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
free((void*)(__self->MEM));
free((void*)(self));
	return 0;
}
var vm3o3__read_block(var self, var pos)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	var  l, i;
free((void*)(__self->file_buf_));
__self->file_buf_ = 0;
{
	var if__cond = (pos -  __self->file_length_) ;
	if ((if__cond > 0)) {
		__self->power_ = 0;
		return 0 ;
	}
}
l = BLOCK_SIZE;
{
	var if__cond = (pos +  l -  __self->file_length_) ;
	if ((if__cond > 0)) {
		l = (__self->file_length_ -  pos);
	}
}
__self->file_buf_ = ((var(*)())file__load)(__self->file_name_, (var)pos, (var)l);
__self->file_pos_ = pos;
i = 0;
while (1) {
	{
		var if__cond = (l -  i) ;
		if ((if__cond <= 0)) {
break;
		}
	}
	((unsigned char*)__self->MEM)[ i] = ((unsigned char*)__self->file_buf_)[ i];
i = (i +  1);
}
return 0;
}
var vm3o3__bad(var self, var a, var b)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
return (a +  b);
}
var vm3o3__sum3(var self, var a, var b)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	return 0;
}
var vm3o3__cons3(var self, var a, var b)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	return 0;
}
var vm3o3__any3(var self, var a, var b)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	return 0;
}
var vm3o3__add(var self, var a, var b)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	var  i;
	var  o, c, s;
c = 0;
i = 0;
o = 0;
while (1) {
{
	var if__cond = (i) ;
if ((if__cond == 8)) {
break;
}
}
s = 0;
{
	var if__cond = (c) ;
if ((if__cond == -1)) {
c = 0;
{
	var if__cond = 	((var(*)())get_trit)(a, (var)i) ;
	if ((if__cond == MINUS_ONE)) {
		{
			var if__cond = ((var(*)())get_trit)(b, (var)i) ;
			if ((if__cond == MINUS_ONE)) {
				c = -1;
			} else if ((if__cond == 0)) {
				c = -1;
				s = 1;
			} else if ((if__cond == PLUS_ONE)) {
				s = -1;
			}
		}
	} else if ((if__cond == 0)) {
		{
			var if__cond = ((var(*)())get_trit)(b, (var)i) ;
			if ((if__cond == MINUS_ONE)) {
				c = -1;
				s = 1;
			} else if ((if__cond == 0)) {
				s = -1;
			} else if ((if__cond == PLUS_ONE)) {
			}
		}
	} else if ((if__cond == PLUS_ONE)) {
		{
			var if__cond = ((var(*)())get_trit)(b, (var)i) ;
			if ((if__cond == MINUS_ONE)) {
				s = -1;
			} else if ((if__cond == 0)) {
			} else if ((if__cond == PLUS_ONE)) {
				s = 1;
			}
		}
	}
}
} else if ((if__cond == 0)) {
{
	var if__cond = 	((var(*)())get_trit)(a, (var)i) ;
	if ((if__cond == MINUS_ONE)) {
		{
			var if__cond = ((var(*)())get_trit)(b, (var)i) ;
			if ((if__cond == MINUS_ONE)) {
				c = -1;
				s = 1;
			} else if ((if__cond == 0)) {
				s = -1;
			} else if ((if__cond == PLUS_ONE)) {
			}
		}
	} else if ((if__cond == 0)) {
		{
			var if__cond = ((var(*)())get_trit)(b, (var)i) ;
			if ((if__cond == MINUS_ONE)) {
				s = -1;
			} else if ((if__cond == 0)) {
			} else if ((if__cond == PLUS_ONE)) {
				s = 1;
			}
		}
	} else if ((if__cond == PLUS_ONE)) {
		{
			var if__cond = ((var(*)())get_trit)(b, (var)i) ;
			if ((if__cond == MINUS_ONE)) {
			} else if ((if__cond == 0)) {
				s = 1;
			} else if ((if__cond == PLUS_ONE)) {
				c = 1;
				s = -1;
			}
		}
	}
}
} else if ((if__cond == 1)) {
c = 0;
{
	var if__cond = 	((var(*)())get_trit)(a, (var)i) ;
	if ((if__cond == MINUS_ONE)) {
		{
			var if__cond = ((var(*)())get_trit)(b, (var)i) ;
			if ((if__cond == MINUS_ONE)) {
				s = -1;
			} else if ((if__cond == 0)) {
			} else if ((if__cond == PLUS_ONE)) {
				s = 1;
			}
		}
	} else if ((if__cond == 0)) {
		{
			var if__cond = ((var(*)())get_trit)(b, (var)i) ;
			if ((if__cond == MINUS_ONE)) {
			} else if ((if__cond == 0)) {
				s = 1;
			} else if ((if__cond == PLUS_ONE)) {
				c = 1;
				s = -1;
			}
		}
	} else if ((if__cond == PLUS_ONE)) {
		{
			var if__cond = ((var(*)())get_trit)(b, (var)i) ;
			if ((if__cond == MINUS_ONE)) {
				s = 1;
			} else if ((if__cond == 0)) {
				c = 1;
				s = -1;
			} else if ((if__cond == PLUS_ONE)) {
				c = 1;
			}
		}
	}
}
}
}
{
	var if__cond = (s) ;
if ((if__cond == -1)) {
o = ((var(*)())set_trit)(o, (var)i, (var)MINUS_ONE);
} else if ((if__cond == 1)) {
o = ((var(*)())set_trit)(o, (var)i, (var)PLUS_ONE);
}
}
i = i +  1;
}
return o;
}
var vm3o3__div2(var self, var a)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	var  i, d, t;
	var  o, s, r;
	var  r1, r2, r3, r4, r5;
i = 1;
r = 0;
o = a;
s = 0;
while (1) {
{
	var if__cond = (i) ;
if ((if__cond == 8)) {
break;
}
}
r = ((var(*)())vm3o3__add)(self, (var)r, (var)((var(*)())get_trit)(o, (var)0));
o = ((var(*)())vm3o3__div3)(self, (var)o);
s = ((var(*)())vm3o3__add)(self, (var)s, (var)o);
i = i +  1;
}
r1 = ((var(*)())vm3o3__mul2)(self, (var)r) ;
r2 = ((var(*)())vm3o3__mul2)(self, (var)r1) ;
r3 = ((var(*)())vm3o3__mul2)(self, (var)r2) ;
r4 = ((var(*)())vm3o3__mul2)(self, (var)r3) ;
r5 = ((var(*)())vm3o3__mul2)(self, (var)r4) ;
r = ((var(*)())vm3o3__mul2)(self, (var)r5) ;
r = ((var(*)())vm3o3__mul2)(self, (var)r) ;
r = ((var(*)())vm3o3__div3)(self, (var)r);
r = ((var(*)())vm3o3__div3)(self, (var)r);
r = ((var(*)())vm3o3__div3)(self, (var)r);
r = ((var(*)())vm3o3__div3)(self, (var)r);
r = ((var(*)())vm3o3__div3)(self, (var)r);
s = ((var(*)())vm3o3__add)(self, (var)s, (var)r);
d = ((var(*)())vm3o3__add)(self, (var)s, (var)MINUS_ONE);
t = ((var(*)())vm3o3__add)(self, (var)s, (var)d);
t = ((var(*)())vm3o3__add)(self, (var)t, (var)((var(*)())vm3o3__neg)(self, (var)a));
{
	var if__cond = ((var(*)())t2b)(t) ;
if ((if__cond >= 0)) {
return d;
}
}
return s ;
}
var vm3o3__div3(var self, var a)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	var  i;
	var  o;
i = 1;
o = 0;
while (1) {
{
	var if__cond = (i) ;
if ((if__cond == 8)) {
break;
}
}
o = ((var(*)())set_trit)(o, (var)(i- 1), (var)(((var(*)())get_trit)(a, (var)i)));
i = i +  1;
}
return o;
}
var vm3o3__mul2(var self, var a)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
return ((var(*)())vm3o3__add)(self, (var)a, (var)a);
}
var vm3o3__mul3(var self, var a)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	var  i;
	var  o;
i = 1;
o = 0;
while (1) {
{
	var if__cond = (i) ;
if ((if__cond == 8)) {
break;
}
}
o = ((var(*)())set_trit)(o, (var)(i), (var)(((var(*)())get_trit)(a, (var)(i- 1))));
i = i +  1;
}
return o;
}
var vm3o3__neg(var self, var a)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	var  i;
	var  o;
i = 0;
o = 0;
while (1) {
{
	var if__cond = (i) ;
if ((if__cond == 8)) {
break;
}
}
{
	var if__cond = ((var(*)())get_trit)(a, (var)i) ;
if ((if__cond == MINUS_ONE)) {
o = ((var(*)())set_trit)(o, (var)i, (var)PLUS_ONE);
} else if ((if__cond == PLUS_ONE)) {
o = ((var(*)())set_trit)(o, (var)i, (var)MINUS_ONE);
}
}
i = i +  1;
}
return o;
}
var vm3o3__clrt(var self, var a, var b)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
return ((var(*)())set_trit)(a, (var)((var(*)())t2b)(b), (var)0);
}
var vm3o3__post(var self, var a, var b)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
return ((var(*)())set_trit)(a, (var)((var(*)())t2b)(b), (var)PLUS_ONE);
}
var vm3o3__negt(var self, var a, var b)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
return ((var(*)())set_trit)(a, (var)((var(*)())t2b)(b), (var)MINUS_ONE);
}
var vm3o3__gett(var self, var a, var b)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
return ((var(*)())get_trit)(a, (var)((var(*)())t2b)(b));
}
var vm3o3__ldi(var self, var i)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
return i;
}
var vm3o3__bgt(var self, var a)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
{
	var if__cond = (__self->FLAGS) ;
if ((if__cond == PLUS_ONE)) {
}
}
	return 0;
}
var vm3o3__blt(var self, var a)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
{
	var if__cond = (__self->FLAGS) ;
if ((if__cond == MINUS_ONE)) {
}
}
	return 0;
}
var vm3o3__bra(var self, var a)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	return 0;
}
var vm3o3__ld(var self, var a, var m)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	return 0;
}
var vm3o3__st(var self, var a, var m)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	return 0;
}
var vm3o3__cmp(var self, var a, var b)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
{
	var if__cond = (a -  b) ;
if ((if__cond < 0)) {
__self->FLAGS = MINUS_ONE;
} else if ((if__cond == 0)) {
__self->FLAGS = 0;
} else if ((if__cond > 0)) {
__self->FLAGS = PLUS_ONE;
}
}
	return 0;
}
var vm3o3__decode(var self, var clk)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	var  d, v;
__self->if_instr = ((var(*)())set_trit)(__self->if_instr, (var)7, (var)10);
{
	var if__cond = ((var(*)())get_trit)(__self->if_instr, (var)7) ;
if ((if__cond == MINUS_ONE)) {
} else if ((if__cond == 0)) {
} else if ((if__cond == PLUS_ONE)) {
}
}
{
	var if__cond = (((var*)(__self->R))[0]) ;
if ((if__cond == 0)) {
((var*)(__self->R))[0] = 255 * 256;
((var*)(__self->R))[0] = 255;
((var(*)())print)((var)"\n");
((var(*)())tprint10)(((var*)(__self->R))[0]);
}
}
while (1) {
{
	var if__cond = (((var*)(__self->R))[0]) ;
if ((if__cond == 0)) {
break;
}
}
d = ((var(*)())t2b)(((var(*)())vm3o3__div2)(self, (var)((var*)(__self->R))[0]));
v = (((var(*)())t2b)(((var*)(__self->R))[0]) / 2) ;
{
	var if__cond = (d -  v) ;
if ((if__cond > 0)) {
((var(*)())tprint10)(((var*)(__self->R))[0]);
((var(*)())print)((var)" ");
((var(*)())print10)(d);
((var(*)())print)((var)" ");
((var(*)())print10)(v);
((var(*)())print)((var)"\n");
{
	var if__cond = (d -  v -  1) ;
	if ((if__cond > 0)) {
((var(*)())quit)();
	}
}
{
	var if__cond = (d -  v +  1) ;
	if ((if__cond < 0)) {
((var(*)())quit)();
	}
}
{
	var if__cond = (	((var(*)())t2b)(((var*)(__self->R))[0]) % 2) ;
	if ((if__cond == 0)) {
((var(*)())quit)();
	}
}
}
}
((var*)(__self->R))[0] = ((var(*)())vm3o3__add)(self, (var)((var*)(__self->R))[0], (var)MINUS_ONE);
}
((var(*)())print)((var)"\nDONE\n");
((var*)(__self->R))[0] = ((var(*)())vm3o3__div2)(self, (var)((var*)(__self->R))[0]);
((var(*)())print)((var)" ");
((var(*)())tprint10)(((var*)(__self->R))[0]);
((var(*)())quit)();
	return 0;
}
var vm3o3__execute(var self, var clk)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	return 0;
}
var vm3o3__memory(var self, var clk)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	return 0;
}
var vm3o3__writeback(var self, var clk)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
	return 0;
}
var vm3o3__pipeline(var self, var clk)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
__self->PC = __self->if_next_PC;
__self->id_instr = __self->if_instr;
((var(*)())vm_fetch__clk)((var)__self->fetch);
((var(*)())vm3o3__decode)(self, (var)clk);
((var(*)())vm3o3__execute)(self, (var)clk);
((var(*)())vm3o3__memory)(self, (var)clk);
((var(*)())vm3o3__writeback)(self, (var)clk);
	return 0;
}
var vm3o3__run(var self, var fname)
{
	struct vm3o3 *__self = (void*)self;(void)__self;
__self->file_name_ = fname;
__self->file_pos_ = 0;
__self->file_length_ = ((var(*)())file__size)(__self->file_name_);
{
	var if__cond = (__self->file_length_) ;
if ((if__cond < 0)) {
return -1 ;
}
}
__self->power_ = 1;
((var(*)())vm3o3__read_block)(self, (var)0);
__self->PC = 0;
((var*)(__self->R))[0] = 0;
__self->if_next_PC = 0;
__self->if_branch_PC = -1;
while (1) {
{
	var if__cond = (__self->power_) ;
if ((if__cond == 0)) {
break;
}
}
((var(*)())vm3o3__pipeline)(self, (var)1);
}
return 0;
}
int main(int argc, char *argv[]) {
	return startup((var)argc,(var)argv);
}
