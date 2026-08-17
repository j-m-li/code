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
#define GETSTR(s) ((char*) string__get_buf((void*)s))
#define GETLEN(s) ((var)strlen((char*)string__get_buf((void*)s)))

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
	if (a != 0 && ((((var*)a)[-2] == (var)(b)) || (((var*)a)[-2]) == -1)) { \
		virtual__dispose((void*)a); \
	}

#define std__move(a) std___move(a, (var)__this)

#define std__move_to(a, b) std___move(a, b)

#define FAKETHIS() var __this = 1; \
		(void)__this

#define std__address_of(v) \
        ((var)&v)

#define std__or(a, b) ((a) | (b))
#define std__xor(a, b) ((a) ^ (b))
#define std__and(a, b) ((a) & (b))
#define std__sll(a, b) ((a) << (b))
#define std__slr(a, b) ((var)(((unsigned var)(a)) >> (b)))


var std__panic();
var std__sweep();
var main__main(void);
var std__lambda(var __this, var lambda_id, var status, var data, var type);

struct array;
#define array___DsizeD 1
#define array___DcidD 11
var array__new(var size, var __parent);
#define array__dispose(___this) virtual__dispose(___this)
var array___V_dispose(struct array*__this);
struct buffer;
#define buffer___DsizeD 4
#define buffer___DcidD 12
var buffer___new(struct buffer*__this, var initial_size, var take_, var __parent);
var buffer__new(var initial_size, var take_, var __parent);
#define buffer__delayed_dispose(___this) virtual__delayed_dispose(___this)
var buffer___V_delayed_dispose(struct buffer*__this);
#define buffer__dispose(___this) virtual__dispose(___this)
var buffer___V_dispose(struct buffer*__this);
var buffer__length(struct buffer*__this);
var buffer__empty(struct buffer*__this);
var buffer__delete_at(struct buffer*__this, var idx);
var buffer__set_at(struct buffer*__this, var idx, var elem);
var buffer__get_at(struct buffer*__this, var idx);
var buffer__push(struct buffer*__this, var elem);
var buffer__append(struct buffer*__this, var buf);
var buffer__set_last(struct buffer*__this, var elem);
var buffer__get_last(struct buffer*__this);
var buffer__pop(struct buffer*__this);
var buffer__unshift(struct buffer*__this, var elem);
var buffer__shift(struct buffer*__this);
struct bytes;
#define bytes___DsizeD 2
#define bytes___DcidD 13
#define bytes__dispose(___this) virtual__dispose(___this)
var bytes___V_dispose(struct bytes*__this);
var bytes__get_size(struct bytes*__this);
var bytes__set_size(struct bytes*__this, var size1);
struct console;
#define console___DsizeD 0
#define console___DcidD 14
var console__log(var str);
var console__log_str(var str);
var console__log_int(var n);
struct file;
#define file___DsizeD 1
#define file___DcidD 15
var file___new(struct file*__this, var folder, var __parent);
var file__new(var folder, var __parent);
#define file__dispose(___this) virtual__dispose(___this)
var file___V_dispose(struct file*__this);
var file__mkfolder(struct file*__this, var cb, var this_cb);
var file__mkdir(struct file*__this, var name, var cb, var this_cb);
var file__read(struct file*__this, var name, var seek, var size_, var cb, var this_cb);
var file__write(struct file*__this, var name, var data, var type, var seek, var size, var cb, var this_cb);
var file__filesize(struct file*__this, var name, var cb, var this_cb);
var file__scandir(struct file*__this, var name, var cb, var this_cb);
var file__rmdir(struct file*__this, var name, var cb, var this_cb);
var file__unlink(struct file*__this, var name, var cb, var this_cb);
struct hash;
#define hash___DsizeD 2
#define hash___DcidD 16
#define hash__Cnext 0
#define hash__Chash 1
#define hash__Ckey 2
#define hash__Cvalue 3
var hash___new(struct hash*__this, var size_, var __parent);
var hash__new(var size_, var __parent);
#define hash__dispose(___this) virtual__dispose(___this)
var hash___V_dispose(struct hash*__this);
var hash__add(struct hash*__this, var key, var value);
var hash__get(struct hash*__this, var key);
struct object;
#define object___DsizeD 1
#define object___DcidD 17
var object___new(struct object*__this, var __parent);
var object__new(var __parent);
#define object__dispose(___this) virtual__dispose(___this)
var object___V_dispose(struct object*__this);
struct worker;
#define worker___DsizeD 5
#define worker___DcidD 18
var worker___new(struct worker*__this, var lambda_this_, var lambda_, var status_, var data_, var type_, var __parent);
var worker__new(var lambda_this_, var lambda_, var status_, var data_, var type_, var __parent);
#define worker__dispose(___this) virtual__dispose(___this)
var worker___V_dispose(struct worker*__this);
var worker__process(struct worker*__this);
struct std;
#define std___DsizeD 0
#define std___DcidD 19
struct string;
#define string___DsizeD 2
#define string___DcidD 20
var string___new(struct string*__this, var alloc, var __parent);
var string__new(var alloc, var __parent);
#define string__dispose(___this) virtual__dispose(___this)
var string___V_dispose(struct string*__this);
var string__get_buf(struct string*__this);
var string__set_buf(struct string*__this, var b);
var string__get_size(struct string*__this);
var string__set_size(struct string*__this, var ns);
var string__length(struct string*__this);
var string__set_int(struct string*__this, var num);
var string__set(struct string*__this, var src);
var string__add_char(struct string*__this, var num);
var string__add(struct string*__this, var src);
var string__add_at(struct string*__this, var tl, var src);
var string__indexof(struct string*__this, var start_pos, var needle);
var string__substr(struct string*__this, var start_pos, var length_, var result);
var string__to_string(struct string*__this);
var string__to_int(struct string*__this);
var string__compare(struct string*__this, var other);
var string__get_hash(struct string*__this);
var string__get_at(struct string*__this, var at);
var string__set_at(struct string*__this, var at, var v);
struct Aclass;
#define Aclass___DsizeD 18
#define Aclass___DcidD 21
#define Aclass__Cstatic 2
#define Aclass__Cfield 3
#define Aclass__Cconst 4
#define Aclass__Cint 5
#define Aclass__Cvoid 7
#define Aclass__Cconstructor 8
#define Aclass__Cfunction 9
#define Aclass__Cmethod 10
#define Aclass__Cvirtual 11
#define Aclass__Cidentifier 12
#define Aclass__Cin 13
#define Aclass__Cout 14
#define Aclass__Cio 15
#define Aclass__Cvar 16
#define Aclass__Cbreak 17
#define Aclass__Cif 18
#define Aclass__Cwhile 19
#define Aclass__Creturn 20
#define Aclass__Cdo 21
#define Aclass__Clet 22
#define Aclass__Celse 23
#define Aclass__Celseif 24
#define Aclass__Cthis 25
#define Aclass__Cnull 26
#define Aclass__Cint_const 27
#define Aclass__Cchar_const 28
#define Aclass__Cstr_const 29
#define Aclass__Casync 32
#define Aclass__Cawait 33
#define Aclass__Clambda 34
#define Aclass__Cnew_wrap 35
#define Aclass__Ccase 36
#define Aclass__Cswitch 37
#define Aclass__Cifblock 38
#define Aclass__Cswitchblock 39
#define Aclass__Cdefault 40
#define Aclass__Croot 1000
#define Aclass__Cequal 1026
#define Aclass__Cnotequal 1027
#define Aclass__Clargerequal 1028
#define Aclass__Clesserequal 1029
#define Aclass__Clarger 1030
#define Aclass__Clesser 1031
#define Aclass__Clogicaland 1032
#define Aclass__Clogicalor 1033
#define Aclass__Cadd 1034
#define Aclass__Csub 1035
#define Aclass__Cmult 1036
#define Aclass__Cdiv 1037
#define Aclass__Cmodulo 1038
#define Aclass__Clogicalnot 1039
#define Aclass__Cparenthesis 1040
#define Aclass__Cunaryplus 1041
#define Aclass__Cunaryminus 1042
#define Aclass__Cdot 1043
#define Aclass__Ccall 1044
#define Aclass__Cindex 1045
#define Aclass__Ccomma 1046
#define Aclass__Cexpr 1047
#define Aclass__Cassign 1048
#define Aclass__Cconstant 1049
#define Aclass__Clr 1
#define Aclass__Crl 2
var Aclass___new(struct Aclass*__this, var token, var __parent);
var Aclass__new(var token, var __parent);
#define Aclass__dispose(___this) virtual__dispose(___this)
var Aclass___V_dispose(struct Aclass*__this);
#define Aclass__delayed_dispose(___this) virtual__delayed_dispose(___this)
var Aclass___V_delayed_dispose(struct Aclass*__this);
var Aclass__error(struct Aclass*__this, var err);
var Aclass__get_implements(struct Aclass*__this);
var Aclass__get_nb_lambda(struct Aclass*__this);
var Aclass__add_implements(struct Aclass*__this, var x);
var Aclass__get_members(struct Aclass*__this);
var Aclass__get_nb_fields(struct Aclass*__this);
var Aclass__set_next(struct Aclass*__this, var n);
var Aclass__get_next(struct Aclass*__this);
var Aclass__get_name(struct Aclass*__this);
var Aclass__get_const(struct Aclass*__this, var v);
var Aclass__pad(struct Aclass*__this, var p);
var Aclass__prepare_kind(struct Aclass*__this, var kind_);
var Aclass__prepare_type(struct Aclass*__this, var type_);
var Aclass__prepare_type_identifier(struct Aclass*__this, var id_);
var Aclass__prepare_set_name(struct Aclass*__this, var id_);
var Aclass__valid_member_name(struct Aclass*__this);
var Aclass__valid_param(struct Aclass*__this);
var Aclass__valid_var(struct Aclass*__this);
var Aclass__begin_else(struct Aclass*__this, var type_);
var Aclass__begin_stm(struct Aclass*__this, var type_, var orig);
var Aclass__finish_stm(struct Aclass*__this);
var Aclass__finish_const(struct Aclass*__this, var initialiser1);
var Aclass__begin_lambda(struct Aclass*__this, var id1);
var Aclass__finish_lambda(struct Aclass*__this);
var Aclass__finish_subroutine(struct Aclass*__this);
var Aclass__begin_expr(struct Aclass*__this, var orig);
var Aclass__finish_expr(struct Aclass*__this);
var Aclass__expr_op(struct Aclass*__this, var op_, var orig);
var Aclass__expr_open_par(struct Aclass*__this);
var Aclass__expr_in_par(struct Aclass*__this);
var Aclass__expr_close_par(struct Aclass*__this);
var Aclass__expr_open_index(struct Aclass*__this, var id_, var orig);
var Aclass__expr_close_index(struct Aclass*__this);
var Aclass__expr_begin_sub_call(struct Aclass*__this, var class_, var name_, var orig);
var Aclass__expr_next_expr(struct Aclass*__this, var orig);
var Aclass__expr_finish_sub_call(struct Aclass*__this);
var Aclass__expr_term(struct Aclass*__this, var term_, var orig);
var Aclass__expr_var(struct Aclass*__this, var name_, var orig);
var Aclass__expr_int_const(struct Aclass*__this, var value_, var orig);
var Aclass__expr_char_const(struct Aclass*__this, var value_, var orig);
var Aclass__expr_str_const(struct Aclass*__this, var value_, var orig);
var Aclass__expr_constant(struct Aclass*__this, var class_name_, var const_name_, var orig);
struct Alexer;
#define Alexer___DsizeD 24
#define Alexer___DcidD 22
#define Alexer__Cstring 1
#define Alexer__Cquote 2
#define Alexer__Ccomment 3
#define Alexer__Casm 4
#define Alexer__Cnumber 5
#define Alexer__Cidentifier 6
#define Alexer__Coperator 7
#define Alexer__Cerror 8
#define Alexer__Cnewline 9
#define Alexer__Cend 10
var Alexer___new(struct Alexer*__this, var __parent);
var Alexer__new(var __parent);
#define Alexer__dispose(___this) virtual__dispose(___this)
var Alexer___V_dispose(struct Alexer*__this);
var Alexer__begin(struct Alexer*__this, var file_);
var Alexer__get_at(struct Alexer*__this, var x);
var Alexer__shift(struct Alexer*__this);
var Alexer__empty(struct Alexer*__this);
var Alexer__set_enable_escape(struct Alexer*__this, var v);
var Alexer__get_string(struct Alexer*__this, var str_);
var Alexer__get_string_id(struct Alexer*__this, var str_);
var Alexer__add(struct Alexer*__this, var str_);
var Alexer__tokenize(struct Alexer*__this);
var Alexer__is_digit(struct Alexer*__this, var c);
var Alexer__is_letter(struct Alexer*__this, var c);
var Alexer__is_space(struct Alexer*__this, var c);
var Alexer__next(struct Alexer*__this);
var Alexer__validate(struct Alexer*__this, var type_);
var Alexer__error(struct Alexer*__this, var msg);
var Alexer__state(struct Alexer*__this);
var Alexer__finish(struct Alexer*__this);
struct Aemmiter;
#define Aemmiter___DsizeD 3
#define Aemmiter___DcidD 23
var Aemmiter___new(struct Aemmiter*__this, var side1, var __parent);
var Aemmiter__new(var side1, var __parent);
#define Aemmiter__dispose(___this) virtual__dispose(___this)
var Aemmiter___V_dispose(struct Aemmiter*__this);
var Aemmiter__set_class(struct Aemmiter*__this, var class1);
var Aemmiter__set_member(struct Aemmiter*__this, var mb);
#define Aemmiter__emmit(___this, par) virtual__emmit(___this, par)
var Aemmiter___V_emmit(struct Aemmiter*__this, var par);
#define Aemmiter__get_head(___this) virtual__get_head(___this)
var Aemmiter___V_get_head(struct Aemmiter*__this);
#define Aemmiter__get_data(___this) virtual__get_data(___this)
var Aemmiter___V_get_data(struct Aemmiter*__this);
#define Aemmiter__get_mid(___this) virtual__get_mid(___this)
var Aemmiter___V_get_mid(struct Aemmiter*__this);
var Aemmiter__find_param(struct Aemmiter*__this, var stri);
var Aemmiter__find_field(struct Aemmiter*__this, var stri);
var Aemmiter__find_method(struct Aemmiter*__this, var stri);
var Aemmiter__find_static(struct Aemmiter*__this, var stri);
var Aemmiter__find_local(struct Aemmiter*__this, var stri);
var Aemmiter__find_variable(struct Aemmiter*__this, var stri);
var Aemmiter__is_switch(struct Aemmiter*__this, var st, var vari);
var Aemmiter__get_switch_expr(struct Aemmiter*__this, var st);
#define Aemmiter__gen_virtuals(___this) virtual__gen_virtuals(___this)
var Aemmiter___V_gen_virtuals(struct Aemmiter*__this);
#define Aemmiter__expr_process(___this, expr) virtual__expr_process(___this, expr)
var Aemmiter___V_expr_process(struct Aemmiter*__this, var expr);
var Aemmiter__expr_gen(struct Aemmiter*__this, var expr);
var Aemmiter__error(struct Aemmiter*__this, var t, var e);
var Aemmiter__dump(struct Aemmiter*__this);
struct Aemmitc;
#define Aemmitc___DsizeD 23
#define Aemmitc___DcidD 24
var Aemmitc___new(struct Aemmitc*__this, var debug1, var __parent);
var Aemmitc__new(var debug1, var __parent);
#define Aemmitc__dispose(___this) virtual__dispose(___this)
var Aemmitc___V_dispose(struct Aemmitc*__this);
#define Aemmitc__emmit(___this, par) virtual__emmit(___this, par)
var Aemmitc___V_emmit(struct Aemmitc*__this, var par);
#define Aemmitc__get_head(___this) virtual__get_head(___this)
var Aemmitc___V_get_head(struct Aemmitc*__this);
#define Aemmitc__get_data(___this) virtual__get_data(___this)
var Aemmitc___V_get_data(struct Aemmitc*__this);
#define Aemmitc__get_mid(___this) virtual__get_mid(___this)
var Aemmitc___V_get_mid(struct Aemmitc*__this);
var Aemmitc__add_to_data(struct Aemmitc*__this, var s);
var Aemmitc__add_to_head(struct Aemmitc*__this, var s);
var Aemmitc__gen_class(struct Aemmitc*__this);
var Aemmitc__gen_debug_context(struct Aemmitc*__this, var mb);
var Aemmitc__gen_member(struct Aemmitc*__this, var mb);
var Aemmitc__gen_conditional_call(struct Aemmitc*__this, var v, var mb);
#define Aemmitc__gen_virtuals(___this) virtual__gen_virtuals(___this)
var Aemmitc___V_gen_virtuals(struct Aemmitc*__this);
var Aemmitc__gen_virtual_lambda(struct Aemmitc*__this, var nb);
var Aemmitc__pass_0(struct Aemmitc*__this, var str, var mb, var k);
var Aemmitc__pass_1(struct Aemmitc*__this, var str, var mb, var k);
var Aemmitc__pass_2(struct Aemmitc*__this, var str, var mb, var k);
var Aemmitc__pad(struct Aemmitc*__this, var depth);
var Aemmitc__find_param(struct Aemmitc*__this, var stri);
var Aemmitc__find_field(struct Aemmitc*__this, var stri);
var Aemmitc__find_method(struct Aemmitc*__this, var stri);
var Aemmitc__find_static(struct Aemmitc*__this, var stri);
var Aemmitc__find_local(struct Aemmitc*__this, var stri);
var Aemmitc__expr_call_member(struct Aemmitc*__this, var expr, var ex1, var ex2, var stri, var obj);
var Aemmitc__expr_call_sub(struct Aemmitc*__this, var expr, var ex1, var ex2, var stri, var obj, var v, var sta, var fld);
var Aemmitc__expr_gen_call(struct Aemmitc*__this, var expr);
var Aemmitc__expr_gen_sub_expr(struct Aemmitc*__this, var expr);
var Aemmitc__expr_gen_comma(struct Aemmitc*__this, var expr);
var Aemmitc__expr_gen_index(struct Aemmitc*__this, var expr);
var Aemmitc__expr_gen_par(struct Aemmitc*__this, var expr);
var Aemmitc__expr_gen_constant(struct Aemmitc*__this, var expr);
var Aemmitc__expr_gen_dot(struct Aemmitc*__this, var expr);
var Aemmitc__expr_gen_lambda(struct Aemmitc*__this, var expr);
var Aemmitc__gen_string(struct Aemmitc*__this, var s2, var value);
var Aemmitc__number(struct Aemmitc*__this, var n);
var Aemmitc__new_string(struct Aemmitc*__this, var l);
var Aemmitc__expr_gen_str_const(struct Aemmitc*__this, var expr);
var Aemmitc__expr_gen_char_const(struct Aemmitc*__this, var expr);
var Aemmitc__expr_gen0(struct Aemmitc*__this, var expr, var op);
var Aemmitc__expr_gen1(struct Aemmitc*__this, var expr, var op);
var Aemmitc__expr_gen_assign(struct Aemmitc*__this, var expr, var op);
var Aemmitc__expr_gen2(struct Aemmitc*__this, var expr, var op);
var Aemmitc__expr_gen_var(struct Aemmitc*__this, var expr);
#define Aemmitc__expr_process(___this, expr) virtual__expr_process(___this, expr)
var Aemmitc___V_expr_process(struct Aemmitc*__this, var expr);
var Aemmitc__expr_gen_case(struct Aemmitc*__this, var expr, var padde);
var Aemmitc__expr_gen(struct Aemmitc*__this, var expr);
var Aemmitc__fix_datal(struct Aemmitc*__this);
var Aemmitc__body_gen_constructor(struct Aemmitc*__this, var mb);
var Aemmitc__set_member(struct Aemmitc*__this, var m);
var Aemmitc__body_gen(struct Aemmitc*__this, var mb, var k, var vars_, var body_);
var Aemmitc__gen_type(struct Aemmitc*__this, var mb);
var Aemmitc__add_virtual(struct Aemmitc*__this, var mb);
var Aemmitc__gen_virtual_caller(struct Aemmitc*__this, var mb);
var Aemmitc__gen_method_decl(struct Aemmitc*__this, var dest, var c_name, var name, var mb, var k);
var Aemmitc__pass_3(struct Aemmitc*__this, var str, var mb, var k);
var Aemmitc__pass_4(struct Aemmitc*__this, var str, var mb, var k);
var Aemmitc__error(struct Aemmitc*__this, var t, var e);
struct Acbody;
#define Acbody___DsizeD 19
#define Acbody___DcidD 25
var Acbody___new(struct Acbody*__this, var emmiter1, var side1, var class_name1, var debug1, var expr_stk1, var __parent);
var Acbody__new(var emmiter1, var side1, var class_name1, var debug1, var expr_stk1, var __parent);
#define Acbody__dispose(___this) virtual__dispose(___this)
var Acbody___V_dispose(struct Acbody*__this);
var Acbody__add_to_data(struct Acbody*__this, var s);
var Acbody__expr_gen(struct Acbody*__this, var expr);
var Acbody__expr_gen_var(struct Acbody*__this, var expr);
var Acbody__expr_gen_case(struct Acbody*__this, var expr, var padde);
var Acbody__body_gen(struct Acbody*__this, var mb, var k, var vars_, var body1);
var Acbody__gen_debug_rec(struct Acbody*__this, var mb, var k);
var Acbody__transform_ifblock(struct Acbody*__this);
var Acbody__prepare_ifblock(struct Acbody*__this);
var Acbody__gen_if(struct Acbody*__this);
var Acbody__gen_return(struct Acbody*__this);
var Acbody__gen_switch(struct Acbody*__this);
var Acbody__gen_while(struct Acbody*__this);
var Acbody__gen_do(struct Acbody*__this);
var Acbody__gen_let(struct Acbody*__this);
var Acbody__next_statement(struct Acbody*__this);
var Acbody__gen_statements(struct Acbody*__this);
var Acbody__pad(struct Acbody*__this, var padde);
struct Aexpr;
#define Aexpr___DsizeD 10
#define Aexpr___DcidD 26
var Aexpr___new(struct Aexpr*__this, var op1, var precedence1, var associativity1, var __parent);
var Aexpr__new(var op1, var precedence1, var associativity1, var __parent);
#define Aexpr__dispose(___this) virtual__dispose(___this)
var Aexpr___V_dispose(struct Aexpr*__this);
#define Aexpr__delayed_dispose(___this) virtual__delayed_dispose(___this)
var Aexpr___V_delayed_dispose(struct Aexpr*__this);
var Aexpr__clear_data(struct Aexpr*__this);
var Aexpr__add_data(struct Aexpr*__this, var value);
var Aexpr__get_data(struct Aexpr*__this);
var Aexpr__merge_data(struct Aexpr*__this, var buf);
var Aexpr__data_to_string(struct Aexpr*__this, var s);
var Aexpr__get_origin(struct Aexpr*__this);
var Aexpr__set_origin(struct Aexpr*__this, var orig);
var Aexpr__get_right(struct Aexpr*__this);
var Aexpr__set_right(struct Aexpr*__this, var r);
var Aexpr__get_left(struct Aexpr*__this);
var Aexpr__set_left(struct Aexpr*__this, var l);
var Aexpr__get_parent(struct Aexpr*__this);
var Aexpr__set_parent(struct Aexpr*__this, var p);
var Aexpr__get_value2(struct Aexpr*__this);
var Aexpr__set_value2(struct Aexpr*__this, var v);
var Aexpr__get_value(struct Aexpr*__this);
var Aexpr__set_value(struct Aexpr*__this, var v);
var Aexpr__get_op(struct Aexpr*__this);
var Aexpr__get_flags(struct Aexpr*__this);
var Aexpr__set_flags(struct Aexpr*__this, var flags_);
var Aexpr__set_precedence(struct Aexpr*__this, var p);
var Aexpr__get_precedence(struct Aexpr*__this);
var Aexpr__get_associativity(struct Aexpr*__this);
var Aexpr__close(struct Aexpr*__this, var op_);
var Aexpr__add(struct Aexpr*__this, var ex);
var Aexpr__dump(struct Aexpr*__this, var depth);
var Aexpr__is_equal_comp1(struct Aexpr*__this, var v);
var Aexpr__get_case_expr1(struct Aexpr*__this);
var Aexpr__get_switch_expr(struct Aexpr*__this);
var Aexpr__get_case_expr(struct Aexpr*__this, var pos);
var Aexpr__is_equal_comp(struct Aexpr*__this, var v);
struct Amember;
#define Amember___DsizeD 10
#define Amember___DcidD 27
var Amember___new(struct Amember*__this, var kind1, var type1, var type_id1, var name1, var __parent);
var Amember__new(var kind1, var type1, var type_id1, var name1, var __parent);
#define Amember__dispose(___this) virtual__dispose(___this)
var Amember___V_dispose(struct Amember*__this);
var Amember__copy(struct Amember*__this);
var Amember__pre_copy(struct Amember*__this, var cp);
var Amember__take(struct Amember*__this);
var Amember__copy_params(struct Amember*__this, var o, var cp);
var Amember__dispose_body(struct Amember*__this);
var Amember__get_kind(struct Amember*__this);
var Amember__get_type(struct Amember*__this);
var Amember__get_type_string(struct Amember*__this);
var Amember__get_type_id(struct Amember*__this);
var Amember__get_name(struct Amember*__this);
var Amember__get_name_string(struct Amember*__this);
var Amember__get_initial_value(struct Amember*__this);
var Amember__set_initial_value(struct Amember*__this, var initial_value1);
var Amember__set_index(struct Amember*__this, var index1);
var Amember__get_index(struct Amember*__this);
var Amember__get_body(struct Amember*__this);
var Amember__get_vars(struct Amember*__this);
var Amember__get_params(struct Amember*__this);
var Amember__add_param(struct Amember*__this, var kind1, var type1, var type_id1, var name1);
var Amember__add_var(struct Amember*__this, var kind1, var type1, var type_id1, var name1);
var Amember__add_statement(struct Amember*__this, var statement1);
struct Aparser;
#define Aparser___DsizeD 8
#define Aparser___DcidD 28
#define Aparser__Croot 1
#define Aparser__Cclass_dec 2
#define Aparser__Cstatement 3
#define Aparser__Cstatements 4
#define Aparser__Cexpression 5
#define Aparser__Creturn_statem1 6
#define Aparser__Cexpression1 7
#define Aparser__Cterm 8
#define Aparser__Cterm1 9
#define Aparser__Cterm2 10
#define Aparser__Cexpr_list 11
#define Aparser__Cexpr_list1 12
#define Aparser__Csub_call1 13
#define Aparser__Clet_statem1 14
#define Aparser__Clet_statem2 15
#define Aparser__Cdo_statem1 16
#define Aparser__Cwhile_statem1 17
#define Aparser__Cwhile_statem2 18
#define Aparser__Csubrout_body1 19
#define Aparser__Csubroutine_dec 20
#define Aparser__Cclass_dec1 21
#define Aparser__Cif_statem1 22
#define Aparser__Cif_statem2 23
#define Aparser__Celse_statem 24
#define Aparser__Celse_statem1 25
#define Aparser__Celse_statem2 26
#define Aparser__Clambda_body1 27
var Aparser___new(struct Aparser*__this, var __parent);
var Aparser__new(var __parent);
#define Aparser__dispose(___this) virtual__dispose(___this)
var Aparser___V_dispose(struct Aparser*__this);
var Aparser__get_data(struct Aparser*__this);
var Aparser__get_next(struct Aparser*__this);
var Aparser__release(struct Aparser*__this);
var Aparser__parse(struct Aparser*__this, var lexer_);
var Aparser__get_const(struct Aparser*__this, var cls, var v);
var Aparser__error(struct Aparser*__this, var e);
var Aparser__push(struct Aparser*__this, var step_);
var Aparser__pop(struct Aparser*__this);
var Aparser__root(struct Aparser*__this);
var Aparser__class_dec(struct Aparser*__this);
var Aparser__class_dec1(struct Aparser*__this);
var Aparser__class_var_dec(struct Aparser*__this);
var Aparser__var_name(struct Aparser*__this);
var Aparser__type(struct Aparser*__this);
var Aparser__clas_const_dec(struct Aparser*__this);
var Aparser__subroutine_dec(struct Aparser*__this);
var Aparser__param_list(struct Aparser*__this);
var Aparser__direction(struct Aparser*__this);
var Aparser__lambda_body(struct Aparser*__this);
var Aparser__lambda_body1(struct Aparser*__this);
var Aparser__subrout_body(struct Aparser*__this);
var Aparser__subrout_body1(struct Aparser*__this);
var Aparser__var_dec(struct Aparser*__this);
var Aparser__statements(struct Aparser*__this);
var Aparser__statement(struct Aparser*__this);
var Aparser__if_statem(struct Aparser*__this, var type_);
var Aparser__if_statem1(struct Aparser*__this);
var Aparser__else_statem(struct Aparser*__this);
var Aparser__else_statem1(struct Aparser*__this);
var Aparser__while_statem(struct Aparser*__this);
var Aparser__while_statem1(struct Aparser*__this);
var Aparser__while_statem2(struct Aparser*__this);
var Aparser__return_statem(struct Aparser*__this);
var Aparser__return_statem1(struct Aparser*__this);
var Aparser__dolet_statem(struct Aparser*__this);
var Aparser__let_statem(struct Aparser*__this, var id);
var Aparser__let_statem1(struct Aparser*__this);
var Aparser__let_statem2(struct Aparser*__this);
var Aparser__do_statem(struct Aparser*__this, var id);
var Aparser__do_statem1(struct Aparser*__this);
var Aparser__expression(struct Aparser*__this);
var Aparser__expression1(struct Aparser*__this);
var Aparser__op(struct Aparser*__this);
var Aparser__term(struct Aparser*__this);
var Aparser__subrout_call(struct Aparser*__this, var id);
var Aparser__term1(struct Aparser*__this);
var Aparser__term2(struct Aparser*__this);
var Aparser__sub_call(struct Aparser*__this, var class_, var id);
var Aparser__sub_call1(struct Aparser*__this);
var Aparser__expr_list(struct Aparser*__this);
var Aparser__expr_list1(struct Aparser*__this);
var Aparser__eat(struct Aparser*__this);
var Aparser__match_id(struct Aparser*__this, var id);
var Aparser__match_op(struct Aparser*__this, var id);
var Aparser__match_newline(struct Aparser*__this);
var Aparser__match_str(struct Aparser*__this, var id);
var Aparser__state_machine(struct Aparser*__this);
struct Astatement;
#define Astatement___DsizeD 6
#define Astatement___DcidD 29
var Astatement___new(struct Astatement*__this, var type1, var parent1, var depth1, var __parent);
var Astatement__new(var type1, var parent1, var depth1, var __parent);
#define Astatement__dispose(___this) virtual__dispose(___this)
var Astatement___V_dispose(struct Astatement*__this);
var Astatement__get_type(struct Astatement*__this);
var Astatement__set_type(struct Astatement*__this, var type1);
var Astatement__get_depth(struct Astatement*__this);
var Astatement__get_parent(struct Astatement*__this);
var Astatement__get_statements(struct Astatement*__this);
var Astatement__get_else(struct Astatement*__this);
var Astatement__get_expression(struct Astatement*__this);
var Astatement__add_else(struct Astatement*__this, var type1);
var Astatement__add_statement(struct Astatement*__this, var statement1);
var Astatement__set_expression(struct Astatement*__this, var expr1);
struct Atoken;
#define Atoken___DsizeD 4
#define Atoken___DcidD 30
var Atoken___new(struct Atoken*__this, var type1, var data1, var line1, var file1, var __parent);
var Atoken__new(var type1, var data1, var line1, var file1, var __parent);
#define Atoken__dispose(___this) virtual__dispose(___this)
var Atoken___V_dispose(struct Atoken*__this);
var Atoken__copy(struct Atoken*__this);
var Atoken__take(struct Atoken*__this);
var Atoken__get(struct Atoken*__this);
var Atoken__get_data(struct Atoken*__this);
var Atoken__get_type(struct Atoken*__this);
var Atoken__get_line(struct Atoken*__this);
var Atoken__get_file(struct Atoken*__this);
struct Avirtual;
#define Avirtual___DsizeD 3
#define Avirtual___DcidD 31
var Avirtual___new(struct Avirtual*__this, var memb1, var class1, var __parent);
var Avirtual__new(var memb1, var class1, var __parent);
#define Avirtual__dispose(___this) virtual__dispose(___this)
var Avirtual___V_dispose(struct Avirtual*__this);
#define Avirtual__delayed_dispose(___this) virtual__delayed_dispose(___this)
var Avirtual___V_delayed_dispose(struct Avirtual*__this);
var Avirtual__set_next(struct Avirtual*__this, var n);
var Avirtual__get_next(struct Avirtual*__this);
var Avirtual__get_class_name(struct Avirtual*__this);
var Avirtual__get_member(struct Avirtual*__this);
var Avirtual__get_member_name(struct Avirtual*__this);
struct main;
#define main___DsizeD 21
#define main___DcidD 32
#define main__Cblock 4096
#define main__Chello (var)(__string_mainChello+2)
#define main__Cc 0
#define main__Cjs 1
#define main__Cphp 2
var main__copy_block(struct main*__this);
var main__0(struct main*__this, var status, var data, var type);
var main__copyto(struct main*__this, var f, var output, var cb, var this_cb);
var main__process_file_end(struct main*__this, var stat);
var main__process_file_block(struct main*__this, var n, var d);
var main__1(struct main*__this, var status, var data, var type);
var main__process_file(struct main*__this, var f, var cb, var this_cb);
var main__2(struct main*__this, var status, var data, var type);
var main___new(struct main*__this, var __parent);
var main__new(var __parent);
#define main__dispose(___this) virtual__dispose(___this)
var main___V_dispose(struct main*__this);
var main__main();
var main__run(struct main*__this);
var main__next_file(struct main*__this);
var main__3(struct main*__this, var status, var data, var type);
var main__4(struct main*__this, var status, var data, var type);
var main__5(struct main*__this, var status, var data, var type);
var main__finish(struct main*__this);
var main__6(struct main*__this, var status, var data, var type);
var main__finish1(struct main*__this);
var main__7(struct main*__this, var status, var data, var type);
#define main__lambda(a,b,c,d,e) std__lambda(a,b,c,d,e)
var main___V_lambda(var __this, var fcn, var status, var data, var type);
var virtual__expr_process(struct main*__this, var expr);
var virtual__gen_virtuals(struct main*__this);
var virtual__get_mid(struct main*__this);
var virtual__get_data(struct main*__this);
var virtual__get_head(struct main*__this);
var virtual__emmit(struct main*__this, var par);
var virtual__delayed_dispose(struct main*__this);
var virtual__dispose(struct main*__this);
static char __strings_array1[]="Size less than one";
static var __string_array1[]={0,-2, 0,-1};
static char __strings_string2[]="";
static var __string_string2[]={0,-2, 0,-1};
static char __strings_Aclass3[]="\t";
static var __string_Aclass3[]={0,-2, 0,-1};
static char __strings_Aclass4[]="unterminated expression";
static var __string_Aclass4[]={0,-2, 0,-1};
static char __strings_Aclass5[]="Unknown operator.";
static var __string_Aclass5[]={0,-2, 0,-1};
static char __strings_Aclass6[]="What a mess in parenthesis..";
static var __string_Aclass6[]={0,-2, 0,-1};
static char __strings_Aclass7[]="What a mess in index..";
static var __string_Aclass7[]={0,-2, 0,-1};
static char __strings_Aclass8[]="What a mess..";
static var __string_Aclass8[]={0,-2, 0,-1};
static char __strings_Alexer9[]="Lexer: ";
static var __string_Alexer9[]={0,-2, 0,-1};
static char __strings_Alexer10[]=" @ (";
static var __string_Alexer10[]={0,-2, 0,-1};
static char __strings_Alexer11[]=") : '";
static var __string_Alexer11[]={0,-2, 0,-1};
static char __strings_Alexer12[]="' ";
static var __string_Alexer12[]={0,-2, 0,-1};
static char __strings_Alexer13[]="newline in string.";
static var __string_Alexer13[]={0,-2, 0,-1};
static char __strings_Alexer14[]="newline in character constant.";
static var __string_Alexer14[]={0,-2, 0,-1};
static char __strings_Alexer15[]="unterminated token.";
static var __string_Alexer15[]={0,-2, 0,-1};
static char __strings_Aemmiter16[]=": at line (";
static var __string_Aemmiter16[]={0,-2, 0,-1};
static char __strings_Aemmiter17[]=") '";
static var __string_Aemmiter17[]={0,-2, 0,-1};
static char __strings_Aemmiter18[]="' ";
static var __string_Aemmiter18[]={0,-2, 0,-1};
static char __strings_Aemmitc19[]="static void std__init_strings()\n{\n";
static var __string_Aemmitc19[]={0,-2, 0,-1};
static char __strings_Aemmitc20[]="}\n";
static var __string_Aemmitc20[]={0,-2, 0,-1};
static char __strings_Aemmitc21[]="/* class ";
static var __string_Aemmitc21[]={0,-2, 0,-1};
static char __strings_Aemmitc22[]=" */\n";
static var __string_Aemmitc22[]={0,-2, 0,-1};
static char __strings_Aemmitc23[]="struct ";
static var __string_Aemmitc23[]={0,-2, 0,-1};
static char __strings_Aemmitc24[]=";\n";
static var __string_Aemmitc24[]={0,-2, 0,-1};
static char __strings_Aemmitc25[]="#define ";
static var __string_Aemmitc25[]={0,-2, 0,-1};
static char __strings_Aemmitc26[]="___DsizeD ";
static var __string_Aemmitc26[]={0,-2, 0,-1};
static char __strings_Aemmitc27[]="\n";
static var __string_Aemmitc27[]={0,-2, 0,-1};
static char __strings_Aemmitc28[]="#define ";
static var __string_Aemmitc28[]={0,-2, 0,-1};
static char __strings_Aemmitc29[]="___DcidD ";
static var __string_Aemmitc29[]={0,-2, 0,-1};
static char __strings_Aemmitc30[]="\n";
static var __string_Aemmitc30[]={0,-2, 0,-1};
static char __strings_Aemmitc31[]="\tcase ";
static var __string_Aemmitc31[]={0,-2, 0,-1};
static char __strings_Aemmitc32[]="___DcidD:\n\t\treturn ";
static var __string_Aemmitc32[]={0,-2, 0,-1};
static char __strings_Aemmitc33[]="___V_";
static var __string_Aemmitc33[]={0,-2, 0,-1};
static char __strings_Aemmitc34[]="((struct ";
static var __string_Aemmitc34[]={0,-2, 0,-1};
static char __strings_Aemmitc35[]="*)__this";
static var __string_Aemmitc35[]={0,-2, 0,-1};
static char __strings_Aemmitc36[]=", ";
static var __string_Aemmitc36[]={0,-2, 0,-1};
static char __strings_Aemmitc37[]=");\n";
static var __string_Aemmitc37[]={0,-2, 0,-1};
static char __strings_Aemmitc38[]="virtual";
static var __string_Aemmitc38[]={0,-2, 0,-1};
static char __strings_Aemmitc39[]=";\n";
static var __string_Aemmitc39[]={0,-2, 0,-1};
static char __strings_Aemmitc40[]="virtual";
static var __string_Aemmitc40[]={0,-2, 0,-1};
static char __strings_Aemmitc41[]="\n{\n\tvar cid;\n";
static var __string_Aemmitc41[]={0,-2, 0,-1};
static char __strings_Aemmitc42[]="\tcid = ((var*)__this)[-1];\n";
static var __string_Aemmitc42[]={0,-2, 0,-1};
static char __strings_Aemmitc43[]="\tswitch (cid) {\n";
static var __string_Aemmitc43[]={0,-2, 0,-1};
static char __strings_Aemmitc44[]="\tdefault:\n\t\tbreak;\n\t}\n";
static var __string_Aemmitc44[]={0,-2, 0,-1};
static char __strings_Aemmitc45[]="\treturn 0;\n}\n";
static var __string_Aemmitc45[]={0,-2, 0,-1};
static char __strings_Aemmitc46[]="var std__lambda(var __this, var fcn, ";
static var __string_Aemmitc46[]={0,-2, 0,-1};
static char __strings_Aemmitc47[]="var status, var data, var type)";
static var __string_Aemmitc47[]={0,-2, 0,-1};
static char __strings_Aemmitc48[]="\n{\n\tvar cid;\n";
static var __string_Aemmitc48[]={0,-2, 0,-1};
static char __strings_Aemmitc49[]="\tcid = ((var*)__this)[-1];\n";
static var __string_Aemmitc49[]={0,-2, 0,-1};
static char __strings_Aemmitc50[]="\tswitch (cid) {\n";
static var __string_Aemmitc50[]={0,-2, 0,-1};
static char __strings_Aemmitc51[]="\tcase ";
static var __string_Aemmitc51[]={0,-2, 0,-1};
static char __strings_Aemmitc52[]="___DcidD:\n\t\treturn ";
static var __string_Aemmitc52[]={0,-2, 0,-1};
static char __strings_Aemmitc53[]="___V_lambda(__this, fcn, status, data, type);\n";
static var __string_Aemmitc53[]={0,-2, 0,-1};
static char __strings_Aemmitc54[]="\t}\n\treturn 0;\n}\n";
static var __string_Aemmitc54[]={0,-2, 0,-1};
static char __strings_Aemmitc55[]="#define ";
static var __string_Aemmitc55[]={0,-2, 0,-1};
static char __strings_Aemmitc56[]="__lambda(a,b,c,d,e) std__lambda(a,b,c,d,e)\n";
static var __string_Aemmitc56[]={0,-2, 0,-1};
static char __strings_Aemmitc57[]="var ";
static var __string_Aemmitc57[]={0,-2, 0,-1};
static char __strings_Aemmitc58[]="___V_lambda(var __this, var fcn, ";
static var __string_Aemmitc58[]={0,-2, 0,-1};
static char __strings_Aemmitc59[]="var status, var data, var type);\n";
static var __string_Aemmitc59[]={0,-2, 0,-1};
static char __strings_Aemmitc60[]="var ";
static var __string_Aemmitc60[]={0,-2, 0,-1};
static char __strings_Aemmitc61[]="___V_lambda(var __this, var fcn, ";
static var __string_Aemmitc61[]={0,-2, 0,-1};
static char __strings_Aemmitc62[]="var status, var data, var type)\n{";
static var __string_Aemmitc62[]={0,-2, 0,-1};
static char __strings_Aemmitc63[]="\tswitch(fcn) {\n";
static var __string_Aemmitc63[]={0,-2, 0,-1};
static char __strings_Aemmitc64[]="\tcase ";
static var __string_Aemmitc64[]={0,-2, 0,-1};
static char __strings_Aemmitc65[]=":\n\t\treturn ";
static var __string_Aemmitc65[]={0,-2, 0,-1};
static char __strings_Aemmitc66[]="__";
static var __string_Aemmitc66[]={0,-2, 0,-1};
static char __strings_Aemmitc67[]="((void*)__this, status, data, type);\n";
static var __string_Aemmitc67[]={0,-2, 0,-1};
static char __strings_Aemmitc68[]="\t}\n\treturn 0;\n}\n";
static var __string_Aemmitc68[]={0,-2, 0,-1};
static char __strings_Aemmitc69[]="#define ";
static var __string_Aemmitc69[]={0,-2, 0,-1};
static char __strings_Aemmitc70[]="__";
static var __string_Aemmitc70[]={0,-2, 0,-1};
static char __strings_Aemmitc71[]=" ";
static var __string_Aemmitc71[]={0,-2, 0,-1};
static char __strings_Aemmitc72[]="(var)(__string_";
static var __string_Aemmitc72[]={0,-2, 0,-1};
static char __strings_Aemmitc73[]="+2)";
static var __string_Aemmitc73[]={0,-2, 0,-1};
static char __strings_Aemmitc74[]="'";
static var __string_Aemmitc74[]={0,-2, 0,-1};
static char __strings_Aemmitc75[]="'";
static var __string_Aemmitc75[]={0,-2, 0,-1};
static char __strings_Aemmitc76[]="\n";
static var __string_Aemmitc76[]={0,-2, 0,-1};
static char __strings_Aemmitc77[]="struct ";
static var __string_Aemmitc77[]={0,-2, 0,-1};
static char __strings_Aemmitc78[]=" {\n";
static var __string_Aemmitc78[]={0,-2, 0,-1};
static char __strings_Aemmitc79[]="\tvar ";
static var __string_Aemmitc79[]={0,-2, 0,-1};
static char __strings_Aemmitc80[]=";\n";
static var __string_Aemmitc80[]={0,-2, 0,-1};
static char __strings_Aemmitc81[]="};\n";
static var __string_Aemmitc81[]={0,-2, 0,-1};
static char __strings_Aemmitc82[]="static var ";
static var __string_Aemmitc82[]={0,-2, 0,-1};
static char __strings_Aemmitc83[]="__";
static var __string_Aemmitc83[]={0,-2, 0,-1};
static char __strings_Aemmitc84[]=" = 0;\n";
static var __string_Aemmitc84[]={0,-2, 0,-1};
static char __strings_Aemmitc85[]="\t";
static var __string_Aemmitc85[]={0,-2, 0,-1};
static char __strings_Aemmitc86[]="__";
static var __string_Aemmitc86[]={0,-2, 0,-1};
static char __strings_Aemmitc87[]="((void*)__this, ";
static var __string_Aemmitc87[]={0,-2, 0,-1};
static char __strings_Aemmitc88[]=")";
static var __string_Aemmitc88[]={0,-2, 0,-1};
static char __strings_Aemmitc89[]="((void*)__this)";
static var __string_Aemmitc89[]={0,-2, 0,-1};
static char __strings_Aemmitc90[]="cannot find method...";
static var __string_Aemmitc90[]={0,-2, 0,-1};
static char __strings_Aemmitc91[]="wrong type of method.";
static var __string_Aemmitc91[]={0,-2, 0,-1};
static char __strings_Aemmitc92[]="__";
static var __string_Aemmitc92[]={0,-2, 0,-1};
static char __strings_Aemmitc93[]="(";
static var __string_Aemmitc93[]={0,-2, 0,-1};
static char __strings_Aemmitc94[]="(void*)__this->";
static var __string_Aemmitc94[]={0,-2, 0,-1};
static char __strings_Aemmitc95[]="__";
static var __string_Aemmitc95[]={0,-2, 0,-1};
static char __strings_Aemmitc96[]="this";
static var __string_Aemmitc96[]={0,-2, 0,-1};
static char __strings_Aemmitc97[]="(void*)";
static var __string_Aemmitc97[]={0,-2, 0,-1};
static char __strings_Aemmitc98[]=",";
static var __string_Aemmitc98[]={0,-2, 0,-1};
static char __strings_Aemmitc99[]="new";
static var __string_Aemmitc99[]={0,-2, 0,-1};
static char __strings_Aemmitc100[]=",(var)__this";
static var __string_Aemmitc100[]={0,-2, 0,-1};
static char __strings_Aemmitc101[]=")";
static var __string_Aemmitc101[]={0,-2, 0,-1};
static char __strings_Aemmitc102[]="__";
static var __string_Aemmitc102[]={0,-2, 0,-1};
static char __strings_Aemmitc103[]="(";
static var __string_Aemmitc103[]={0,-2, 0,-1};
static char __strings_Aemmitc104[]="new";
static var __string_Aemmitc104[]={0,-2, 0,-1};
static char __strings_Aemmitc105[]=",(var)__this";
static var __string_Aemmitc105[]={0,-2, 0,-1};
static char __strings_Aemmitc106[]="(var)__this";
static var __string_Aemmitc106[]={0,-2, 0,-1};
static char __strings_Aemmitc107[]=")";
static var __string_Aemmitc107[]={0,-2, 0,-1};
static char __strings_Aemmitc108[]="";
static var __string_Aemmitc108[]={0,-2, 0,-1};
static char __strings_Aemmitc109[]=",";
static var __string_Aemmitc109[]={0,-2, 0,-1};
static char __strings_Aemmitc110[]="((var*)";
static var __string_Aemmitc110[]={0,-2, 0,-1};
static char __strings_Aemmitc111[]=")[";
static var __string_Aemmitc111[]={0,-2, 0,-1};
static char __strings_Aemmitc112[]="]";
static var __string_Aemmitc112[]={0,-2, 0,-1};
static char __strings_Aemmitc113[]="(";
static var __string_Aemmitc113[]={0,-2, 0,-1};
static char __strings_Aemmitc114[]=")";
static var __string_Aemmitc114[]={0,-2, 0,-1};
static char __strings_Aemmitc115[]="_DcidD";
static var __string_Aemmitc115[]={0,-2, 0,-1};
static char __strings_Aemmitc116[]="__";
static var __string_Aemmitc116[]={0,-2, 0,-1};
static char __strings_Aemmitc117[]="Constant not found.";
static var __string_Aemmitc117[]={0,-2, 0,-1};
static char __strings_Aemmitc118[]="__";
static var __string_Aemmitc118[]={0,-2, 0,-1};
static char __strings_Aemmitc119[]=",(var)__this";
static var __string_Aemmitc119[]={0,-2, 0,-1};
static char __strings_Aemmitc120[]="static char __strings_";
static var __string_Aemmitc120[]={0,-2, 0,-1};
static char __strings_Aemmitc121[]="[]=";
static var __string_Aemmitc121[]={0,-2, 0,-1};
static char __strings_Aemmitc122[]="\"";
static var __string_Aemmitc122[]={0,-2, 0,-1};
static char __strings_Aemmitc123[]="\"";
static var __string_Aemmitc123[]={0,-2, 0,-1};
static char __strings_Aemmitc124[]=";\n";
static var __string_Aemmitc124[]={0,-2, 0,-1};
static char __strings_Aemmitc125[]="static var __string_";
static var __string_Aemmitc125[]={0,-2, 0,-1};
static char __strings_Aemmitc126[]="[]={0,-2, ";
static var __string_Aemmitc126[]={0,-2, 0,-1};
static char __strings_Aemmitc127[]="0,-1};\n";
static var __string_Aemmitc127[]={0,-2, 0,-1};
static char __strings_Aemmitc128[]="\t__string_";
static var __string_Aemmitc128[]={0,-2, 0,-1};
static char __strings_Aemmitc129[]="[2]=";
static var __string_Aemmitc129[]={0,-2, 0,-1};
static char __strings_Aemmitc130[]="(var) __strings_";
static var __string_Aemmitc130[]={0,-2, 0,-1};
static char __strings_Aemmitc131[]=";\n";
static var __string_Aemmitc131[]={0,-2, 0,-1};
static char __strings_Aemmitc132[]="(var)(__string_";
static var __string_Aemmitc132[]={0,-2, 0,-1};
static char __strings_Aemmitc133[]="+ 2)";
static var __string_Aemmitc133[]={0,-2, 0,-1};
static char __strings_Aemmitc134[]="'";
static var __string_Aemmitc134[]={0,-2, 0,-1};
static char __strings_Aemmitc135[]="\\0";
static var __string_Aemmitc135[]={0,-2, 0,-1};
static char __strings_Aemmitc136[]="'";
static var __string_Aemmitc136[]={0,-2, 0,-1};
static char __strings_Aemmitc137[]="(";
static var __string_Aemmitc137[]={0,-2, 0,-1};
static char __strings_Aemmitc138[]=")";
static var __string_Aemmitc138[]={0,-2, 0,-1};
static char __strings_Aemmitc139[]="(";
static var __string_Aemmitc139[]={0,-2, 0,-1};
static char __strings_Aemmitc140[]=")";
static var __string_Aemmitc140[]={0,-2, 0,-1};
static char __strings_Aemmitc141[]="(";
static var __string_Aemmitc141[]={0,-2, 0,-1};
static char __strings_Aemmitc142[]=")";
static var __string_Aemmitc142[]={0,-2, 0,-1};
static char __strings_Aemmitc143[]="__this->";
static var __string_Aemmitc143[]={0,-2, 0,-1};
static char __strings_Aemmitc144[]="__";
static var __string_Aemmitc144[]={0,-2, 0,-1};
static char __strings_Aemmitc145[]="0";
static var __string_Aemmitc145[]={0,-2, 0,-1};
static char __strings_Aemmitc146[]="(var)__this";
static var __string_Aemmitc146[]={0,-2, 0,-1};
static char __strings_Aemmitc147[]="wrong expression...";
static var __string_Aemmitc147[]={0,-2, 0,-1};
static char __strings_Aemmitc148[]="=";
static var __string_Aemmitc148[]={0,-2, 0,-1};
static char __strings_Aemmitc149[]="==";
static var __string_Aemmitc149[]={0,-2, 0,-1};
static char __strings_Aemmitc150[]="!=";
static var __string_Aemmitc150[]={0,-2, 0,-1};
static char __strings_Aemmitc151[]=">=";
static var __string_Aemmitc151[]={0,-2, 0,-1};
static char __strings_Aemmitc152[]="<=";
static var __string_Aemmitc152[]={0,-2, 0,-1};
static char __strings_Aemmitc153[]=">";
static var __string_Aemmitc153[]={0,-2, 0,-1};
static char __strings_Aemmitc154[]="<";
static var __string_Aemmitc154[]={0,-2, 0,-1};
static char __strings_Aemmitc155[]="&&";
static var __string_Aemmitc155[]={0,-2, 0,-1};
static char __strings_Aemmitc156[]="||";
static var __string_Aemmitc156[]={0,-2, 0,-1};
static char __strings_Aemmitc157[]="+";
static var __string_Aemmitc157[]={0,-2, 0,-1};
static char __strings_Aemmitc158[]="-";
static var __string_Aemmitc158[]={0,-2, 0,-1};
static char __strings_Aemmitc159[]="*";
static var __string_Aemmitc159[]={0,-2, 0,-1};
static char __strings_Aemmitc160[]="/";
static var __string_Aemmitc160[]={0,-2, 0,-1};
static char __strings_Aemmitc161[]="%";
static var __string_Aemmitc161[]={0,-2, 0,-1};
static char __strings_Aemmitc162[]="!";
static var __string_Aemmitc162[]={0,-2, 0,-1};
static char __strings_Aemmitc163[]="+";
static var __string_Aemmitc163[]={0,-2, 0,-1};
static char __strings_Aemmitc164[]="-";
static var __string_Aemmitc164[]={0,-2, 0,-1};
static char __strings_Aemmitc165[]="UNKNOW OP\n";
static var __string_Aemmitc165[]={0,-2, 0,-1};
static char __strings_Aemmitc166[]="Invalid case constant";
static var __string_Aemmitc166[]={0,-2, 0,-1};
static char __strings_Aemmitc167[]="\n";
static var __string_Aemmitc167[]={0,-2, 0,-1};
static char __strings_Aemmitc168[]="case ";
static var __string_Aemmitc168[]={0,-2, 0,-1};
static char __strings_Aemmitc169[]=": ";
static var __string_Aemmitc169[]={0,-2, 0,-1};
static char __strings_Aemmitc170[]="{\n\tNEW(";
static var __string_Aemmitc170[]={0,-2, 0,-1};
static char __strings_Aemmitc171[]=");\n\treturn ";
static var __string_Aemmitc171[]={0,-2, 0,-1};
static char __strings_Aemmitc172[]="___";
static var __string_Aemmitc172[]={0,-2, 0,-1};
static char __strings_Aemmitc173[]="((void*)__this";
static var __string_Aemmitc173[]={0,-2, 0,-1};
static char __strings_Aemmitc174[]=", ";
static var __string_Aemmitc174[]={0,-2, 0,-1};
static char __strings_Aemmitc175[]=", __parent);\n}\n";
static var __string_Aemmitc175[]={0,-2, 0,-1};
static char __strings_Aemmitc176[]="var";
static var __string_Aemmitc176[]={0,-2, 0,-1};
static char __strings_Aemmitc177[]="void";
static var __string_Aemmitc177[]={0,-2, 0,-1};
static char __strings_Aemmitc178[]="unknown type";
static var __string_Aemmitc178[]={0,-2, 0,-1};
static char __strings_Aemmitc179[]="#define ";
static var __string_Aemmitc179[]={0,-2, 0,-1};
static char __strings_Aemmitc180[]="__";
static var __string_Aemmitc180[]={0,-2, 0,-1};
static char __strings_Aemmitc181[]="(___this";
static var __string_Aemmitc181[]={0,-2, 0,-1};
static char __strings_Aemmitc182[]=", ";
static var __string_Aemmitc182[]={0,-2, 0,-1};
static char __strings_Aemmitc183[]=") virtual__";
static var __string_Aemmitc183[]={0,-2, 0,-1};
static char __strings_Aemmitc184[]="(___this";
static var __string_Aemmitc184[]={0,-2, 0,-1};
static char __strings_Aemmitc185[]=", ";
static var __string_Aemmitc185[]={0,-2, 0,-1};
static char __strings_Aemmitc186[]=")\n";
static var __string_Aemmitc186[]={0,-2, 0,-1};
static char __strings_Aemmitc187[]="var ";
static var __string_Aemmitc187[]={0,-2, 0,-1};
static char __strings_Aemmitc188[]="__";
static var __string_Aemmitc188[]={0,-2, 0,-1};
static char __strings_Aemmitc189[]="_";
static var __string_Aemmitc189[]={0,-2, 0,-1};
static char __strings_Aemmitc190[]="(";
static var __string_Aemmitc190[]={0,-2, 0,-1};
static char __strings_Aemmitc191[]="struct ";
static var __string_Aemmitc191[]={0,-2, 0,-1};
static char __strings_Aemmitc192[]="*__this";
static var __string_Aemmitc192[]={0,-2, 0,-1};
static char __strings_Aemmitc193[]=", ";
static var __string_Aemmitc193[]={0,-2, 0,-1};
static char __strings_Aemmitc194[]="var ";
static var __string_Aemmitc194[]={0,-2, 0,-1};
static char __strings_Aemmitc195[]=", var this_";
static var __string_Aemmitc195[]={0,-2, 0,-1};
static char __strings_Aemmitc196[]="var ";
static var __string_Aemmitc196[]={0,-2, 0,-1};
static char __strings_Aemmitc197[]=", var __parent";
static var __string_Aemmitc197[]={0,-2, 0,-1};
static char __strings_Aemmitc198[]="var __parent";
static var __string_Aemmitc198[]={0,-2, 0,-1};
static char __strings_Aemmitc199[]=", var __parent";
static var __string_Aemmitc199[]={0,-2, 0,-1};
static char __strings_Aemmitc200[]=", var status, var data, var type";
static var __string_Aemmitc200[]={0,-2, 0,-1};
static char __strings_Aemmitc201[]=")";
static var __string_Aemmitc201[]={0,-2, 0,-1};
static char __strings_Aemmitc202[]="_V_";
static var __string_Aemmitc202[]={0,-2, 0,-1};
static char __strings_Aemmitc203[]=";\n";
static var __string_Aemmitc203[]={0,-2, 0,-1};
static char __strings_Aemmitc204[]="\n";
static var __string_Aemmitc204[]={0,-2, 0,-1};
static char __strings_Aemmitc205[]=";\n";
static var __string_Aemmitc205[]={0,-2, 0,-1};
static char __strings_Aemmitc206[]=";\n";
static var __string_Aemmitc206[]={0,-2, 0,-1};
static char __strings_Aemmitc207[]="\n";
static var __string_Aemmitc207[]={0,-2, 0,-1};
static char __strings_Aemmitc208[]="\n";
static var __string_Aemmitc208[]={0,-2, 0,-1};
static char __strings_Acbody209[]="{\n";
static var __string_Acbody209[]={0,-2, 0,-1};
static char __strings_Acbody210[]="\tstatic var recursive = 0;\n";
static var __string_Acbody210[]={0,-2, 0,-1};
static char __strings_Acbody211[]="\tvar __return__ = 0;\n";
static var __string_Acbody211[]={0,-2, 0,-1};
static char __strings_Acbody212[]="\tvar ";
static var __string_Acbody212[]={0,-2, 0,-1};
static char __strings_Acbody213[]=";\n";
static var __string_Acbody213[]={0,-2, 0,-1};
static char __strings_Acbody214[]="\tFAKETHIS();\n";
static var __string_Acbody214[]={0,-2, 0,-1};
static char __strings_Acbody215[]="\tif (((var*)__this)[-1]!=";
static var __string_Acbody215[]={0,-2, 0,-1};
static char __strings_Acbody216[]="___DcidD";
static var __string_Acbody216[]={0,-2, 0,-1};
static char __strings_Acbody217[]="string";
static var __string_Acbody217[]={0,-2, 0,-1};
static char __strings_Acbody218[]="get_buf";
static var __string_Acbody218[]={0,-2, 0,-1};
static char __strings_Acbody219[]="to_string";
static var __string_Acbody219[]={0,-2, 0,-1};
static char __strings_Acbody220[]="length";
static var __string_Acbody220[]={0,-2, 0,-1};
static char __strings_Acbody221[]="&& ((var*)__this)[-1]!=-2";
static var __string_Acbody221[]={0,-2, 0,-1};
static char __strings_Acbody222[]="&& ((var*)__this)[-1]!=0";
static var __string_Acbody222[]={0,-2, 0,-1};
static char __strings_Acbody223[]="){\n\t\tprintf(\"CID: %ld \", ((var*)__this)[-1]);\n";
static var __string_Acbody223[]={0,-2, 0,-1};
static char __strings_Acbody224[]="\t\tstd__panic();\n\t}\n";
static var __string_Acbody224[]={0,-2, 0,-1};
static char __strings_Acbody225[]="\trecursive++;\n";
static var __string_Acbody225[]={0,-2, 0,-1};
static char __strings_Acbody226[]="\tif (recursive != 1) {\n";
static var __string_Acbody226[]={0,-2, 0,-1};
static char __strings_Acbody227[]="\t\tfprintf(stderr, \"recursive call in \\\"";
static var __string_Acbody227[]={0,-2, 0,-1};
static char __strings_Acbody228[]=".";
static var __string_Acbody228[]={0,-2, 0,-1};
static char __strings_Acbody229[]="\\\"\\n\");std__panic();\n\t}";
static var __string_Acbody229[]={0,-2, 0,-1};
static char __strings_Acbody230[]=" else if (";
static var __string_Acbody230[]={0,-2, 0,-1};
static char __strings_Acbody231[]="if (";
static var __string_Acbody231[]={0,-2, 0,-1};
static char __strings_Acbody232[]=") {";
static var __string_Acbody232[]={0,-2, 0,-1};
static char __strings_Acbody233[]="}";
static var __string_Acbody233[]={0,-2, 0,-1};
static char __strings_Acbody234[]="}";
static var __string_Acbody234[]={0,-2, 0,-1};
static char __strings_Acbody235[]="__return__ = ";
static var __string_Acbody235[]={0,-2, 0,-1};
static char __strings_Acbody236[]=";\n\trecursive--;\n\t";
static var __string_Acbody236[]={0,-2, 0,-1};
static char __strings_Acbody237[]="return __return__;";
static var __string_Acbody237[]={0,-2, 0,-1};
static char __strings_Acbody238[]="return (var)";
static var __string_Acbody238[]={0,-2, 0,-1};
static char __strings_Acbody239[]=";";
static var __string_Acbody239[]={0,-2, 0,-1};
static char __strings_Acbody240[]="recursive--;\n\t";
static var __string_Acbody240[]={0,-2, 0,-1};
static char __strings_Acbody241[]="return __return__;";
static var __string_Acbody241[]={0,-2, 0,-1};
static char __strings_Acbody242[]="return 0;";
static var __string_Acbody242[]={0,-2, 0,-1};
static char __strings_Acbody243[]="switch (";
static var __string_Acbody243[]={0,-2, 0,-1};
static char __strings_Acbody244[]=") {\n";
static var __string_Acbody244[]={0,-2, 0,-1};
static char __strings_Acbody245[]="while (";
static var __string_Acbody245[]={0,-2, 0,-1};
static char __strings_Acbody246[]=") {";
static var __string_Acbody246[]={0,-2, 0,-1};
static char __strings_Acbody247[]="}";
static var __string_Acbody247[]={0,-2, 0,-1};
static char __strings_Acbody248[]=";";
static var __string_Acbody248[]={0,-2, 0,-1};
static char __strings_Acbody249[]=";";
static var __string_Acbody249[]={0,-2, 0,-1};
static char __strings_Acbody250[]="\n";
static var __string_Acbody250[]={0,-2, 0,-1};
static char __strings_Acbody251[]="\n";
static var __string_Acbody251[]={0,-2, 0,-1};
static char __strings_Acbody252[]="} ";
static var __string_Acbody252[]={0,-2, 0,-1};
static char __strings_Acbody253[]="\tbreak;";
static var __string_Acbody253[]={0,-2, 0,-1};
static char __strings_Acbody254[]="}";
static var __string_Acbody254[]={0,-2, 0,-1};
static char __strings_Acbody255[]="\n";
static var __string_Acbody255[]={0,-2, 0,-1};
static char __strings_Acbody256[]=" else {";
static var __string_Acbody256[]={0,-2, 0,-1};
static char __strings_Acbody257[]="default:";
static var __string_Acbody257[]={0,-2, 0,-1};
static char __strings_Acbody258[]="break;";
static var __string_Acbody258[]={0,-2, 0,-1};
static char __strings_Acbody259[]="ERROR !!";
static var __string_Acbody259[]={0,-2, 0,-1};
static char __strings_Acbody260[]="\n";
static var __string_Acbody260[]={0,-2, 0,-1};
static char __strings_Aexpr261[]=" ";
static var __string_Aexpr261[]={0,-2, 0,-1};
static char __strings_Aexpr262[]=" ";
static var __string_Aexpr262[]={0,-2, 0,-1};
static char __strings_Aexpr263[]="";
static var __string_Aexpr263[]={0,-2, 0,-1};
static char __strings_Aparser264[]=": found '";
static var __string_Aparser264[]={0,-2, 0,-1};
static char __strings_Aparser265[]="' at line(";
static var __string_Aparser265[]={0,-2, 0,-1};
static char __strings_Aparser266[]="): ";
static var __string_Aparser266[]={0,-2, 0,-1};
static char __strings_Aparser267[]="class";
static var __string_Aparser267[]={0,-2, 0,-1};
static char __strings_Aparser268[]="expecting 'class' keyword";
static var __string_Aparser268[]={0,-2, 0,-1};
static char __strings_Aparser269[]="expecting identifier";
static var __string_Aparser269[]={0,-2, 0,-1};
static char __strings_Aparser270[]="implements";
static var __string_Aparser270[]={0,-2, 0,-1};
static char __strings_Aparser271[]="expecting class identifier";
static var __string_Aparser271[]={0,-2, 0,-1};
static char __strings_Aparser272[]=",";
static var __string_Aparser272[]={0,-2, 0,-1};
static char __strings_Aparser273[]="expecting class identifier";
static var __string_Aparser273[]={0,-2, 0,-1};
static char __strings_Aparser274[]="{";
static var __string_Aparser274[]={0,-2, 0,-1};
static char __strings_Aparser275[]="expecting '{'";
static var __string_Aparser275[]={0,-2, 0,-1};
static char __strings_Aparser276[]="}";
static var __string_Aparser276[]={0,-2, 0,-1};
static char __strings_Aparser277[]="expecting '}'";
static var __string_Aparser277[]={0,-2, 0,-1};
static char __strings_Aparser278[]="field";
static var __string_Aparser278[]={0,-2, 0,-1};
static char __strings_Aparser279[]="static";
static var __string_Aparser279[]={0,-2, 0,-1};
static char __strings_Aparser280[]=",";
static var __string_Aparser280[]={0,-2, 0,-1};
static char __strings_Aparser281[]=";";
static var __string_Aparser281[]={0,-2, 0,-1};
static char __strings_Aparser282[]="';' expected.";
static var __string_Aparser282[]={0,-2, 0,-1};
static char __strings_Aparser283[]="Name of variable expected.";
static var __string_Aparser283[]={0,-2, 0,-1};
static char __strings_Aparser284[]="int";
static var __string_Aparser284[]={0,-2, 0,-1};
static char __strings_Aparser285[]="void";
static var __string_Aparser285[]={0,-2, 0,-1};
static char __strings_Aparser286[]="Type expected.";
static var __string_Aparser286[]={0,-2, 0,-1};
static char __strings_Aparser287[]="const";
static var __string_Aparser287[]={0,-2, 0,-1};
static char __strings_Aparser288[]=":=";
static var __string_Aparser288[]={0,-2, 0,-1};
static char __strings_Aparser289[]="':=' expected.";
static var __string_Aparser289[]={0,-2, 0,-1};
static char __strings_Aparser290[]=";";
static var __string_Aparser290[]={0,-2, 0,-1};
static char __strings_Aparser291[]="Expected constant initialiser.";
static var __string_Aparser291[]={0,-2, 0,-1};
static char __strings_Aparser292[]=";";
static var __string_Aparser292[]={0,-2, 0,-1};
static char __strings_Aparser293[]="';' expected.";
static var __string_Aparser293[]={0,-2, 0,-1};
static char __strings_Aparser294[]="constructor";
static var __string_Aparser294[]={0,-2, 0,-1};
static char __strings_Aparser295[]="function";
static var __string_Aparser295[]={0,-2, 0,-1};
static char __strings_Aparser296[]="method";
static var __string_Aparser296[]={0,-2, 0,-1};
static char __strings_Aparser297[]="virtual";
static var __string_Aparser297[]={0,-2, 0,-1};
static char __strings_Aparser298[]="void";
static var __string_Aparser298[]={0,-2, 0,-1};
static char __strings_Aparser299[]="(";
static var __string_Aparser299[]={0,-2, 0,-1};
static char __strings_Aparser300[]="'(' expected.";
static var __string_Aparser300[]={0,-2, 0,-1};
static char __strings_Aparser301[]=")";
static var __string_Aparser301[]={0,-2, 0,-1};
static char __strings_Aparser302[]="')' expected.";
static var __string_Aparser302[]={0,-2, 0,-1};
static char __strings_Aparser303[]=")";
static var __string_Aparser303[]={0,-2, 0,-1};
static char __strings_Aparser304[]=",";
static var __string_Aparser304[]={0,-2, 0,-1};
static char __strings_Aparser305[]="in";
static var __string_Aparser305[]={0,-2, 0,-1};
static char __strings_Aparser306[]="out";
static var __string_Aparser306[]={0,-2, 0,-1};
static char __strings_Aparser307[]="io";
static var __string_Aparser307[]={0,-2, 0,-1};
static char __strings_Aparser308[]="async";
static var __string_Aparser308[]={0,-2, 0,-1};
static char __strings_Aparser309[]="Expected 'in/out/io/async'.";
static var __string_Aparser309[]={0,-2, 0,-1};
static char __strings_Aparser310[]="{";
static var __string_Aparser310[]={0,-2, 0,-1};
static char __strings_Aparser311[]="'{' expected.";
static var __string_Aparser311[]={0,-2, 0,-1};
static char __strings_Aparser312[]="}";
static var __string_Aparser312[]={0,-2, 0,-1};
static char __strings_Aparser313[]="'}' expected at end of lambda body.";
static var __string_Aparser313[]={0,-2, 0,-1};
static char __strings_Aparser314[]="{";
static var __string_Aparser314[]={0,-2, 0,-1};
static char __strings_Aparser315[]="'{' expected.";
static var __string_Aparser315[]={0,-2, 0,-1};
static char __strings_Aparser316[]="}";
static var __string_Aparser316[]={0,-2, 0,-1};
static char __strings_Aparser317[]="'}' expected at end of subroutine body.";
static var __string_Aparser317[]={0,-2, 0,-1};
static char __strings_Aparser318[]="var";
static var __string_Aparser318[]={0,-2, 0,-1};
static char __strings_Aparser319[]=",";
static var __string_Aparser319[]={0,-2, 0,-1};
static char __strings_Aparser320[]=";";
static var __string_Aparser320[]={0,-2, 0,-1};
static char __strings_Aparser321[]="';' expected at end of variable declaration";
static var __string_Aparser321[]={0,-2, 0,-1};
static char __strings_Aparser322[]="break";
static var __string_Aparser322[]={0,-2, 0,-1};
static char __strings_Aparser323[]=";";
static var __string_Aparser323[]={0,-2, 0,-1};
static char __strings_Aparser324[]="';' expected after break";
static var __string_Aparser324[]={0,-2, 0,-1};
static char __strings_Aparser325[]="if";
static var __string_Aparser325[]={0,-2, 0,-1};
static char __strings_Aparser326[]="(";
static var __string_Aparser326[]={0,-2, 0,-1};
static char __strings_Aparser327[]="'(' expected after if.";
static var __string_Aparser327[]={0,-2, 0,-1};
static char __strings_Aparser328[]=")";
static var __string_Aparser328[]={0,-2, 0,-1};
static char __strings_Aparser329[]="')' expected after if condition.";
static var __string_Aparser329[]={0,-2, 0,-1};
static char __strings_Aparser330[]="{";
static var __string_Aparser330[]={0,-2, 0,-1};
static char __strings_Aparser331[]="'{' expected after if ().";
static var __string_Aparser331[]={0,-2, 0,-1};
static char __strings_Aparser332[]="}";
static var __string_Aparser332[]={0,-2, 0,-1};
static char __strings_Aparser333[]="'}' expected after if body.";
static var __string_Aparser333[]={0,-2, 0,-1};
static char __strings_Aparser334[]="else";
static var __string_Aparser334[]={0,-2, 0,-1};
static char __strings_Aparser335[]="if";
static var __string_Aparser335[]={0,-2, 0,-1};
static char __strings_Aparser336[]="{";
static var __string_Aparser336[]={0,-2, 0,-1};
static char __strings_Aparser337[]="'{' expected after else.";
static var __string_Aparser337[]={0,-2, 0,-1};
static char __strings_Aparser338[]="}";
static var __string_Aparser338[]={0,-2, 0,-1};
static char __strings_Aparser339[]="'}' expected after else body.";
static var __string_Aparser339[]={0,-2, 0,-1};
static char __strings_Aparser340[]="while";
static var __string_Aparser340[]={0,-2, 0,-1};
static char __strings_Aparser341[]="(";
static var __string_Aparser341[]={0,-2, 0,-1};
static char __strings_Aparser342[]="'(' expected after while.";
static var __string_Aparser342[]={0,-2, 0,-1};
static char __strings_Aparser343[]=")";
static var __string_Aparser343[]={0,-2, 0,-1};
static char __strings_Aparser344[]="')' expected after while condition.";
static var __string_Aparser344[]={0,-2, 0,-1};
static char __strings_Aparser345[]="{";
static var __string_Aparser345[]={0,-2, 0,-1};
static char __strings_Aparser346[]="'{' expected after while ().";
static var __string_Aparser346[]={0,-2, 0,-1};
static char __strings_Aparser347[]="}";
static var __string_Aparser347[]={0,-2, 0,-1};
static char __strings_Aparser348[]="'}' expected after while body.";
static var __string_Aparser348[]={0,-2, 0,-1};
static char __strings_Aparser349[]="return";
static var __string_Aparser349[]={0,-2, 0,-1};
static char __strings_Aparser350[]=";";
static var __string_Aparser350[]={0,-2, 0,-1};
static char __strings_Aparser351[]=";";
static var __string_Aparser351[]={0,-2, 0,-1};
static char __strings_Aparser352[]="';' expected";
static var __string_Aparser352[]={0,-2, 0,-1};
static char __strings_Aparser353[]=":=";
static var __string_Aparser353[]={0,-2, 0,-1};
static char __strings_Aparser354[]="[";
static var __string_Aparser354[]={0,-2, 0,-1};
static char __strings_Aparser355[]="}";
static var __string_Aparser355[]={0,-2, 0,-1};
static char __strings_Aparser356[]="unterminated do/let statement.";
static var __string_Aparser356[]={0,-2, 0,-1};
static char __strings_Aparser357[]=":=";
static var __string_Aparser357[]={0,-2, 0,-1};
static char __strings_Aparser358[]="[";
static var __string_Aparser358[]={0,-2, 0,-1};
static char __strings_Aparser359[]=";";
static var __string_Aparser359[]={0,-2, 0,-1};
static char __strings_Aparser360[]="';' expected at end of let statement";
static var __string_Aparser360[]={0,-2, 0,-1};
static char __strings_Aparser361[]="]";
static var __string_Aparser361[]={0,-2, 0,-1};
static char __strings_Aparser362[]="']' expected in left side of let statement";
static var __string_Aparser362[]={0,-2, 0,-1};
static char __strings_Aparser363[]=":=";
static var __string_Aparser363[]={0,-2, 0,-1};
static char __strings_Aparser364[]="':=' expected in let statement";
static var __string_Aparser364[]={0,-2, 0,-1};
static char __strings_Aparser365[]=";";
static var __string_Aparser365[]={0,-2, 0,-1};
static char __strings_Aparser366[]="';' expected at end of do statement";
static var __string_Aparser366[]={0,-2, 0,-1};
static char __strings_Aparser367[]="+";
static var __string_Aparser367[]={0,-2, 0,-1};
static char __strings_Aparser368[]="-";
static var __string_Aparser368[]={0,-2, 0,-1};
static char __strings_Aparser369[]="*";
static var __string_Aparser369[]={0,-2, 0,-1};
static char __strings_Aparser370[]="/";
static var __string_Aparser370[]={0,-2, 0,-1};
static char __strings_Aparser371[]="%";
static var __string_Aparser371[]={0,-2, 0,-1};
static char __strings_Aparser372[]="&&";
static var __string_Aparser372[]={0,-2, 0,-1};
static char __strings_Aparser373[]="||";
static var __string_Aparser373[]={0,-2, 0,-1};
static char __strings_Aparser374[]="==";
static var __string_Aparser374[]={0,-2, 0,-1};
static char __strings_Aparser375[]="!=";
static var __string_Aparser375[]={0,-2, 0,-1};
static char __strings_Aparser376[]=">=";
static var __string_Aparser376[]={0,-2, 0,-1};
static char __strings_Aparser377[]="<=";
static var __string_Aparser377[]={0,-2, 0,-1};
static char __strings_Aparser378[]=">";
static var __string_Aparser378[]={0,-2, 0,-1};
static char __strings_Aparser379[]="<";
static var __string_Aparser379[]={0,-2, 0,-1};
static char __strings_Aparser380[]="this";
static var __string_Aparser380[]={0,-2, 0,-1};
static char __strings_Aparser381[]="null";
static var __string_Aparser381[]={0,-2, 0,-1};
static char __strings_Aparser382[]="[";
static var __string_Aparser382[]={0,-2, 0,-1};
static char __strings_Aparser383[]=".$";
static var __string_Aparser383[]={0,-2, 0,-1};
static char __strings_Aparser384[]="constant name expected.";
static var __string_Aparser384[]={0,-2, 0,-1};
static char __strings_Aparser385[]="-";
static var __string_Aparser385[]={0,-2, 0,-1};
static char __strings_Aparser386[]="+";
static var __string_Aparser386[]={0,-2, 0,-1};
static char __strings_Aparser387[]="!";
static var __string_Aparser387[]={0,-2, 0,-1};
static char __strings_Aparser388[]="(";
static var __string_Aparser388[]={0,-2, 0,-1};
static char __strings_Aparser389[]="{";
static var __string_Aparser389[]={0,-2, 0,-1};
static char __strings_Aparser390[]="unexpected term";
static var __string_Aparser390[]={0,-2, 0,-1};
static char __strings_Aparser391[]="(";
static var __string_Aparser391[]={0,-2, 0,-1};
static char __strings_Aparser392[]=".";
static var __string_Aparser392[]={0,-2, 0,-1};
static char __strings_Aparser393[]=")";
static var __string_Aparser393[]={0,-2, 0,-1};
static char __strings_Aparser394[]="')' expected after term";
static var __string_Aparser394[]={0,-2, 0,-1};
static char __strings_Aparser395[]="]";
static var __string_Aparser395[]={0,-2, 0,-1};
static char __strings_Aparser396[]="']' expected after term";
static var __string_Aparser396[]={0,-2, 0,-1};
static char __strings_Aparser397[]="(";
static var __string_Aparser397[]={0,-2, 0,-1};
static char __strings_Aparser398[]="'(' expected in subroutine call.";
static var __string_Aparser398[]={0,-2, 0,-1};
static char __strings_Aparser399[]=")";
static var __string_Aparser399[]={0,-2, 0,-1};
static char __strings_Aparser400[]=")";
static var __string_Aparser400[]={0,-2, 0,-1};
static char __strings_Aparser401[]="')' expected at end of subroutrine call";
static var __string_Aparser401[]={0,-2, 0,-1};
static char __strings_Aparser402[]=",";
static var __string_Aparser402[]={0,-2, 0,-1};
static char __strings_Aparser403[]=",";
static var __string_Aparser403[]={0,-2, 0,-1};
static char __strings_Aparser404[]="unexpected state";
static var __string_Aparser404[]={0,-2, 0,-1};
static char __strings_Astatement405[]="Double else..";
static var __string_Astatement405[]={0,-2, 0,-1};
static char __strings_Astatement406[]="DONT KNOW WHAT";
static var __string_Astatement406[]={0,-2, 0,-1};
static char __strings_mainChello[]=" --- Just A C Kit 3.0.3 ---";
static var __string_mainChello[]={0,-2, 0,-1};
static char __strings_main407[]="Including : ";
static var __string_main407[]={0,-2, 0,-1};
static char __strings_main408[]="";
static var __string_main408[]={0,-2, 0,-1};
static char __strings_main409[]="";
static var __string_main409[]={0,-2, 0,-1};
static char __strings_main410[]="";
static var __string_main410[]={0,-2, 0,-1};
static char __strings_main411[]="Compiling : ";
static var __string_main411[]={0,-2, 0,-1};
static char __strings_main412[]="wrong number of command line arguments";
static var __string_main412[]={0,-2, 0,-1};
static char __strings_main413[]=".jack.c";
static var __string_main413[]={0,-2, 0,-1};
static char __strings_main414[]="";
static var __string_main414[]={0,-2, 0,-1};
static char __strings_main415[]=".jack";
static var __string_main415[]={0,-2, 0,-1};
static char __strings_main416[]=".h";
static var __string_main416[]={0,-2, 0,-1};
static char __strings_main417[]=".c";
static var __string_main417[]={0,-2, 0,-1};
static char __strings_main418[]="Output to : ";
static var __string_main418[]={0,-2, 0,-1};
static char __strings_main419[]=": bytes writing";
static var __string_main419[]={0,-2, 0,-1};
static char __strings_main420[]="Error writing file";
static var __string_main420[]={0,-2, 0,-1};
static void std__init_strings()
{
	__string_array1[2]=(var) __strings_array1;
	__string_string2[2]=(var) __strings_string2;
	__string_Aclass3[2]=(var) __strings_Aclass3;
	__string_Aclass4[2]=(var) __strings_Aclass4;
	__string_Aclass5[2]=(var) __strings_Aclass5;
	__string_Aclass6[2]=(var) __strings_Aclass6;
	__string_Aclass7[2]=(var) __strings_Aclass7;
	__string_Aclass8[2]=(var) __strings_Aclass8;
	__string_Alexer9[2]=(var) __strings_Alexer9;
	__string_Alexer10[2]=(var) __strings_Alexer10;
	__string_Alexer11[2]=(var) __strings_Alexer11;
	__string_Alexer12[2]=(var) __strings_Alexer12;
	__string_Alexer13[2]=(var) __strings_Alexer13;
	__string_Alexer14[2]=(var) __strings_Alexer14;
	__string_Alexer15[2]=(var) __strings_Alexer15;
	__string_Aemmiter16[2]=(var) __strings_Aemmiter16;
	__string_Aemmiter17[2]=(var) __strings_Aemmiter17;
	__string_Aemmiter18[2]=(var) __strings_Aemmiter18;
	__string_Aemmitc19[2]=(var) __strings_Aemmitc19;
	__string_Aemmitc20[2]=(var) __strings_Aemmitc20;
	__string_Aemmitc21[2]=(var) __strings_Aemmitc21;
	__string_Aemmitc22[2]=(var) __strings_Aemmitc22;
	__string_Aemmitc23[2]=(var) __strings_Aemmitc23;
	__string_Aemmitc24[2]=(var) __strings_Aemmitc24;
	__string_Aemmitc25[2]=(var) __strings_Aemmitc25;
	__string_Aemmitc26[2]=(var) __strings_Aemmitc26;
	__string_Aemmitc27[2]=(var) __strings_Aemmitc27;
	__string_Aemmitc28[2]=(var) __strings_Aemmitc28;
	__string_Aemmitc29[2]=(var) __strings_Aemmitc29;
	__string_Aemmitc30[2]=(var) __strings_Aemmitc30;
	__string_Aemmitc31[2]=(var) __strings_Aemmitc31;
	__string_Aemmitc32[2]=(var) __strings_Aemmitc32;
	__string_Aemmitc33[2]=(var) __strings_Aemmitc33;
	__string_Aemmitc34[2]=(var) __strings_Aemmitc34;
	__string_Aemmitc35[2]=(var) __strings_Aemmitc35;
	__string_Aemmitc36[2]=(var) __strings_Aemmitc36;
	__string_Aemmitc37[2]=(var) __strings_Aemmitc37;
	__string_Aemmitc38[2]=(var) __strings_Aemmitc38;
	__string_Aemmitc39[2]=(var) __strings_Aemmitc39;
	__string_Aemmitc40[2]=(var) __strings_Aemmitc40;
	__string_Aemmitc41[2]=(var) __strings_Aemmitc41;
	__string_Aemmitc42[2]=(var) __strings_Aemmitc42;
	__string_Aemmitc43[2]=(var) __strings_Aemmitc43;
	__string_Aemmitc44[2]=(var) __strings_Aemmitc44;
	__string_Aemmitc45[2]=(var) __strings_Aemmitc45;
	__string_Aemmitc46[2]=(var) __strings_Aemmitc46;
	__string_Aemmitc47[2]=(var) __strings_Aemmitc47;
	__string_Aemmitc48[2]=(var) __strings_Aemmitc48;
	__string_Aemmitc49[2]=(var) __strings_Aemmitc49;
	__string_Aemmitc50[2]=(var) __strings_Aemmitc50;
	__string_Aemmitc51[2]=(var) __strings_Aemmitc51;
	__string_Aemmitc52[2]=(var) __strings_Aemmitc52;
	__string_Aemmitc53[2]=(var) __strings_Aemmitc53;
	__string_Aemmitc54[2]=(var) __strings_Aemmitc54;
	__string_Aemmitc55[2]=(var) __strings_Aemmitc55;
	__string_Aemmitc56[2]=(var) __strings_Aemmitc56;
	__string_Aemmitc57[2]=(var) __strings_Aemmitc57;
	__string_Aemmitc58[2]=(var) __strings_Aemmitc58;
	__string_Aemmitc59[2]=(var) __strings_Aemmitc59;
	__string_Aemmitc60[2]=(var) __strings_Aemmitc60;
	__string_Aemmitc61[2]=(var) __strings_Aemmitc61;
	__string_Aemmitc62[2]=(var) __strings_Aemmitc62;
	__string_Aemmitc63[2]=(var) __strings_Aemmitc63;
	__string_Aemmitc64[2]=(var) __strings_Aemmitc64;
	__string_Aemmitc65[2]=(var) __strings_Aemmitc65;
	__string_Aemmitc66[2]=(var) __strings_Aemmitc66;
	__string_Aemmitc67[2]=(var) __strings_Aemmitc67;
	__string_Aemmitc68[2]=(var) __strings_Aemmitc68;
	__string_Aemmitc69[2]=(var) __strings_Aemmitc69;
	__string_Aemmitc70[2]=(var) __strings_Aemmitc70;
	__string_Aemmitc71[2]=(var) __strings_Aemmitc71;
	__string_Aemmitc72[2]=(var) __strings_Aemmitc72;
	__string_Aemmitc73[2]=(var) __strings_Aemmitc73;
	__string_Aemmitc74[2]=(var) __strings_Aemmitc74;
	__string_Aemmitc75[2]=(var) __strings_Aemmitc75;
	__string_Aemmitc76[2]=(var) __strings_Aemmitc76;
	__string_Aemmitc77[2]=(var) __strings_Aemmitc77;
	__string_Aemmitc78[2]=(var) __strings_Aemmitc78;
	__string_Aemmitc79[2]=(var) __strings_Aemmitc79;
	__string_Aemmitc80[2]=(var) __strings_Aemmitc80;
	__string_Aemmitc81[2]=(var) __strings_Aemmitc81;
	__string_Aemmitc82[2]=(var) __strings_Aemmitc82;
	__string_Aemmitc83[2]=(var) __strings_Aemmitc83;
	__string_Aemmitc84[2]=(var) __strings_Aemmitc84;
	__string_Aemmitc85[2]=(var) __strings_Aemmitc85;
	__string_Aemmitc86[2]=(var) __strings_Aemmitc86;
	__string_Aemmitc87[2]=(var) __strings_Aemmitc87;
	__string_Aemmitc88[2]=(var) __strings_Aemmitc88;
	__string_Aemmitc89[2]=(var) __strings_Aemmitc89;
	__string_Aemmitc90[2]=(var) __strings_Aemmitc90;
	__string_Aemmitc91[2]=(var) __strings_Aemmitc91;
	__string_Aemmitc92[2]=(var) __strings_Aemmitc92;
	__string_Aemmitc93[2]=(var) __strings_Aemmitc93;
	__string_Aemmitc94[2]=(var) __strings_Aemmitc94;
	__string_Aemmitc95[2]=(var) __strings_Aemmitc95;
	__string_Aemmitc96[2]=(var) __strings_Aemmitc96;
	__string_Aemmitc97[2]=(var) __strings_Aemmitc97;
	__string_Aemmitc98[2]=(var) __strings_Aemmitc98;
	__string_Aemmitc99[2]=(var) __strings_Aemmitc99;
	__string_Aemmitc100[2]=(var) __strings_Aemmitc100;
	__string_Aemmitc101[2]=(var) __strings_Aemmitc101;
	__string_Aemmitc102[2]=(var) __strings_Aemmitc102;
	__string_Aemmitc103[2]=(var) __strings_Aemmitc103;
	__string_Aemmitc104[2]=(var) __strings_Aemmitc104;
	__string_Aemmitc105[2]=(var) __strings_Aemmitc105;
	__string_Aemmitc106[2]=(var) __strings_Aemmitc106;
	__string_Aemmitc107[2]=(var) __strings_Aemmitc107;
	__string_Aemmitc108[2]=(var) __strings_Aemmitc108;
	__string_Aemmitc109[2]=(var) __strings_Aemmitc109;
	__string_Aemmitc110[2]=(var) __strings_Aemmitc110;
	__string_Aemmitc111[2]=(var) __strings_Aemmitc111;
	__string_Aemmitc112[2]=(var) __strings_Aemmitc112;
	__string_Aemmitc113[2]=(var) __strings_Aemmitc113;
	__string_Aemmitc114[2]=(var) __strings_Aemmitc114;
	__string_Aemmitc115[2]=(var) __strings_Aemmitc115;
	__string_Aemmitc116[2]=(var) __strings_Aemmitc116;
	__string_Aemmitc117[2]=(var) __strings_Aemmitc117;
	__string_Aemmitc118[2]=(var) __strings_Aemmitc118;
	__string_Aemmitc119[2]=(var) __strings_Aemmitc119;
	__string_Aemmitc120[2]=(var) __strings_Aemmitc120;
	__string_Aemmitc121[2]=(var) __strings_Aemmitc121;
	__string_Aemmitc122[2]=(var) __strings_Aemmitc122;
	__string_Aemmitc123[2]=(var) __strings_Aemmitc123;
	__string_Aemmitc124[2]=(var) __strings_Aemmitc124;
	__string_Aemmitc125[2]=(var) __strings_Aemmitc125;
	__string_Aemmitc126[2]=(var) __strings_Aemmitc126;
	__string_Aemmitc127[2]=(var) __strings_Aemmitc127;
	__string_Aemmitc128[2]=(var) __strings_Aemmitc128;
	__string_Aemmitc129[2]=(var) __strings_Aemmitc129;
	__string_Aemmitc130[2]=(var) __strings_Aemmitc130;
	__string_Aemmitc131[2]=(var) __strings_Aemmitc131;
	__string_Aemmitc132[2]=(var) __strings_Aemmitc132;
	__string_Aemmitc133[2]=(var) __strings_Aemmitc133;
	__string_Aemmitc134[2]=(var) __strings_Aemmitc134;
	__string_Aemmitc135[2]=(var) __strings_Aemmitc135;
	__string_Aemmitc136[2]=(var) __strings_Aemmitc136;
	__string_Aemmitc137[2]=(var) __strings_Aemmitc137;
	__string_Aemmitc138[2]=(var) __strings_Aemmitc138;
	__string_Aemmitc139[2]=(var) __strings_Aemmitc139;
	__string_Aemmitc140[2]=(var) __strings_Aemmitc140;
	__string_Aemmitc141[2]=(var) __strings_Aemmitc141;
	__string_Aemmitc142[2]=(var) __strings_Aemmitc142;
	__string_Aemmitc143[2]=(var) __strings_Aemmitc143;
	__string_Aemmitc144[2]=(var) __strings_Aemmitc144;
	__string_Aemmitc145[2]=(var) __strings_Aemmitc145;
	__string_Aemmitc146[2]=(var) __strings_Aemmitc146;
	__string_Aemmitc147[2]=(var) __strings_Aemmitc147;
	__string_Aemmitc148[2]=(var) __strings_Aemmitc148;
	__string_Aemmitc149[2]=(var) __strings_Aemmitc149;
	__string_Aemmitc150[2]=(var) __strings_Aemmitc150;
	__string_Aemmitc151[2]=(var) __strings_Aemmitc151;
	__string_Aemmitc152[2]=(var) __strings_Aemmitc152;
	__string_Aemmitc153[2]=(var) __strings_Aemmitc153;
	__string_Aemmitc154[2]=(var) __strings_Aemmitc154;
	__string_Aemmitc155[2]=(var) __strings_Aemmitc155;
	__string_Aemmitc156[2]=(var) __strings_Aemmitc156;
	__string_Aemmitc157[2]=(var) __strings_Aemmitc157;
	__string_Aemmitc158[2]=(var) __strings_Aemmitc158;
	__string_Aemmitc159[2]=(var) __strings_Aemmitc159;
	__string_Aemmitc160[2]=(var) __strings_Aemmitc160;
	__string_Aemmitc161[2]=(var) __strings_Aemmitc161;
	__string_Aemmitc162[2]=(var) __strings_Aemmitc162;
	__string_Aemmitc163[2]=(var) __strings_Aemmitc163;
	__string_Aemmitc164[2]=(var) __strings_Aemmitc164;
	__string_Aemmitc165[2]=(var) __strings_Aemmitc165;
	__string_Aemmitc166[2]=(var) __strings_Aemmitc166;
	__string_Aemmitc167[2]=(var) __strings_Aemmitc167;
	__string_Aemmitc168[2]=(var) __strings_Aemmitc168;
	__string_Aemmitc169[2]=(var) __strings_Aemmitc169;
	__string_Aemmitc170[2]=(var) __strings_Aemmitc170;
	__string_Aemmitc171[2]=(var) __strings_Aemmitc171;
	__string_Aemmitc172[2]=(var) __strings_Aemmitc172;
	__string_Aemmitc173[2]=(var) __strings_Aemmitc173;
	__string_Aemmitc174[2]=(var) __strings_Aemmitc174;
	__string_Aemmitc175[2]=(var) __strings_Aemmitc175;
	__string_Aemmitc176[2]=(var) __strings_Aemmitc176;
	__string_Aemmitc177[2]=(var) __strings_Aemmitc177;
	__string_Aemmitc178[2]=(var) __strings_Aemmitc178;
	__string_Aemmitc179[2]=(var) __strings_Aemmitc179;
	__string_Aemmitc180[2]=(var) __strings_Aemmitc180;
	__string_Aemmitc181[2]=(var) __strings_Aemmitc181;
	__string_Aemmitc182[2]=(var) __strings_Aemmitc182;
	__string_Aemmitc183[2]=(var) __strings_Aemmitc183;
	__string_Aemmitc184[2]=(var) __strings_Aemmitc184;
	__string_Aemmitc185[2]=(var) __strings_Aemmitc185;
	__string_Aemmitc186[2]=(var) __strings_Aemmitc186;
	__string_Aemmitc187[2]=(var) __strings_Aemmitc187;
	__string_Aemmitc188[2]=(var) __strings_Aemmitc188;
	__string_Aemmitc189[2]=(var) __strings_Aemmitc189;
	__string_Aemmitc190[2]=(var) __strings_Aemmitc190;
	__string_Aemmitc191[2]=(var) __strings_Aemmitc191;
	__string_Aemmitc192[2]=(var) __strings_Aemmitc192;
	__string_Aemmitc193[2]=(var) __strings_Aemmitc193;
	__string_Aemmitc194[2]=(var) __strings_Aemmitc194;
	__string_Aemmitc195[2]=(var) __strings_Aemmitc195;
	__string_Aemmitc196[2]=(var) __strings_Aemmitc196;
	__string_Aemmitc197[2]=(var) __strings_Aemmitc197;
	__string_Aemmitc198[2]=(var) __strings_Aemmitc198;
	__string_Aemmitc199[2]=(var) __strings_Aemmitc199;
	__string_Aemmitc200[2]=(var) __strings_Aemmitc200;
	__string_Aemmitc201[2]=(var) __strings_Aemmitc201;
	__string_Aemmitc202[2]=(var) __strings_Aemmitc202;
	__string_Aemmitc203[2]=(var) __strings_Aemmitc203;
	__string_Aemmitc204[2]=(var) __strings_Aemmitc204;
	__string_Aemmitc205[2]=(var) __strings_Aemmitc205;
	__string_Aemmitc206[2]=(var) __strings_Aemmitc206;
	__string_Aemmitc207[2]=(var) __strings_Aemmitc207;
	__string_Aemmitc208[2]=(var) __strings_Aemmitc208;
	__string_Acbody209[2]=(var) __strings_Acbody209;
	__string_Acbody210[2]=(var) __strings_Acbody210;
	__string_Acbody211[2]=(var) __strings_Acbody211;
	__string_Acbody212[2]=(var) __strings_Acbody212;
	__string_Acbody213[2]=(var) __strings_Acbody213;
	__string_Acbody214[2]=(var) __strings_Acbody214;
	__string_Acbody215[2]=(var) __strings_Acbody215;
	__string_Acbody216[2]=(var) __strings_Acbody216;
	__string_Acbody217[2]=(var) __strings_Acbody217;
	__string_Acbody218[2]=(var) __strings_Acbody218;
	__string_Acbody219[2]=(var) __strings_Acbody219;
	__string_Acbody220[2]=(var) __strings_Acbody220;
	__string_Acbody221[2]=(var) __strings_Acbody221;
	__string_Acbody222[2]=(var) __strings_Acbody222;
	__string_Acbody223[2]=(var) __strings_Acbody223;
	__string_Acbody224[2]=(var) __strings_Acbody224;
	__string_Acbody225[2]=(var) __strings_Acbody225;
	__string_Acbody226[2]=(var) __strings_Acbody226;
	__string_Acbody227[2]=(var) __strings_Acbody227;
	__string_Acbody228[2]=(var) __strings_Acbody228;
	__string_Acbody229[2]=(var) __strings_Acbody229;
	__string_Acbody230[2]=(var) __strings_Acbody230;
	__string_Acbody231[2]=(var) __strings_Acbody231;
	__string_Acbody232[2]=(var) __strings_Acbody232;
	__string_Acbody233[2]=(var) __strings_Acbody233;
	__string_Acbody234[2]=(var) __strings_Acbody234;
	__string_Acbody235[2]=(var) __strings_Acbody235;
	__string_Acbody236[2]=(var) __strings_Acbody236;
	__string_Acbody237[2]=(var) __strings_Acbody237;
	__string_Acbody238[2]=(var) __strings_Acbody238;
	__string_Acbody239[2]=(var) __strings_Acbody239;
	__string_Acbody240[2]=(var) __strings_Acbody240;
	__string_Acbody241[2]=(var) __strings_Acbody241;
	__string_Acbody242[2]=(var) __strings_Acbody242;
	__string_Acbody243[2]=(var) __strings_Acbody243;
	__string_Acbody244[2]=(var) __strings_Acbody244;
	__string_Acbody245[2]=(var) __strings_Acbody245;
	__string_Acbody246[2]=(var) __strings_Acbody246;
	__string_Acbody247[2]=(var) __strings_Acbody247;
	__string_Acbody248[2]=(var) __strings_Acbody248;
	__string_Acbody249[2]=(var) __strings_Acbody249;
	__string_Acbody250[2]=(var) __strings_Acbody250;
	__string_Acbody251[2]=(var) __strings_Acbody251;
	__string_Acbody252[2]=(var) __strings_Acbody252;
	__string_Acbody253[2]=(var) __strings_Acbody253;
	__string_Acbody254[2]=(var) __strings_Acbody254;
	__string_Acbody255[2]=(var) __strings_Acbody255;
	__string_Acbody256[2]=(var) __strings_Acbody256;
	__string_Acbody257[2]=(var) __strings_Acbody257;
	__string_Acbody258[2]=(var) __strings_Acbody258;
	__string_Acbody259[2]=(var) __strings_Acbody259;
	__string_Acbody260[2]=(var) __strings_Acbody260;
	__string_Aexpr261[2]=(var) __strings_Aexpr261;
	__string_Aexpr262[2]=(var) __strings_Aexpr262;
	__string_Aexpr263[2]=(var) __strings_Aexpr263;
	__string_Aparser264[2]=(var) __strings_Aparser264;
	__string_Aparser265[2]=(var) __strings_Aparser265;
	__string_Aparser266[2]=(var) __strings_Aparser266;
	__string_Aparser267[2]=(var) __strings_Aparser267;
	__string_Aparser268[2]=(var) __strings_Aparser268;
	__string_Aparser269[2]=(var) __strings_Aparser269;
	__string_Aparser270[2]=(var) __strings_Aparser270;
	__string_Aparser271[2]=(var) __strings_Aparser271;
	__string_Aparser272[2]=(var) __strings_Aparser272;
	__string_Aparser273[2]=(var) __strings_Aparser273;
	__string_Aparser274[2]=(var) __strings_Aparser274;
	__string_Aparser275[2]=(var) __strings_Aparser275;
	__string_Aparser276[2]=(var) __strings_Aparser276;
	__string_Aparser277[2]=(var) __strings_Aparser277;
	__string_Aparser278[2]=(var) __strings_Aparser278;
	__string_Aparser279[2]=(var) __strings_Aparser279;
	__string_Aparser280[2]=(var) __strings_Aparser280;
	__string_Aparser281[2]=(var) __strings_Aparser281;
	__string_Aparser282[2]=(var) __strings_Aparser282;
	__string_Aparser283[2]=(var) __strings_Aparser283;
	__string_Aparser284[2]=(var) __strings_Aparser284;
	__string_Aparser285[2]=(var) __strings_Aparser285;
	__string_Aparser286[2]=(var) __strings_Aparser286;
	__string_Aparser287[2]=(var) __strings_Aparser287;
	__string_Aparser288[2]=(var) __strings_Aparser288;
	__string_Aparser289[2]=(var) __strings_Aparser289;
	__string_Aparser290[2]=(var) __strings_Aparser290;
	__string_Aparser291[2]=(var) __strings_Aparser291;
	__string_Aparser292[2]=(var) __strings_Aparser292;
	__string_Aparser293[2]=(var) __strings_Aparser293;
	__string_Aparser294[2]=(var) __strings_Aparser294;
	__string_Aparser295[2]=(var) __strings_Aparser295;
	__string_Aparser296[2]=(var) __strings_Aparser296;
	__string_Aparser297[2]=(var) __strings_Aparser297;
	__string_Aparser298[2]=(var) __strings_Aparser298;
	__string_Aparser299[2]=(var) __strings_Aparser299;
	__string_Aparser300[2]=(var) __strings_Aparser300;
	__string_Aparser301[2]=(var) __strings_Aparser301;
	__string_Aparser302[2]=(var) __strings_Aparser302;
	__string_Aparser303[2]=(var) __strings_Aparser303;
	__string_Aparser304[2]=(var) __strings_Aparser304;
	__string_Aparser305[2]=(var) __strings_Aparser305;
	__string_Aparser306[2]=(var) __strings_Aparser306;
	__string_Aparser307[2]=(var) __strings_Aparser307;
	__string_Aparser308[2]=(var) __strings_Aparser308;
	__string_Aparser309[2]=(var) __strings_Aparser309;
	__string_Aparser310[2]=(var) __strings_Aparser310;
	__string_Aparser311[2]=(var) __strings_Aparser311;
	__string_Aparser312[2]=(var) __strings_Aparser312;
	__string_Aparser313[2]=(var) __strings_Aparser313;
	__string_Aparser314[2]=(var) __strings_Aparser314;
	__string_Aparser315[2]=(var) __strings_Aparser315;
	__string_Aparser316[2]=(var) __strings_Aparser316;
	__string_Aparser317[2]=(var) __strings_Aparser317;
	__string_Aparser318[2]=(var) __strings_Aparser318;
	__string_Aparser319[2]=(var) __strings_Aparser319;
	__string_Aparser320[2]=(var) __strings_Aparser320;
	__string_Aparser321[2]=(var) __strings_Aparser321;
	__string_Aparser322[2]=(var) __strings_Aparser322;
	__string_Aparser323[2]=(var) __strings_Aparser323;
	__string_Aparser324[2]=(var) __strings_Aparser324;
	__string_Aparser325[2]=(var) __strings_Aparser325;
	__string_Aparser326[2]=(var) __strings_Aparser326;
	__string_Aparser327[2]=(var) __strings_Aparser327;
	__string_Aparser328[2]=(var) __strings_Aparser328;
	__string_Aparser329[2]=(var) __strings_Aparser329;
	__string_Aparser330[2]=(var) __strings_Aparser330;
	__string_Aparser331[2]=(var) __strings_Aparser331;
	__string_Aparser332[2]=(var) __strings_Aparser332;
	__string_Aparser333[2]=(var) __strings_Aparser333;
	__string_Aparser334[2]=(var) __strings_Aparser334;
	__string_Aparser335[2]=(var) __strings_Aparser335;
	__string_Aparser336[2]=(var) __strings_Aparser336;
	__string_Aparser337[2]=(var) __strings_Aparser337;
	__string_Aparser338[2]=(var) __strings_Aparser338;
	__string_Aparser339[2]=(var) __strings_Aparser339;
	__string_Aparser340[2]=(var) __strings_Aparser340;
	__string_Aparser341[2]=(var) __strings_Aparser341;
	__string_Aparser342[2]=(var) __strings_Aparser342;
	__string_Aparser343[2]=(var) __strings_Aparser343;
	__string_Aparser344[2]=(var) __strings_Aparser344;
	__string_Aparser345[2]=(var) __strings_Aparser345;
	__string_Aparser346[2]=(var) __strings_Aparser346;
	__string_Aparser347[2]=(var) __strings_Aparser347;
	__string_Aparser348[2]=(var) __strings_Aparser348;
	__string_Aparser349[2]=(var) __strings_Aparser349;
	__string_Aparser350[2]=(var) __strings_Aparser350;
	__string_Aparser351[2]=(var) __strings_Aparser351;
	__string_Aparser352[2]=(var) __strings_Aparser352;
	__string_Aparser353[2]=(var) __strings_Aparser353;
	__string_Aparser354[2]=(var) __strings_Aparser354;
	__string_Aparser355[2]=(var) __strings_Aparser355;
	__string_Aparser356[2]=(var) __strings_Aparser356;
	__string_Aparser357[2]=(var) __strings_Aparser357;
	__string_Aparser358[2]=(var) __strings_Aparser358;
	__string_Aparser359[2]=(var) __strings_Aparser359;
	__string_Aparser360[2]=(var) __strings_Aparser360;
	__string_Aparser361[2]=(var) __strings_Aparser361;
	__string_Aparser362[2]=(var) __strings_Aparser362;
	__string_Aparser363[2]=(var) __strings_Aparser363;
	__string_Aparser364[2]=(var) __strings_Aparser364;
	__string_Aparser365[2]=(var) __strings_Aparser365;
	__string_Aparser366[2]=(var) __strings_Aparser366;
	__string_Aparser367[2]=(var) __strings_Aparser367;
	__string_Aparser368[2]=(var) __strings_Aparser368;
	__string_Aparser369[2]=(var) __strings_Aparser369;
	__string_Aparser370[2]=(var) __strings_Aparser370;
	__string_Aparser371[2]=(var) __strings_Aparser371;
	__string_Aparser372[2]=(var) __strings_Aparser372;
	__string_Aparser373[2]=(var) __strings_Aparser373;
	__string_Aparser374[2]=(var) __strings_Aparser374;
	__string_Aparser375[2]=(var) __strings_Aparser375;
	__string_Aparser376[2]=(var) __strings_Aparser376;
	__string_Aparser377[2]=(var) __strings_Aparser377;
	__string_Aparser378[2]=(var) __strings_Aparser378;
	__string_Aparser379[2]=(var) __strings_Aparser379;
	__string_Aparser380[2]=(var) __strings_Aparser380;
	__string_Aparser381[2]=(var) __strings_Aparser381;
	__string_Aparser382[2]=(var) __strings_Aparser382;
	__string_Aparser383[2]=(var) __strings_Aparser383;
	__string_Aparser384[2]=(var) __strings_Aparser384;
	__string_Aparser385[2]=(var) __strings_Aparser385;
	__string_Aparser386[2]=(var) __strings_Aparser386;
	__string_Aparser387[2]=(var) __strings_Aparser387;
	__string_Aparser388[2]=(var) __strings_Aparser388;
	__string_Aparser389[2]=(var) __strings_Aparser389;
	__string_Aparser390[2]=(var) __strings_Aparser390;
	__string_Aparser391[2]=(var) __strings_Aparser391;
	__string_Aparser392[2]=(var) __strings_Aparser392;
	__string_Aparser393[2]=(var) __strings_Aparser393;
	__string_Aparser394[2]=(var) __strings_Aparser394;
	__string_Aparser395[2]=(var) __strings_Aparser395;
	__string_Aparser396[2]=(var) __strings_Aparser396;
	__string_Aparser397[2]=(var) __strings_Aparser397;
	__string_Aparser398[2]=(var) __strings_Aparser398;
	__string_Aparser399[2]=(var) __strings_Aparser399;
	__string_Aparser400[2]=(var) __strings_Aparser400;
	__string_Aparser401[2]=(var) __strings_Aparser401;
	__string_Aparser402[2]=(var) __strings_Aparser402;
	__string_Aparser403[2]=(var) __strings_Aparser403;
	__string_Aparser404[2]=(var) __strings_Aparser404;
	__string_Astatement405[2]=(var) __strings_Astatement405;
	__string_Astatement406[2]=(var) __strings_Astatement406;
	__string_mainChello[2]=(var) __strings_mainChello;
	__string_main407[2]=(var) __strings_main407;
	__string_main408[2]=(var) __strings_main408;
	__string_main409[2]=(var) __strings_main409;
	__string_main410[2]=(var) __strings_main410;
	__string_main411[2]=(var) __strings_main411;
	__string_main412[2]=(var) __strings_main412;
	__string_main413[2]=(var) __strings_main413;
	__string_main414[2]=(var) __strings_main414;
	__string_main415[2]=(var) __strings_main415;
	__string_main416[2]=(var) __strings_main416;
	__string_main417[2]=(var) __strings_main417;
	__string_main418[2]=(var) __strings_main418;
	__string_main419[2]=(var) __strings_main419;
	__string_main420[2]=(var) __strings_main420;
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

var bytes__get_buf(void* bb)
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
		m = (void*)string__get_buf((void*)b);
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
	string__set_buf((void*)obj, (var)b);
	return (var)b;
}

var std__strlen(var str)
{
	char *b;
	b =(char*)string__get_buf((void*)str);
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
	d = (char*)string__get_buf((void*)dest) + dpos;
	s = (char*)string__get_buf((void*)src) + start;
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
	sprintf((char*)string__get_buf((void*)dest), "%d", n);
#else
	sprintf((char*)string__get_buf((void*)dest), "%ld", n);
#endif
	return 0;
}

var std__str_toint(var src)
{
	return atol((char*)string__get_buf((void*)src));
}

var std__str_set_at(var dest, var pos, var val)
{
	char *b;
	b = (char*)string__get_buf((void*)dest);
	b[pos] = (char)val;
	return 0;
}

var std__str_get_at(var dest, var pos)
{
	return ((char*)string__get_buf((void*)dest))[pos];
}

var std__strindex(var haystack, var offset, var needle)
{
	char *r;
	char *h;
	char *n;
	h = (char*)string__get_buf((void*)haystack);
	n = (char*)string__get_buf((void*)needle);
	r = (char*)strstr(h + offset, n);
	if (r == NULL) {
		return -1;
	}
	return (var)(r - h);
}

var std__strcmp(var s1, var s2)
{
	return strcmp((char*)string__get_buf((void*)s1), 
			(char*)string__get_buf((void*)s2));
}

var std__strhash(var s)
{
	char *p;
	var h = 0;
	p = (char*)string__get_buf((void*)s);
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
	string__add((void*)fullpath, folder);
	string__add((void*)fullpath, name);
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
			buf = (char*)bytes__get_buf((void*)data);
			fp = fopen(fname, "r");
			if (fp) {
				fseek(fp, seek, SEEK_SET);
				r = fread(buf, 1, size, fp);
				fclose(fp);
			} else {
				r = -1;
			}
			bytes__set_size((void*)data, r);
			if (r > size || r < 0) {
				bytes__dispose((void*)data);
				data = std__native2string(
					       "error reading file.");
				status = 403;
			} else {
				if (r == 0) {
					status = 201;
				}
				buf[r] = '\0';
				bytes__set_size((void*)data, r);
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
				buf = (char*)string__get_buf((void*)data);
			} else {
				buf = (char*)bytes__get_buf((void*)data);
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
				bytes__set_size((void*)data, r);
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
				string__set_int((void*)fullpath, size);
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
	buffer__push((void*)std__workers, ev);
	return 0;
}

var std__pending()
{
	if (buffer__length((void*)std__workers) > 0) {
		return 1;
	}
	return 0;
}

var std__loop()
{
	var ev;
	ev = buffer__shift((void*)std__workers);
	while (ev != 0) {
		if (worker__process((void*)ev) != 0) {
			std__push_worker(ev);
		} else {
			worker__dispose((void*)ev);
		}
		ev = buffer__shift((void*)std__workers);
	}
	return 0;
}

var std__sweep()
{
	var ev;
	if (std__delayed_dispose_buf == 0) {
		return 0;
	}
	while (buffer__length((void*)std__delayed_dispose_buf) > 0) {
		ev = buffer__shift((void*)std__delayed_dispose_buf);
		if (ev != 0) {
			virtual__delayed_dispose((void*)ev);
		}
	}
	return 0;
}

var std__delayed_delete(var obj)
{
	buffer__push((void*)std__delayed_dispose_buf, obj);
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
	array__dispose((void*)std_args);
	std_args = 0;
	buffer__dispose((void*)std__workers);
	std__workers = 0;
	std__sweep();
	buffer__delayed_dispose((void*)std__delayed_dispose_buf);
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
	var a;
	FAKETHIS();

	if (size<1) {
		console__log((var)(__string_array1+ 2));
		std__panic();
	}
	a=std__alloc(size,__parent,array___DcidD);
	return (var)a;
}
var array___V_dispose(struct array*__this)
{

	std__free((var)__this);
	return 0;
}
/* class buffer */
struct buffer {
	var _arr;
	var size;
	var pos;
	var take;
};
var buffer___new(struct buffer*__this, var initial_size, var take_, var __parent)
{
	var i;

	__this->take=take_;
	__this->_arr=array__new(initial_size,(var)__this);
	__this->size=initial_size;
	__this->pos=0;
	i=0;
	while (i<initial_size) {
		((var*)__this->_arr)[i]=0;
		i=i+1;
	}
	return (var)(var)__this;
}
var buffer__new(var initial_size, var take_, var __parent)
{
	NEW(buffer);
	return buffer___new((void*)__this, initial_size, take_, __parent);
}
var buffer___V_delayed_dispose(struct buffer*__this)
{
	var i;

	if ((__this->_arr!=0)&&(__this->take!=0)) {
		i=0;
		while (i<__this->pos) {
			buffer__delete_at((void*)__this, i);
			i=i+1;
		}
	}
	std__delete(__this->_arr);
	__this->_arr=0;
	std__free((var)__this);
	return 0;
}
var buffer___V_dispose(struct buffer*__this)
{

	std__delayed_delete((var)__this);
	return 0;
}
var buffer__length(struct buffer*__this)
{

	return (var)__this->pos;
}
var buffer__empty(struct buffer*__this)
{

	if (__this->pos>0) {
		return (var)0;
	}
	return (var)1;
}
var buffer__delete_at(struct buffer*__this, var idx)
{

	std__delete(((var*)__this->_arr)[idx]);
	((var*)__this->_arr)[idx]=0;
	return 0;
}
var buffer__set_at(struct buffer*__this, var idx, var elem)
{
	var a;
	var i;

	if (((idx+1))>=__this->size) {
		a=array__new(idx+8,(var)__this);
		i=0;
		while (i<__this->pos) {
			((var*)a)[i]=((var*)__this->_arr)[i];
			i=i+1;
		}
		__this->size=idx+8;
		while (i<__this->size) {
			((var*)a)[i]=0;
			i=i+1;
		}
		array__dispose((void*)__this->_arr);
		__this->_arr=a;
	} else if ((__this->take!=0)&&(idx<__this->pos)) {
		buffer__delete_at((void*)__this, idx);
	}
	if (__this->take!=0) {
		std__move(elem);
	}
	while (__this->pos<idx) {
		((var*)__this->_arr)[__this->pos]=0;
		__this->pos=__this->pos+1;
	}
	((var*)__this->_arr)[idx]=elem;
	if (idx>=__this->pos) {
		__this->pos=idx+1;
	}
	return 0;
}
var buffer__get_at(struct buffer*__this, var idx)
{

	return (var)((var*)__this->_arr)[idx];
}
var buffer__push(struct buffer*__this, var elem)
{
	var p;

	p=__this->pos+1;
	buffer__set_at((void*)__this, __this->pos,elem);
	__this->pos=p;
	return (var)0;
}
var buffer__append(struct buffer*__this, var buf)
{
	var l;
	var j;

	j=buffer__length((void*)buf);
	l=(buffer__length((void*)__this))+j;
	while (j>0) {
		l=l-1;
		j=j-1;
		buffer__set_at((void*)__this, l,buffer__get_at((void*)buf,j));
	}
	return 0;
}
var buffer__set_last(struct buffer*__this, var elem)
{

	if (__this->pos<1) {
		return 0;
	}
	((var*)__this->_arr)[__this->pos-1]=elem;
	return 0;
}
var buffer__get_last(struct buffer*__this)
{

	if (__this->pos<1) {
		return (var)0;
	}
	return (var)((var*)__this->_arr)[__this->pos-1];
}
var buffer__pop(struct buffer*__this)
{
	var elem;

	elem=0;
	if (__this->pos>0) {
		elem=buffer__get_at((void*)__this, __this->pos-1);
		__this->pos=__this->pos-1;
	}
	return (var)elem;
}
var buffer__unshift(struct buffer*__this, var elem)
{
	var i;
	var p;

	p=__this->pos+1;
	buffer__set_at((void*)__this, __this->pos,0);
	i=__this->pos;
	while (i>1) {
		i=i-1;
		((var*)__this->_arr)[i]=((var*)__this->_arr)[i-1];
	}
	((var*)__this->_arr)[0]=elem;
	__this->pos=p;
	return (var)0;
}
var buffer__shift(struct buffer*__this)
{
	var elem;
	var i;
	var p;

	if (__this->pos<1) {
		return (var)0;
	}
	p=__this->pos-1;
	elem=buffer__get_at((void*)__this, 0);
	i=0;
	while (i<p) {
		((var*)__this->_arr)[i]=((var*)__this->_arr)[i+1];
		i=i+1;
	}
	__this->pos=p;
	return (var)elem;
}
/* class bytes */
struct bytes {
	var buf;
	var size;
};
var bytes___V_dispose(struct bytes*__this)
{

	std__bytes_dispose((var)__this);
	return 0;
}
var bytes__get_size(struct bytes*__this)
{

	return (var)__this->size;
}
var bytes__set_size(struct bytes*__this, var size1)
{

	__this->size=size1;
	return 0;
}
/* class console */
var console__log(var str)
{
	FAKETHIS();

	std__echo(str);
	std__echo_nl();
	return 0;
}
var console__log_str(var str)
{
	FAKETHIS();

	std__echo(str);
	return 0;
}
var console__log_int(var n)
{
	FAKETHIS();

	std__echo_int(n);
	return 0;
}
/* class file */
struct file {
	var _folder;
};
var file___new(struct file*__this, var folder, var __parent)
{

	__this->_folder=string__to_string((void*)folder);
	return (var)(var)__this;
}
var file__new(var folder, var __parent)
{
	NEW(file);
	return file___new((void*)__this, folder, __parent);
}
var file___V_dispose(struct file*__this)
{

	string__dispose((void*)__this->_folder);
	std__free((var)__this);
	return 0;
}
var file__mkfolder(struct file*__this, var cb, var this_cb)
{

	std__mkfolder(cb,this_cb);
	return 0;
}
var file__mkdir(struct file*__this, var name, var cb, var this_cb)
{

	std__mkdir(__this->_folder,name,cb,this_cb);
	return 0;
}
var file__read(struct file*__this, var name, var seek, var size_, var cb, var this_cb)
{

	std__read(__this->_folder,name,seek,size_,cb,this_cb);
	return 0;
}
var file__write(struct file*__this, var name, var data, var type, var seek, var size, var cb, var this_cb)
{

	std__write(__this->_folder,name,data,type,seek,size,cb,this_cb);
	return 0;
}
var file__filesize(struct file*__this, var name, var cb, var this_cb)
{

	std__filesize(__this->_folder,name,cb,this_cb);
	return 0;
}
var file__scandir(struct file*__this, var name, var cb, var this_cb)
{

	std__scandir(__this->_folder,name,cb,this_cb);
	return 0;
}
var file__rmdir(struct file*__this, var name, var cb, var this_cb)
{

	std__rmdir(__this->_folder,name,cb,this_cb);
	return 0;
}
var file__unlink(struct file*__this, var name, var cb, var this_cb)
{

	std__unlink(__this->_folder,name,cb,this_cb);
	return 0;
}
/* class hash */
struct hash {
	var _arr;
	var size;
};
var hash___new(struct hash*__this, var size_, var __parent)
{
	var i;

	__this->size=size_;
	__this->_arr=array__new(__this->size,(var)__this);
	i=0;
	while (i<size_) {
		((var*)__this->_arr)[i]=0;
		i=i+1;
	}
	return (var)(var)__this;
}
var hash__new(var size_, var __parent)
{
	NEW(hash);
	return hash___new((void*)__this, size_, __parent);
}
var hash___V_dispose(struct hash*__this)
{
	var i;
	var next;
	var cur;

	i=0;
	while (i<__this->size) {
		cur=((var*)__this->_arr)[i];
		while (cur!=0) {
			next=((var*)cur)[0];
			std__delete(cur);
			cur=next;
		}
		((var*)__this->_arr)[i]=0;
		i=i+1;
	}
	std__delete(__this->_arr);
	std__free((var)__this);
	return 0;
}
var hash__add(struct hash*__this, var key, var value)
{
	var h;
	var hh;
	var cur;
	var old;
	var next;
	var prev;
	var ret;
	var cmp;

	h=string__get_hash((void*)key);
	hh=h;
	h=h%__this->size;
	old=((var*)__this->_arr)[h];
	cur=0;
	if (old==0) {
		cur=array__new(4,(var)__this);
		((var*)cur)[0]=0;
		((var*)__this->_arr)[h]=cur;
	}
	next=old;
	prev=0;
	ret=0;
	while (((cur==0))&&((next!=0))) {
		if ((((var*)next)[1])==hh) {
			cmp=string__compare((void*)key,((var*)next)[2]);
			if (cmp>0) {
				cur=array__new(4,(var)__this);
				((var*)cur)[0]=next;
				if (prev==0) {
					((var*)__this->_arr)[h]=cur;
				} else {
					((var*)prev)[0]=cur;
				}
			} else if (cmp==0) {
				cur=next;
				ret=((var*)next)[3];
			}
		} else if ((((var*)next)[1])>hh) {
			cur=array__new(4,(var)__this);
			((var*)cur)[0]=next;
			if (prev==0) {
				((var*)__this->_arr)[h]=cur;
			} else {
				((var*)prev)[0]=cur;
			}
		}
		prev=next;
		next=((var*)next)[0];
	}
	if (cur==0) {
		cur=array__new(4,(var)__this);
		((var*)cur)[0]=0;
		if (prev==0) {
			((var*)__this->_arr)[h]=cur;
		} else {
			((var*)prev)[0]=cur;
		}
	}
	((var*)cur)[1]=hh;
	((var*)cur)[2]=key;
	((var*)cur)[3]=value;
	return (var)ret;
}
var hash__get(struct hash*__this, var key)
{
	var h;
	var hh;
	var next;
	var cmp;

	h=string__get_hash((void*)key);
	hh=h;
	h=h%__this->size;
	next=((var*)__this->_arr)[h];
	while (next!=0) {
		if ((((var*)next)[1])==hh) {
			cmp=string__compare((void*)key,((var*)next)[2]);
			if (cmp>0) {
				return (var)0;
			} else if (cmp==0) {
				return (var)((var*)next)[3];
			}
		} else if ((((var*)next)[1])>hh) {
			return (var)0;
		}
		next=((var*)next)[0];
	}
	return (var)0;
}
/* class object */
struct object {
	var dummy;
};
var object___new(struct object*__this, var __parent)
{

	return (var)(var)__this;
}
var object__new(var __parent)
{
	NEW(object);
	return object___new((void*)__this, __parent);
}
var object___V_dispose(struct object*__this)
{

	std__free((var)__this);
	return 0;
}
/* class worker */
struct worker {
	var status;
	var data;
	var lambda_this;
	var lambda;
	var type;
};
var worker___new(struct worker*__this, var lambda_this_, var lambda_, var status_, var data_, var type_, var __parent)
{

	__this->type=type_;
	__this->lambda_this=lambda_this_;
	__this->lambda=lambda_;
	__this->status=status_;
	if (__this->type!=1) {
		__this->data=std__move(data_);
	} else {
		__this->data=data_;
	}
	std__push_worker((var)__this);
	return (var)(var)__this;
}
var worker__new(var lambda_this_, var lambda_, var status_, var data_, var type_, var __parent)
{
	NEW(worker);
	return worker___new((void*)__this, lambda_this_, lambda_, status_, data_, type_, __parent);
}
var worker___V_dispose(struct worker*__this)
{

	if (__this->data) {
		if (__this->type==1) {
			std__bytes_dispose(__this->data);
		} else {
			std__delete(__this->data);
		}
		__this->data=0;
	}
	std__free((var)__this);
	return 0;
}
var worker__process(struct worker*__this)
{

	return (var)std__lambda(__this->lambda_this,__this->lambda,__this->status,__this->data,__this->type);
}
/* class std */
/* class string */
struct string {
	var _str;
	var size;
};
var string___new(struct string*__this, var alloc, var __parent)
{

	__this->_str=0;
	std__stralloc((var)__this,alloc+1);
	__this->size=alloc;
	return (var)(var)__this;
}
var string__new(var alloc, var __parent)
{
	NEW(string);
	return string___new((void*)__this, alloc, __parent);
}
var string___V_dispose(struct string*__this)
{

	std__string_release((var)__this);
	return 0;
}
var string__get_buf(struct string*__this)
{

	return (var)__this->_str;
}
var string__set_buf(struct string*__this, var b)
{

	__this->_str=b;
	return 0;
}
var string__get_size(struct string*__this)
{

	return (var)__this->size;
}
var string__set_size(struct string*__this, var ns)
{
	var ops;
	var b;

	if (__this->size>ns) {
		return 0;
	}
	ops=string__new(ns+1,(var)__this);
	std__append(ops,0,(var)__this,0,__this->size);
	b=__this->_str;
	__this->_str=string__get_buf((void*)ops);
	string__set_buf((void*)ops,b);
	std__delete(ops);
	__this->size=ns;
	return 0;
}
var string__length(struct string*__this)
{
	var l;

	l=std__strlen((var)__this);
	return (var)l;
}
var string__set_int(struct string*__this, var num)
{

	return (var)std__str_set_int((var)__this,__this->size,num);
}
var string__set(struct string*__this, var src)
{
	var sl;

	sl=std__strlen(src);
	if (__this->size<sl) {
		std__stralloc((var)__this,sl+1);
		__this->size=sl;
	}
	std__str_set_at((var)__this,0,'\0');
	std__append((var)__this,0,src,0,sl);
	return 0;
}
var string__add_char(struct string*__this, var num)
{
	var sl;
	var tl;
	var ns;
	var i;

	sl=6;
	tl=std__strlen((var)__this);
	ns=(sl+tl)+1;
	i=0;
	if (__this->size<=ns) {
		ns=ns+8;
		string__set_size((void*)__this, ns);
	}
	i=tl;
	std__str_set_at((var)__this,i,num);
	i=i+1;
	std__str_set_at((var)__this,i,'\0');
	return 0;
}
var string__add(struct string*__this, var src)
{

	string__add_at((void*)__this, std__strlen((var)__this),src);
	return 0;
}
var string__add_at(struct string*__this, var tl, var src)
{
	var sl;
	var ns;

	sl=std__strlen(src);
	ns=(sl+tl)+1;
	if (ns>=__this->size) {
		string__set_size((void*)__this, ns*2);
	}
	std__append((var)__this,tl,src,0,ns);
	return (var)sl+tl;
}
var string__indexof(struct string*__this, var start_pos, var needle)
{

	return (var)std__strindex((var)__this,start_pos,needle);
}
var string__substr(struct string*__this, var start_pos, var length_, var result)
{
	var len;

	len=std__strlen((var)__this);
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
		string__set((void*)result,(var)(__string_string2+ 2));
		return 0;
	}
	string__set_size((void*)result,length_+1);
	std__str_set_at(result,0,'\0');
	std__append(result,0,(var)__this,start_pos,length_);
	return 0;
}
var string__to_string(struct string*__this)
{
	var str;

	str=string__new((string__length((void*)__this))+1,(var)__this);
	string__set((void*)str,(var)__this);
	return (var)str;
}
var string__to_int(struct string*__this)
{

	return (var)std__str_toint((var)__this);
}
var string__compare(struct string*__this, var other)
{

	return (var)std__strcmp((var)__this,other);
}
var string__get_hash(struct string*__this)
{

	return (var)std__strhash((var)__this);
}
var string__get_at(struct string*__this, var at)
{
	var l;

	l=__this->size;
	if (l<1) {
		l=std__strlen((var)__this);
	}
	if (((at<l))&&((at>=0))) {
		return (var)std__str_get_at((var)__this,at);
	}
	return (var)'\0';
}
var string__set_at(struct string*__this, var at, var v)
{
	var l;

	l=__this->size;
	if (l<1) {
		l=std__strlen((var)__this);
	}
	if (((at<l))&&((at>=0))) {
		std__str_set_at((var)__this,at,v);
	}
	return 0;
}
/* class Aclass */
struct Aclass {
	var tok;
	var next;
	var prep_kind;
	var prep_type;
	var prep_type_id;
	var prep_name;
	var implements;
	var members;
	var member;
	var field_index;
	var lambda_stack;
	var nb_lambda;
	var statement;
	var stm_stack;
	var expression;
	var cur_expr;
	var expr_id;
	var garbage_pool;
};
var Aclass___new(struct Aclass*__this, var token, var __parent)
{

	__this->tok=token;
	__this->next=0;
	__this->members=buffer__new(256,1,(var)__this);
	__this->implements=buffer__new(1,0,(var)__this);
	__this->garbage_pool=buffer__new(100,1,(var)__this);
	__this->field_index=-(1);
	__this->statement=0;
	__this->stm_stack=buffer__new(2,0,(var)__this);
	__this->lambda_stack=buffer__new(2,0,(var)__this);
	__this->nb_lambda=0;
	__this->expression=0;
	__this->prep_type_id=0;
	__this->prep_name=0;
	return (var)(var)__this;
}
var Aclass__new(var token, var __parent)
{
	NEW(Aclass);
	return Aclass___new((void*)__this, token, __parent);
}
var Aclass___V_dispose(struct Aclass*__this)
{

	if (__this->next!=0) {
		std__delayed_delete(__this->next);
	}
	__this->next=0;
	Aclass__delayed_dispose((void*)__this);
	return 0;
}
var Aclass___V_delayed_dispose(struct Aclass*__this)
{

	if (__this->next!=0) {
		std__delayed_delete(__this->next);
	}
	std__delete(__this->tok);
	std__delete(__this->members);
	std__delete(__this->implements);
	std__delete(__this->statement);
	std__delete(__this->stm_stack);
	std__delete(__this->lambda_stack);
	std__delete(__this->expression);
	std__delete(__this->garbage_pool);
	std__free((var)__this);
	return 0;
}
var Aclass__error(struct Aclass*__this, var err)
{

	console__log(err);
	std__exit(-(1));
	return 0;
}
var Aclass__get_implements(struct Aclass*__this)
{

	return (var)__this->implements;
}
var Aclass__get_nb_lambda(struct Aclass*__this)
{

	return (var)__this->nb_lambda;
}
var Aclass__add_implements(struct Aclass*__this, var x)
{

	buffer__push((void*)__this->implements,x);
	return 0;
}
var Aclass__get_members(struct Aclass*__this)
{

	return (var)__this->members;
}
var Aclass__get_nb_fields(struct Aclass*__this)
{

	return (var)__this->field_index+1;
}
var Aclass__set_next(struct Aclass*__this, var n)
{

	__this->next=std__move(n);
	return 0;
}
var Aclass__get_next(struct Aclass*__this)
{

	return (var)__this->next;
}
var Aclass__get_name(struct Aclass*__this)
{

	return (var)__this->tok;
}
var Aclass__get_const(struct Aclass*__this, var v)
{
	var i;
	var m;
	var tok;
	var s;

	i=buffer__length((void*)__this->members);
	while (i>0) {
		i=i-1;
		m=buffer__get_at((void*)__this->members,i);
		tok=Amember__get_name((void*)m);
		s=Atoken__get_data((void*)tok);
		if (((Amember__get_kind((void*)m))==(4))&&((string__compare((void*)s,v))==0)) {
			tok=Amember__get_initial_value((void*)m);
			return (var)tok;
		}
	}
	return (var)0;
}
var Aclass__pad(struct Aclass*__this, var p)
{

	while (p>0) {
		p=p-1;
		console__log_str((var)(__string_Aclass3+ 2));
	}
	return 0;
}
var Aclass__prepare_kind(struct Aclass*__this, var kind_)
{

	__this->prep_kind=kind_;
	__this->prep_type=0;
	__this->prep_type_id=0;
	__this->prep_name=0;
	return 0;
}
var Aclass__prepare_type(struct Aclass*__this, var type_)
{

	__this->prep_type=type_;
	return 0;
}
var Aclass__prepare_type_identifier(struct Aclass*__this, var id_)
{

	__this->prep_type=12;
	__this->prep_type_id=id_;
	return 0;
}
var Aclass__prepare_set_name(struct Aclass*__this, var id_)
{

	__this->prep_name=id_;
	return 0;
}
var Aclass__valid_member_name(struct Aclass*__this)
{

	__this->member=Amember__new(__this->prep_kind,__this->prep_type,__this->prep_type_id,__this->prep_name,(var)__this);
	
	switch (__this->prep_kind) {
	case 3: 
		__this->field_index=__this->field_index+1;
		Amember__set_index((void*)__this->member,__this->field_index);
		break;
	case 2: 
		break;
	case 4: 
		break;
	default:
		break;
	} 
	__this->prep_kind=0;
	__this->prep_type=0;
	__this->prep_type_id=0;
	__this->prep_name=0;
	buffer__push((void*)__this->members,__this->member);
	return 0;
}
var Aclass__valid_param(struct Aclass*__this)
{

	Amember__add_param((void*)__this->member,__this->prep_kind,__this->prep_type,__this->prep_type_id,__this->prep_name);
	return 0;
}
var Aclass__valid_var(struct Aclass*__this)
{

	Amember__add_var((void*)__this->member,__this->prep_kind,__this->prep_type,__this->prep_type_id,__this->prep_name);
	return 0;
}
var Aclass__begin_else(struct Aclass*__this, var type_)
{

	Astatement__add_else((void*)__this->statement,type_);
	return 0;
}
var Aclass__begin_stm(struct Aclass*__this, var type_, var orig)
{
	var st;

	buffer__push((void*)__this->stm_stack,__this->statement);
	st=Astatement__new(type_,__this->statement,buffer__length((void*)__this->stm_stack),(var)__this);
	if (__this->statement==0) {
		Amember__add_statement((void*)__this->member,st);
	} else {
		Astatement__add_statement((void*)__this->statement,st);
	}
	if (type_==(21)) {
		Aclass__begin_expr((void*)__this, orig);
	} else if (type_==(22)) {
		Aclass__begin_expr((void*)__this, orig);
	}
	__this->statement=st;
	return 0;
}
var Aclass__finish_stm(struct Aclass*__this)
{

	if (__this->cur_expr!=0) {
		Aclass__error((void*)__this, (var)(__string_Aclass4+ 2));
	}
	std__delete(__this->statement);
	__this->statement=buffer__pop((void*)__this->stm_stack);
	return 0;
}
var Aclass__finish_const(struct Aclass*__this, var initialiser1)
{

	Aclass__valid_member_name((void*)__this);
	Amember__set_initial_value((void*)__this->member,initialiser1);
	return 0;
}
var Aclass__begin_lambda(struct Aclass*__this, var id1)
{
	var nam;
	var n;
	var ex;

	nam=string__new(10,(var)__this);
	string__set_int((void*)nam,__this->nb_lambda);
	__this->nb_lambda=__this->nb_lambda+1;
	n=Atoken__new(34,nam,Atoken__get_line((void*)id1),Atoken__get_file((void*)id1),(var)__this);
	Atoken__take((void*)n);
	buffer__push((void*)__this->garbage_pool,n);
	ex=Aexpr__new(34,900,1,(var)__this);
	Aexpr__set_value((void*)ex,nam);
	Aexpr__set_origin((void*)ex,id1);
	Aexpr__add((void*)__this->cur_expr,ex);
	buffer__push((void*)__this->lambda_stack,__this->stm_stack);
	buffer__push((void*)__this->lambda_stack,__this->member);
	buffer__push((void*)__this->lambda_stack,__this->cur_expr);
	buffer__push((void*)__this->lambda_stack,__this->statement);
	buffer__push((void*)__this->lambda_stack,__this->expression);
	__this->expression=0;
	__this->cur_expr=0;
	__this->statement=0;
	__this->stm_stack=buffer__new(2,0,(var)__this);
	__this->member=Amember__new(32,7,0,n,(var)__this);
	buffer__push((void*)__this->members,__this->member);
	return 0;
}
var Aclass__finish_lambda(struct Aclass*__this)
{

	std__delete(__this->stm_stack);
	__this->expression=buffer__pop((void*)__this->lambda_stack);
	__this->statement=buffer__pop((void*)__this->lambda_stack);
	__this->cur_expr=buffer__pop((void*)__this->lambda_stack);
	__this->member=buffer__pop((void*)__this->lambda_stack);
	__this->stm_stack=buffer__pop((void*)__this->lambda_stack);
	return 0;
}
var Aclass__finish_subroutine(struct Aclass*__this)
{

	while ((buffer__length((void*)__this->stm_stack))>0) {
		std__maybe_delete(buffer__pop((void*)__this->stm_stack),__this->stm_stack);
	}
	return 0;
}
var Aclass__begin_expr(struct Aclass*__this, var orig)
{

	__this->expression=Aexpr__new(1000,0,0,(var)__this);
	Aexpr__set_origin((void*)__this->expression,orig);
	__this->cur_expr=__this->expression;
	return 0;
}
var Aclass__finish_expr(struct Aclass*__this)
{

	if (__this->expression!=0) {
		Astatement__set_expression((void*)__this->statement,__this->expression);
	}
	__this->expression=0;
	__this->cur_expr=0;
	return 0;
}
var Aclass__expr_op(struct Aclass*__this, var op_, var orig)
{
	var ex;

	ex=0;
	
	switch (op_) {
	case 1000: 
		break;
	case 1048: 
		ex=Aexpr__new(op_,30,2,(var)__this);
		break;
	case 1026: 
		ex=Aexpr__new(op_,100,1,(var)__this);
		break;
	case 1027: 
		ex=Aexpr__new(op_,100,2,(var)__this);
		break;
	case 1028: 
		ex=Aexpr__new(op_,110,1,(var)__this);
		break;
	case 1029: 
		ex=Aexpr__new(op_,110,1,(var)__this);
		break;
	case 1030: 
		ex=Aexpr__new(op_,110,1,(var)__this);
		break;
	case 1031: 
		ex=Aexpr__new(op_,110,1,(var)__this);
		break;
	case 1032: 
		ex=Aexpr__new(op_,60,1,(var)__this);
		break;
	case 1033: 
		ex=Aexpr__new(op_,50,1,(var)__this);
		break;
	case 1034: 
		ex=Aexpr__new(op_,130,1,(var)__this);
		break;
	case 1035: 
		ex=Aexpr__new(op_,130,1,(var)__this);
		break;
	case 1036: 
		ex=Aexpr__new(op_,140,1,(var)__this);
		break;
	case 1037: 
		ex=Aexpr__new(op_,140,1,(var)__this);
		break;
	case 1038: 
		ex=Aexpr__new(op_,140,1,(var)__this);
		break;
	case 1039: 
		ex=Aexpr__new(op_,160,2,(var)__this);
		break;
	case 1041: 
		ex=Aexpr__new(op_,160,2,(var)__this);
		break;
	case 1042: 
		ex=Aexpr__new(op_,160,2,(var)__this);
		break;
	case 1043: 
		ex=Aexpr__new(op_,170,1,(var)__this);
		break;
	case 1049: 
		ex=Aexpr__new(op_,170,1,(var)__this);
		break;
	case 1044: 
		ex=Aexpr__new(op_,170,1,(var)__this);
		break;
	case 1045: 
		ex=Aexpr__new(op_,170,1,(var)__this);
		break;
	case 1046: 
		ex=Aexpr__new(op_,10,1,(var)__this);
		break;
	default:
		console__log((var)(__string_Aclass5+ 2));
		std__exit(-(1));
		break;
	} 
	if (ex!=0) {
		Aexpr__set_origin((void*)ex,orig);
		__this->cur_expr=Aexpr__add((void*)__this->cur_expr,ex);
	}
	return 0;
}
var Aclass__expr_open_par(struct Aclass*__this)
{
	var ex;

	ex=Aexpr__new(1040,1000,1,(var)__this);
	__this->cur_expr=Aexpr__add((void*)__this->cur_expr,ex);
	Aexpr__set_precedence((void*)ex,1);
	return 0;
}
var Aclass__expr_in_par(struct Aclass*__this)
{
	var ex;

	ex=Aexpr__close((void*)__this->cur_expr,1040);
	if (ex==0) {
		return (var)0;
	}
	return (var)1;
}
var Aclass__expr_close_par(struct Aclass*__this)
{

	__this->cur_expr=Aexpr__close((void*)__this->cur_expr,1040);
	if (__this->cur_expr==0) {
		Aclass__error((void*)__this, (var)(__string_Aclass6+ 2));
	} else {
		Aexpr__set_precedence((void*)__this->cur_expr,1000);
	}
	return 0;
}
var Aclass__expr_open_index(struct Aclass*__this, var id_, var orig)
{
	var ex;

	Aclass__expr_var((void*)__this, id_,orig);
	Aclass__expr_op((void*)__this, 1045,orig);
	ex=Aexpr__new(1047,1000,1,(var)__this);
	__this->cur_expr=Aexpr__add((void*)__this->cur_expr,ex);
	Aexpr__set_precedence((void*)ex,2);
	return 0;
}
var Aclass__expr_close_index(struct Aclass*__this)
{

	__this->cur_expr=Aexpr__close((void*)__this->cur_expr,1045);
	if (__this->cur_expr==0) {
		Aclass__error((void*)__this, (var)(__string_Aclass7+ 2));
	} else {
		Aexpr__set_precedence((void*)__this->cur_expr,1000);
	}
	return 0;
}
var Aclass__expr_begin_sub_call(struct Aclass*__this, var class_, var name_, var orig)
{
	var ex;

	if (class_!=0) {
		Aclass__expr_var((void*)__this, class_,orig);
		Aclass__expr_op((void*)__this, 1043,orig);
		Aclass__expr_var((void*)__this, name_,orig);
		Aclass__expr_op((void*)__this, 1044,orig);
	} else {
		Aclass__expr_var((void*)__this, name_,orig);
		Aclass__expr_op((void*)__this, 1044,orig);
	}
	ex=Aexpr__new(1047,1000,1,(var)__this);
	__this->cur_expr=Aexpr__add((void*)__this->cur_expr,ex);
	Aexpr__set_precedence((void*)ex,2);
	Aexpr__set_origin((void*)ex,orig);
	return 0;
}
var Aclass__expr_next_expr(struct Aclass*__this, var orig)
{

	Aclass__expr_op((void*)__this, 1046,orig);
	return 0;
}
var Aclass__expr_finish_sub_call(struct Aclass*__this)
{

	__this->cur_expr=Aexpr__close((void*)__this->cur_expr,1044);
	if (__this->cur_expr==0) {
		Aclass__error((void*)__this, (var)(__string_Aclass8+ 2));
	} else {
		Aexpr__set_precedence((void*)__this->cur_expr,1000);
	}
	return 0;
}
var Aclass__expr_term(struct Aclass*__this, var term_, var orig)
{
	var ex;

	ex=Aexpr__new(term_,1000,1,(var)__this);
	__this->cur_expr=Aexpr__add((void*)__this->cur_expr,ex);
	Aexpr__set_origin((void*)ex,orig);
	return 0;
}
var Aclass__expr_var(struct Aclass*__this, var name_, var orig)
{
	var ex;

	ex=Aexpr__new(16,900,0,(var)__this);
	__this->cur_expr=Aexpr__add((void*)__this->cur_expr,ex);
	Aexpr__set_value((void*)ex,name_);
	Aexpr__set_origin((void*)ex,orig);
	return 0;
}
var Aclass__expr_int_const(struct Aclass*__this, var value_, var orig)
{
	var ex;

	ex=Aexpr__new(27,900,0,(var)__this);
	__this->cur_expr=Aexpr__add((void*)__this->cur_expr,ex);
	Aexpr__set_value((void*)ex,value_);
	Aexpr__set_origin((void*)ex,orig);
	return 0;
}
var Aclass__expr_char_const(struct Aclass*__this, var value_, var orig)
{
	var ex;

	ex=Aexpr__new(28,900,0,(var)__this);
	__this->cur_expr=Aexpr__add((void*)__this->cur_expr,ex);
	Aexpr__set_value((void*)ex,value_);
	Aexpr__set_origin((void*)ex,orig);
	return 0;
}
var Aclass__expr_str_const(struct Aclass*__this, var value_, var orig)
{
	var ex;

	ex=Aexpr__new(29,900,0,(var)__this);
	__this->cur_expr=Aexpr__add((void*)__this->cur_expr,ex);
	Aexpr__set_value((void*)ex,value_);
	Aexpr__set_origin((void*)ex,orig);
	return 0;
}
var Aclass__expr_constant(struct Aclass*__this, var class_name_, var const_name_, var orig)
{
	var ex;

	Aclass__expr_var((void*)__this, class_name_,orig);
	Aclass__expr_op((void*)__this, 1049,orig);
	ex=Aexpr__new(4,900,0,(var)__this);
	Aexpr__set_origin((void*)ex,orig);
	__this->cur_expr=Aexpr__add((void*)__this->cur_expr,ex);
	Aexpr__set_value((void*)ex,const_name_);
	return 0;
}
/* class Alexer */
struct Alexer {
	var _src;
	var _str;
	var _pool;
	var garbage_pool;
	var pos;
	var line;
	var _token;
	var type;
	var c;
	var len;
	var enable_escape;
	var _stringh;
	var _syms;
	var in_string;
	var in_quote;
	var in_comment;
	var in_com_multi;
	var in_escape;
	var in_asm;
	var in_asm_multi;
	var in_number;
	var in_identifier;
	var in_space;
	var need_char;
};
var Alexer___new(struct Alexer*__this, var __parent)
{

	__this->_str=string__new(1024,(var)__this);
	__this->_token=string__new(256,(var)__this);
	__this->_pool=buffer__new(32,0,(var)__this);
	__this->garbage_pool=buffer__new(1024,1,(var)__this);
	__this->_stringh=hash__new(4096,(var)__this);
	__this->_syms=buffer__new(2048,1,(var)__this);
	buffer__push((void*)__this->_syms,0);
	__this->pos=0;
	__this->line=1;
	__this->c=0;
	__this->len=0;
	__this->enable_escape=0;
	__this->need_char=1;
	__this->in_string=0;
	__this->in_quote=0;
	__this->in_comment=0;
	__this->in_com_multi=0;
	__this->in_escape=0;
	__this->in_asm=0;
	__this->in_asm_multi=0;
	__this->in_number=0;
	__this->in_identifier=0;
	__this->in_space=1;
	return (var)(var)__this;
}
var Alexer__new(var __parent)
{
	NEW(Alexer);
	return Alexer___new((void*)__this, __parent);
}
var Alexer___V_dispose(struct Alexer*__this)
{

	std__delete(__this->_str);
	std__delete(__this->_token);
	std__delete(__this->_pool);
	std__delete(__this->garbage_pool);
	std__delete(__this->_stringh);
	std__delete(__this->_syms);
	std__free((var)__this);
	return 0;
}
var Alexer__begin(struct Alexer*__this, var file_)
{

	__this->pos=0;
	__this->line=1;
	__this->_src=Alexer__get_string((void*)__this, file_);
	return 0;
}
var Alexer__get_at(struct Alexer*__this, var x)
{

	return (var)buffer__get_at((void*)__this->_pool,x);
}
var Alexer__shift(struct Alexer*__this)
{

	buffer__shift((void*)__this->_pool);
	return 0;
}
var Alexer__empty(struct Alexer*__this)
{

	return (var)buffer__empty((void*)__this->_pool);
}
var Alexer__set_enable_escape(struct Alexer*__this, var v)
{

	__this->enable_escape=v;
	return 0;
}
var Alexer__get_string(struct Alexer*__this, var str_)
{
	var s;
	var i;

	i=hash__get((void*)__this->_stringh,str_);
	if (i>0) {
		return (var)buffer__get_at((void*)__this->_syms,i);
	}
	s=string__new((string__length((void*)str_))+2,(var)__this);
	string__add((void*)s,str_);
	hash__add((void*)__this->_stringh,s,buffer__length((void*)__this->_syms));
	buffer__push((void*)__this->_syms,s);
	return (var)s;
}
var Alexer__get_string_id(struct Alexer*__this, var str_)
{

	return (var)hash__get((void*)__this->_stringh,str_);
}
var Alexer__add(struct Alexer*__this, var str_)
{
	var ns;

	if (__this->len<0) {
		return 0;
	}
	if ((string__length((void*)str_))<1) {
		Alexer__finish((void*)__this);
		return 0;
	}
	if (__this->pos<(string__length((void*)__this->_str))) {
		ns=string__new(32,(var)__this);
		string__substr((void*)__this->_str,__this->pos,0,ns);
		string__add((void*)ns,str_);
		std__delete(__this->_str);
		__this->_str=ns;
		string__set((void*)__this->_str,str_);
	} else {
		string__set((void*)__this->_str,str_);
	}
	__this->pos=0;
	__this->len=string__length((void*)__this->_str);
	if (__this->need_char!=0) {
		Alexer__next((void*)__this);
	}
	Alexer__tokenize((void*)__this);
	return 0;
}
var Alexer__tokenize(struct Alexer*__this)
{
	var s;

	s=Alexer__state((void*)__this);
	while ((s!=0)) {
		if (__this->need_char!=0) {
			return 0;
		}
		s=Alexer__state((void*)__this);
	}
	return 0;
}
var Alexer__is_digit(struct Alexer*__this, var c)
{

	if (((c>='0'))&&((c<='9'))) {
		return (var)1;
	}
	return (var)0;
}
var Alexer__is_letter(struct Alexer*__this, var c)
{

	if (((((c>='a'))&&((c<='z')))||((((c>='A'))&&((c<='Z')))))) {
		return (var)1;
	}
	return (var)0;
}
var Alexer__is_space(struct Alexer*__this, var c)
{

	if (((((c==' '))||((c=='\t')))||((c=='\n')))||((c=='\r'))) {
		return (var)1;
	}
	return (var)0;
}
var Alexer__next(struct Alexer*__this)
{

	if (__this->pos>=__this->len) {
		__this->need_char=1;
		__this->c='\0';
		return (var)0;
	}
	__this->need_char=0;
	__this->c=string__get_at((void*)__this->_str,__this->pos);
	__this->pos=__this->pos+1;
	return (var)1;
}
var Alexer__validate(struct Alexer*__this, var type_)
{
	var t;

	if (type_==(9)) {
		__this->line=__this->line+1;
	}
	t=Atoken__new(type_,Alexer__get_string((void*)__this, __this->_token),__this->line,__this->_src,(var)__this);
	buffer__push((void*)__this->_pool,t);
	buffer__push((void*)__this->garbage_pool,t);
	string__set_at((void*)__this->_token,0,'\0');
	return 0;
}
var Alexer__error(struct Alexer*__this, var msg)
{

	console__log_str((var)(__string_Alexer9+ 2));
	console__log_str(__this->_src);
	console__log_str((var)(__string_Alexer10+ 2));
	console__log_int(__this->line);
	console__log_str((var)(__string_Alexer11+ 2));
	console__log_str(__this->_token);
	console__log_str((var)(__string_Alexer12+ 2));
	console__log(msg);
	__this->len=-(1);
	return 0;
}
var Alexer__state(struct Alexer*__this)
{
	var l;
	var a;
	var b;
	var d;

	if (__this->in_escape!=0) {
		if (__this->enable_escape==0) {
			if (__this->c!='\n') {
				string__add_char((void*)__this->_token,'\\');
				string__add_char((void*)__this->_token,__this->c);
				Alexer__next((void*)__this);
				__this->in_escape=0;
				return (var)1;
			}
			__this->line=__this->line+1;
		} else if (__this->c!='\n') {
			a=__this->c;
			if (__this->c=='0') {
				a=0;
			} else if (__this->c=='n') {
				a='\n';
			} else if (__this->c=='t') {
				a='\t';
			} else if (__this->c=='b') {
				a='\b';
			} else {
				string__add_char((void*)__this->_token,'\\');
			}
			string__add_char((void*)__this->_token,a);
		} else {
			__this->line=__this->line+1;
		}
		Alexer__next((void*)__this);
		__this->in_escape=0;
		return (var)1;
	} else if (__this->in_string!=0) {
		if (__this->c=='"') {
			__this->in_string=0;
			Alexer__validate((void*)__this, 1);
		} else if (__this->c=='\\') {
			__this->in_escape=1;
		} else if (__this->c=='\n') {
			Alexer__error((void*)__this, (var)(__string_Alexer13+ 2));
			return (var)0;
		} else {
			string__add_char((void*)__this->_token,__this->c);
		}
		Alexer__next((void*)__this);
		return (var)1;
	} else if (__this->in_quote!=0) {
		if (__this->c=='\'') {
			__this->in_quote=0;
			Alexer__validate((void*)__this, 2);
		} else if (__this->c=='\\') {
			__this->in_escape=1;
		} else if (__this->c=='\n') {
			Alexer__error((void*)__this, (var)(__string_Alexer14+ 2));
		} else {
			string__add_char((void*)__this->_token,__this->c);
		}
		Alexer__next((void*)__this);
		return (var)1;
	} else if (__this->in_comment!=0) {
		if (__this->in_comment==(-(1))) {
			if (__this->c=='/') {
				__this->in_comment=1;
				Alexer__next((void*)__this);
				return (var)1;
			} else if (__this->c=='*') {
				__this->in_comment=0;
				__this->in_com_multi=1;
				Alexer__next((void*)__this);
				return (var)1;
			}
			__this->in_comment=0;
			string__add_char((void*)__this->_token,'/');
			return (var)1;
		} else if (__this->in_comment==1) {
			if (__this->c=='#') {
				__this->in_asm=1;
				__this->in_comment=0;
				Alexer__next((void*)__this);
				return (var)1;
			}
			__this->in_comment=2;
		}
		if (__this->c=='\n') {
			__this->in_comment=0;
			Alexer__validate((void*)__this, 3);
			Alexer__validate((void*)__this, 9);
		}
		if (__this->c=='\0') {
			return (var)0;
		}
		Alexer__next((void*)__this);
		return (var)1;
	} else if (__this->in_com_multi!=0) {
		
		switch (__this->in_com_multi) {
		case 1: 
			if (__this->c=='#') {
				__this->in_asm_multi=2;
				__this->in_com_multi=0;
				Alexer__next((void*)__this);
				return (var)1;
			}
			__this->in_com_multi=2;
			break;
		case 2: 
			if (__this->c=='*') {
				__this->in_com_multi=3;
				Alexer__next((void*)__this);
				return (var)1;
			}
			break;
		case 3: 
			if (__this->c=='/') {
				__this->in_com_multi=0;
				Alexer__validate((void*)__this, 3);
				Alexer__next((void*)__this);
				return (var)1;
			}
			__this->in_com_multi=2;
			break;
		} 
		if (__this->c=='\n') {
			__this->line=__this->line+1;
		}
		Alexer__next((void*)__this);
		return (var)1;
	} else if (__this->in_asm!=0) {
		if (__this->c=='\n') {
			Alexer__validate((void*)__this, 4);
			Alexer__validate((void*)__this, 9);
			__this->in_asm=0;
			Alexer__next((void*)__this);
			return (var)1;
		}
		if (__this->c=='\0') {
			return (var)0;
		}
		string__add_char((void*)__this->_token,__this->c);
		Alexer__next((void*)__this);
		return (var)1;
	} else if (__this->in_asm_multi!=0) {
		if (__this->in_asm_multi==2) {
			if (__this->c=='*') {
				__this->in_asm_multi=3;
				Alexer__next((void*)__this);
				return (var)1;
			}
		} else if (__this->in_asm_multi==3) {
			if (__this->c=='/') {
				__this->in_asm_multi=0;
				Alexer__validate((void*)__this, 4);
				Alexer__next((void*)__this);
				return (var)1;
			}
			__this->in_asm_multi=2;
		}
		if (__this->c=='\n') {
			__this->line=__this->line+1;
		}
		string__add_char((void*)__this->_token,__this->c);
		Alexer__next((void*)__this);
		return (var)1;
	} else if (__this->in_number!=0) {
		if ((Alexer__is_digit((void*)__this, __this->c))!=0) {
			string__add_char((void*)__this->_token,__this->c);
			Alexer__next((void*)__this);
		} else {
			__this->in_number=0;
			Alexer__validate((void*)__this, 5);
		}
		return (var)1;
	} else if (__this->in_identifier!=0) {
		while ((((__this->c=='_'))||(((Alexer__is_letter((void*)__this, __this->c))!=0)))||(((Alexer__is_digit((void*)__this, __this->c))!=0))) {
			string__add_char((void*)__this->_token,__this->c);
			if ((Alexer__next((void*)__this))==0) {
				return (var)1;
			}
		}
		Alexer__validate((void*)__this, 6);
		__this->in_identifier=0;
		return (var)1;
	} else if (__this->in_space!=0) {
		while ((Alexer__is_space((void*)__this, __this->c))!=0) {
			if (__this->c=='\n') {
				Alexer__validate((void*)__this, 9);
			}
			if ((Alexer__next((void*)__this))==0) {
				return (var)1;
			}
		}
		__this->in_space=0;
		return (var)1;
	} else {
		l=string__length((void*)__this->_token);
		if ((Alexer__is_space((void*)__this, __this->c))!=0) {
			if (l!=0) {
				Alexer__validate((void*)__this, 7);
			}
			__this->in_space=1;
			return (var)1;
		} else if (l==0) {
			if ((Alexer__is_digit((void*)__this, __this->c))!=0) {
				string__add_char((void*)__this->_token,__this->c);
				Alexer__next((void*)__this);
				__this->in_number=1;
				return (var)1;
			} else if (((__this->c=='_'))||(((Alexer__is_letter((void*)__this, __this->c))!=0))) {
				string__add_char((void*)__this->_token,__this->c);
				Alexer__next((void*)__this);
				__this->in_identifier=1;
				return (var)1;
			} else if (__this->c=='\'') {
				Alexer__next((void*)__this);
				__this->in_quote=1;
				return (var)1;
			} else if (__this->c=='"') {
				Alexer__next((void*)__this);
				__this->in_string=1;
				return (var)1;
			} else if ((__this->c=='/')) {
				Alexer__next((void*)__this);
				__this->in_comment=-(1);
				return (var)1;
			}
			if (__this->c=='\n') {
				__this->line=__this->line+1;
			}
			string__add_char((void*)__this->_token,__this->c);
			Alexer__next((void*)__this);
			return (var)1;
		} else if (l==1) {
			a=string__get_at((void*)__this->_token,0);
			if (__this->c=='=') {
				if (((((((((((((a=='+'))||((a=='-')))||((a==':')))||((a=='*')))||((a=='/')))||((a=='%')))||((a=='&')))||((a=='^')))||((a=='|')))||((a=='>')))||((a=='<')))||((a=='~'))) {
					string__add_char((void*)__this->_token,__this->c);
					Alexer__validate((void*)__this, 7);
					Alexer__next((void*)__this);
					return (var)1;
				} else if (((a=='='))||((a=='!'))) {
					string__add_char((void*)__this->_token,__this->c);
					Alexer__next((void*)__this);
					return (var)1;
				}
			} else if (((((a=='+'))&&((__this->c=='+')))||(((((a=='-'))&&((__this->c=='>')))||(((((a==':'))&&((__this->c==':')))||(((((a=='|'))&&((__this->c=='|')))||(((((a=='&'))&&((__this->c=='&')))||(((((a=='.'))&&((__this->c=='$')))||((((a=='-'))&&((__this->c=='-')))))))))))))))) {
				string__add_char((void*)__this->_token,__this->c);
				Alexer__validate((void*)__this, 7);
				Alexer__next((void*)__this);
				return (var)1;
			} else if (((((a=='>'))&&((__this->c=='>')))||(((((a=='.'))&&((__this->c=='.')))||((((a=='<'))&&((__this->c=='<')))))))) {
				string__add_char((void*)__this->_token,__this->c);
				Alexer__next((void*)__this);
				return (var)1;
			}
			Alexer__validate((void*)__this, 7);
			return (var)1;
		} else if (l==2) {
			a=string__get_at((void*)__this->_token,0);
			b=string__get_at((void*)__this->_token,1);
			if ((((((a=='!'))&&((b=='=')))&&((__this->c=='=')))||((((((a=='='))&&((b=='=')))&&((__this->c=='=')))||((((((a=='>'))&&((b=='>')))&&((__this->c=='=')))||((((((a=='.'))&&((b=='.')))&&((__this->c=='.')))||(((((a=='<'))&&((b=='<')))&&((__this->c=='=')))))))))))) {
				string__add_char((void*)__this->_token,__this->c);
				Alexer__validate((void*)__this, 7);
				Alexer__next((void*)__this);
				return (var)1;
			} else if (((((a=='>'))&&((b=='>')))&&((__this->c=='>')))) {
				string__add_char((void*)__this->_token,__this->c);
				Alexer__next((void*)__this);
				return (var)1;
			}
			Alexer__validate((void*)__this, 7);
			return (var)1;
		} else {
			a=string__get_at((void*)__this->_token,0);
			b=string__get_at((void*)__this->_token,1);
			d=string__get_at((void*)__this->_token,2);
			if (((((a=='>'))&&((b=='>')))&&((d=='>')))&&((__this->c=='='))) {
				string__add_char((void*)__this->_token,__this->c);
				Alexer__validate((void*)__this, 7);
				Alexer__next((void*)__this);
				return (var)1;
			}
			Alexer__validate((void*)__this, 7);
			return (var)1;
		}
	}
	return (var)0;
}
var Alexer__finish(struct Alexer*__this)
{

	if ((string__length((void*)__this->_token))>0) {
		Alexer__error((void*)__this, (var)(__string_Alexer15+ 2));
	}
	Alexer__validate((void*)__this, 10);
	return 0;
}
/* class Aemmiter */
struct Aemmiter {
	var side;
	var clas;
	var cur_memb;
};
var Aemmiter___new(struct Aemmiter*__this, var side1, var __parent)
{

	__this->side=side1;
	__this->clas=0;
	__this->cur_memb=0;
	return (var)(var)__this;
}
var Aemmiter__new(var side1, var __parent)
{
	NEW(Aemmiter);
	return Aemmiter___new((void*)__this, side1, __parent);
}
var Aemmiter___V_dispose(struct Aemmiter*__this)
{

	std__free((var)__this);
	return 0;
}
var Aemmiter__set_class(struct Aemmiter*__this, var class1)
{

	__this->clas=class1;
	return 0;
}
var Aemmiter__set_member(struct Aemmiter*__this, var mb)
{

	__this->cur_memb=mb;
	return 0;
}
var Aemmiter___V_emmit(struct Aemmiter*__this, var par)
{

	return (var)Aemmiter__emmit((void*)__this->side,par);
}
var Aemmiter___V_get_head(struct Aemmiter*__this)
{

	return (var)Aemmiter__get_head((void*)__this->side);
}
var Aemmiter___V_get_data(struct Aemmiter*__this)
{

	return (var)Aemmiter__get_data((void*)__this->side);
}
var Aemmiter___V_get_mid(struct Aemmiter*__this)
{

	return (var)Aemmiter__get_mid((void*)__this->side);
}
var Aemmiter__find_param(struct Aemmiter*__this, var stri)
{
	var v;
	var i;
	var vars;
	var tok;
	var s;

	vars=Amember__get_params((void*)__this->cur_memb);
	i=0;
	if (vars!=0) {
		i=buffer__length((void*)vars);
	}
	while (i>0) {
		i=i-1;
		v=buffer__get_at((void*)vars,i);
		if (v!=0) {
			tok=Amember__get_name((void*)v);
			s=Atoken__get_data((void*)tok);
			if (s!=0) {
				if ((string__compare((void*)stri,s))==0) {
					return (var)v;
				}
			}
		}
	}
	return (var)0;
}
var Aemmiter__find_field(struct Aemmiter*__this, var stri)
{
	var v;
	var i;
	var vars;
	var tok;
	var s;

	i=0;
	vars=Aclass__get_members((void*)__this->clas);
	if (vars!=0) {
		i=buffer__length((void*)vars);
	}
	while (i>0) {
		i=i-1;
		v=buffer__get_at((void*)vars,i);
		if (v!=0) {
			tok=Amember__get_name((void*)v);
			s=Atoken__get_data((void*)tok);
			if (((s!=0))&&(((Amember__get_kind((void*)v))==(3)))) {
				if ((string__compare((void*)stri,s))==0) {
					return (var)v;
				}
			}
		}
	}
	return (var)0;
}
var Aemmiter__find_method(struct Aemmiter*__this, var stri)
{
	var v;
	var i;
	var vars;
	var tok;
	var s;
	var k;

	i=0;
	vars=Aclass__get_members((void*)__this->clas);
	if (vars!=0) {
		i=buffer__length((void*)vars);
	}
	while (i>0) {
		i=i-1;
		v=buffer__get_at((void*)vars,i);
		if (v!=0) {
			tok=Amember__get_name((void*)v);
			k=Amember__get_kind((void*)v);
			s=Atoken__get_data((void*)tok);
			if (((s!=0))&&((((k==(10))||(k==(11)))||(k==(32))))) {
				if ((string__compare((void*)stri,s))==0) {
					return (var)v;
				}
			}
		}
	}
	return (var)0;
}
var Aemmiter__find_static(struct Aemmiter*__this, var stri)
{
	var v;
	var i;
	var vars;
	var tok;
	var s;
	var k;

	i=0;
	vars=Aclass__get_members((void*)__this->clas);
	if (vars!=0) {
		i=buffer__length((void*)vars);
	}
	while (i>0) {
		i=i-1;
		v=buffer__get_at((void*)vars,i);
		if (v!=0) {
			tok=Amember__get_name((void*)v);
			k=Amember__get_kind((void*)v);
			s=Atoken__get_data((void*)tok);
			if (((s!=0))&&((k==(2)))) {
				if ((string__compare((void*)stri,s))==0) {
					return (var)v;
				}
			}
		}
	}
	return (var)0;
}
var Aemmiter__find_local(struct Aemmiter*__this, var stri)
{
	var v;
	var i;
	var vars;
	var tok;
	var s;

	vars=Amember__get_vars((void*)__this->cur_memb);
	i=0;
	if (vars!=0) {
		i=buffer__length((void*)vars);
	}
	while (i>0) {
		i=i-1;
		v=buffer__get_at((void*)vars,i);
		if (v!=0) {
			tok=Amember__get_name((void*)v);
			s=Atoken__get_data((void*)tok);
			if ((s!=0)) {
				if ((string__compare((void*)stri,s))==0) {
					return (var)v;
				}
			}
		}
	}
	return (var)0;
}
var Aemmiter__find_variable(struct Aemmiter*__this, var stri)
{
	var v;

	v=Aemmiter__find_local((void*)__this, stri);
	if (v==0) {
		v=Aemmiter__find_param((void*)__this, stri);
	}
	if (v==0) {
		v=Aemmiter__find_field((void*)__this, stri);
	}
	if (v==0) {
		v=Aemmiter__find_static((void*)__this, stri);
	}
	return (var)v;
}
var Aemmiter__is_switch(struct Aemmiter*__this, var st, var vari)
{
	var ex;
	var sv;

	ex=Astatement__get_expression((void*)st);
	if (ex==0) {
		return (var)0;
	}
	sv=Aexpr__is_equal_comp((void*)ex,vari);
	return (var)sv;
}
var Aemmiter__get_switch_expr(struct Aemmiter*__this, var st)
{
	var ex;

	ex=Astatement__get_expression((void*)st);
	ex=Aexpr__get_switch_expr((void*)ex);
	return (var)ex;
}
var Aemmiter___V_gen_virtuals(struct Aemmiter*__this)
{

	return 0;
}
var Aemmiter___V_expr_process(struct Aemmiter*__this, var expr)
{

	return 0;
}
var Aemmiter__expr_gen(struct Aemmiter*__this, var expr)
{
	var ex;
	var ex1;
	var stack;

	stack=buffer__new(4,0,(var)__this);
	ex=Aexpr__get_right((void*)expr);
	ex=expr;
	Aexpr__set_flags((void*)ex,0);
	buffer__push((void*)stack,ex);
	while ((buffer__length((void*)stack))>0) {
		ex=buffer__get_last((void*)stack);
		if ((Aexpr__get_flags((void*)ex))!=0) {
			ex=buffer__pop((void*)stack);
			Aemmiter__expr_process((void*)__this->side,ex);
		} else {
			ex1=ex;
			Aexpr__set_flags((void*)ex,1);
			ex=Aexpr__get_right((void*)ex);
			if (ex!=0) {
				Aexpr__set_flags((void*)ex,0);
				buffer__push((void*)stack,ex);
			}
			ex=Aexpr__get_left((void*)ex1);
			if (ex!=0) {
				Aexpr__set_flags((void*)ex,0);
				buffer__push((void*)stack,ex);
			}
		}
	}
	std__delete(stack);
	return 0;
}
var Aemmiter__error(struct Aemmiter*__this, var t, var e)
{

	if (t!=0) {
		console__log_str(Atoken__get_file((void*)t));
		console__log_str((var)(__string_Aemmiter16+ 2));
		console__log_int(Atoken__get_line((void*)t));
		console__log_str((var)(__string_Aemmiter17+ 2));
		console__log_str(Atoken__get_data((void*)t));
		console__log_str((var)(__string_Aemmiter18+ 2));
	}
	console__log(e);
	Aemmiter__dump((void*)__this);
	std__exit(-(1));
	return 0;
}
var Aemmiter__dump(struct Aemmiter*__this)
{

	return 0;
}
/* class Aemmitc */
struct Aemmitc {
	var _data;
	var _datal;
	var _head;
	var _headl;
	var _mid;
	var _str;
	var clas;
	var class_name;
	var cur_memb;
	var _proc;
	var _stk;
	var _expr_stk;
	var token1;
	var token2;
	var pass;
	var _virtuals;
	var _lambdas;
	var class_id;
	var string_id;
	var debug;
	var string_pool;
	var side;
	var parser;
};
var Aemmitc___new(struct Aemmitc*__this, var debug1, var __parent)
{

	__this->debug=debug1;
	__this->side=Aemmiter__new((var)__this,(var)__this);
	__this->_proc=buffer__new(100,0,(var)__this);
	__this->_stk=buffer__new(100,0,(var)__this);
	__this->_expr_stk=buffer__new(100,0,(var)__this);
	__this->_data=string__new(10000,(var)__this);
	__this->_head=string__new(10000,(var)__this);
	__this->_mid=string__new(10000,(var)__this);
	__this->_str=string__new(10000,(var)__this);
	__this->_virtuals=buffer__new(1024,1,(var)__this);
	__this->_lambdas=buffer__new(1024,1,(var)__this);
	__this->token1=0;
	__this->token2=0;
	__this->class_id=10;
	__this->string_id=0;
	__this->string_pool=buffer__new(100,1,(var)__this);
	return (var)(var)__this;
}
var Aemmitc__new(var debug1, var __parent)
{
	NEW(Aemmitc);
	return Aemmitc___new((void*)__this, debug1, __parent);
}
var Aemmitc___V_dispose(struct Aemmitc*__this)
{

	std__delete(__this->side);
	std__delete(__this->_proc);
	std__delete(__this->_stk);
	std__delete(__this->_data);
	std__delete(__this->_head);
	std__delete(__this->_mid);
	std__delete(__this->_str);
	std__delete(__this->_virtuals);
	std__delete(__this->_lambdas);
	std__delete(__this->_expr_stk);
	std__delete(__this->string_pool);
	std__free((var)__this);
	return 0;
}
var Aemmitc___V_emmit(struct Aemmitc*__this, var par)
{

	__this->parser=par;
	__this->clas=Aparser__get_next((void*)par);
	while (__this->clas!=0) {
		Aemmiter__set_class((void*)__this->side,__this->clas);
		Aemmitc__gen_class((void*)__this);
		__this->clas=Aclass__get_next((void*)__this->clas);
	}
	return (var)1;
}
var Aemmitc___V_get_head(struct Aemmitc*__this)
{

	return (var)__this->_head;
}
var Aemmitc___V_get_data(struct Aemmitc*__this)
{

	return (var)__this->_data;
}
var Aemmitc___V_get_mid(struct Aemmitc*__this)
{
	var l;

	l=string__length((void*)__this->_mid);
	l=string__add_at((void*)__this->_mid,l,(var)(__string_Aemmitc19+ 2));
	l=string__add_at((void*)__this->_mid,l,__this->_str);
	std__delete(__this->_str);
	__this->_str=string__new(1,(var)__this);
	l=string__add_at((void*)__this->_mid,l,(var)(__string_Aemmitc20+ 2));
	return (var)__this->_mid;
}
var Aemmitc__add_to_data(struct Aemmitc*__this, var s)
{

	__this->_datal=string__add_at((void*)__this->_data,__this->_datal,s);
	return 0;
}
var Aemmitc__add_to_head(struct Aemmitc*__this, var s)
{

	__this->_headl=string__add_at((void*)__this->_head,__this->_headl,s);
	return 0;
}
var Aemmitc__gen_class(struct Aemmitc*__this)
{
	var to;
	var s;
	var mem;
	var i;
	var l;
	var m;

	to=Aclass__get_name((void*)__this->clas);
	__this->class_name=Atoken__get_data((void*)to);
	__this->_datal=string__length((void*)__this->_data);
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc21+ 2));
	Aemmitc__add_to_data((void*)__this, __this->class_name);
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc22+ 2));
	s=string__new(4,(var)__this);
	string__set_int((void*)s,Aclass__get_nb_fields((void*)__this->clas));
	__this->_headl=string__length((void*)__this->_head);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc23+ 2));
	Aemmitc__add_to_head((void*)__this, __this->class_name);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc24+ 2));
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc25+ 2));
	Aemmitc__add_to_head((void*)__this, __this->class_name);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc26+ 2));
	Aemmitc__add_to_head((void*)__this, s);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc27+ 2));
	__this->class_id=__this->class_id+1;
	string__set_int((void*)s,__this->class_id);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc28+ 2));
	Aemmitc__add_to_head((void*)__this, __this->class_name);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc29+ 2));
	Aemmitc__add_to_head((void*)__this, s);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc30+ 2));
	std__delete(s);
	__this->pass=0;
	while (__this->pass<3) {
		mem=Aclass__get_members((void*)__this->clas);
		l=buffer__length((void*)mem);
		i=0;
		while (i<l) {
			m=buffer__get_at((void*)mem,i);
			Aemmitc__gen_debug_context((void*)__this, m);
			Aemmitc__gen_member((void*)__this, m);
			if (__this->pass==2) {
				Amember__dispose_body((void*)m);
			}
			i=i+1;
		}
		__this->pass=__this->pass+1;
	}
	Aemmitc__gen_virtual_lambda((void*)__this, Aclass__get_nb_lambda((void*)__this->clas));
	return 0;
}
var Aemmitc__gen_debug_context(struct Aemmitc*__this, var mb)
{

	if (__this->debug) {
	}
	return 0;
}
var Aemmitc__gen_member(struct Aemmitc*__this, var mb)
{
	var k;
	var str;

	str=string__new(8,(var)__this);
	k=Amember__get_kind((void*)mb);
	
	switch (__this->pass) {
	case 0: 
		Aemmitc__pass_0((void*)__this, str,mb,k);
		Aemmitc__pass_1((void*)__this, str,mb,k);
		Aemmitc__pass_2((void*)__this, str,mb,k);
		break;
	case 1: 
		Aemmitc__pass_3((void*)__this, str,mb,k);
		break;
	case 2: 
		Aemmitc__pass_4((void*)__this, str,mb,k);
		break;
	} 
	std__delete(str);
	return 0;
}
var Aemmitc__gen_conditional_call(struct Aemmitc*__this, var v, var mb)
{
	var param;
	var params;
	var i;
	var l;
	var tok;

	__this->_datal=string__length((void*)__this->_data);
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc31+ 2));
	Aemmitc__add_to_data((void*)__this, Avirtual__get_class_name((void*)v));
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc32+ 2));
	params=Amember__get_params((void*)mb);
	Aemmitc__add_to_data((void*)__this, Avirtual__get_class_name((void*)v));
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc33+ 2));
	Aemmitc__add_to_data((void*)__this, Amember__get_name_string((void*)mb));
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc34+ 2));
	Aemmitc__add_to_data((void*)__this, Avirtual__get_class_name((void*)v));
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc35+ 2));
	if (params!=0) {
		l=buffer__length((void*)params);
		i=0;
		while (i<l) {
			param=buffer__get_at((void*)params,i);
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc36+ 2));
			tok=Amember__get_name((void*)param);
			Aemmitc__add_to_data((void*)__this, Atoken__get_data((void*)tok));
			i=i+1;
		}
	}
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc37+ 2));
	return 0;
}
var Aemmitc___V_gen_virtuals(struct Aemmitc*__this)
{
	var i;
	var v;
	var mb;
	var s;

	i=buffer__length((void*)__this->_virtuals);
	__this->_datal=string__length((void*)__this->_data);
	while (i>0) {
		i=i-1;
		v=buffer__get_at((void*)__this->_virtuals,i);
		mb=Avirtual__get_member((void*)v);
		Aemmitc__gen_method_decl((void*)__this, __this->_head,(var)(__string_Aemmitc38+ 2),Amember__get_name_string((void*)mb),mb,11);
		__this->_headl=string__length((void*)__this->_head);
		Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc39+ 2));
		Aemmitc__gen_method_decl((void*)__this, __this->_data,(var)(__string_Aemmitc40+ 2),Amember__get_name_string((void*)mb),mb,11);
		__this->_datal=string__length((void*)__this->_data);
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc41+ 2));
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc42+ 2));
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc43+ 2));
		while (v!=0) {
			Aemmitc__gen_conditional_call((void*)__this, v,mb);
			v=Avirtual__get_next((void*)v);
		}
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc44+ 2));
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc45+ 2));
	}
	i=buffer__length((void*)__this->_lambdas);
	if (i>0) {
		__this->_datal=string__length((void*)__this->_data);
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc46+ 2));
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc47+ 2));
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc48+ 2));
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc49+ 2));
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc50+ 2));
		while (i>0) {
			i=i-1;
			s=buffer__get_at((void*)__this->_lambdas,i);
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc51+ 2));
			Aemmitc__add_to_data((void*)__this, s);
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc52+ 2));
			Aemmitc__add_to_data((void*)__this, s);
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc53+ 2));
		}
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc54+ 2));
	}
	return 0;
}
var Aemmitc__gen_virtual_lambda(struct Aemmitc*__this, var nb)
{
	var i;
	var s;

	if (nb<1) {
		return 0;
	}
	buffer__push((void*)__this->_lambdas,__this->class_name);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc55+ 2));
	Aemmitc__add_to_head((void*)__this, __this->class_name);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc56+ 2));
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc57+ 2));
	Aemmitc__add_to_head((void*)__this, __this->class_name);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc58+ 2));
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc59+ 2));
	__this->_datal=string__length((void*)__this->_data);
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc60+ 2));
	Aemmitc__add_to_data((void*)__this, __this->class_name);
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc61+ 2));
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc62+ 2));
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc63+ 2));
	i=0;
	s=string__new(20,(var)__this);
	while (i<nb) {
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc64+ 2));
		string__set_int((void*)s,i);
		Aemmitc__add_to_data((void*)__this, s);
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc65+ 2));
		Aemmitc__add_to_data((void*)__this, __this->class_name);
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc66+ 2));
		Aemmitc__add_to_data((void*)__this, s);
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc67+ 2));
		i=i+1;
	}
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc68+ 2));
	std__delete(s);
	return 0;
}
var Aemmitc__pass_0(struct Aemmitc*__this, var str, var mb, var k)
{
	var t;
	var ty;
	var i;

	__this->_datal=string__length((void*)__this->_data);
	__this->_headl=string__length((void*)__this->_head);
	if (k==(4)) {
		Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc69+ 2));
		Aemmitc__add_to_head((void*)__this, __this->class_name);
		Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc70+ 2));
		Aemmitc__add_to_head((void*)__this, Amember__get_name_string((void*)mb));
		Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc71+ 2));
		t=Amember__get_initial_value((void*)mb);
		ty=Atoken__get_type((void*)t);
		if (ty==(1)) {
			Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc72+ 2));
			Aemmitc__add_to_head((void*)__this, __this->class_name);
			Aemmitc__add_to_head((void*)__this, Amember__get_name_string((void*)mb));
			Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc73+ 2));
			Aemmitc__gen_string((void*)__this, Amember__get_name_string((void*)mb),Atoken__get_data((void*)t));
		} else if (ty==(2)) {
			Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc74+ 2));
			Aemmitc__add_to_head((void*)__this, Atoken__get_data((void*)t));
			Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc75+ 2));
		} else {
			Aemmitc__add_to_head((void*)__this, Atoken__get_data((void*)t));
		}
		Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc76+ 2));
	}
	if (k==(3)) {
		i=Amember__get_index((void*)mb);
		if (i==0) {
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc77+ 2));
			Aemmitc__add_to_data((void*)__this, __this->class_name);
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc78+ 2));
		}
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc79+ 2));
		Aemmitc__add_to_data((void*)__this, Amember__get_name_string((void*)mb));
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc80+ 2));
		if (((i+1))==(Aclass__get_nb_fields((void*)__this->clas))) {
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc81+ 2));
		}
	}
	return 0;
}
var Aemmitc__pass_1(struct Aemmitc*__this, var str, var mb, var k)
{

	__this->_datal=string__length((void*)__this->_data);
	if (k==(2)) {
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc82+ 2));
		Aemmitc__add_to_data((void*)__this, __this->class_name);
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc83+ 2));
		Aemmitc__add_to_data((void*)__this, Amember__get_name_string((void*)mb));
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc84+ 2));
	}
	return 0;
}
var Aemmitc__pass_2(struct Aemmitc*__this, var str, var mb, var k)
{

	return 0;
}
var Aemmitc__pad(struct Aemmitc*__this, var depth)
{

	__this->_datal=string__length((void*)__this->_data);
	while (depth>0) {
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc85+ 2));
		depth=depth-1;
	}
	return 0;
}
var Aemmitc__find_param(struct Aemmitc*__this, var stri)
{

	return (var)Aemmiter__find_param((void*)__this->side,stri);
}
var Aemmitc__find_field(struct Aemmitc*__this, var stri)
{

	return (var)Aemmiter__find_field((void*)__this->side,stri);
}
var Aemmitc__find_method(struct Aemmitc*__this, var stri)
{

	return (var)Aemmiter__find_method((void*)__this->side,stri);
}
var Aemmitc__find_static(struct Aemmitc*__this, var stri)
{

	return (var)Aemmiter__find_static((void*)__this->side,stri);
}
var Aemmitc__find_local(struct Aemmitc*__this, var stri)
{

	return (var)Aemmiter__find_local((void*)__this->side,stri);
}
var Aemmitc__expr_call_member(struct Aemmitc*__this, var expr, var ex1, var ex2, var stri, var obj)
{
	var v;
	var s;

	v=Aemmitc__find_field((void*)__this, stri);
	if (v==0) {
		v=Aemmitc__find_method((void*)__this, stri);
	}
	if ((v!=0)) {
		Aexpr__add_data((void*)expr,__this->class_name);
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc86+ 2));
		Aexpr__add_data((void*)expr,stri);
		s=Aexpr__get_value((void*)ex2);
		if ((s!=0)&&((string__length((void*)s))>0)) {
			Aexpr__add_data((void*)expr,(var)(__string_Aemmitc87+ 2));
			Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex2));
			Aexpr__add_data((void*)expr,(var)(__string_Aemmitc88+ 2));
		} else {
			Aexpr__add_data((void*)expr,(var)(__string_Aemmitc89+ 2));
		}
		buffer__push((void*)__this->_expr_stk,expr);
		return 0;
	}
	console__log(stri);
	Aemmitc__error((void*)__this, Aexpr__get_origin((void*)expr),(var)(__string_Aemmitc90+ 2));
	return 0;
}
var Aemmitc__expr_call_sub(struct Aemmitc*__this, var expr, var ex1, var ex2, var stri, var obj, var v, var sta, var fld)
{
	var tok;
	var s;

	tok=Amember__get_type_id((void*)v);
	if (tok==0) {
		console__log(obj);
		console__log(Amember__get_name_string((void*)v));
		Aemmitc__error((void*)__this, Aexpr__get_origin((void*)ex1),(var)(__string_Aemmitc91+ 2));
		return 0;
	}
	s=Atoken__get_data((void*)tok);
	Aexpr__add_data((void*)expr,s);
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc92+ 2));
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex1));
	s=Aexpr__get_value((void*)ex1);
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc93+ 2));
	if (fld!=0) {
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc94+ 2));
	} else if (sta!=0) {
		Aexpr__add_data((void*)expr,__this->class_name);
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc95+ 2));
	} else if (((obj!=0)&&(s!=0))&&((string__compare((void*)s,(var)(__string_Aemmitc96+ 2)))!=0)) {
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc97+ 2));
	}
	Aexpr__add_data((void*)expr,Aexpr__get_value2((void*)ex1));
	s=Aexpr__get_value((void*)ex2);
	if ((s!=0)&&((string__length((void*)s))>0)) {
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc98+ 2));
		Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex2));
	}
	if ((string__compare((void*)stri,(var)(__string_Aemmitc99+ 2)))==0) {
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc100+ 2));
	}
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc101+ 2));
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen_call(struct Aemmitc*__this, var expr)
{
	var ex1;
	var ex2;
	var stri;
	var v;
	var obj;
	var sta;
	var s;
	var fld;

	ex2=buffer__pop((void*)__this->_expr_stk);
	ex1=buffer__pop((void*)__this->_expr_stk);
	stri=Aexpr__data_to_string((void*)ex1,Aemmitc__new_string((void*)__this, 8));
	obj=Aexpr__get_value2((void*)ex1);
	Aexpr__clear_data((void*)expr);
	if (obj==0) {
		Aemmitc__expr_call_member((void*)__this, expr,ex1,ex2,stri,obj);
		return 0;
	}
	fld=0;
	sta=0;
	v=Aemmitc__find_local((void*)__this, obj);
	if (v==0) {
		v=Aemmitc__find_param((void*)__this, obj);
	}
	if (v==0) {
		v=Aemmitc__find_field((void*)__this, obj);
		if (v==0) {
			v=Aemmitc__find_method((void*)__this, obj);
		}
		if (v!=0) {
			fld=1;
		}
	}
	if (v==0) {
		v=Aemmitc__find_static((void*)__this, obj);
		if (v!=0) {
			sta=1;
		}
	}
	if (v!=0) {
		Aemmitc__expr_call_sub((void*)__this, expr,ex1,ex2,stri,obj,v,sta,fld);
		return 0;
	}
	Aexpr__add_data((void*)expr,obj);
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc102+ 2));
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex1));
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc103+ 2));
	s=Aexpr__get_value((void*)ex2);
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex2));
	if ((string__compare((void*)stri,(var)(__string_Aemmitc104+ 2)))==0) {
		if ((s!=0)&&((string__length((void*)s))>0)) {
			Aexpr__add_data((void*)expr,(var)(__string_Aemmitc105+ 2));
		} else {
			Aexpr__add_data((void*)expr,(var)(__string_Aemmitc106+ 2));
		}
	}
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc107+ 2));
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen_sub_expr(struct Aemmitc*__this, var expr)
{

	if ((Aexpr__get_right((void*)expr))==0) {
		Aexpr__clear_data((void*)expr);
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc108+ 2));
		buffer__push((void*)__this->_expr_stk,expr);
	}
	return 0;
}
var Aemmitc__expr_gen_comma(struct Aemmitc*__this, var expr)
{
	var ex1;
	var ex2;

	ex2=buffer__pop((void*)__this->_expr_stk);
	ex1=buffer__pop((void*)__this->_expr_stk);
	Aexpr__clear_data((void*)expr);
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex1));
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc109+ 2));
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex2));
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen_index(struct Aemmitc*__this, var expr)
{
	var ex1;
	var ex2;

	ex2=buffer__pop((void*)__this->_expr_stk);
	ex1=buffer__pop((void*)__this->_expr_stk);
	Aexpr__clear_data((void*)expr);
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc110+ 2));
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex1));
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc111+ 2));
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex2));
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc112+ 2));
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen_par(struct Aemmitc*__this, var expr)
{
	var ex1;

	ex1=buffer__pop((void*)__this->_expr_stk);
	Aexpr__clear_data((void*)expr);
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc113+ 2));
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex1));
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc114+ 2));
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen_constant(struct Aemmitc*__this, var expr)
{
	var ex1;
	var ex2;
	var tok;
	var s1;
	var s2;
	var ty;

	Aexpr__clear_data((void*)expr);
	ex2=buffer__pop((void*)__this->_expr_stk);
	ex1=buffer__pop((void*)__this->_expr_stk);
	s1=Aexpr__get_value((void*)ex1);
	s2=Aexpr__get_value((void*)ex2);
	tok=Aparser__get_const((void*)__this->parser,s1,s2);
	if (tok==0) {
		console__log(s2);
		if ((string__compare((void*)s2,(var)(__string_Aemmitc115+ 2)))==0) {
			Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex1));
			Aexpr__add_data((void*)expr,(var)(__string_Aemmitc116+ 2));
			Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex2));
		} else {
			Aemmitc__error((void*)__this, Aexpr__get_origin((void*)expr),(var)(__string_Aemmitc117+ 2));
		}
	} else {
		ty=Atoken__get_type((void*)tok);
		if (ty==(5)) {
			Aexpr__add_data((void*)expr,Atoken__get_data((void*)tok));
		} else {
			Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex1));
			Aexpr__add_data((void*)expr,(var)(__string_Aemmitc118+ 2));
			Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex2));
		}
	}
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen_dot(struct Aemmitc*__this, var expr)
{
	var ex1;
	var ex2;

	Aexpr__clear_data((void*)expr);
	ex2=buffer__pop((void*)__this->_expr_stk);
	ex1=buffer__pop((void*)__this->_expr_stk);
	Aexpr__set_value2((void*)expr,Aexpr__data_to_string((void*)ex1,Aemmitc__new_string((void*)__this, 8)));
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex2));
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen_lambda(struct Aemmitc*__this, var expr)
{

	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc119+ 2));
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__gen_string(struct Aemmitc*__this, var s2, var value)
{
	var l;

	l=string__length((void*)__this->_mid);
	l=string__add_at((void*)__this->_mid,l,(var)(__string_Aemmitc120+ 2));
	l=string__add_at((void*)__this->_mid,l,__this->class_name);
	l=string__add_at((void*)__this->_mid,l,s2);
	l=string__add_at((void*)__this->_mid,l,(var)(__string_Aemmitc121+ 2));
	l=string__add_at((void*)__this->_mid,l,(var)(__string_Aemmitc122+ 2));
	l=string__add_at((void*)__this->_mid,l,value);
	l=string__add_at((void*)__this->_mid,l,(var)(__string_Aemmitc123+ 2));
	l=string__add_at((void*)__this->_mid,l,(var)(__string_Aemmitc124+ 2));
	l=string__add_at((void*)__this->_mid,l,(var)(__string_Aemmitc125+ 2));
	l=string__add_at((void*)__this->_mid,l,__this->class_name);
	l=string__add_at((void*)__this->_mid,l,s2);
	l=string__add_at((void*)__this->_mid,l,(var)(__string_Aemmitc126+ 2));
	l=string__add_at((void*)__this->_mid,l,(var)(__string_Aemmitc127+ 2));
	string__add((void*)__this->_str,(var)(__string_Aemmitc128+ 2));
	string__add((void*)__this->_str,__this->class_name);
	string__add((void*)__this->_str,s2);
	string__add((void*)__this->_str,(var)(__string_Aemmitc129+ 2));
	string__add((void*)__this->_str,(var)(__string_Aemmitc130+ 2));
	string__add((void*)__this->_str,__this->class_name);
	string__add((void*)__this->_str,s2);
	string__add((void*)__this->_str,(var)(__string_Aemmitc131+ 2));
	return 0;
}
var Aemmitc__number(struct Aemmitc*__this, var n)
{
	var s2;

	s2=string__new(8,(var)__this);
	buffer__push((void*)__this->string_pool,s2);
	string__set_int((void*)s2,n);
	return (var)s2;
}
var Aemmitc__new_string(struct Aemmitc*__this, var l)
{
	var s2;

	s2=string__new(l,(var)__this);
	buffer__push((void*)__this->string_pool,s2);
	return (var)s2;
}
var Aemmitc__expr_gen_str_const(struct Aemmitc*__this, var expr)
{

	__this->string_id=__this->string_id+1;
	Aemmitc__gen_string((void*)__this, Aemmitc__number((void*)__this, __this->string_id),Aexpr__data_to_string((void*)expr,Aemmitc__new_string((void*)__this, 20)));
	Aexpr__clear_data((void*)expr);
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc132+ 2));
	Aexpr__add_data((void*)expr,__this->class_name);
	Aexpr__add_data((void*)expr,Aemmitc__number((void*)__this, __this->string_id));
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc133+ 2));
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen_char_const(struct Aemmitc*__this, var expr)
{
	var s;

	s=Aexpr__data_to_string((void*)expr,Aemmitc__new_string((void*)__this, 3));
	Aexpr__clear_data((void*)expr);
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc134+ 2));
	if ((string__length((void*)s))>0) {
		Aexpr__add_data((void*)expr,s);
	} else {
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc135+ 2));
	}
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc136+ 2));
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen0(struct Aemmitc*__this, var expr, var op)
{

	Aexpr__clear_data((void*)expr);
	Aexpr__add_data((void*)expr,op);
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen1(struct Aemmitc*__this, var expr, var op)
{
	var ex1;

	Aexpr__clear_data((void*)expr);
	ex1=buffer__pop((void*)__this->_expr_stk);
	Aexpr__add_data((void*)expr,op);
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc137+ 2));
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex1));
	Aexpr__add_data((void*)expr,(var)(__string_Aemmitc138+ 2));
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen_assign(struct Aemmitc*__this, var expr, var op)
{
	var ex1;
	var ex2;

	Aexpr__clear_data((void*)expr);
	ex2=buffer__pop((void*)__this->_expr_stk);
	ex1=buffer__pop((void*)__this->_expr_stk);
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex1));
	Aexpr__add_data((void*)expr,op);
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex2));
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen2(struct Aemmitc*__this, var expr, var op)
{
	var ex1;
	var ex2;
	var oper;

	Aexpr__clear_data((void*)expr);
	ex2=buffer__pop((void*)__this->_expr_stk);
	ex1=buffer__pop((void*)__this->_expr_stk);
	oper=Aexpr__get_op((void*)ex1);
	if (oper>(1000)) {
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc139+ 2));
	}
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex1));
	if (oper>(1000)) {
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc140+ 2));
	}
	Aexpr__add_data((void*)expr,op);
	oper=Aexpr__get_op((void*)ex2);
	if (oper>(1000)) {
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc141+ 2));
	}
	Aexpr__merge_data((void*)expr,Aexpr__get_data((void*)ex2));
	if (oper>(1000)) {
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc142+ 2));
	}
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc__expr_gen_var(struct Aemmitc*__this, var expr)
{
	var stri;
	var v;
	var ex;

	stri=Aexpr__data_to_string((void*)expr,Aemmitc__new_string((void*)__this, 8));
	Aexpr__clear_data((void*)expr);
	if (stri==0) {
		buffer__push((void*)__this->_expr_stk,expr);
		return 0;
	}
	v=Aemmitc__find_local((void*)__this, stri);
	if (v!=0) {
		Aexpr__add_data((void*)expr,stri);
		buffer__push((void*)__this->_expr_stk,expr);
		return 0;
	}
	v=Aemmitc__find_param((void*)__this, stri);
	if (v!=0) {
		Aexpr__add_data((void*)expr,stri);
		buffer__push((void*)__this->_expr_stk,expr);
		return 0;
	}
	ex=Aexpr__get_parent((void*)expr);
	v=0;
	if (((Aexpr__get_op((void*)ex))!=(1043))&&((Aexpr__get_op((void*)ex))!=(1044))) {
		v=Aemmitc__find_field((void*)__this, stri);
	}
	if (v!=0) {
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc143+ 2));
		Aexpr__add_data((void*)expr,stri);
		buffer__push((void*)__this->_expr_stk,expr);
		return 0;
	}
	if ((Aexpr__get_op((void*)ex))!=(1043)) {
		v=Aemmitc__find_method((void*)__this, stri);
	}
	if (v!=0) {
		Aexpr__add_data((void*)expr,stri);
		buffer__push((void*)__this->_expr_stk,expr);
		return 0;
	}
	if ((Aexpr__get_op((void*)ex))!=(1043)) {
		v=Aemmitc__find_static((void*)__this, stri);
	}
	if (v!=0) {
		Aexpr__add_data((void*)expr,__this->class_name);
		Aexpr__add_data((void*)expr,(var)(__string_Aemmitc144+ 2));
		Aexpr__add_data((void*)expr,stri);
		buffer__push((void*)__this->_expr_stk,expr);
		return 0;
	}
	Aexpr__add_data((void*)expr,stri);
	buffer__push((void*)__this->_expr_stk,expr);
	return 0;
}
var Aemmitc___V_expr_process(struct Aemmitc*__this, var expr)
{
	var op;
	var ex;

	op=Aexpr__get_op((void*)expr);
	if (op<(1000)) {
		
		switch (op) {
		case 26: 
			Aemmitc__expr_gen0((void*)__this, expr,(var)(__string_Aemmitc145+ 2));
			break;
		case 28: 
			Aemmitc__expr_gen_char_const((void*)__this, expr);
			break;
		case 27: 
			buffer__push((void*)__this->_expr_stk,expr);
			break;
		case 29: 
			Aemmitc__expr_gen_str_const((void*)__this, expr);
			break;
		case 25: 
			Aemmitc__expr_gen0((void*)__this, expr,(var)(__string_Aemmitc146+ 2));
			break;
		case 34: 
			Aemmitc__expr_gen_lambda((void*)__this, expr);
			break;
		default:
			Aemmitc__expr_gen_var((void*)__this, expr);
			break;
		} 
		return 0;
	}
	
	switch (op) {
	case 1000: 
		if ((buffer__length((void*)__this->_expr_stk))!=1) {
			Aemmitc__error((void*)__this, Aexpr__get_origin((void*)expr),(var)(__string_Aemmitc147+ 2));
			return 0;
		}
		ex=buffer__pop((void*)__this->_expr_stk);
		Aexpr__data_to_string((void*)ex,__this->_data);
		__this->_datal=string__length((void*)__this->_data);
		break;
	case 1048: 
		Aemmitc__expr_gen_assign((void*)__this, expr,(var)(__string_Aemmitc148+ 2));
		break;
	case 1026: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc149+ 2));
		break;
	case 1027: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc150+ 2));
		break;
	case 1028: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc151+ 2));
		break;
	case 1029: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc152+ 2));
		break;
	case 1030: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc153+ 2));
		break;
	case 1031: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc154+ 2));
		break;
	case 1032: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc155+ 2));
		break;
	case 1033: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc156+ 2));
		break;
	case 1034: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc157+ 2));
		break;
	case 1035: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc158+ 2));
		break;
	case 1036: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc159+ 2));
		break;
	case 1037: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc160+ 2));
		break;
	case 1038: 
		Aemmitc__expr_gen2((void*)__this, expr,(var)(__string_Aemmitc161+ 2));
		break;
	case 1039: 
		Aemmitc__expr_gen1((void*)__this, expr,(var)(__string_Aemmitc162+ 2));
		break;
	case 1040: 
		Aemmitc__expr_gen_par((void*)__this, expr);
		break;
	case 1041: 
		Aemmitc__expr_gen1((void*)__this, expr,(var)(__string_Aemmitc163+ 2));
		break;
	case 1042: 
		Aemmitc__expr_gen1((void*)__this, expr,(var)(__string_Aemmitc164+ 2));
		break;
	case 1043: 
		Aemmitc__expr_gen_dot((void*)__this, expr);
		break;
	case 1049: 
		Aemmitc__expr_gen_constant((void*)__this, expr);
		break;
	case 1044: 
		Aemmitc__expr_gen_call((void*)__this, expr);
		break;
	case 1045: 
		Aemmitc__expr_gen_index((void*)__this, expr);
		break;
	case 1046: 
		Aemmitc__expr_gen_comma((void*)__this, expr);
		break;
	case 1047: 
		Aemmitc__expr_gen_sub_expr((void*)__this, expr);
		break;
	default:
		Aemmitc__error((void*)__this, Aexpr__get_origin((void*)expr),(var)(__string_Aemmitc165+ 2));
		return 0;
		break;
	} 
	return 0;
}
var Aemmitc__expr_gen_case(struct Aemmitc*__this, var expr, var padde)
{
	var ex;
	var op;
	var i;

	ex=Aexpr__get_case_expr((void*)expr,0);
	i=0;
	while (ex!=0) {
		op=Aexpr__get_op((void*)ex);
		if (op==(27)) {
			buffer__push((void*)__this->_expr_stk,ex);
		} else if (op==(1049)) {
			buffer__push((void*)__this->_expr_stk,Aexpr__get_left((void*)ex));
			buffer__push((void*)__this->_expr_stk,Aexpr__get_right((void*)ex));
			Aemmitc__expr_gen_constant((void*)__this, ex);
		} else {
			Aemmitc__error((void*)__this, Aexpr__get_origin((void*)ex),(var)(__string_Aemmitc166+ 2));
			return 0;
		}
		if (i>0) {
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc167+ 2));
			Aemmitc__pad((void*)__this, padde);
		}
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc168+ 2));
		ex=buffer__pop((void*)__this->_expr_stk);
		Aexpr__data_to_string((void*)ex,__this->_data);
		__this->_datal=string__length((void*)__this->_data);
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc169+ 2));
		i=i+1;
		ex=Aexpr__get_case_expr((void*)expr,i);
	}
	return 0;
}
var Aemmitc__expr_gen(struct Aemmitc*__this, var expr)
{

	Aemmiter__expr_gen((void*)__this->side,expr);
	return 0;
}
var Aemmitc__fix_datal(struct Aemmitc*__this)
{

	__this->_datal=string__length((void*)__this->_data);
	return 0;
}
var Aemmitc__body_gen_constructor(struct Aemmitc*__this, var mb)
{
	var i;
	var l;
	var params;
	var p;
	var tok;

	params=Amember__get_params((void*)mb);
	if (params==0) {
		l=0;
	} else {
		l=buffer__length((void*)params);
	}
	__this->_datal=string__length((void*)__this->_data);
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc170+ 2));
	Aemmitc__add_to_data((void*)__this, __this->class_name);
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc171+ 2));
	Aemmitc__add_to_data((void*)__this, __this->class_name);
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc172+ 2));
	tok=Amember__get_name((void*)mb);
	Aemmitc__add_to_data((void*)__this, Atoken__get_data((void*)tok));
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc173+ 2));
	i=0;
	while (i<l) {
		p=buffer__get_at((void*)params,i);
		tok=Amember__get_name((void*)p);
		Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc174+ 2));
		Aemmitc__add_to_data((void*)__this, Atoken__get_data((void*)tok));
		i=i+1;
	}
	Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc175+ 2));
	return 0;
}
var Aemmitc__set_member(struct Aemmitc*__this, var m)
{

	__this->cur_memb=m;
	return 0;
}
var Aemmitc__body_gen(struct Aemmitc*__this, var mb, var k, var vars_, var body_)
{
	var b;

	b=Acbody__new((var)__this,__this->side,__this->class_name,__this->debug,__this->_expr_stk,(var)__this);
	Acbody__body_gen((void*)b,mb,k,vars_,body_);
	std__delete(b);
	return 0;
}
var Aemmitc__gen_type(struct Aemmitc*__this, var mb)
{
	var ty;
	var tok;

	__this->_datal=string__length((void*)__this->_data);
	tok=Amember__get_type_id((void*)mb);
	if (tok!=0) {
		Aemmitc__add_to_data((void*)__this, Atoken__get_data((void*)tok));
	} else {
		ty=Amember__get_type((void*)mb);
		if (ty==(5)) {
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc176+ 2));
		} else if (ty==(7)) {
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc177+ 2));
		} else {
			Aemmitc__error((void*)__this, Amember__get_name((void*)mb),(var)(__string_Aemmitc178+ 2));
		}
	}
	return 0;
}
var Aemmitc__add_virtual(struct Aemmitc*__this, var mb)
{
	var n;
	var v;
	var nv;
	var i;
	var s;

	n=Amember__get_name_string((void*)mb);
	nv=Avirtual__new(mb,__this->class_name,(var)__this);
	i=buffer__length((void*)__this->_virtuals);
	while (i>0) {
		i=i-1;
		v=buffer__get_at((void*)__this->_virtuals,i);
		if (v!=0) {
			s=Avirtual__get_member_name((void*)v);
			if (((s!=0))&&(((string__compare((void*)n,s))==0))) {
				Avirtual__set_next((void*)nv,Avirtual__get_next((void*)v));
				Avirtual__set_next((void*)v,nv);
				return 0;
			}
		}
	}
	buffer__push((void*)__this->_virtuals,nv);
	return 0;
}
var Aemmitc__gen_virtual_caller(struct Aemmitc*__this, var mb)
{
	var param;
	var params;
	var i;
	var l;
	var tok;

	params=Amember__get_params((void*)mb);
	__this->_headl=string__length((void*)__this->_head);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc179+ 2));
	Aemmitc__add_to_head((void*)__this, __this->class_name);
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc180+ 2));
	Aemmitc__add_to_head((void*)__this, Amember__get_name_string((void*)mb));
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc181+ 2));
	if (params!=0) {
		l=buffer__length((void*)params);
		i=0;
		while (i<l) {
			param=buffer__get_at((void*)params,i);
			Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc182+ 2));
			tok=Amember__get_name((void*)param);
			Aemmitc__add_to_head((void*)__this, Atoken__get_data((void*)tok));
			i=i+1;
		}
	}
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc183+ 2));
	Aemmitc__add_to_head((void*)__this, Amember__get_name_string((void*)mb));
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc184+ 2));
	if (params!=0) {
		l=buffer__length((void*)params);
		i=0;
		while (i<l) {
			param=buffer__get_at((void*)params,i);
			Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc185+ 2));
			tok=Amember__get_name((void*)param);
			Aemmitc__add_to_head((void*)__this, Atoken__get_data((void*)tok));
			i=i+1;
		}
	}
	Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc186+ 2));
	return 0;
}
var Aemmitc__gen_method_decl(struct Aemmitc*__this, var dest, var c_name, var name, var mb, var k)
{
	var param;
	var params;
	var i;
	var l;
	var sub;
	var tok;

	string__add((void*)dest,(var)(__string_Aemmitc187+ 2));
	string__add((void*)dest,c_name);
	string__add((void*)dest,(var)(__string_Aemmitc188+ 2));
	if (k==(8)) {
		string__add((void*)dest,(var)(__string_Aemmitc189+ 2));
	}
	string__add((void*)dest,name);
	params=Amember__get_params((void*)mb);
	string__add((void*)dest,(var)(__string_Aemmitc190+ 2));
	sub=1;
	if (((((k==(10)))||((k==(11))))||((k==(8))))||((k==(32)))) {
		string__add((void*)dest,(var)(__string_Aemmitc191+ 2));
		string__add((void*)dest,__this->class_name);
		string__add((void*)dest,(var)(__string_Aemmitc192+ 2));
		sub=2;
	}
	if (params!=0) {
		l=buffer__length((void*)params);
		i=0;
		while (i<l) {
			param=buffer__get_at((void*)params,i);
			if (((i>0))||((sub==2))) {
				string__add((void*)dest,(var)(__string_Aemmitc193+ 2));
			}
			if ((Amember__get_kind((void*)param))==(32)) {
				string__add((void*)dest,(var)(__string_Aemmitc194+ 2));
				tok=Amember__get_name((void*)param);
				string__add((void*)dest,Atoken__get_data((void*)tok));
				string__add((void*)dest,(var)(__string_Aemmitc195+ 2));
				string__add((void*)dest,Atoken__get_data((void*)tok));
			} else {
				string__add((void*)dest,(var)(__string_Aemmitc196+ 2));
				tok=Amember__get_name((void*)param);
				string__add((void*)dest,Atoken__get_data((void*)tok));
			}
			i=i+1;
		}
		if (k==(35)) {
			string__add((void*)dest,(var)(__string_Aemmitc197+ 2));
		}
	} else {
		if (k==(35)) {
			string__add((void*)dest,(var)(__string_Aemmitc198+ 2));
		}
	}
	if (k==(8)) {
		string__add((void*)dest,(var)(__string_Aemmitc199+ 2));
	}
	if (k==(32)) {
		string__add((void*)dest,(var)(__string_Aemmitc200+ 2));
	}
	string__add((void*)dest,(var)(__string_Aemmitc201+ 2));
	return 0;
}
var Aemmitc__pass_3(struct Aemmitc*__this, var str, var mb, var k)
{
	var vars;
	var body;
	var sub;

	__this->_datal=string__length((void*)__this->_data);
	sub=0;
	
	switch (k) {
	case 8: 
		sub=1;
		break;
	case 9: 
		sub=1;
		break;
	case 10: 
		sub=2;
		break;
	case 32: 
		sub=2;
		break;
	case 11: 
		sub=2;
		break;
	} 
	if (sub!=0) {
		if (k==(11)) {
			Aemmitc__add_virtual((void*)__this, mb);
			Aemmitc__gen_virtual_caller((void*)__this, mb);
			string__set((void*)str,(var)(__string_Aemmitc202+ 2));
			string__add((void*)str,Amember__get_name_string((void*)mb));
			Aemmitc__gen_method_decl((void*)__this, __this->_head,__this->class_name,str,mb,k);
			__this->_headl=string__length((void*)__this->_head);
			Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc203+ 2));
			Aemmitc__gen_method_decl((void*)__this, __this->_data,__this->class_name,str,mb,k);
			__this->_datal=string__length((void*)__this->_data);
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc204+ 2));
		} else {
			Aemmitc__gen_method_decl((void*)__this, __this->_head,__this->class_name,Amember__get_name_string((void*)mb),mb,k);
			__this->_headl=string__length((void*)__this->_head);
			Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc205+ 2));
			if (k==(8)) {
				Aemmitc__gen_method_decl((void*)__this, __this->_head,__this->class_name,Amember__get_name_string((void*)mb),mb,35);
				__this->_headl=string__length((void*)__this->_head);
				Aemmitc__add_to_head((void*)__this, (var)(__string_Aemmitc206+ 2));
			}
			Aemmitc__gen_method_decl((void*)__this, __this->_data,__this->class_name,Amember__get_name_string((void*)mb),mb,k);
			__this->_datal=string__length((void*)__this->_data);
			Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc207+ 2));
		}
		vars=Amember__get_vars((void*)mb);
		body=Amember__get_body((void*)mb);
		if (body!=0) {
			Aemmitc__body_gen((void*)__this, mb,k,vars,body);
			if (k==(8)) {
				Aemmitc__gen_method_decl((void*)__this, __this->_data,__this->class_name,Amember__get_name_string((void*)mb),mb,35);
				__this->_datal=string__length((void*)__this->_data);
				Aemmitc__add_to_data((void*)__this, (var)(__string_Aemmitc208+ 2));
				Aemmitc__body_gen_constructor((void*)__this, mb);
			}
		}
	}
	return 0;
}
var Aemmitc__pass_4(struct Aemmitc*__this, var str, var mb, var k)
{

	return 0;
}
var Aemmitc__error(struct Aemmitc*__this, var t, var e)
{

	Aemmiter__error((void*)__this->side,t,e);
	return 0;
}
/* class Acbody */
struct Acbody {
	var class_name;
	var _expr_stk;
	var debug;
	var string_pool;
	var side;
	var emmiter;
	var stack;
	var body;
	var buf;
	var ex;
	var stm;
	var ty;
	var padde;
	var l;
	var i;
	var end;
	var switchend;
	var caseend;
	var cmb;
};
var Acbody___new(struct Acbody*__this, var emmiter1, var side1, var class_name1, var debug1, var expr_stk1, var __parent)
{

	__this->emmiter=emmiter1;
	__this->side=side1;
	__this->class_name=class_name1;
	__this->debug=debug1;
	__this->_expr_stk=expr_stk1;
	return (var)(var)__this;
}
var Acbody__new(var emmiter1, var side1, var class_name1, var debug1, var expr_stk1, var __parent)
{
	NEW(Acbody);
	return Acbody___new((void*)__this, emmiter1, side1, class_name1, debug1, expr_stk1, __parent);
}
var Acbody___V_dispose(struct Acbody*__this)
{

	std__free((var)__this);
	return 0;
}
var Acbody__add_to_data(struct Acbody*__this, var s)
{

	Aemmitc__add_to_data((void*)__this->emmiter,s);
	return 0;
}
var Acbody__expr_gen(struct Acbody*__this, var expr)
{

	Aemmiter__expr_gen((void*)__this->side,expr);
	return 0;
}
var Acbody__expr_gen_var(struct Acbody*__this, var expr)
{

	Aemmitc__expr_gen_var((void*)__this->emmiter,expr);
	return 0;
}
var Acbody__expr_gen_case(struct Acbody*__this, var expr, var padde)
{

	Aemmitc__expr_gen_case((void*)__this->emmiter,expr,padde);
	return 0;
}
var Acbody__body_gen(struct Acbody*__this, var mb, var k, var vars_, var body1)
{
	var l;
	var i;
	var tok;
	var va;

	__this->body=body1;
	Aemmitc__set_member((void*)__this->emmiter,mb);
	Aemmiter__set_member((void*)__this->side,mb);
	Aemmitc__fix_datal((void*)__this->emmiter);
	Acbody__add_to_data((void*)__this, (var)(__string_Acbody209+ 2));
	if (__this->debug>0) {
		Acbody__add_to_data((void*)__this, (var)(__string_Acbody210+ 2));
		Acbody__add_to_data((void*)__this, (var)(__string_Acbody211+ 2));
	}
	if (vars_!=0) {
		l=buffer__length((void*)vars_);
	} else {
		l=0;
	}
	i=0;
	while (i<l) {
		va=buffer__get_at((void*)vars_,i);
		Acbody__add_to_data((void*)__this, (var)(__string_Acbody212+ 2));
		tok=Amember__get_name((void*)va);
		Acbody__add_to_data((void*)__this, Atoken__get_data((void*)tok));
		Acbody__add_to_data((void*)__this, (var)(__string_Acbody213+ 2));
		i=i+1;
	}
	if (((((k==(11)))||((k==(10))))||((k==(8))))||((k==(32)))) {
	} else {
		Acbody__add_to_data((void*)__this, (var)(__string_Acbody214+ 2));
	}
	if (__this->debug>0) {
		Acbody__gen_debug_rec((void*)__this, mb,k);
	}
	Acbody__gen_statements((void*)__this);
	return 0;
}
var Acbody__gen_debug_rec(struct Acbody*__this, var mb, var k)
{
	var mbs;

	if (__this->debug>0) {
		mbs=Amember__get_name_string((void*)mb);
		if (k==(10)) {
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody215+ 2));
			Acbody__add_to_data((void*)__this, __this->class_name);
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody216+ 2));
			if ((string__compare((void*)__this->class_name,(var)(__string_Acbody217+ 2)))==0) {
				if ((((string__compare((void*)mbs,(var)(__string_Acbody218+ 2)))==0)||((string__compare((void*)mbs,(var)(__string_Acbody219+ 2)))==0))||((string__compare((void*)mbs,(var)(__string_Acbody220+ 2)))==0)) {
					Acbody__add_to_data((void*)__this, (var)(__string_Acbody221+ 2));
					Acbody__add_to_data((void*)__this, (var)(__string_Acbody222+ 2));
				}
			}
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody223+ 2));
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody224+ 2));
		}
		Acbody__add_to_data((void*)__this, (var)(__string_Acbody225+ 2));
		if (__this->debug>1) {
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody226+ 2));
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody227+ 2));
			Acbody__add_to_data((void*)__this, __this->class_name);
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody228+ 2));
			Acbody__add_to_data((void*)__this, Amember__get_name_string((void*)mb));
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody229+ 2));
		}
	}
	return 0;
}
var Acbody__transform_ifblock(struct Acbody*__this)
{
	var children;
	var iv;
	var j;

	children=Astatement__get_statements((void*)__this->stm);
	__this->stm=buffer__get_at((void*)children,0);
	iv=Aemmiter__is_switch((void*)__this->side,__this->stm,0);
	if (iv==0) {
		__this->cmb=0;
	} else {
		__this->cmb=Aemmiter__find_variable((void*)__this->side,iv);
	}
	if (__this->cmb==0) {
		iv=0;
	} else {
		if ((Amember__get_type((void*)__this->cmb))!=(5)) {
			iv=0;
		}
	}
	__this->ty=24;
	j=0;
	while (((j<(buffer__length((void*)children)))&&(iv!=0))&&(__this->ty==(24))) {
		__this->stm=buffer__get_at((void*)children,j);
		if ((Aemmiter__is_switch((void*)__this->side,__this->stm,iv))==0) {
			iv=0;
			break;
		}
		j=j+1;
	}
	if (j>2) {
		j=j-1;
		__this->stm=buffer__get_at((void*)children,j);
		__this->buf=Astatement__get_else((void*)__this->stm);
		if (__this->buf!=0) {
			__this->stm=buffer__get_at((void*)__this->buf,0);
			Astatement__set_type((void*)__this->stm,40);
		}
		while (j>0) {
			__this->stm=buffer__get_at((void*)children,j);
			Astatement__set_type((void*)__this->stm,36);
			j=j-1;
		}
		__this->stm=buffer__get_at((void*)children,j);
		Astatement__set_type((void*)__this->stm,37);
		__this->stm=buffer__get_at((void*)__this->body,__this->i);
		__this->ty=39;
		Astatement__set_type((void*)__this->stm,__this->ty);
	} else {
		__this->stm=buffer__get_at((void*)__this->body,__this->i);
		__this->ty=Astatement__get_type((void*)__this->stm);
	}
	return 0;
}
var Acbody__prepare_ifblock(struct Acbody*__this)
{

	buffer__push((void*)__this->stack,__this->l);
	buffer__push((void*)__this->stack,__this->i+1);
	buffer__push((void*)__this->stack,__this->body);
	buffer__push((void*)__this->stack,__this->end);
	if (__this->ty==(38)) {
		__this->end=0;
	} else {
		__this->end=__this->switchend;
	}
	__this->i=-(1);
	__this->l=0;
	__this->body=Astatement__get_statements((void*)__this->stm);
	if (__this->body!=0) {
		__this->l=buffer__length((void*)__this->body);
	}
	return 0;
}
var Acbody__gen_if(struct Acbody*__this)
{

	if (__this->ty==(24)) {
		Acbody__add_to_data((void*)__this, (var)(__string_Acbody230+ 2));
	} else {
		Acbody__add_to_data((void*)__this, (var)(__string_Acbody231+ 2));
	}
	__this->ex=Astatement__get_expression((void*)__this->stm);
	if (__this->ex!=0) {
		Acbody__expr_gen((void*)__this, __this->ex);
	}
	Acbody__add_to_data((void*)__this, (var)(__string_Acbody232+ 2));
	buffer__push((void*)__this->stack,__this->l);
	buffer__push((void*)__this->stack,__this->i+1);
	buffer__push((void*)__this->stack,__this->body);
	buffer__push((void*)__this->stack,__this->end);
	__this->end=(var)(__string_Acbody233+ 2);
	__this->buf=Astatement__get_else((void*)__this->stm);
	if (__this->buf!=0) {
		buffer__push((void*)__this->stack,buffer__length((void*)__this->buf));
		buffer__push((void*)__this->stack,0);
		buffer__push((void*)__this->stack,__this->buf);
		buffer__push((void*)__this->stack,__this->end);
		__this->end=(var)(__string_Acbody234+ 2);
	}
	__this->padde=__this->padde+1;
	__this->i=-(1);
	__this->l=0;
	__this->body=Astatement__get_statements((void*)__this->stm);
	if (__this->body!=0) {
		__this->l=buffer__length((void*)__this->body);
	}
	return 0;
}
var Acbody__gen_return(struct Acbody*__this)
{

	__this->ex=Astatement__get_expression((void*)__this->stm);
	if (__this->ex!=0) {
		if (__this->debug>0) {
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody235+ 2));
			Acbody__expr_gen((void*)__this, __this->ex);
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody236+ 2));
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody237+ 2));
		} else {
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody238+ 2));
			Acbody__expr_gen((void*)__this, __this->ex);
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody239+ 2));
		}
	} else {
		if (__this->debug>0) {
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody240+ 2));
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody241+ 2));
		} else {
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody242+ 2));
		}
	}
	return 0;
}
var Acbody__gen_switch(struct Acbody*__this)
{

	if (__this->ty==(37)) {
		Acbody__add_to_data((void*)__this, (var)(__string_Acbody243+ 2));
		__this->ex=Aemmiter__get_switch_expr((void*)__this->side,__this->stm);
		Acbody__expr_gen_var((void*)__this, __this->ex);
		__this->ex=buffer__pop((void*)__this->_expr_stk);
		Aexpr__data_to_string((void*)__this->ex,Aemmitc__get_data((void*)__this->emmiter));
		Aemmitc__fix_datal((void*)__this->emmiter);
		Acbody__add_to_data((void*)__this, (var)(__string_Acbody244+ 2));
		Acbody__pad((void*)__this, __this->padde);
	}
	__this->ex=Astatement__get_expression((void*)__this->stm);
	if (__this->ex!=0) {
		Acbody__expr_gen_case((void*)__this, __this->ex,__this->padde);
	}
	buffer__push((void*)__this->stack,__this->l);
	buffer__push((void*)__this->stack,__this->i+1);
	buffer__push((void*)__this->stack,__this->body);
	buffer__push((void*)__this->stack,__this->end);
	__this->end=__this->caseend;
	__this->buf=Astatement__get_else((void*)__this->stm);
	if (__this->buf!=0) {
		buffer__push((void*)__this->stack,buffer__length((void*)__this->buf));
		buffer__push((void*)__this->stack,0);
		buffer__push((void*)__this->stack,__this->buf);
		buffer__push((void*)__this->stack,__this->end);
	}
	__this->i=-(1);
	__this->l=0;
	__this->body=Astatement__get_statements((void*)__this->stm);
	if (__this->body!=0) {
		__this->l=buffer__length((void*)__this->body);
	}
	__this->padde=__this->padde+1;
	return 0;
}
var Acbody__gen_while(struct Acbody*__this)
{

	Acbody__add_to_data((void*)__this, (var)(__string_Acbody245+ 2));
	__this->ex=Astatement__get_expression((void*)__this->stm);
	if (__this->ex!=0) {
		Acbody__expr_gen((void*)__this, __this->ex);
	}
	Acbody__add_to_data((void*)__this, (var)(__string_Acbody246+ 2));
	buffer__push((void*)__this->stack,__this->l);
	buffer__push((void*)__this->stack,__this->i+1);
	buffer__push((void*)__this->stack,__this->body);
	buffer__push((void*)__this->stack,__this->end);
	__this->end=(var)(__string_Acbody247+ 2);
	__this->i=-(1);
	__this->l=0;
	__this->body=Astatement__get_statements((void*)__this->stm);
	if (__this->body!=0) {
		__this->l=buffer__length((void*)__this->body);
	}
	__this->padde=__this->padde+1;
	return 0;
}
var Acbody__gen_do(struct Acbody*__this)
{

	__this->ex=Astatement__get_expression((void*)__this->stm);
	if (__this->ex!=0) {
		Acbody__expr_gen((void*)__this, __this->ex);
	}
	Acbody__add_to_data((void*)__this, (var)(__string_Acbody248+ 2));
	return 0;
}
var Acbody__gen_let(struct Acbody*__this)
{

	__this->ex=Astatement__get_expression((void*)__this->stm);
	if (__this->ex!=0) {
		Acbody__expr_gen((void*)__this, __this->ex);
	}
	Acbody__add_to_data((void*)__this, (var)(__string_Acbody249+ 2));
	return 0;
}
var Acbody__next_statement(struct Acbody*__this)
{

	__this->i=__this->i+1;
	if ((__this->i>=__this->l)&&(__this->end!=0)) {
		__this->padde=__this->padde-1;
		Acbody__add_to_data((void*)__this, (var)(__string_Acbody250+ 2));
		Acbody__pad((void*)__this, __this->padde);
		Acbody__add_to_data((void*)__this, __this->end);
	}
	while (((__this->i>=__this->l))&&(((buffer__length((void*)__this->stack))>0))) {
		__this->end=buffer__pop((void*)__this->stack);
		__this->body=buffer__pop((void*)__this->stack);
		__this->i=buffer__pop((void*)__this->stack);
		__this->l=buffer__pop((void*)__this->stack);
		if ((__this->i>=__this->l)&&(__this->end!=0)) {
			if (__this->end!=__this->switchend) {
				__this->padde=__this->padde-1;
			}
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody251+ 2));
			Acbody__pad((void*)__this, __this->padde);
			Acbody__add_to_data((void*)__this, __this->end);
		}
	}
	return 0;
}
var Acbody__gen_statements(struct Acbody*__this)
{

	__this->switchend=(var)(__string_Acbody252+ 2);
	__this->caseend=(var)(__string_Acbody253+ 2);
	__this->stack=buffer__new(4,0,(var)__this);
	__this->l=buffer__length((void*)__this->body);
	__this->i=0;
	__this->padde=1;
	__this->end=(var)(__string_Acbody254+ 2);
	while (__this->i<__this->l) {
		__this->stm=buffer__get_at((void*)__this->body,__this->i);
		__this->ty=Astatement__get_type((void*)__this->stm);
		if (__this->ty==(38)) {
			Acbody__transform_ifblock((void*)__this);
		}
		if ((((__this->ty!=(38)))&&((__this->ty!=(24))))&&((__this->ty!=(23)))) {
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody255+ 2));
			Acbody__pad((void*)__this, __this->padde);
		}
		if ((__this->ty==(38))||(__this->ty==(39))) {
			Acbody__prepare_ifblock((void*)__this);
		} else if (((__this->ty==(18)))||((__this->ty==(24)))) {
			Acbody__gen_if((void*)__this);
		} else if (__this->ty==(23)) {
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody256+ 2));
			__this->padde=__this->padde+1;
		} else if (__this->ty==(40)) {
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody257+ 2));
			__this->padde=__this->padde+1;
		} else if (__this->ty==(17)) {
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody258+ 2));
		} else if (__this->ty==(20)) {
			Acbody__gen_return((void*)__this);
		} else if (__this->ty==(21)) {
			Acbody__gen_do((void*)__this);
		} else if (__this->ty==(22)) {
			Acbody__gen_let((void*)__this);
		} else if ((__this->ty==(37))||(__this->ty==(36))) {
			Acbody__gen_switch((void*)__this);
		} else if (__this->ty==(19)) {
			Acbody__gen_while((void*)__this);
		} else {
			Acbody__add_to_data((void*)__this, (var)(__string_Acbody259+ 2));
		}
		Acbody__next_statement((void*)__this);
	}
	Acbody__add_to_data((void*)__this, (var)(__string_Acbody260+ 2));
	std__delete(__this->stack);
	return 0;
}
var Acbody__pad(struct Acbody*__this, var padde)
{

	if (0==0) {
		Aemmitc__pad((void*)__this->emmiter,padde);
	}
	return 0;
}
/* class Aexpr */
struct Aexpr {
	var op;
	var prec;
	var asso;
	var left;
	var right;
	var parent;
	var value2;
	var flags;
	var origin;
	var data;
};
var Aexpr___new(struct Aexpr*__this, var op1, var precedence1, var associativity1, var __parent)
{

	__this->op=op1;
	__this->prec=precedence1;
	__this->asso=associativity1;
	__this->parent=0;
	__this->left=0;
	__this->right=0;
	__this->value2=0;
	__this->flags=0;
	__this->origin=0;
	__this->data=0;
	return (var)(var)__this;
}
var Aexpr__new(var op1, var precedence1, var associativity1, var __parent)
{
	NEW(Aexpr);
	return Aexpr___new((void*)__this, op1, precedence1, associativity1, __parent);
}
var Aexpr___V_dispose(struct Aexpr*__this)
{

	std__delayed_delete((var)__this);
	return 0;
}
var Aexpr___V_delayed_dispose(struct Aexpr*__this)
{

	std__delete(__this->left);
	std__delete(__this->right);
	std__delete(__this->value2);
	std__delete(__this->data);
	std__free((var)__this);
	return 0;
}
var Aexpr__clear_data(struct Aexpr*__this)
{

	std__delete(__this->data);
	__this->data=0;
	return 0;
}
var Aexpr__add_data(struct Aexpr*__this, var value)
{

	if (value==0) {
		return 0;
	}
	if ((string__length((void*)value))<1) {
		return 0;
	}
	if (__this->data==0) {
		__this->data=buffer__new(3,0,(var)__this);
	}
	buffer__push((void*)__this->data,value);
	return 0;
}
var Aexpr__get_data(struct Aexpr*__this)
{

	return (var)__this->data;
}
var Aexpr__merge_data(struct Aexpr*__this, var buf)
{
	var l;

	l=1;
	if (buf!=0) {
		l=buffer__length((void*)buf);
	}
	if (__this->data==0) {
		__this->data=buffer__new(l,0,(var)__this);
	}
	if (buf==0) {
		return 0;
	}
	buffer__append((void*)__this->data,buf);
	return 0;
}
var Aexpr__data_to_string(struct Aexpr*__this, var s)
{
	var l;
	var i;
	var ol;

	if (__this->data==0) {
		return (var)s;
	}
	ol=string__length((void*)s);
	l=buffer__length((void*)__this->data);
	i=0;
	while (i<l) {
		ol=string__add_at((void*)s,ol,buffer__get_at((void*)__this->data,i));
		i=i+1;
	}
	return (var)s;
}
var Aexpr__get_origin(struct Aexpr*__this)
{

	return (var)__this->origin;
}
var Aexpr__set_origin(struct Aexpr*__this, var orig)
{

	__this->origin=orig;
	return 0;
}
var Aexpr__get_right(struct Aexpr*__this)
{

	return (var)__this->right;
}
var Aexpr__set_right(struct Aexpr*__this, var r)
{

	__this->right=std__move(r);
	return 0;
}
var Aexpr__get_left(struct Aexpr*__this)
{

	return (var)__this->left;
}
var Aexpr__set_left(struct Aexpr*__this, var l)
{

	__this->left=std__move(l);
	return 0;
}
var Aexpr__get_parent(struct Aexpr*__this)
{

	return (var)__this->parent;
}
var Aexpr__set_parent(struct Aexpr*__this, var p)
{

	__this->parent=p;
	return 0;
}
var Aexpr__get_value2(struct Aexpr*__this)
{

	return (var)__this->value2;
}
var Aexpr__set_value2(struct Aexpr*__this, var v)
{

	__this->value2=v;
	return 0;
}
var Aexpr__get_value(struct Aexpr*__this)
{

	if (__this->data==0) {
		return (var)0;
	}
	return (var)buffer__get_at((void*)__this->data,0);
}
var Aexpr__set_value(struct Aexpr*__this, var v)
{

	std__delete(__this->data);
	__this->data=buffer__new(1,0,(var)__this);
	buffer__push((void*)__this->data,v);
	return 0;
}
var Aexpr__get_op(struct Aexpr*__this)
{

	return (var)__this->op;
}
var Aexpr__get_flags(struct Aexpr*__this)
{

	return (var)__this->flags;
}
var Aexpr__set_flags(struct Aexpr*__this, var flags_)
{

	__this->flags=flags_;
	return 0;
}
var Aexpr__set_precedence(struct Aexpr*__this, var p)
{

	__this->prec=p;
	return 0;
}
var Aexpr__get_precedence(struct Aexpr*__this)
{

	return (var)__this->prec;
}
var Aexpr__get_associativity(struct Aexpr*__this)
{

	return (var)__this->asso;
}
var Aexpr__close(struct Aexpr*__this, var op_)
{
	var cur;

	cur=(var)__this;
	while (cur!=0) {
		if ((Aexpr__get_op((void*)cur))==op_) {
			return (var)cur;
		}
		cur=Aexpr__get_parent((void*)cur);
	}
	return (var)0;
}
var Aexpr__add(struct Aexpr*__this, var ex)
{
	var pre;
	var ass;
	var cur;
	var ri;
	var le;
	var par;
	var child;
	var p;

	pre=Aexpr__get_precedence((void*)ex);
	ass=Aexpr__get_associativity((void*)ex);
	cur=(var)__this;
	par=Aexpr__get_parent((void*)cur);
	child=0;
	while (par!=0) {
		p=Aexpr__get_precedence((void*)cur);
		if (p>pre) {
			child=cur;
			cur=par;
			par=Aexpr__get_parent((void*)cur);
		} else {
			if (((p==pre))&&((ass==(1)))) {
				child=cur;
				cur=par;
				par=Aexpr__get_parent((void*)cur);
			} else {
				par=0;
			}
		}
	}
	Aexpr__set_parent((void*)ex,cur);
	ri=Aexpr__get_right((void*)cur);
	if (ri==child) {
		if (ri!=0) {
			Aexpr__set_left((void*)ex,ri);
			Aexpr__set_parent((void*)ri,ex);
		}
		Aexpr__set_right((void*)cur,ex);
	} else {
		le=Aexpr__get_left((void*)cur);
		if (le!=0) {
			Aexpr__set_left((void*)ex,le);
			Aexpr__set_parent((void*)le,ex);
		}
		Aexpr__set_left((void*)cur,ex);
	}
	return (var)ex;
}
var Aexpr__dump(struct Aexpr*__this, var depth)
{
	var i;

	if (__this->left!=0) {
		Aexpr__dump((void*)__this->left,depth+1);
	}
	i=depth;
	while (i>0) {
		i=i-1;
		console__log_str((var)(__string_Aexpr261+ 2));
	}
	console__log_str(Aexpr__get_value((void*)__this));
	console__log_str((var)(__string_Aexpr262+ 2));
	console__log_int(__this->op);
	console__log((var)(__string_Aexpr263+ 2));
	if (__this->right!=0) {
		Aexpr__dump((void*)__this->right,depth+1);
	}
	return 0;
}
var Aexpr__is_equal_comp1(struct Aexpr*__this, var v)
{
	var l;
	var r;

	if (__this->op==(1026)) {
		l=Aexpr__get_op((void*)__this->left);
		r=Aexpr__get_op((void*)__this->right);
		if (l==(16)) {
			if ((r==(27))||(r==(1049))) {
				if ((v==0)||(v==(Aexpr__get_value((void*)__this->left)))) {
					return (var)__this->left;
				}
			}
		} else if (r==(16)) {
			if ((l==(27))||(l==(1049))) {
				if ((v==0)||(v==(Aexpr__get_value((void*)__this->right)))) {
					return (var)__this->right;
				}
			}
		}
		return (var)0;
	}
	return (var)0;
}
var Aexpr__get_case_expr1(struct Aexpr*__this)
{
	var l;
	var r;
	var o;

	o=0;
	if (__this->op==(1026)) {
		l=Aexpr__get_op((void*)__this->left);
		r=Aexpr__get_op((void*)__this->right);
		if (l==(16)) {
			o=__this->right;
		} else if (r==(16)) {
			o=__this->left;
		}
		return (var)o;
	}
	return (var)0;
}
var Aexpr__get_switch_expr(struct Aexpr*__this)
{

	return (var)Aexpr__is_equal_comp1((void*)__this->right,0);
}
var Aexpr__get_case_expr(struct Aexpr*__this, var pos)
{
	var opi;
	var n;
	var o;
	var stack;

	if ((Aexpr__get_op((void*)__this->right))==(1026)) {
		if (pos==0) {
			return (var)Aexpr__get_case_expr1((void*)__this->right);
		}
		return (var)0;
	}
	stack=buffer__new(5,0,(var)__this);
	buffer__push((void*)stack,__this->right);
	n=0;
	while ((buffer__length((void*)stack))>0) {
		o=buffer__pop((void*)stack);
		opi=0;
		if (o!=0) {
			opi=Aexpr__get_op((void*)o);
		}
		if (opi==(1033)) {
			buffer__push((void*)stack,Aexpr__get_right((void*)o));
			buffer__push((void*)stack,Aexpr__get_left((void*)o));
		} else if (opi==(1026)) {
			o=Aexpr__get_case_expr1((void*)o);
			if ((o!=0)&&(n==pos)) {
				std__delete(stack);
				return (var)o;
			}
			n=n+1;
		}
	}
	std__delete(stack);
	return (var)0;
}
var Aexpr__is_equal_comp(struct Aexpr*__this, var v)
{
	var ret;
	var opi;
	var o;
	var stack;

	ret=0;
	if ((__this->right!=0)&&(__this->op==(1000))) {
		if ((Aexpr__get_op((void*)__this->right))==(1033)) {
			stack=buffer__new(5,0,(var)__this);
			buffer__push((void*)stack,Aexpr__get_right((void*)__this->right));
			buffer__push((void*)stack,Aexpr__get_left((void*)__this->right));
			while ((buffer__length((void*)stack))>0) {
				o=buffer__pop((void*)stack);
				opi=0;
				if (o!=0) {
					opi=Aexpr__get_op((void*)o);
				}
				if (opi==(1033)) {
					buffer__push((void*)stack,Aexpr__get_right((void*)o));
					buffer__push((void*)stack,Aexpr__get_left((void*)o));
				} else if (opi==(1026)) {
					ret=Aexpr__is_equal_comp1((void*)o,v);
					if (ret==0) {
						std__delete(stack);
						return (var)0;
					}
				} else {
					std__delete(stack);
					return (var)0;
				}
			}
			std__delete(stack);
		} else {
			ret=Aexpr__is_equal_comp1((void*)__this->right,v);
		}
	}
	if (ret==0) {
		return (var)0;
	}
	return (var)Aexpr__get_value((void*)ret);
}
/* class Amember */
struct Amember {
	var kind;
	var type;
	var type_id;
	var name;
	var initial_value;
	var index;
	var params;
	var vars;
	var body;
	var own;
};
var Amember___new(struct Amember*__this, var kind1, var type1, var type_id1, var name1, var __parent)
{

	__this->own=0;
	__this->kind=kind1;
	__this->type=type1;
	__this->name=name1;
	__this->type_id=type_id1;
	__this->initial_value=0;
	__this->index=-(1);
	__this->params=0;
	__this->vars=0;
	__this->body=0;
	return (var)(var)__this;
}
var Amember__new(var kind1, var type1, var type_id1, var name1, var __parent)
{
	NEW(Amember);
	return Amember___new((void*)__this, kind1, type1, type_id1, name1, __parent);
}
var Amember___V_dispose(struct Amember*__this)
{

	if (__this->own) {
		std__delete(__this->name);
		std__delete(__this->type_id);
	}
	std__delete(__this->params);
	__this->params=0;
	std__delete(__this->body);
	__this->body=0;
	std__delete(__this->vars);
	__this->vars=0;
	std__free((var)__this);
	return 0;
}
var Amember__copy(struct Amember*__this)
{
	var cp;
	var m;
	var o;
	var t;

	cp=buffer__new(64,0,(var)__this);
	m=Amember__pre_copy((void*)__this, cp);
	while ((buffer__length((void*)cp))>0) {
		t=buffer__pop((void*)cp);
		o=buffer__pop((void*)cp);
		Amember__copy_params((void*)o,t,cp);
	}
	std__delete(cp);
	return (var)m;
}
var Amember__pre_copy(struct Amember*__this, var cp)
{
	var id;
	var n;
	var m;
	var p;
	var l;

	if (__this->type_id!=0) {
		id=Atoken__copy((void*)__this->type_id);
	} else {
		id=0;
	}
	if (__this->name!=0) {
		n=Atoken__copy((void*)__this->name);
	} else {
		n=0;
	}
	m=Amember__new(__this->kind,__this->type,id,n,(var)__this);
	Amember__take((void*)m);
	p=Amember__get_params((void*)__this);
	if (p==0) {
		return (var)m;
	}
	l=buffer__length((void*)p);
	if (l<1) {
		return (var)m;
	}
	buffer__push((void*)cp,m);
	buffer__push((void*)cp,(var)__this);
	return (var)m;
}
var Amember__take(struct Amember*__this)
{

	std__move(__this->type_id);
	std__move(__this->name);
	__this->own=1;
	return 0;
}
var Amember__copy_params(struct Amember*__this, var o, var cp)
{
	var l;
	var p;
	var m;

	p=Amember__get_params((void*)o);
	if (p==0) {
		return 0;
	}
	l=buffer__length((void*)p);
	if (l<1) {
		return 0;
	}
	__this->params=buffer__new(l,1,(var)__this);
	while (l>0) {
		l=l-1;
		m=buffer__get_at((void*)p,l);
		buffer__set_at((void*)__this->params,l,Amember__pre_copy((void*)m,cp));
	}
	return 0;
}
var Amember__dispose_body(struct Amember*__this)
{

	std__delete(__this->body);
	__this->body=0;
	std__delete(__this->vars);
	__this->vars=0;
	return 0;
}
var Amember__get_kind(struct Amember*__this)
{

	return (var)__this->kind;
}
var Amember__get_type(struct Amember*__this)
{

	return (var)__this->type;
}
var Amember__get_type_string(struct Amember*__this)
{

	return (var)Atoken__get_data((void*)__this->type_id);
}
var Amember__get_type_id(struct Amember*__this)
{

	return (var)__this->type_id;
}
var Amember__get_name(struct Amember*__this)
{

	return (var)__this->name;
}
var Amember__get_name_string(struct Amember*__this)
{

	return (var)Atoken__get_data((void*)__this->name);
}
var Amember__get_initial_value(struct Amember*__this)
{

	return (var)__this->initial_value;
}
var Amember__set_initial_value(struct Amember*__this, var initial_value1)
{

	__this->initial_value=initial_value1;
	return 0;
}
var Amember__set_index(struct Amember*__this, var index1)
{

	__this->index=index1;
	return 0;
}
var Amember__get_index(struct Amember*__this)
{

	return (var)__this->index;
}
var Amember__get_body(struct Amember*__this)
{

	return (var)__this->body;
}
var Amember__get_vars(struct Amember*__this)
{

	return (var)__this->vars;
}
var Amember__get_params(struct Amember*__this)
{

	return (var)__this->params;
}
var Amember__add_param(struct Amember*__this, var kind1, var type1, var type_id1, var name1)
{
	var p;

	if (__this->params==0) {
		__this->params=buffer__new(4,1,(var)__this);
	}
	p=Amember__new(kind1,type1,type_id1,name1,(var)__this);
	buffer__push((void*)__this->params,p);
	return 0;
}
var Amember__add_var(struct Amember*__this, var kind1, var type1, var type_id1, var name1)
{
	var p;

	if (__this->vars==0) {
		__this->vars=buffer__new(4,1,(var)__this);
	}
	p=Amember__new(kind1,type1,type_id1,name1,(var)__this);
	buffer__push((void*)__this->vars,p);
	return 0;
}
var Amember__add_statement(struct Amember*__this, var statement1)
{

	if (__this->body==0) {
		__this->body=buffer__new(4,1,(var)__this);
	}
	buffer__push((void*)__this->body,statement1);
	return (var)Astatement__get_parent((void*)statement1);
}
/* class Aparser */
struct Aparser {
	var _states;
	var lex;
	var lookahead;
	var lookstring;
	var status;
	var debug;
	var _class;
	var processed;
};
var Aparser___new(struct Aparser*__this, var __parent)
{

	__this->debug=0;
	__this->status=0;
	__this->lex=0;
	__this->_states=buffer__new(8,0,(var)__this);
	__this->_class=0;
	__this->processed=0;
	Aparser__push((void*)__this, 1);
	return (var)(var)__this;
}
var Aparser__new(var __parent)
{
	NEW(Aparser);
	return Aparser___new((void*)__this, __parent);
}
var Aparser___V_dispose(struct Aparser*__this)
{

	std__delete(__this->_states);
	std__delete(__this->_class);
	std__delete(__this->processed);
	std__free((var)__this);
	return 0;
}
var Aparser__get_data(struct Aparser*__this)
{

	return (var)__this->lookstring;
}
var Aparser__get_next(struct Aparser*__this)
{

	return (var)__this->_class;
}
var Aparser__release(struct Aparser*__this)
{
	var c;

	c=__this->_class;
	while ((Aclass__get_next((void*)c))!=0) {
		c=Aclass__get_next((void*)c);
	}
	Aclass__set_next((void*)c,__this->processed);
	__this->processed=__this->_class;
	__this->_class=0;
	return 0;
}
var Aparser__parse(struct Aparser*__this, var lexer_)
{

	__this->lex=lexer_;
	while ((Alexer__empty((void*)__this->lex))==0) {
		__this->lookahead=Alexer__get_at((void*)__this->lex,0);
		__this->lookstring=Atoken__get_data((void*)__this->lookahead);
		if ((((Atoken__get_type((void*)__this->lookahead))==(9)))||(((Atoken__get_type((void*)__this->lookahead))==(3)))) {
			Aparser__eat((void*)__this);
		} else {
			Aparser__state_machine((void*)__this);
		}
		if ((Alexer__empty((void*)__this->lex))!=0) {
			return (var)0;
		}
		if ((Atoken__get_type((void*)__this->lookahead))==(10)) {
			Aparser__eat((void*)__this);
			return (var)0;
		}
	}
	return (var)0;
}
var Aparser__get_const(struct Aparser*__this, var cls, var v)
{
	var c;
	var s;
	var tok;

	c=__this->processed;
	while (c!=0) {
		tok=Aclass__get_name((void*)c);
		if (tok!=0) {
			s=Atoken__get_data((void*)tok);
			if ((string__compare((void*)cls,s))==0) {
				break;
			}
		}
		c=Aclass__get_next((void*)c);
	}
	if (c==0) {
		c=__this->_class;
		tok=Aclass__get_name((void*)c);
		s=Atoken__get_data((void*)tok);
		if ((string__compare((void*)s,cls))!=0) {
			return (var)0;
		}
	}
	return (var)Aclass__get_const((void*)c,v);
}
var Aparser__error(struct Aparser*__this, var e)
{

	console__log_str(Atoken__get_file((void*)__this->lookahead));
	console__log_str((var)(__string_Aparser264+ 2));
	console__log_str(Atoken__get_data((void*)__this->lookahead));
	console__log_str((var)(__string_Aparser265+ 2));
	console__log_int(Atoken__get_line((void*)__this->lookahead));
	console__log_str((var)(__string_Aparser266+ 2));
	console__log(e);
	std__exit(-(1));
	__this->status=-(1);
	return 0;
}
var Aparser__push(struct Aparser*__this, var step_)
{

	buffer__push((void*)__this->_states,step_);
	return 0;
}
var Aparser__pop(struct Aparser*__this)
{

	buffer__pop((void*)__this->_states);
	return 0;
}
var Aparser__root(struct Aparser*__this)
{

	if (__this->status!=0) {
		return (var)-(1);
	}
	Aparser__push((void*)__this, 2);
	return (var)0;
}
var Aparser__class_dec(struct Aparser*__this)
{
	var c;

	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser267+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser268+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	if ((Aparser__match_id((void*)__this, 0))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser269+ 2));
		return 0;
	}
	c=__this->_class;
	__this->_class=Aclass__new(__this->lookahead,(var)__this);
	Aclass__set_next((void*)__this->_class,c);
	Aparser__eat((void*)__this);
	if (Aparser__match_id((void*)__this, (var)(__string_Aparser270+ 2))) {
		Aparser__eat((void*)__this);
		if ((Aparser__match_id((void*)__this, 0))==0) {
			Aparser__error((void*)__this, (var)(__string_Aparser271+ 2));
			return 0;
		}
		Aclass__add_implements((void*)__this->_class,__this->lookahead);
		Aparser__eat((void*)__this);
		while ((Aparser__match_op((void*)__this, (var)(__string_Aparser272+ 2)))!=0) {
			Aparser__eat((void*)__this);
			if ((Aparser__match_id((void*)__this, 0))==0) {
				Aparser__error((void*)__this, (var)(__string_Aparser273+ 2));
				return 0;
			}
			Aclass__add_implements((void*)__this->_class,__this->lookahead);
			Aparser__eat((void*)__this);
		}
	}
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser274+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser275+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	while (__this->status>=0) {
		Aparser__class_var_dec((void*)__this);
	}
	__this->status=0;
	while (__this->status>=0) {
		Aparser__clas_const_dec((void*)__this);
	}
	__this->status=0;
	Aparser__push((void*)__this, 21);
	Aparser__push((void*)__this, 20);
	return 0;
}
var Aparser__class_dec1(struct Aparser*__this)
{

	__this->status=0;
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser276+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser277+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	Aparser__pop((void*)__this);
	return 0;
}
var Aparser__class_var_dec(struct Aparser*__this)
{

	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser278+ 2)))!=0) {
		Aclass__prepare_kind((void*)__this->_class,3);
	} else if ((Aparser__match_id((void*)__this, (var)(__string_Aparser279+ 2)))!=0) {
		Aclass__prepare_kind((void*)__this->_class,2);
	} else {
		__this->status=-(1);
		return 0;
	}
	Aparser__eat((void*)__this);
	Aparser__type((void*)__this);
	Aparser__var_name((void*)__this);
	while ((Aparser__match_op((void*)__this, (var)(__string_Aparser280+ 2)))!=0) {
		Aclass__valid_member_name((void*)__this->_class);
		Aparser__var_name((void*)__this);
	}
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser281+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser282+ 2));
		return 0;
	}
	Aclass__valid_member_name((void*)__this->_class);
	Aparser__eat((void*)__this);
	return 0;
}
var Aparser__var_name(struct Aparser*__this)
{

	if ((Aparser__match_id((void*)__this, 0))!=0) {
		Aclass__prepare_set_name((void*)__this->_class,__this->lookahead);
		Aparser__eat((void*)__this);
		return 0;
	}
	Aparser__error((void*)__this, (var)(__string_Aparser283+ 2));
	return 0;
}
var Aparser__type(struct Aparser*__this)
{

	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser284+ 2)))!=0) {
		Aclass__prepare_type((void*)__this->_class,5);
	} else if ((Aparser__match_id((void*)__this, (var)(__string_Aparser285+ 2)))!=0) {
		Aclass__prepare_type((void*)__this->_class,7);
	} else if ((Aparser__match_id((void*)__this, 0))!=0) {
		Aclass__prepare_type_identifier((void*)__this->_class,__this->lookahead);
	} else {
		Aparser__error((void*)__this, (var)(__string_Aparser286+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	return 0;
}
var Aparser__clas_const_dec(struct Aparser*__this)
{

	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser287+ 2)))!=0) {
		Aclass__prepare_kind((void*)__this->_class,4);
	} else {
		__this->status=-(1);
		return 0;
	}
	Aparser__eat((void*)__this);
	Aparser__type((void*)__this);
	Aparser__var_name((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser288+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser289+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser290+ 2)))==0) {
		Aclass__finish_const((void*)__this->_class,__this->lookahead);
	} else {
		Aparser__error((void*)__this, (var)(__string_Aparser291+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser292+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser293+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	return 0;
}
var Aparser__subroutine_dec(struct Aparser*__this)
{

	if (__this->status!=0) {
		Aparser__pop((void*)__this);
		return 0;
	}
	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser294+ 2)))!=0) {
		Aclass__prepare_kind((void*)__this->_class,8);
	} else if ((Aparser__match_id((void*)__this, (var)(__string_Aparser295+ 2)))!=0) {
		Aclass__prepare_kind((void*)__this->_class,9);
	} else if ((Aparser__match_id((void*)__this, (var)(__string_Aparser296+ 2)))!=0) {
		Aclass__prepare_kind((void*)__this->_class,10);
	} else if ((Aparser__match_id((void*)__this, (var)(__string_Aparser297+ 2)))!=0) {
		Aclass__prepare_kind((void*)__this->_class,11);
	} else {
		Aparser__pop((void*)__this);
		__this->status=-(1);
		return 0;
	}
	Aparser__eat((void*)__this);
	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser298+ 2)))!=0) {
		Aclass__prepare_type((void*)__this->_class,7);
		Aparser__eat((void*)__this);
	} else {
		Aparser__type((void*)__this);
	}
	Aparser__var_name((void*)__this);
	Aclass__valid_member_name((void*)__this->_class);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser299+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser300+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	Aparser__param_list((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser301+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser302+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	Aparser__subrout_body((void*)__this);
	return 0;
}
var Aparser__param_list(struct Aparser*__this)
{

	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser303+ 2)))!=0) {
		return 0;
	}
	Aparser__direction((void*)__this);
	Aparser__type((void*)__this);
	Aparser__var_name((void*)__this);
	while ((Aparser__match_op((void*)__this, (var)(__string_Aparser304+ 2)))!=0) {
		Aclass__valid_param((void*)__this->_class);
		Aparser__eat((void*)__this);
		Aparser__direction((void*)__this);
		Aparser__type((void*)__this);
		Aparser__var_name((void*)__this);
	}
	Aclass__valid_param((void*)__this->_class);
	return 0;
}
var Aparser__direction(struct Aparser*__this)
{

	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser305+ 2)))!=0) {
		Aclass__prepare_kind((void*)__this->_class,13);
		Aparser__eat((void*)__this);
		return 0;
	} else if ((Aparser__match_id((void*)__this, (var)(__string_Aparser306+ 2)))!=0) {
		Aclass__prepare_kind((void*)__this->_class,14);
		Aparser__eat((void*)__this);
		return 0;
	} else if ((Aparser__match_id((void*)__this, (var)(__string_Aparser307+ 2)))!=0) {
		Aclass__prepare_kind((void*)__this->_class,15);
		Aparser__eat((void*)__this);
		return 0;
	} else if ((Aparser__match_id((void*)__this, (var)(__string_Aparser308+ 2)))!=0) {
		Aclass__prepare_kind((void*)__this->_class,32);
		Aparser__eat((void*)__this);
		return 0;
	}
	Aparser__error((void*)__this, (var)(__string_Aparser309+ 2));
	return 0;
}
var Aparser__lambda_body(struct Aparser*__this)
{

	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser310+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser311+ 2));
		return 0;
	}
	Aclass__begin_lambda((void*)__this->_class,__this->lookahead);
	Aparser__eat((void*)__this);
	while (__this->status==0) {
		Aparser__var_dec((void*)__this);
	}
	__this->status=0;
	Aparser__push((void*)__this, 27);
	Aparser__push((void*)__this, 4);
	return 0;
}
var Aparser__lambda_body1(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser312+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser313+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	Aclass__finish_lambda((void*)__this->_class);
	return 0;
}
var Aparser__subrout_body(struct Aparser*__this)
{

	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser314+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser315+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	while (__this->status==0) {
		Aparser__var_dec((void*)__this);
	}
	__this->status=0;
	Aparser__push((void*)__this, 19);
	Aparser__push((void*)__this, 4);
	return 0;
}
var Aparser__subrout_body1(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser316+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser317+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	Aclass__finish_subroutine((void*)__this->_class);
	return 0;
}
var Aparser__var_dec(struct Aparser*__this)
{

	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser318+ 2)))==0) {
		__this->status=1;
		return 0;
	}
	Aparser__eat((void*)__this);
	Aclass__prepare_kind((void*)__this->_class,16);
	Aparser__type((void*)__this);
	Aparser__var_name((void*)__this);
	while ((Aparser__match_op((void*)__this, (var)(__string_Aparser319+ 2)))!=0) {
		Aclass__valid_var((void*)__this->_class);
		Aparser__eat((void*)__this);
		Aparser__var_name((void*)__this);
	}
	Aclass__valid_var((void*)__this->_class);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser320+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser321+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	return 0;
}
var Aparser__statements(struct Aparser*__this)
{

	if (__this->status==0) {
		Aparser__push((void*)__this, 3);
		return 0;
	}
	if (__this->status>0) {
		__this->status=0;
	}
	Aparser__pop((void*)__this);
	return 0;
}
var Aparser__statement(struct Aparser*__this)
{
	var r;

	Aparser__pop((void*)__this);
	r=0;
	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser322+ 2)))!=0) {
		r=1;
		Aclass__begin_stm((void*)__this->_class,17,__this->lookahead);
		Aparser__eat((void*)__this);
		if ((Aparser__match_op((void*)__this, (var)(__string_Aparser323+ 2)))==0) {
			Aparser__error((void*)__this, (var)(__string_Aparser324+ 2));
			return 0;
		}
		Aclass__finish_stm((void*)__this->_class);
		Aparser__eat((void*)__this);
		return 0;
	}
	if (r==0) {
		r=Aparser__if_statem((void*)__this, 18);
	}
	if (r==0) {
		r=Aparser__while_statem((void*)__this);
	}
	if (r==0) {
		r=Aparser__return_statem((void*)__this);
	}
	if (r==0) {
		r=Aparser__dolet_statem((void*)__this);
	}
	if (r==0) {
		__this->status=1;
	}
	return 0;
}
var Aparser__if_statem(struct Aparser*__this, var type_)
{

	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser325+ 2)))==0) {
		return (var)0;
	}
	if (type_==(18)) {
		Aclass__begin_stm((void*)__this->_class,38,__this->lookahead);
	}
	Aclass__begin_stm((void*)__this->_class,type_,__this->lookahead);
	Aparser__eat((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser326+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser327+ 2));
		return (var)1;
	}
	Aparser__eat((void*)__this);
	Aparser__push((void*)__this, 22);
	Aparser__push((void*)__this, 5);
	Aclass__begin_expr((void*)__this->_class,__this->lookahead);
	return (var)1;
}
var Aparser__if_statem1(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser328+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser329+ 2));
		return 0;
	}
	Aclass__finish_expr((void*)__this->_class);
	Aparser__eat((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser330+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser331+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	Aparser__push((void*)__this, 24);
	Aparser__push((void*)__this, 4);
	return 0;
}
var Aparser__else_statem(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser332+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser333+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser334+ 2)))==0) {
		Aclass__finish_stm((void*)__this->_class);
		Aclass__finish_stm((void*)__this->_class);
		return 0;
	}
	Aparser__eat((void*)__this);
	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser335+ 2)))!=0) {
		Aclass__finish_stm((void*)__this->_class);
		Aparser__if_statem((void*)__this, 24);
		return 0;
	}
	Aclass__begin_else((void*)__this->_class,23);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser336+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser337+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	Aparser__push((void*)__this, 25);
	Aparser__push((void*)__this, 4);
	return 0;
}
var Aparser__else_statem1(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser338+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser339+ 2));
		return 0;
	}
	Aclass__finish_stm((void*)__this->_class);
	Aclass__finish_stm((void*)__this->_class);
	Aparser__eat((void*)__this);
	return 0;
}
var Aparser__while_statem(struct Aparser*__this)
{

	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser340+ 2)))==0) {
		return (var)0;
	}
	Aclass__begin_stm((void*)__this->_class,19,__this->lookahead);
	Aparser__eat((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser341+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser342+ 2));
		return (var)1;
	}
	Aparser__eat((void*)__this);
	Aclass__begin_expr((void*)__this->_class,__this->lookahead);
	Aparser__push((void*)__this, 17);
	Aparser__push((void*)__this, 5);
	return (var)1;
}
var Aparser__while_statem1(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser343+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser344+ 2));
		return 0;
	}
	Aclass__finish_expr((void*)__this->_class);
	Aparser__eat((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser345+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser346+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	Aparser__push((void*)__this, 18);
	Aparser__push((void*)__this, 4);
	return 0;
}
var Aparser__while_statem2(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser347+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser348+ 2));
		return 0;
	}
	Aclass__finish_stm((void*)__this->_class);
	Aparser__eat((void*)__this);
	return 0;
}
var Aparser__return_statem(struct Aparser*__this)
{

	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser349+ 2)))==0) {
		return (var)0;
	}
	Aclass__begin_stm((void*)__this->_class,20,__this->lookahead);
	Aparser__eat((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser350+ 2)))!=0) {
		Aclass__finish_stm((void*)__this->_class);
		Aparser__eat((void*)__this);
	} else {
		Aclass__begin_expr((void*)__this->_class,__this->lookahead);
		Aparser__push((void*)__this, 6);
		Aparser__push((void*)__this, 5);
	}
	return (var)1;
}
var Aparser__return_statem1(struct Aparser*__this)
{

	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser351+ 2)))!=0) {
		Aclass__finish_expr((void*)__this->_class);
		Aclass__finish_stm((void*)__this->_class);
		Aparser__eat((void*)__this);
		Aparser__pop((void*)__this);
		return 0;
	}
	Aparser__error((void*)__this, (var)(__string_Aparser352+ 2));
	return 0;
}
var Aparser__dolet_statem(struct Aparser*__this)
{
	var id;

	if ((Aparser__match_id((void*)__this, 0))==0) {
		return (var)0;
	}
	id=__this->lookahead;
	Aparser__eat((void*)__this);
	if ((((Aparser__match_op((void*)__this, (var)(__string_Aparser353+ 2)))!=0))||(((Aparser__match_op((void*)__this, (var)(__string_Aparser354+ 2)))!=0))) {
		Aclass__begin_stm((void*)__this->_class,22,__this->lookahead);
		return (var)Aparser__let_statem((void*)__this, id);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser355+ 2)))==0) {
		Aclass__begin_stm((void*)__this->_class,21,__this->lookahead);
		return (var)Aparser__do_statem((void*)__this, id);
	} else {
		Aparser__error((void*)__this, (var)(__string_Aparser356+ 2));
	}
	return (var)0;
}
var Aparser__let_statem(struct Aparser*__this, var id)
{

	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser357+ 2)))!=0) {
		Aclass__expr_var((void*)__this->_class,Atoken__get_data((void*)id),__this->lookahead);
		Aclass__expr_op((void*)__this->_class,1048,__this->lookahead);
		Aparser__eat((void*)__this);
		Aparser__push((void*)__this, 14);
		Aparser__push((void*)__this, 5);
		return (var)1;
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser358+ 2)))!=0) {
		Aclass__expr_open_index((void*)__this->_class,Atoken__get_data((void*)id),__this->lookahead);
		Aparser__eat((void*)__this);
		Aparser__push((void*)__this, 15);
		Aparser__push((void*)__this, 5);
		return (var)1;
	}
	return (var)0;
}
var Aparser__let_statem1(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser359+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser360+ 2));
		return 0;
	}
	Aclass__finish_expr((void*)__this->_class);
	Aclass__finish_stm((void*)__this->_class);
	Aparser__eat((void*)__this);
	return 0;
}
var Aparser__let_statem2(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser361+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser362+ 2));
		return 0;
	}
	Aclass__expr_close_index((void*)__this->_class);
	Aparser__eat((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser363+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1048,__this->lookahead);
		Aparser__eat((void*)__this);
		Aparser__push((void*)__this, 14);
		Aparser__push((void*)__this, 5);
		return 0;
	}
	Aparser__error((void*)__this, (var)(__string_Aparser364+ 2));
	return 0;
}
var Aparser__do_statem(struct Aparser*__this, var id)
{

	Aparser__push((void*)__this, 16);
	return (var)Aparser__subrout_call((void*)__this, id);
}
var Aparser__do_statem1(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser365+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser366+ 2));
		return 0;
	}
	Aclass__finish_expr((void*)__this->_class);
	Aclass__finish_stm((void*)__this->_class);
	Aparser__eat((void*)__this);
	return 0;
}
var Aparser__expression(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	Aparser__push((void*)__this, 7);
	Aparser__push((void*)__this, 8);
	return 0;
}
var Aparser__expression1(struct Aparser*__this)
{

	if ((Aparser__op((void*)__this))!=0) {
		Aparser__push((void*)__this, 8);
		return 0;
	} else {
		Aparser__pop((void*)__this);
	}
	return 0;
}
var Aparser__op(struct Aparser*__this)
{

	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser367+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1034,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser368+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1035,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser369+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1036,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser370+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1037,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser371+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1038,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser372+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1032,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser373+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1033,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser374+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1026,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser375+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1027,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser376+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1028,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser377+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1029,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser378+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1030,__this->lookahead);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser379+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1031,__this->lookahead);
	} else {
		return (var)0;
	}
	Aparser__eat((void*)__this);
	return (var)1;
}
var Aparser__term(struct Aparser*__this)
{
	var id;

	Aparser__pop((void*)__this);
	if ((Aparser__match_id((void*)__this, (var)(__string_Aparser380+ 2)))!=0) {
		Aclass__expr_term((void*)__this->_class,25,__this->lookahead);
		Aparser__eat((void*)__this);
	} else if ((Aparser__match_id((void*)__this, (var)(__string_Aparser381+ 2)))!=0) {
		Aclass__expr_term((void*)__this->_class,26,__this->lookahead);
		Aparser__eat((void*)__this);
	} else if ((Atoken__get_type((void*)__this->lookahead))==(6)) {
		id=__this->lookahead;
		Aparser__eat((void*)__this);
		if ((Aparser__match_op((void*)__this, (var)(__string_Aparser382+ 2)))!=0) {
			Aclass__expr_open_index((void*)__this->_class,Atoken__get_data((void*)id),__this->lookahead);
			Aparser__eat((void*)__this);
			Aparser__push((void*)__this, 10);
			Aparser__push((void*)__this, 5);
		} else if ((Aparser__subrout_call((void*)__this, id))!=0) {
		} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser383+ 2)))!=0) {
			Aparser__eat((void*)__this);
			if ((Atoken__get_type((void*)__this->lookahead))!=(6)) {
				Aparser__error((void*)__this, (var)(__string_Aparser384+ 2));
				return 0;
			}
			Aclass__expr_constant((void*)__this->_class,Atoken__get_data((void*)id),Atoken__get_data((void*)__this->lookahead),__this->lookahead);
			Aparser__eat((void*)__this);
		} else {
			Aclass__expr_var((void*)__this->_class,Atoken__get_data((void*)id),__this->lookahead);
		}
	} else if ((Atoken__get_type((void*)__this->lookahead))==(2)) {
		Aclass__expr_char_const((void*)__this->_class,Atoken__get_data((void*)__this->lookahead),__this->lookahead);
		Aparser__eat((void*)__this);
	} else if ((Atoken__get_type((void*)__this->lookahead))==(1)) {
		Aclass__expr_str_const((void*)__this->_class,Atoken__get_data((void*)__this->lookahead),__this->lookahead);
		Aparser__eat((void*)__this);
	} else if ((Atoken__get_type((void*)__this->lookahead))==(5)) {
		Aclass__expr_int_const((void*)__this->_class,Atoken__get_data((void*)__this->lookahead),__this->lookahead);
		Aparser__eat((void*)__this);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser385+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1042,__this->lookahead);
		Aparser__eat((void*)__this);
		Aparser__push((void*)__this, 8);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser386+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1041,__this->lookahead);
		Aparser__eat((void*)__this);
		Aparser__push((void*)__this, 8);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser387+ 2)))!=0) {
		Aclass__expr_op((void*)__this->_class,1039,__this->lookahead);
		Aparser__eat((void*)__this);
		Aparser__push((void*)__this, 8);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser388+ 2)))!=0) {
		Aclass__expr_open_par((void*)__this->_class);
		Aparser__eat((void*)__this);
		Aparser__push((void*)__this, 9);
		Aparser__push((void*)__this, 5);
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser389+ 2)))!=0) {
		Aparser__lambda_body((void*)__this);
	} else {
		Aparser__error((void*)__this, (var)(__string_Aparser390+ 2));
		return 0;
	}
	return 0;
}
var Aparser__subrout_call(struct Aparser*__this, var id)
{
	var id2;

	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser391+ 2)))!=0) {
		Aparser__sub_call((void*)__this, 0,id);
		return (var)1;
	} else if ((Aparser__match_op((void*)__this, (var)(__string_Aparser392+ 2)))!=0) {
		id2=id;
		Aparser__eat((void*)__this);
		id=__this->lookahead;
		Aparser__eat((void*)__this);
		Aparser__sub_call((void*)__this, id2,id);
		return (var)1;
	}
	return (var)0;
}
var Aparser__term1(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser393+ 2)))!=0) {
		Aclass__expr_close_par((void*)__this->_class);
		Aparser__eat((void*)__this);
		return 0;
	}
	Aparser__error((void*)__this, (var)(__string_Aparser394+ 2));
	return 0;
}
var Aparser__term2(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser395+ 2)))!=0) {
		Aclass__expr_close_index((void*)__this->_class);
		Aparser__eat((void*)__this);
		return 0;
	}
	Aparser__error((void*)__this, (var)(__string_Aparser396+ 2));
	return 0;
}
var Aparser__sub_call(struct Aparser*__this, var class_, var id)
{

	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser397+ 2)))==0) {
		Aparser__error((void*)__this, (var)(__string_Aparser398+ 2));
		return 0;
	}
	Aparser__eat((void*)__this);
	if (class_!=0) {
		Aclass__expr_begin_sub_call((void*)__this->_class,Atoken__get_data((void*)class_),Atoken__get_data((void*)id),__this->lookahead);
	} else {
		Aclass__expr_begin_sub_call((void*)__this->_class,0,Atoken__get_data((void*)id),__this->lookahead);
	}
	Aparser__push((void*)__this, 13);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser399+ 2)))==0) {
		Aparser__push((void*)__this, 11);
		Aparser__push((void*)__this, 5);
		return 0;
	}
	Aclass__expr_finish_sub_call((void*)__this->_class);
	return 0;
}
var Aparser__sub_call1(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser400+ 2)))!=0) {
		Aclass__expr_finish_sub_call((void*)__this->_class);
		Aparser__eat((void*)__this);
		return 0;
	}
	Aparser__error((void*)__this, (var)(__string_Aparser401+ 2));
	return 0;
}
var Aparser__expr_list(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if (__this->status!=0) {
		__this->status=0;
		return 0;
	}
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser402+ 2)))!=0) {
		Aparser__eat((void*)__this);
		Aclass__expr_next_expr((void*)__this->_class,__this->lookahead);
		Aparser__push((void*)__this, 12);
		Aparser__push((void*)__this, 5);
	}
	return 0;
}
var Aparser__expr_list1(struct Aparser*__this)
{

	Aparser__pop((void*)__this);
	if (__this->status!=0) {
		return 0;
	}
	if ((Aparser__match_op((void*)__this, (var)(__string_Aparser403+ 2)))!=0) {
		Aclass__expr_next_expr((void*)__this->_class,__this->lookahead);
		Aparser__eat((void*)__this);
		Aparser__push((void*)__this, 12);
		Aparser__push((void*)__this, 5);
	}
	return 0;
}
var Aparser__eat(struct Aparser*__this)
{

	Alexer__shift((void*)__this->lex);
	if ((Alexer__empty((void*)__this->lex))!=0) {
		__this->lookstring=0;
		__this->lookahead=0;
		return 0;
	}
	__this->lookahead=Alexer__get_at((void*)__this->lex,0);
	if (__this->lookahead==0) {
		__this->lookstring=0;
		return 0;
	}
	while ((((Atoken__get_type((void*)__this->lookahead))==(9)))||(((Atoken__get_type((void*)__this->lookahead))==(3)))) {
		Alexer__shift((void*)__this->lex);
		if ((Alexer__empty((void*)__this->lex))!=0) {
			__this->lookstring=0;
			__this->lookahead=0;
			return 0;
		}
		__this->lookahead=Alexer__get_at((void*)__this->lex,0);
	}
	__this->lookstring=Atoken__get_data((void*)__this->lookahead);
	return 0;
}
var Aparser__match_id(struct Aparser*__this, var id)
{

	if ((Atoken__get_type((void*)__this->lookahead))!=(6)) {
		return (var)0;
	}
	if (id==0) {
		return (var)1;
	}
	if ((string__compare((void*)__this->lookstring,id))==0) {
		return (var)1;
	}
	return (var)0;
}
var Aparser__match_op(struct Aparser*__this, var id)
{

	if ((Atoken__get_type((void*)__this->lookahead))!=(7)) {
		return (var)0;
	}
	if ((string__compare((void*)__this->lookstring,id))==0) {
		return (var)1;
	}
	return (var)0;
}
var Aparser__match_newline(struct Aparser*__this)
{

	if ((Atoken__get_type((void*)__this->lookahead))==(9)) {
		return (var)1;
	}
	return (var)0;
}
var Aparser__match_str(struct Aparser*__this, var id)
{
	var t;

	t=Atoken__get_type((void*)__this->lookahead);
	if (((t!=(1)))&&((t!=(2)))) {
		return (var)0;
	}
	if (((id==0))||(((string__compare((void*)__this->lookstring,id))==0))) {
		return (var)1;
	}
	return (var)0;
}
var Aparser__state_machine(struct Aparser*__this)
{
	var state;

	state=buffer__get_last((void*)__this->_states);
	if (__this->debug>0) {
		console__log(__this->lookstring);
		console__log_int(state);
	}
	
	switch (state) {
	case 1: 
		Aparser__root((void*)__this);
		break;
	case 2: 
		Aparser__class_dec((void*)__this);
		break;
	case 3: 
		Aparser__statement((void*)__this);
		break;
	case 4: 
		Aparser__statements((void*)__this);
		break;
	case 5: 
		Aparser__expression((void*)__this);
		break;
	case 7: 
		Aparser__expression1((void*)__this);
		break;
	case 8: 
		Aparser__term((void*)__this);
		break;
	case 9: 
		Aparser__term1((void*)__this);
		break;
	case 10: 
		Aparser__term2((void*)__this);
		break;
	case 6: 
		Aparser__return_statem1((void*)__this);
		break;
	case 11: 
		Aparser__expr_list((void*)__this);
		break;
	case 12: 
		Aparser__expr_list1((void*)__this);
		break;
	case 13: 
		Aparser__sub_call1((void*)__this);
		break;
	case 14: 
		Aparser__let_statem1((void*)__this);
		break;
	case 15: 
		Aparser__let_statem2((void*)__this);
		break;
	case 16: 
		Aparser__do_statem1((void*)__this);
		break;
	case 17: 
		Aparser__while_statem1((void*)__this);
		break;
	case 18: 
		Aparser__while_statem2((void*)__this);
		break;
	case 27: 
		Aparser__lambda_body1((void*)__this);
		break;
	case 19: 
		Aparser__subrout_body1((void*)__this);
		break;
	case 20: 
		Aparser__subroutine_dec((void*)__this);
		break;
	case 21: 
		Aparser__class_dec1((void*)__this);
		break;
	case 22: 
		Aparser__if_statem1((void*)__this);
		break;
	case 24: 
		Aparser__else_statem((void*)__this);
		break;
	case 25: 
		Aparser__else_statem1((void*)__this);
		break;
	default:
		Aparser__error((void*)__this, (var)(__string_Aparser404+ 2));
		Alexer__shift((void*)__this->lex);
		__this->status=-(1);
		break;
	} 
	return (var)1;
}
/* class Astatement */
struct Astatement {
	var type;
	var expr;
	var statements;
	var else_stms;
	var parent;
	var depth;
};
var Astatement___new(struct Astatement*__this, var type1, var parent1, var depth1, var __parent)
{

	__this->type=type1;
	__this->parent=parent1;
	__this->depth=depth1;
	__this->expr=0;
	__this->statements=0;
	__this->else_stms=0;
	return (var)(var)__this;
}
var Astatement__new(var type1, var parent1, var depth1, var __parent)
{
	NEW(Astatement);
	return Astatement___new((void*)__this, type1, parent1, depth1, __parent);
}
var Astatement___V_dispose(struct Astatement*__this)
{

	std__delete(__this->expr);
	std__delete(__this->statements);
	std__delete(__this->else_stms);
	std__free((var)__this);
	return 0;
}
var Astatement__get_type(struct Astatement*__this)
{

	return (var)__this->type;
}
var Astatement__set_type(struct Astatement*__this, var type1)
{

	__this->type=type1;
	return 0;
}
var Astatement__get_depth(struct Astatement*__this)
{

	return (var)__this->depth;
}
var Astatement__get_parent(struct Astatement*__this)
{

	return (var)__this->parent;
}
var Astatement__get_statements(struct Astatement*__this)
{

	return (var)__this->statements;
}
var Astatement__get_else(struct Astatement*__this)
{

	return (var)__this->else_stms;
}
var Astatement__get_expression(struct Astatement*__this)
{

	return (var)__this->expr;
}
var Astatement__add_else(struct Astatement*__this, var type1)
{
	var st;

	if (__this->else_stms!=0) {
		console__log((var)(__string_Astatement405+ 2));
		std__exit(-(1));
	}
	__this->else_stms=buffer__new(2,1,(var)__this);
	st=Astatement__new(type1,__this->parent,__this->depth,(var)__this);
	Astatement__add_statement((void*)__this, st);
	return 0;
}
var Astatement__add_statement(struct Astatement*__this, var statement1)
{

	if (__this->statements==0) {
		__this->statements=buffer__new(2,1,(var)__this);
	}
	if (__this->else_stms!=0) {
		buffer__push((void*)__this->else_stms,statement1);
	} else {
		buffer__push((void*)__this->statements,statement1);
	}
	return 0;
}
var Astatement__set_expression(struct Astatement*__this, var expr1)
{
	var ex1;

	std__delete(__this->expr);
	__this->expr=0;
	ex1=std__move(expr1);
	
	switch (__this->type) {
	case 18: 
		__this->expr=ex1;
		break;
	case 24: 
		__this->expr=ex1;
		break;
	case 22: 
		__this->expr=ex1;
		break;
	case 21: 
		__this->expr=ex1;
		break;
	case 19: 
		__this->expr=ex1;
		break;
	case 20: 
		__this->expr=ex1;
		break;
	default:
		console__log((var)(__string_Astatement406+ 2));
		std__exit(-(1));
		break;
	} 
	return 0;
}
/* class Atoken */
struct Atoken {
	var type;
	var data;
	var line;
	var file_;
};
var Atoken___new(struct Atoken*__this, var type1, var data1, var line1, var file1, var __parent)
{

	__this->type=type1;
	__this->data=data1;
	__this->line=line1;
	__this->file_=file1;
	return (var)(var)__this;
}
var Atoken__new(var type1, var data1, var line1, var file1, var __parent)
{
	NEW(Atoken);
	return Atoken___new((void*)__this, type1, data1, line1, file1, __parent);
}
var Atoken___V_dispose(struct Atoken*__this)
{

	std__delete(__this->data);
	__this->data=0;
	std__free((var)__this);
	return 0;
}
var Atoken__copy(struct Atoken*__this)
{
	var t;
	var d;

	if (__this->data!=0) {
		d=string__to_string((void*)__this->data);
	} else {
		d=0;
	}
	t=Atoken__new(__this->type,d,__this->line,__this->file_,(var)__this);
	Atoken__take((void*)t);
	return (var)t;
}
var Atoken__take(struct Atoken*__this)
{

	std__move(__this->data);
	return 0;
}
var Atoken__get(struct Atoken*__this)
{

	return (var)(var)__this;
}
var Atoken__get_data(struct Atoken*__this)
{

	return (var)__this->data;
}
var Atoken__get_type(struct Atoken*__this)
{

	return (var)__this->type;
}
var Atoken__get_line(struct Atoken*__this)
{

	return (var)__this->line;
}
var Atoken__get_file(struct Atoken*__this)
{

	return (var)__this->file_;
}
/* class Avirtual */
struct Avirtual {
	var _class;
	var _memb;
	var next;
};
var Avirtual___new(struct Avirtual*__this, var memb1, var class1, var __parent)
{

	__this->_class=std__move(string__to_string((void*)class1));
	__this->_memb=std__move(Amember__copy((void*)memb1));
	__this->next=0;
	return (var)(var)__this;
}
var Avirtual__new(var memb1, var class1, var __parent)
{
	NEW(Avirtual);
	return Avirtual___new((void*)__this, memb1, class1, __parent);
}
var Avirtual___V_dispose(struct Avirtual*__this)
{

	std__delayed_delete((var)__this);
	return 0;
}
var Avirtual___V_delayed_dispose(struct Avirtual*__this)
{

	std__delete(__this->_class);
	std__delete(__this->_memb);
	std__delete(__this->next);
	std__free((var)__this);
	return 0;
}
var Avirtual__set_next(struct Avirtual*__this, var n)
{

	__this->next=std__move(n);
	return 0;
}
var Avirtual__get_next(struct Avirtual*__this)
{

	return (var)__this->next;
}
var Avirtual__get_class_name(struct Avirtual*__this)
{

	return (var)__this->_class;
}
var Avirtual__get_member(struct Avirtual*__this)
{

	return (var)__this->_memb;
}
var Avirtual__get_member_name(struct Avirtual*__this)
{

	return (var)Amember__get_name_string((void*)__this->_memb);
}
/* class main */
struct main {
	var str;
	var tmp;
	var args;
	var fd;
	var n;
	var i;
	var end;
	var lex;
	var par;
	var emi;
	var head;
	var body;
	var to;
	var l;
	var pf_tmp;
	var pf_out;
	var pf_fd;
	var pf_off;
	var pf_f;
	var pf_cb;
	var pf_cb_this;
};
var main__copy_block(struct main*__this)
{

	file__read((void*)__this->pf_fd,__this->pf_f,__this->pf_off,4096,0,(var)__this);
	return 0;
}
var main__0(struct main*__this, var status, var data, var type)
{
	var d;
	var n;
	var i;
	var l;

	if ((status==200)&&(type==1)) {
		d=data;
		n=bytes__get_size((void*)d);
		i=0;
		l=string__length((void*)__this->pf_out);
		string__set_size((void*)__this->pf_out,(l+n)+1);
		while (i<n) {
			string__set_at((void*)__this->pf_out,i+l,bytes__get_at((void*)d,i));
			i=i+1;
		}
		string__set_at((void*)__this->pf_out,i+l,0);
		__this->pf_off=__this->pf_off+(4096);
		main__copy_block((void*)__this);
	} else {
		std__delete(__this->pf_fd);
		worker__new(__this->pf_cb_this,__this->pf_cb,200,0,0,(var)__this);
	}
	return (var)0;
}
var main__copyto(struct main*__this, var f, var output, var cb, var this_cb)
{

	console__log_str((var)(__string_main407+ 2));
	console__log(f);
	__this->pf_out=output;
	__this->pf_f=f;
	__this->pf_off=0;
	__this->pf_fd=file__new((var)(__string_main408+ 2),(var)__this);
	__this->pf_cb=cb;
	__this->pf_cb_this=std__this(cb);
	main__copy_block((void*)__this);
	return 0;
}
var main__process_file_end(struct main*__this, var stat)
{

	std__delete(__this->pf_fd);
	Alexer__finish((void*)__this->lex);
	std__delete(__this->pf_tmp);
	worker__new(__this->pf_cb_this,__this->pf_cb,stat,0,0,(var)__this);
	return 0;
}
var main__process_file_block(struct main*__this, var n, var d)
{
	var i;

	i=0;
	while (i<n) {
		string__add_char((void*)__this->pf_tmp,bytes__get_at((void*)d,i));
		i=i+1;
	}
	__this->pf_off=__this->pf_off+(4096);
	Alexer__add((void*)__this->lex,__this->pf_tmp);
	string__set((void*)__this->pf_tmp,(var)(__string_main409+ 2));
	file__read((void*)__this->pf_fd,__this->pf_f,__this->pf_off,4096,1,(var)__this);
	return 0;
}
var main__1(struct main*__this, var status, var data, var type)
{
	var d;

	if ((status==200)&&(type==1)) {
		d=data;
		main__process_file_block((void*)__this, bytes__get_size((void*)d),d);
	} else {
		main__process_file_end((void*)__this, 200);
	}
	return (var)0;
}
var main__process_file(struct main*__this, var f, var cb, var this_cb)
{

	__this->pf_f=f;
	__this->pf_off=0;
	__this->pf_tmp=string__new(10000,(var)__this);
	__this->pf_fd=file__new((var)(__string_main410+ 2),(var)__this);
	__this->pf_cb=cb;
	__this->pf_cb_this=std__this(cb);
	console__log_str((var)(__string_main411+ 2));
	console__log(__this->pf_f);
	Alexer__begin((void*)__this->lex,__this->pf_f);
	file__read((void*)__this->pf_fd,__this->pf_f,0,4096,2,(var)__this);
	return 0;
}
var main__2(struct main*__this, var status, var data, var type)
{
	var d;

	if ((status==200)&&(type==1)) {
		d=data;
		main__process_file_block((void*)__this, bytes__get_size((void*)d),d);
	} else {
		main__process_file_end((void*)__this, 400);
	}
	return (var)0;
}
var main___new(struct main*__this, var __parent)
{

	return (var)(var)__this;
}
var main__new(var __parent)
{
	NEW(main);
	return main___new((void*)__this, __parent);
}
var main___V_dispose(struct main*__this)
{

	std__delete(__this->tmp);
	std__free((var)__this);
	return 0;
}
var main__main()
{
	var m;
	FAKETHIS();

	m=main__new((var)__this);
	main__run((void*)m);
	std__loop();
	std__delete(m);
	return 0;
}
var main__run(struct main*__this)
{

	console__log(main__Chello);
	__this->args=std__get_args();
	__this->n=std__get_argc();
	if (__this->n<3) {
		console__log((var)(__string_main412+ 2));
		std__exit(-(1));
	}
	__this->head=string__new(2048,(var)__this);
	__this->body=string__new(2048,(var)__this);
	__this->str=((var*)__this->args)[1];
	__this->to=string__new(20,(var)__this);
	string__add((void*)__this->to,__this->str);
	string__add((void*)__this->to,(var)(__string_main413+ 2));
	__this->fd=file__new((var)(__string_main414+ 2),(var)__this);
	__this->tmp=string__new(100,(var)__this);
	__this->lex=Alexer__new((var)__this);
	__this->par=Aparser__new((var)__this);
	__this->emi=Aemmitc__new(0,(var)__this);
	__this->i=2;
	main__next_file((void*)__this);
	return 0;
}
var main__next_file(struct main*__this)
{

	if (__this->i<__this->n) {
		string__set((void*)__this->tmp,((var*)__this->args)[__this->i]);
		__this->i=__this->i+1;
		__this->end=string__length((void*)__this->tmp);
		if ((string__indexof((void*)__this->tmp,0,(var)(__string_main415+ 2)))==((__this->end-5))) {
			main__process_file((void*)__this, __this->tmp,3,(var)__this);
		} else if ((string__indexof((void*)__this->tmp,0,(var)(__string_main416+ 2)))==((__this->end-2))) {
			main__copyto((void*)__this, __this->tmp,__this->head,4,(var)__this);
		} else if ((string__indexof((void*)__this->tmp,0,(var)(__string_main417+ 2)))==((__this->end-2))) {
			main__copyto((void*)__this, __this->tmp,__this->body,5,(var)__this);
		} else {
			main__finish((void*)__this);
		}
	} else {
		main__finish((void*)__this);
	}
	return 0;
}
var main__3(struct main*__this, var status, var data, var type)
{

	Aparser__parse((void*)__this->par,__this->lex);
	Aemmiter__emmit((void*)__this->emi,__this->par);
	Aparser__release((void*)__this->par);
	main__next_file((void*)__this);
	return (var)0;
}
var main__4(struct main*__this, var status, var data, var type)
{

	main__next_file((void*)__this);
	return (var)0;
}
var main__5(struct main*__this, var status, var data, var type)
{

	main__next_file((void*)__this);
	return (var)0;
}
var main__finish(struct main*__this)
{

	__this->i=0;
	__this->str=0;
	__this->l=0;
	Aemmiter__gen_virtuals((void*)__this->emi);
	file__unlink((void*)__this->fd,__this->to,6,(var)__this);
	return 0;
}
var main__6(struct main*__this, var status, var data, var type)
{

	main__finish1((void*)__this);
	return (var)0;
}
var main__finish1(struct main*__this)
{

	__this->i=__this->i+__this->l;
	__this->l=0;
	while (__this->l<=0) {
		if (__this->str==0) {
			__this->str=__this->head;
		} else if (__this->str==__this->head) {
			__this->str=Aemmiter__get_head((void*)__this->emi);
		} else if (__this->str==(Aemmiter__get_head((void*)__this->emi))) {
			__this->str=Aemmiter__get_mid((void*)__this->emi);
		} else if (__this->str==(Aemmiter__get_mid((void*)__this->emi))) {
			__this->str=__this->body;
		} else if (__this->str==__this->body) {
			__this->str=Aemmiter__get_data((void*)__this->emi);
		} else {
			console__log_str((var)(__string_main418+ 2));
			console__log(__this->to);
			std__delete(__this->to);
			std__delete(__this->fd);
			std__delete(__this->lex);
			std__delete(__this->par);
			std__delete(__this->emi);
			std__delete(__this->head);
			std__delete(__this->body);
			return 0;
		}
		__this->l=string__length((void*)__this->str);
	}
	console__log_int(__this->l);
	console__log((var)(__string_main419+ 2));
	file__write((void*)__this->fd,__this->to,__this->str,0,__this->i,__this->l,7,(var)__this);
	return 0;
}
var main__7(struct main*__this, var status, var data, var type)
{

	if (status!=200) {
		console__log((var)(__string_main420+ 2));
		std__exit(-(1));
	}
	main__finish1((void*)__this);
	return (var)0;
}
var main___V_lambda(var __this, var fcn, var status, var data, var type)
{	switch(fcn) {
	case 0:
		return main__0((void*)__this, status, data, type);
	case 1:
		return main__1((void*)__this, status, data, type);
	case 2:
		return main__2((void*)__this, status, data, type);
	case 3:
		return main__3((void*)__this, status, data, type);
	case 4:
		return main__4((void*)__this, status, data, type);
	case 5:
		return main__5((void*)__this, status, data, type);
	case 6:
		return main__6((void*)__this, status, data, type);
	case 7:
		return main__7((void*)__this, status, data, type);
	}
	return 0;
}
var virtual__expr_process(struct main*__this, var expr)
{
	var cid;
	cid = ((var*)__this)[-1];
	switch (cid) {
	case Aemmiter___DcidD:
		return Aemmiter___V_expr_process((struct Aemmiter*)__this, expr);
	case Aemmitc___DcidD:
		return Aemmitc___V_expr_process((struct Aemmitc*)__this, expr);
	default:
		break;
	}
	return 0;
}
var virtual__gen_virtuals(struct main*__this)
{
	var cid;
	cid = ((var*)__this)[-1];
	switch (cid) {
	case Aemmiter___DcidD:
		return Aemmiter___V_gen_virtuals((struct Aemmiter*)__this);
	case Aemmitc___DcidD:
		return Aemmitc___V_gen_virtuals((struct Aemmitc*)__this);
	default:
		break;
	}
	return 0;
}
var virtual__get_mid(struct main*__this)
{
	var cid;
	cid = ((var*)__this)[-1];
	switch (cid) {
	case Aemmiter___DcidD:
		return Aemmiter___V_get_mid((struct Aemmiter*)__this);
	case Aemmitc___DcidD:
		return Aemmitc___V_get_mid((struct Aemmitc*)__this);
	default:
		break;
	}
	return 0;
}
var virtual__get_data(struct main*__this)
{
	var cid;
	cid = ((var*)__this)[-1];
	switch (cid) {
	case Aemmiter___DcidD:
		return Aemmiter___V_get_data((struct Aemmiter*)__this);
	case Aemmitc___DcidD:
		return Aemmitc___V_get_data((struct Aemmitc*)__this);
	default:
		break;
	}
	return 0;
}
var virtual__get_head(struct main*__this)
{
	var cid;
	cid = ((var*)__this)[-1];
	switch (cid) {
	case Aemmiter___DcidD:
		return Aemmiter___V_get_head((struct Aemmiter*)__this);
	case Aemmitc___DcidD:
		return Aemmitc___V_get_head((struct Aemmitc*)__this);
	default:
		break;
	}
	return 0;
}
var virtual__emmit(struct main*__this, var par)
{
	var cid;
	cid = ((var*)__this)[-1];
	switch (cid) {
	case Aemmiter___DcidD:
		return Aemmiter___V_emmit((struct Aemmiter*)__this, par);
	case Aemmitc___DcidD:
		return Aemmitc___V_emmit((struct Aemmitc*)__this, par);
	default:
		break;
	}
	return 0;
}
var virtual__delayed_dispose(struct main*__this)
{
	var cid;
	cid = ((var*)__this)[-1];
	switch (cid) {
	case buffer___DcidD:
		return buffer___V_delayed_dispose((struct buffer*)__this);
	case Avirtual___DcidD:
		return Avirtual___V_delayed_dispose((struct Avirtual*)__this);
	case Aexpr___DcidD:
		return Aexpr___V_delayed_dispose((struct Aexpr*)__this);
	case Aclass___DcidD:
		return Aclass___V_delayed_dispose((struct Aclass*)__this);
	default:
		break;
	}
	return 0;
}
var virtual__dispose(struct main*__this)
{
	var cid;
	cid = ((var*)__this)[-1];
	switch (cid) {
	case array___DcidD:
		return array___V_dispose((struct array*)__this);
	case main___DcidD:
		return main___V_dispose((struct main*)__this);
	case Avirtual___DcidD:
		return Avirtual___V_dispose((struct Avirtual*)__this);
	case Atoken___DcidD:
		return Atoken___V_dispose((struct Atoken*)__this);
	case Astatement___DcidD:
		return Astatement___V_dispose((struct Astatement*)__this);
	case Aparser___DcidD:
		return Aparser___V_dispose((struct Aparser*)__this);
	case Amember___DcidD:
		return Amember___V_dispose((struct Amember*)__this);
	case Aexpr___DcidD:
		return Aexpr___V_dispose((struct Aexpr*)__this);
	case Acbody___DcidD:
		return Acbody___V_dispose((struct Acbody*)__this);
	case Aemmitc___DcidD:
		return Aemmitc___V_dispose((struct Aemmitc*)__this);
	case Aemmiter___DcidD:
		return Aemmiter___V_dispose((struct Aemmiter*)__this);
	case Alexer___DcidD:
		return Alexer___V_dispose((struct Alexer*)__this);
	case Aclass___DcidD:
		return Aclass___V_dispose((struct Aclass*)__this);
	case string___DcidD:
		return string___V_dispose((struct string*)__this);
	case worker___DcidD:
		return worker___V_dispose((struct worker*)__this);
	case object___DcidD:
		return object___V_dispose((struct object*)__this);
	case hash___DcidD:
		return hash___V_dispose((struct hash*)__this);
	case file___DcidD:
		return file___V_dispose((struct file*)__this);
	case bytes___DcidD:
		return bytes___V_dispose((struct bytes*)__this);
	case buffer___DcidD:
		return buffer___V_dispose((struct buffer*)__this);
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
	case main___DcidD:
		return main___V_lambda(__this, fcn, status, data, type);
	}
	return 0;
}
