typedef long var;
#include "../src/std.h"
struct button {
	var event_;
	var x_;
	var y_;
	var w_;
	var h_;
	var state_;
	var win_;
	var data_;
	var damage_;
	var cb_;
	var cb_data_;
};
var button__init();
var button__start_btn_create();
var button__button__event();
var button__is_inside();
var button__set_callback();
var button__callback();
var button__event();
var button__start_btn_draw();
struct menu {
	var event_;
	var x_;
	var y_;
	var w_;
	var h_;
	var state_;
	var win_;
	var data_;
	var damage_;
	var cb_;
	var cb_data_;
	var item_;
	var sub_;
	var cmd_;
};
var menu__init();
var menu__init_sub();
var menu__nb_item();
var menu__menu_create();
var menu__menu__event();
var menu__is_inside();
var menu__set_callback();
var menu__callback();
var menu__hide();
var menu__shown();
var menu__show_sub();
var menu__get_cmd();
var menu__get_item();
var menu__show();
var menu__close();
var menu__event();
var menu__draw();
struct textarea {
	var event_;
	var x_;
	var y_;
	var w_;
	var h_;
	var state_;
	var win_;
	var data_;
	var damage_;
	var cb_;
	var cb_data_;
};
var textarea__init();
var textarea__create_full();
var textarea__textarea__event();
var textarea__is_inside();
var textarea__set_callback();
var textarea__callback();
var textarea__event();
var textarea__start_btn_draw();
struct widget {
	var event_;
};
var widget__event();
#define MAX_NUM 20
#define EVENT_MOUSE 1
#define EVENT_KEYBOARD 2
#define EVENT_WINDOW 3
#define EVENT_DRAW 4
#define EVENT_UNFOCUS 5
#define EVENT_FOCUS 6
#define EVENT_TEXT 7
struct display {
	var term_;
	var width_;
	var height_;
	var event_;
	var cur_x_;
	var cur_y_;
	var mouse_x_;
	var mouse_y_;
	var mouse_btn_;
	var n_;
	var nb_n_;
	var state_;
	var widgets_;
	var nb_widgets_;
	var alloc_widgets_;
	var focus_;
	var focus_old_;
};
var display__flush();
var display__print();
var display__print10();
var display__printb();
var display__printw();
var display__add();
var display__moveto();
var display__color();
var display__bold();
var display__regular();
var display__nounderline();
var display__underline();
var display__normal();
var display__clear();
var display__query_pos();
var display__init();
var display__read_num();
var display__skip();
var display__set_focus();
var display__mouse_hide();
var display__mouse_show();
var display__arrow_event();
var display__mouse_event();
var display__csi();
var display__process();
var display__width();
var display__height();
var display__event();
var display__dispatch();
var display__events();
struct edit {
	var menu_;
	var text_;
	var command_;
};
var edit__start_cb();
var edit__menu_cb();
var edit__execute();
var edit__get_menu();
var edit__show_sub_menu();
var edit__show_menu();
var edit__main();
var startup();
var (*wrapper(struct trip *st, char *clas, char *id, int *argc))() {
		if (!id_cmp("startup", id)) {
			*argc = 2;
			return &startup;
		}
	if (!id_cmp("button", clas)) {
		if (!id_cmp("init", id)) {
			*argc = 9;
			return &button__init;
		}
		if (!id_cmp("start_btn_create", id)) {
			*argc = 4;
			return &button__start_btn_create;
		}
		if (!id_cmp("button__event", id)) {
			*argc = 6;
			return &button__button__event;
		}
		if (!id_cmp("is_inside", id)) {
			*argc = 3;
			return &button__is_inside;
		}
		if (!id_cmp("set_callback", id)) {
			*argc = 3;
			return &button__set_callback;
		}
		if (!id_cmp("callback", id)) {
			*argc = 2;
			return &button__callback;
		}
		if (!id_cmp("event", id)) {
			*argc = 5;
			return &button__event;
		}
		if (!id_cmp("start_btn_draw", id)) {
			*argc = 4;
			return &button__start_btn_draw;
		}
	}
	if (!id_cmp("menu", clas)) {
		if (!id_cmp("init", id)) {
			*argc = 9;
			return &menu__init;
		}
		if (!id_cmp("init_sub", id)) {
			*argc = 3;
			return &menu__init_sub;
		}
		if (!id_cmp("nb_item", id)) {
			*argc = 2;
			return &menu__nb_item;
		}
		if (!id_cmp("menu_create", id)) {
			*argc = 5;
			return &menu__menu_create;
		}
		if (!id_cmp("menu__event", id)) {
			*argc = 6;
			return &menu__menu__event;
		}
		if (!id_cmp("is_inside", id)) {
			*argc = 3;
			return &menu__is_inside;
		}
		if (!id_cmp("set_callback", id)) {
			*argc = 3;
			return &menu__set_callback;
		}
		if (!id_cmp("callback", id)) {
			*argc = 2;
			return &menu__callback;
		}
		if (!id_cmp("hide", id)) {
			*argc = 1;
			return &menu__hide;
		}
		if (!id_cmp("shown", id)) {
			*argc = 1;
			return &menu__shown;
		}
		if (!id_cmp("show_sub", id)) {
			*argc = 1;
			return &menu__show_sub;
		}
		if (!id_cmp("get_cmd", id)) {
			*argc = 2;
			return &menu__get_cmd;
		}
		if (!id_cmp("get_item", id)) {
			*argc = 3;
			return &menu__get_item;
		}
		if (!id_cmp("show", id)) {
			*argc = 3;
			return &menu__show;
		}
		if (!id_cmp("close", id)) {
			*argc = 1;
			return &menu__close;
		}
		if (!id_cmp("event", id)) {
			*argc = 5;
			return &menu__event;
		}
		if (!id_cmp("draw", id)) {
			*argc = 7;
			return &menu__draw;
		}
	}
	if (!id_cmp("textarea", clas)) {
		if (!id_cmp("init", id)) {
			*argc = 9;
			return &textarea__init;
		}
		if (!id_cmp("create_full", id)) {
			*argc = 2;
			return &textarea__create_full;
		}
		if (!id_cmp("textarea__event", id)) {
			*argc = 6;
			return &textarea__textarea__event;
		}
		if (!id_cmp("is_inside", id)) {
			*argc = 3;
			return &textarea__is_inside;
		}
		if (!id_cmp("set_callback", id)) {
			*argc = 3;
			return &textarea__set_callback;
		}
		if (!id_cmp("callback", id)) {
			*argc = 2;
			return &textarea__callback;
		}
		if (!id_cmp("event", id)) {
			*argc = 5;
			return &textarea__event;
		}
		if (!id_cmp("start_btn_draw", id)) {
			*argc = 4;
			return &textarea__start_btn_draw;
		}
	}
	if (!id_cmp("widget", clas)) {
		if (!id_cmp("event", id)) {
			*argc = 5;
			return &widget__event;
		}
	}
	if (!id_cmp("display", clas)) {
		if (!id_cmp("flush", id)) {
			*argc = 1;
			return &display__flush;
		}
		if (!id_cmp("print", id)) {
			*argc = 2;
			return &display__print;
		}
		if (!id_cmp("print10", id)) {
			*argc = 2;
			return &display__print10;
		}
		if (!id_cmp("printb", id)) {
			*argc = 3;
			return &display__printb;
		}
		if (!id_cmp("printw", id)) {
			*argc = 4;
			return &display__printw;
		}
		if (!id_cmp("add", id)) {
			*argc = 2;
			return &display__add;
		}
		if (!id_cmp("moveto", id)) {
			*argc = 3;
			return &display__moveto;
		}
		if (!id_cmp("color", id)) {
			*argc = 3;
			return &display__color;
		}
		if (!id_cmp("bold", id)) {
			*argc = 1;
			return &display__bold;
		}
		if (!id_cmp("regular", id)) {
			*argc = 1;
			return &display__regular;
		}
		if (!id_cmp("nounderline", id)) {
			*argc = 1;
			return &display__nounderline;
		}
		if (!id_cmp("underline", id)) {
			*argc = 1;
			return &display__underline;
		}
		if (!id_cmp("normal", id)) {
			*argc = 1;
			return &display__normal;
		}
		if (!id_cmp("clear", id)) {
			*argc = 1;
			return &display__clear;
		}
		if (!id_cmp("query_pos", id)) {
			*argc = 1;
			return &display__query_pos;
		}
		if (!id_cmp("init", id)) {
			*argc = 1;
			return &display__init;
		}
		if (!id_cmp("read_num", id)) {
			*argc = 2;
			return &display__read_num;
		}
		if (!id_cmp("skip", id)) {
			*argc = 2;
			return &display__skip;
		}
		if (!id_cmp("set_focus", id)) {
			*argc = 2;
			return &display__set_focus;
		}
		if (!id_cmp("mouse_hide", id)) {
			*argc = 1;
			return &display__mouse_hide;
		}
		if (!id_cmp("mouse_show", id)) {
			*argc = 1;
			return &display__mouse_show;
		}
		if (!id_cmp("arrow_event", id)) {
			*argc = 2;
			return &display__arrow_event;
		}
		if (!id_cmp("mouse_event", id)) {
			*argc = 2;
			return &display__mouse_event;
		}
		if (!id_cmp("csi", id)) {
			*argc = 2;
			return &display__csi;
		}
		if (!id_cmp("process", id)) {
			*argc = 2;
			return &display__process;
		}
		if (!id_cmp("width", id)) {
			*argc = 1;
			return &display__width;
		}
		if (!id_cmp("height", id)) {
			*argc = 1;
			return &display__height;
		}
		if (!id_cmp("event", id)) {
			*argc = 4;
			return &display__event;
		}
		if (!id_cmp("dispatch", id)) {
			*argc = 5;
			return &display__dispatch;
		}
		if (!id_cmp("events", id)) {
			*argc = 1;
			return &display__events;
		}
	}
	if (!id_cmp("edit", clas)) {
		if (!id_cmp("start_cb", id)) {
			*argc = 3;
			return &edit__start_cb;
		}
		if (!id_cmp("menu_cb", id)) {
			*argc = 5;
			return &edit__menu_cb;
		}
		if (!id_cmp("execute", id)) {
			*argc = 2;
			return &edit__execute;
		}
		if (!id_cmp("get_menu", id)) {
			*argc = 2;
			return &edit__get_menu;
		}
		if (!id_cmp("show_sub_menu", id)) {
			*argc = 4;
			return &edit__show_sub_menu;
		}
		if (!id_cmp("show_menu", id)) {
			*argc = 3;
			return &edit__show_menu;
		}
		if (!id_cmp("main", id)) {
			*argc = 3;
			return &edit__main;
		}
	}
	return (void*)0;
}
var startup(var argc, var argv)
{
	struct edit *e = (void*)0;
(*((var*)&e)) = (var)malloc(sizeof(struct edit));
((var(*)())edit__main)((var)e, (var)argc, (var)argv);
return 0;
}
var button__init(var self, var me, var dpy, var x, var y, var w, var h, var e, var dat)
{
	struct button *__self = (void*)self;(void)__self;
__self->x_ = x;
__self->y_ = y;
__self->w_ = w;
__self->h_ = h;
__self->state_ = 0;
__self->event_ = e;
__self->win_ = dpy;
__self->data_ = dat;
__self->damage_ = 1;
__self->cb_ = 0;
__self->cb_data_ = 0;
	return 0;
}
var button__start_btn_create(var self, var d, var cb, var cb_data)
{
	struct button *__self = (void*)self;(void)__self;
	var  f;
	struct button *g = (void*)0;
	struct display *dpy = (void*)0;
(*((var*)&dpy)) = d;
(*((var*)&g)) = (var)malloc(sizeof(struct button));
f = (var)button__button__event;
((var(*)())button__init)((var)g, (var)(*((var*)&g)), (var)(*((var*)&dpy)), (var)0, (var)(	((var(*)())display__height)((var)dpy)- 1), (var)3, (var)1, (var)f, (var)(var)"+");
((var(*)())button__set_callback)((var)g, (var)cb, (var)cb_data);
((var(*)())display__add)((var)dpy, (var)(*((var*)&g)));
return (*((var*)&g));
}
var button__button__event(var self, var me, var ev, var x, var y, var data)
{
	struct button *__self = (void*)self;(void)__self;
	struct button *s = (void*)0;
(*((var*)&s)) = me;
return 	((var(*)())button__event)((var)s, (var)ev, (var)x, (var)y, (var)data);
}
var button__is_inside(var self, var x, var y)
{
	struct button *__self = (void*)self;(void)__self;
{
	var if__cond = (x -  __self->x_) ;
	if ((if__cond < 0)) {
		return 0;
	}
}
{
	var if__cond = (y -  __self->y_) ;
	if ((if__cond < 0)) {
		return 0;
	}
}
{
	var if__cond = ((__self->x_ +  __self->w_) -  x) ;
	if ((if__cond <= 0)) {
		return 0;
	}
}
{
	var if__cond = ((__self->y_ +  __self->h_) -  y) ;
	if ((if__cond <= 0)) {
		return 0;
	}
}
return 1;
}
var button__set_callback(var self, var cb, var data)
{
	struct button *__self = (void*)self;(void)__self;
__self->cb_ = cb;
__self->cb_data_ = data;
	return 0;
}
var button__callback(var self, var v)
{
	struct button *__self = (void*)self;(void)__self;
	var  f;
f = __self->cb_;
{
	var if__cond = f ;
	if ((if__cond == 0)) {
		return 0;
	}
}
((var(*)())f)(((var)0), (var)__self->cb_data_, (var)v);
return 0;
}
var button__event(var self, var ev, var x, var y, var data)
{
	struct button *__self = (void*)self;(void)__self;
	struct display *dpy = (void*)0;
(*((var*)&dpy)) = __self->win_;
{
	var if__cond = ev ;
	if ((if__cond == 0)) {
	} else if ((if__cond == EVENT_MOUSE)) {
		{
			var if__cond = (data -  1000) ;
			if ((if__cond < 0)) {
				{
					var if__cond = data ;
					if ((if__cond == 0)) {
						{
							var if__cond = ((var(*)())button__is_inside)(self, (var)x, (var)y) ;
							if ((if__cond > 0)) {
								{
									var if__cond = __self->state_ ;
									if ((if__cond == 0)) {
										__self->state_ = 1;
										__self->damage_ = 1;
((var(*)())display__set_focus)((var)dpy, (var)self);
((var(*)())button__callback)(self, (var)1);
										return 1;
									}
								}
							}
						}
					} else if ((if__cond != 0)) {
						{
							var if__cond = (data -  35) ;
							if ((if__cond == 0)) {
								{
									var if__cond = __self->state_ ;
									if ((if__cond != 0)) {
										__self->state_ = 0;
										__self->damage_ = 1;
									}
								}
							}
						}
					}
				}
			} else if ((if__cond >= 0)) {
				__self->state_ = 0 ;
				__self->damage_ = 1;
			}
		}
	} else if ((if__cond == EVENT_KEYBOARD)) {
	} else if ((if__cond == EVENT_WINDOW)) {
		__self->damage_ = 1;
	} else if ((if__cond == EVENT_DRAW)) {
		{
			var if__cond = __self->damage_ ;
			if ((if__cond != 0)) {
((var(*)())button__start_btn_draw)(self, (var)__self->x_, (var)__self->y_, (var)__self->data_);
			}
		}
		__self->damage_ = 0;
	}
}
return 0;
}
var button__start_btn_draw(var self, var x, var y, var data)
{
	struct button *__self = (void*)self;(void)__self;
	var  bg;
	struct display *s = (void*)0;
(*((var*)&s)) = __self->win_;
bg = 1;
{
	var if__cond = (__self->state_) ;
	if ((if__cond > 0)) {
		bg = 7;
	}
}
((var(*)())display__moveto)((var)s, (var)x, (var)y);
((var(*)())display__bold)((var)s);
((var(*)())display__color)((var)s, (var)0, (var)bg);
((var(*)())display__print)((var)s, (var)(var)"[");
((var(*)())display__color)((var)s, (var)7, (var)bg);
((var(*)())display__print)((var)s, (var)data);
((var(*)())display__color)((var)s, (var)0, (var)bg);
((var(*)())display__print)((var)s, (var)(var)"]");
	return 0;
}
var menu__init(var self, var me, var dpy, var x, var y, var w, var h, var e, var dat)
{
	struct menu *__self = (void*)self;(void)__self;
__self->x_ = x;
__self->y_ = y;
__self->w_ = w;
__self->h_ = h;
__self->state_ = 0;
__self->event_ = e;
__self->win_ = dpy;
__self->data_ = dat;
__self->damage_ = 0;
__self->sub_ = 0;
__self->cmd_ = 0;
	return 0;
}
var menu__init_sub(var self, var cb, var cb_data)
{
	struct menu *__self = (void*)self;(void)__self;
	var  f;
	struct menu *s = (void*)0;
__self->sub_ = (var)malloc(sizeof(struct menu));
(*((var*)&s)) = __self->sub_;
f = (var)menu__menu__event;
((var(*)())menu__init)((var)s, (var)(*((var*)&s)), (var)__self->win_, (var)0, (var)0, (var)0, (var)0, (var)f, (var)(var)"");
((var(*)())menu__set_callback)((var)s, (var)cb, (var)cb_data);
	return 0;
}
var menu__nb_item(var self, var data)
{
	struct menu *__self = (void*)self;(void)__self;
	var  i, n;
i = 0;
n = 0;
while (1) {
	{
		var if__cond = 		((unsigned char*)data)[ i] ;
		if ((if__cond == 0)) {
break;
		} else if ((if__cond == 59)) {
			i = i +  1;
			n = n +  1;
		} else if ((if__cond != 0)) {
			i = i +  1;
		}
	}
}
return n;
}
var menu__menu_create(var self, var d, var cb, var cb_data, var data)
{
	struct menu *__self = (void*)self;(void)__self;
	var  f, n;
	struct menu *g = (void*)0;
	struct display *dpy = (void*)0;
(*((var*)&dpy)) = d;
(*((var*)&g)) = (var)malloc(sizeof(struct menu));
f = (var)menu__menu__event;
n = ((var(*)())menu__nb_item)(self, (var)data);
((var(*)())menu__init)((var)g, (var)(*((var*)&g)), (var)(*((var*)&dpy)), (var)0, (var)(	((var(*)())display__height)((var)dpy)- 1- n), (var)24, (var)n, (var)f, (var)data);
((var(*)())menu__set_callback)((var)g, (var)cb, (var)cb_data);
((var(*)())display__add)((var)dpy, (var)(*((var*)&g)));
((var(*)())menu__init_sub)((var)g, (var)cb, (var)cb_data);
return (*((var*)&g));
}
var menu__menu__event(var self, var me, var ev, var x, var y, var data)
{
	struct menu *__self = (void*)self;(void)__self;
	struct menu *s = (void*)0;
(*((var*)&s)) = me;
return 	((var(*)())menu__event)((var)s, (var)ev, (var)x, (var)y, (var)data);
}
var menu__is_inside(var self, var x, var y)
{
	struct menu *__self = (void*)self;(void)__self;
{
	var if__cond = (x -  __self->x_) ;
	if ((if__cond < 0)) {
		return 0;
	}
}
{
	var if__cond = (y -  __self->y_) ;
	if ((if__cond < 0)) {
		return 0;
	}
}
{
	var if__cond = ((__self->x_ +  __self->w_) -  x) ;
	if ((if__cond <= 0)) {
		return 0;
	}
}
{
	var if__cond = ((__self->y_ +  __self->h_) -  y) ;
	if ((if__cond <= 0)) {
		return 0;
	}
}
return 1;
}
var menu__set_callback(var self, var cb, var data)
{
	struct menu *__self = (void*)self;(void)__self;
__self->cb_ = cb;
__self->cb_data_ = data;
	return 0;
}
var menu__callback(var self, var state)
{
	struct menu *__self = (void*)self;(void)__self;
	var  f;
f = __self->cb_;
{
	var if__cond = f ;
	if ((if__cond == 0)) {
		return 0;
	}
}
((var(*)())f)(((var)0), (var)__self->cb_data_, (var)(__self->h_ -  __self->item_ -  1), (var)__self->data_, (var)state);
return 0;
}
var menu__hide(var self)
{
	struct menu *__self = (void*)self;(void)__self;
	struct display *dpy = (void*)0;
(*((var*)&dpy)) = __self->win_;
((var(*)())display__dispatch)((var)dpy, (var)EVENT_WINDOW, (var)0, (var)0, (var)1);
{
	var if__cond = __self->state_ ;
	if ((if__cond != 0)) {
		__self->state_ = 0;
		__self->damage_ = 1;
		return 1;
	}
}
return 0;
}
var menu__shown(var self)
{
	struct menu *__self = (void*)self;(void)__self;
return __self->state_;
}
var menu__show_sub(var self)
{
	struct menu *__self = (void*)self;(void)__self;
__self->item_ = -1;
__self->state_ = 1;
	return 0;
}
var menu__get_cmd(var self, var data)
{
	struct menu *__self = (void*)self;(void)__self;
	var  i, n, c;
i = 0;
{
	var if__cond = __self->cmd_ ;
	if ((if__cond == 0)) {
		__self->cmd_ = (var)malloc(256);
	}
}
n = 3;
while (1) {
	{
		var if__cond = 		((unsigned char*)data)[ 0] ;
		if ((if__cond == 0)) {
break;
		} else if ((if__cond == 34)) {
			data = data +  1;
			n = n -  1;
			{
				var if__cond = n ;
				if ((if__cond == 0)) {
break;
				}
			}
		} else if ((if__cond != 0)) {
			data = data +  1;
		}
	}
}
while (1) {
	{
		var if__cond = i -  254 ;
		if ((if__cond >= 0)) {
break;
		}
	}
	c = ((unsigned char*)data)[ 0];
	{
		var if__cond = c ;
		if ((if__cond == 0)||(if__cond == 34)) {
break;
		} else if ((if__cond != 0)) {
			((unsigned char*)__self->cmd_)[ i] = c;
i = i +  1;
data = data +  1;
}
}
}
((unsigned char*)__self->cmd_)[ i] = 0;
return __self->cmd_;
}
var menu__get_item(var self, var item, var data)
{
	struct menu *__self = (void*)self;(void)__self;
	var  i;
i = 0;
while (1) {
{
	var if__cond = i -  item ;
if ((if__cond == 0)) {
	break;
} else if ((if__cond < 0)) {
	i = i +  1;
	while (1) {
			{
			var if__cond = 			((unsigned char*)data)[ 0] ;
			if ((if__cond == 0)) {
break;
			} else if ((if__cond == 59)) {
				data = data +  1;
break;
			} else if ((if__cond != 0)) {
				data = data +  1;
			}
		}
}
	}
}
}
while (1) {
{
	var if__cond = ((unsigned char*)data)[ 0] ;
if ((if__cond == 0)) {
	break;
} else if ((if__cond == 9)||(if__cond == 32)) {
	data = data +  1;
} else if ((if__cond != 0)) {
	break;
}
}
}
return data;
}
var menu__show(var self, var showit, var sub)
{
	struct menu *__self = (void*)self;(void)__self;
	var  n, f;
	struct display *dpy = (void*)0;
	struct menu *g = (void*)0;
(*((var*)&dpy)) = __self->win_;
(*((var*)&g)) = __self->sub_;
{
	var if__cond = showit ;
if ((if__cond == 0)) {
{
	var if__cond = (*((var*)&g)) ;
	if ((if__cond != 0)) {
((var(*)())menu__hide)((var)g);
	}
}
((var(*)())menu__hide)(self);
return 0;
} else if ((if__cond == 3)) {
return 0;
}
}
{
	var if__cond = sub ;
if ((if__cond == 0)) {
__self->damage_ = 1;
__self->state_ = 1;
__self->item_ = -1;
((var(*)())display__set_focus)((var)dpy, (var)self);
} else if ((if__cond != 0)) {
n = ((var(*)())menu__nb_item)(self, (var)sub);
f = (var)menu__menu__event;
((var(*)())menu__init)((var)g, (var)(*((var*)&g)), (var)(*((var*)&dpy)), (var)(__self->x_ +  __self->w_), (var)(__self->y_- n+ __self->item_+ 1), (var)__self->w_, (var)n, (var)f, (var)sub);
((var(*)())menu__set_callback)((var)g, (var)__self->cb_, (var)__self->cb_data_);
((var(*)())menu__show_sub)((var)g);
((var(*)())display__dispatch)((var)dpy, (var)EVENT_WINDOW, (var)0, (var)0, (var)1);
}
}
return 0;
}
var menu__close(var self)
{
	struct menu *__self = (void*)self;(void)__self;
	struct menu *m = (void*)0;
(*((var*)&m)) = __self->sub_;
{
	var if__cond = (*((var*)&m)) ;
if ((if__cond != 0)) {
((var(*)())menu__hide)((var)m);
}
}
((var(*)())menu__hide)(self);
	return 0;
}
var menu__event(var self, var ev, var x, var y, var data)
{
	struct menu *__self = (void*)self;(void)__self;
	var  r;
	struct menu *m = (void*)0;
	struct display *dpy = (void*)0;
(*((var*)&dpy)) = __self->win_;
(*((var*)&m)) = __self->sub_;
{
	var if__cond = (*((var*)&m)) ;
if ((if__cond == 0)) {
{
	var if__cond = __self->state_ ;
	if ((if__cond == 0)) {
		return 0;
	}
}
}
}
{
	var if__cond = ev ;
if ((if__cond == 0)) {
} else if ((if__cond == EVENT_MOUSE)) {
{
	var if__cond = (*((var*)&m)) ;
	if ((if__cond != 0)) {
		r = ((var(*)())menu__event)((var)m, (var)ev, (var)x, (var)y, (var)data);
		{
			var if__cond = r ;
			if ((if__cond != 0)) {
				return r;
			}
		}
	}
}
{
	var if__cond = (data -  1000) ;
	if ((if__cond < 0)) {
		{
			var if__cond = y -  __self->y_ -  __self->item_ ;
			if ((if__cond != 0)) {
				{
					var if__cond = ((var(*)())menu__is_inside)(self, (var)x, (var)y) ;
					if ((if__cond > 0)) {
						__self->item_ = y -  __self->y_;
						__self->damage_ = 1;
					}
				}
			}
		}
		{
			var if__cond = data ;
			if ((if__cond == 0)) {
				{
					var if__cond = __self->state_ ;
					if ((if__cond != 0)) {
						{
							var if__cond = ((var(*)())menu__is_inside)(self, (var)x, (var)y) ;
							if ((if__cond > 0)) {
								{
									var if__cond = (*((var*)&m)) ;
									if ((if__cond != 0)) {
((var(*)())menu__callback)(self, (var)1);
									}
								}
								return 1;
							} else if ((if__cond <= 0)) {
							}
						}
					}
				}
			} else if ((if__cond != 0)) {
				{
					var if__cond = (data -  35) ;
					if ((if__cond <= 0)) {
						{
							var if__cond = __self->state_ ;
							if ((if__cond != 0)) {
								{
									var if__cond = __self->damage_ ;
									if ((if__cond != 0)) {
										{
											var if__cond = (*((var*)&m)) ;
											if ((if__cond != 0)) {
((var(*)())menu__callback)(self, (var)2);
											} else if ((if__cond == 0)) {
((var(*)())menu__callback)(self, (var)3);
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
	} else if ((if__cond >= 0)) {
		{
			var if__cond = __self->state_ ;
			if ((if__cond != 0)) {
				{
					var if__cond = ((var(*)())menu__is_inside)(self, (var)x, (var)y) ;
					if ((if__cond > 0)) {
((var(*)())menu__callback)(self, (var)0);
					} else if ((if__cond <= 0)) {
					}
				}
			}
		}
	}
}
} else if ((if__cond == EVENT_KEYBOARD)) {
{
	var if__cond = data ;
	if ((if__cond == 27)) {
		__self->item_ = 0;
		__self->damage_ = 1;
		{
			var if__cond = __self->state_ ;
			if ((if__cond == 0)) {
				__self->state_ = 1;
((var(*)())display__set_focus)((var)dpy, (var)self);
			} else if ((if__cond != 0)) {
((var(*)())menu__close)(self);
			}
		}
	} else if ((if__cond == 13)) {
	} else if ((if__cond == 10)) {
		{
			var if__cond = __self->state_ ;
			if ((if__cond != 0)) {
((var(*)())menu__close)(self);
((var(*)())display__dispatch)((var)dpy, (var)EVENT_WINDOW, (var)0, (var)0, (var)1);
((var(*)())menu__callback)(self, (var)0);
			}
		}
	}
}
} else if ((if__cond == EVENT_WINDOW)) {
__self->damage_ = 1;
{
	var if__cond = (*((var*)&m)) ;
	if ((if__cond != 0)) {
((var(*)())menu__event)((var)m, (var)ev, (var)x, (var)y, (var)data);
	}
}
} else if ((if__cond == EVENT_FOCUS)) {
} else if ((if__cond == EVENT_UNFOCUS)) {
((var(*)())menu__close)(self);
} else if ((if__cond == EVENT_DRAW)) {
{
	var if__cond = __self->damage_ ;
	if ((if__cond != 0)) {
((var(*)())menu__draw)(self, (var)__self->x_, (var)__self->y_, (var)__self->w_, (var)__self->h_, (var)__self->data_, (var)__self->item_);
	}
}
__self->damage_ = 0;
{
	var if__cond = (*((var*)&m)) ;
	if ((if__cond != 0)) {
((var(*)())menu__event)((var)m, (var)ev, (var)x, (var)y, (var)data);
	}
}
}
}
return 0;
}
var menu__draw(var self, var x, var y, var w, var h, var data, var item)
{
	struct menu *__self = (void*)self;(void)__self;
	var  bg;
	var  i, c;
	var  entry;
	var  entry_len;
	struct display *s = (void*)0;
(*((var*)&s)) = __self->win_;
{
	var if__cond = (__self->state_) ;
if ((if__cond <= 0)) {
return 0;
}
}
i = h;
entry = data;
while (1) {
{
	var if__cond = i ;
if ((if__cond <= 0)) {
	break;
}
}
i = i -  1;
while (1) {
{
	var if__cond = 	((unsigned char*)entry)[ 0] ;
	if ((if__cond == 32)||(if__cond == 9)) {
		entry = entry +  1;
	} else if ((if__cond != 0)) {
break;
	}
}
}
c = ((unsigned char*)entry)[ 0];
while (1) {
{
	var if__cond = 	((unsigned char*)entry)[ 0] ;
	if ((if__cond == 34)) {
		entry = entry +  1;
break;
	} else if ((if__cond == 0)) {
break;
	} else if ((if__cond != 0)) {
		entry = entry +  1;
	}
}
}
entry_len = 0;
while (1) {
{
	var if__cond = 	((unsigned char*)entry)[ entry_len] ;
	if ((if__cond == 0)||(if__cond == 34)) {
break;
	} else if ((if__cond != 0)) {
		entry_len = entry_len +  1;
	}
}
}
{
	var if__cond = i -  item ;
if ((if__cond == 0)) {
	bg = 4;
} else if ((if__cond != 0)) {
	{
		var if__cond = __self->sub_ ;
		if ((if__cond == 0)) {
			bg = 5 ;
		} else if ((if__cond != 0)) {
			bg = 5;
		}
	}
}
}
((var(*)())display__moveto)((var)s, (var)x, (var)(y+ i));
((var(*)())display__bold)((var)s);
((var(*)())display__color)((var)s, (var)0, (var)bg);
((var(*)())display__print)((var)s, (var)(var)" ");
((var(*)())display__color)((var)s, (var)7, (var)bg);
((var(*)())display__printw)((var)s, (var)entry, (var)entry_len, (var)(__self->w_ -  2));
((var(*)())display__moveto)((var)s, (var)(x +  __self->w_ -  1), (var)(y+ i));
{
	var if__cond = c ;
if ((if__cond == 115)) {
	{
		var if__cond = i -  item ;
		if ((if__cond == 0)) {
((var(*)())display__print)((var)s, (var)(var)">");
		} else if ((if__cond != 0)) {
((var(*)())display__print)((var)s, (var)(var)"|");
		}
	}
} else if ((if__cond != 0)) {
	((var(*)())display__print)((var)s, (var)(var)" ");
}
}
while (1) {
{
	var if__cond = 	((unsigned char*)entry)[ 0] ;
	if ((if__cond == 59)) {
		entry = entry +  1;
break;
	} else if ((if__cond == 0)) {
break;
	} else if ((if__cond != 0)) {
		entry = entry +  1;
	}
}
}
}
return 0;
}
var textarea__init(var self, var me, var dpy, var x, var y, var w, var h, var e, var dat)
{
	struct textarea *__self = (void*)self;(void)__self;
__self->x_ = x;
__self->y_ = y;
__self->w_ = w;
__self->h_ = h;
__self->state_ = 0;
__self->event_ = e;
__self->win_ = dpy;
__self->data_ = dat;
__self->damage_ = 1;
__self->cb_ = 0;
__self->cb_data_ = 0;
	return 0;
}
var textarea__create_full(var self, var d)
{
	struct textarea *__self = (void*)self;(void)__self;
	var  f;
	struct textarea *t = (void*)0;
	struct display *dpy = (void*)0;
(*((var*)&dpy)) = d;
(*((var*)&t)) = (var)malloc(sizeof(struct textarea));
f = (var)textarea__textarea__event;
((var(*)())textarea__init)((var)t, (var)(*((var*)&t)), (var)(*((var*)&dpy)), (var)0, (var)0, (var)((var(*)())display__width)((var)dpy), (var)(((var(*)())display__height)((var)dpy)- 1), (var)f, (var)(var)"bob");
((var(*)())display__add)((var)dpy, (var)(*((var*)&t)));
return (*((var*)&t));
}
var textarea__textarea__event(var self, var me, var ev, var x, var y, var data)
{
	struct textarea *__self = (void*)self;(void)__self;
	struct textarea *s = (void*)0;
(*((var*)&s)) = me;
return ((var(*)())textarea__event)((var)s, (var)ev, (var)x, (var)y, (var)data);
}
var textarea__is_inside(var self, var x, var y)
{
	struct textarea *__self = (void*)self;(void)__self;
{
	var if__cond = (x -  __self->x_) ;
if ((if__cond < 0)) {
return 0;
}
}
{
	var if__cond = (y -  __self->y_) ;
if ((if__cond < 0)) {
return 0;
}
}
{
	var if__cond = ((__self->x_ +  __self->w_) -  x) ;
if ((if__cond <= 0)) {
return 0;
}
}
{
	var if__cond = ((__self->y_ +  __self->h_) -  y) ;
if ((if__cond <= 0)) {
return 0;
}
}
return 1;
}
var textarea__set_callback(var self, var cb, var data)
{
	struct textarea *__self = (void*)self;(void)__self;
__self->cb_ = cb;
__self->cb_data_ = data;
	return 0;
}
var textarea__callback(var self, var v)
{
	struct textarea *__self = (void*)self;(void)__self;
	var  f;
f = __self->cb_;
{
	var if__cond = f ;
if ((if__cond == 0)) {
return 0;
}
}
((var(*)())f)(((var)0), (var)__self->cb_data_, (var)v);
return 0;
}
var textarea__event(var self, var ev, var x, var y, var data)
{
	struct textarea *__self = (void*)self;(void)__self;
	struct display *dpy = (void*)0;
(*((var*)&dpy)) = __self->win_;
{
	var if__cond = ev ;
if ((if__cond == 0)) {
} else if ((if__cond == EVENT_MOUSE)) {
{
	var if__cond = (data -  1000) ;
	if ((if__cond < 0)) {
		{
			var if__cond = data ;
			if ((if__cond == 0)) {
				{
					var if__cond = ((var(*)())textarea__is_inside)(self, (var)x, (var)y) ;
					if ((if__cond > 0)) {
						{
							var if__cond = __self->state_ ;
							if ((if__cond == 0)) {
								__self->state_ = 1;
								__self->damage_ = 1;
((var(*)())display__set_focus)((var)dpy, (var)self);
((var(*)())textarea__callback)(self, (var)1);
								return 1;
							}
						}
					}
				}
			} else if ((if__cond != 0)) {
				{
					var if__cond = (data -  35) ;
					if ((if__cond == 0)) {
						{
							var if__cond = __self->state_ ;
							if ((if__cond != 0)) {
								__self->state_ = 0;
								__self->damage_ = 1;
							}
						}
					}
				}
			}
		}
	} else if ((if__cond >= 0)) {
		__self->state_ = 0 ;
		__self->damage_ = 1;
	}
}
} else if ((if__cond == EVENT_KEYBOARD)) {
} else if ((if__cond == EVENT_WINDOW)) {
__self->damage_ = 1;
} else if ((if__cond == EVENT_DRAW)) {
{
	var if__cond = __self->damage_ ;
	if ((if__cond != 0)) {
((var(*)())textarea__start_btn_draw)(self, (var)__self->x_, (var)__self->y_, (var)__self->data_);
	}
}
__self->damage_ = 0;
}
}
return 0;
}
var textarea__start_btn_draw(var self, var x, var y, var data)
{
	struct textarea *__self = (void*)self;(void)__self;
	var  bg;
	struct display *s = (void*)0;
(*((var*)&s)) = __self->win_;
bg = 0;
{
	var if__cond = (__self->state_) ;
if ((if__cond > 0)) {
bg = 2;
}
}
((var(*)())display__normal)((var)s);
((var(*)())display__moveto)((var)s, (var)x, (var)y);
((var(*)())display__color)((var)s, (var)7, (var)bg);
((var(*)())display__print)((var)s, (var)data);
	return 0;
}
var widget__event(var self, var type, var x, var y, var data)
{
	struct widget *__self = (void*)self;(void)__self;
	var  e;
e = __self->event_;
return ((var(*)())e)(((var)0), (var)self, (var)type, (var)x, (var)y, (var)data) ;
}
var display__flush(var self)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())flush)();
	return 0;
}
var display__print(var self, var txt)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())print)(txt);
	return 0;
}
var display__print10(var self, var n)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())print10)(n);
	return 0;
}
var display__printb(var self, var txt, var len)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())printb)(txt, (var)len);
	return 0;
}
var display__printw(var self, var txt, var len, var max)
{
	struct display *__self = (void*)self;(void)__self;
	var  i, c, n;
i = 0;
n = 0;
while (1) {
{
	var if__cond = i -  max ;
if ((if__cond >= 0)) {
	break;
}
}
{
	var if__cond = (n -  len) ;
if ((if__cond >= 0)) {
	break;
}
}
c = ((unsigned char*)txt)[ n];
{
	var if__cond = c ;
if ((if__cond == 0)) {
	break;
}
}
{
	var if__cond = c -  (128+ 64) ;
if ((if__cond < 0)) {
	{
		var if__cond = c -  128 ;
		if ((if__cond >= 0)) {
		}
	}
	n = n +  1;
} else if ((if__cond != 0)) {
	{
		var if__cond = c -  (128+ 64+ 32) ;
		if ((if__cond < 0)) {
			{
				var if__cond = 				((unsigned char*)txt)[ (n+ 1)] ;
				if ((if__cond == 0)) {
break;
				}
			}
			n = n +  2;
		} else if ((if__cond != 0)) {
			{
				var if__cond = c -  (128+ 64+ 32+ 16) ;
				if ((if__cond < 0)) {
					{
						var if__cond = 						((unsigned char*)txt)[ (n+ 1)] ;
						if ((if__cond == 0)) {
break;
						}
					}
					{
						var if__cond = 						((unsigned char*)txt)[ (n+ 2)] ;
						if ((if__cond == 0)) {
break;
						}
					}
					n = n +  3;
				} else if ((if__cond != 0)) {
					{
						var if__cond = 						((unsigned char*)txt)[ (n+ 1)] ;
						if ((if__cond == 0)) {
break;
						}
					}
					{
						var if__cond = 						((unsigned char*)txt)[ (n+ 2)] ;
						if ((if__cond == 0)) {
break;
						}
					}
					{
						var if__cond = 						((unsigned char*)txt)[ (n+ 3)] ;
						if ((if__cond == 0)) {
break;
						}
					}
					n = n +  4;
				}
			}
		}
	}
}
}
i = i +  1;
}
((var(*)())display__printb)(self, (var)txt, (var)n);
{
	var if__cond = i -  max ;
if ((if__cond < 0)) {
((var(*)())display__print)(self, (var)(var)"[");
((var(*)())display__print10)(self, (var)(max -  i));
((var(*)())display__print)(self, (var)(var)"X");
}
}
return i;
}
var display__add(var self, var wid)
{
	struct display *__self = (void*)self;(void)__self;
	var  a, i;
{
	var if__cond = (__self->alloc_widgets_ -  __self->nb_widgets_) ;
if ((if__cond <= 0)) {
a = (var)malloc(sizeof(var) * ((__self->alloc_widgets_ +  10)));
i = 0;
while (1) {
	{
		var if__cond = i -  __self->nb_widgets_ ;
		if ((if__cond >= 0)) {
break;
		}
	}
	((var*)(a))[i] = ((var*)(__self->widgets_))[i];
	i = i +  1;
}
free((void*)(__self->widgets_));
__self->widgets_ = a;
__self->alloc_widgets_ = __self->alloc_widgets_ +  10;
}
}
((var*)(__self->widgets_))[__self->nb_widgets_] = wid;
__self->nb_widgets_ = __self->nb_widgets_ +  1;
((var(*)())display__set_focus)(self, (var)wid);
	return 0;
}
var display__moveto(var self, var x, var y)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())display__print)(self, (var)(var)"[");
((var(*)())display__print10)(self, (var)(y+ 1));
((var(*)())display__print)(self, (var)(var)";");
((var(*)())display__print10)(self, (var)(x+ 1));
((var(*)())display__print)(self, (var)(var)"f");
	return 0;
}
var display__color(var self, var front, var back)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())display__print)(self, (var)(var)"[");
((var(*)())display__print10)(self, (var)(front +  30));
((var(*)())display__print)(self, (var)(var)";");
((var(*)())display__print10)(self, (var)(back +  40));
((var(*)())display__print)(self, (var)(var)"m");
	return 0;
}
var display__bold(var self)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())display__print)(self, (var)(var)"[1m");
	return 0;
}
var display__regular(var self)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())display__print)(self, (var)(var)"[22m");
	return 0;
}
var display__nounderline(var self)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())display__print)(self, (var)(var)"[24m");
	return 0;
}
var display__underline(var self)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())display__print)(self, (var)(var)"[4m");
	return 0;
}
var display__normal(var self)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())display__print)(self, (var)(var)"[0m");
	return 0;
}
var display__clear(var self)
{
	struct display *__self = (void*)self;(void)__self;
((var(*)())display__color)(self, (var)7, (var)0);
((var(*)())display__print)(self, (var)(var)"[2J");
	return 0;
}
var display__query_pos(var self)
{
	struct display *__self = (void*)self;(void)__self;
	struct term *term1 = (void*)0;
(*((var*)&term1)) = __self->term_;
((var(*)())display__print)(self, (var)(var)"[6n");
((var(*)())display__flush)(self);
((var(*)())term__wait)((var)term1, (var)10);
while (1) {
{
	var if__cond = ((var*)(term1))[3] ;
if ((if__cond != 0)) {
	break;
}
}
((var(*)())term__wait)((var)term1, (var)10);
}
((var(*)())display__event)(self, (var)((var*)(term1))[3], (var)((var*)(term1))[4], (var)((var*)(term1))[5]);
	return 0;
}
var display__init(var self)
{
	struct display *__self = (void*)self;(void)__self;
	struct term *term1 = (void*)0;
__self->n_ = (var)malloc(sizeof(var) * (MAX_NUM));
__self->nb_n_ = 0;
__self->state_ = -1;
__self->term_ = ((var(*)())term__new)((var)term1);
(*((var*)&term1)) = __self->term_;
((var(*)())display__print)(self, (var)(var)"[!p");
((var(*)())display__print)(self, (var)(var)"[?1049h");
((var(*)())display__print)(self, (var)(var)"[?1003h");
((var(*)())display__print)(self, (var)(var)"[?1015h");
((var(*)())display__print)(self, (var)(var)"[?1006h");
((var(*)())display__print)(self, (var)(var)"[");
((var(*)())display__print10)(self, (var)1);
((var(*)())display__print)(self, (var)(var)";");
((var(*)())display__print10)(self, (var)(((var(*)())term__height)((var)term1)- 1));
((var(*)())display__print)(self, (var)(var)"r");
((var(*)())display__print)(self, (var)(var)"]0;https://3o3.org");
__self->cur_x_ = 0;
__self->cur_y_ = 0;
__self->widgets_ = (var)malloc(sizeof(var) * (10));
__self->nb_widgets_ = 0;
__self->alloc_widgets_ = 10;
__self->focus_old_ = 0;
__self->focus_ = 0;
__self->height_ = ((var(*)())term__height)((var)term1);
__self->width_ = ((var(*)())term__width)((var)term1);
((var(*)())display__flush)(self);
((var(*)())display__moveto)(self, (var)0, (var)0);
((var(*)())display__flush)(self);
	return 0;
}
var display__read_num(var self, var txt)
{
	struct display *__self = (void*)self;(void)__self;
	var  n, c, num;
n = 0;
c = ((unsigned char*)txt)[ n];
num = 0;
while (1) {
{
	var if__cond = c ;
if ((if__cond == 0)) {
	break;
}
}
{
	var if__cond = (c -  48) ;
if ((if__cond >= 0)) {
	{
		var if__cond = (c -  57) ;
		if ((if__cond <= 0)) {
			num = ((num * 10) +  c -  48);
		} else if ((if__cond != 0)) {
break;
		}
	}
} else if ((if__cond != 0)) {
	break;
}
}
n = (n +  1);
c = ((unsigned char*)txt)[ n];
}
{
	var if__cond = n ;
if ((if__cond > 0)) {
((var*)(__self->n_))[__self->nb_n_] = num;
__self->nb_n_ = (__self->nb_n_ +  1);
}
}
return n;
}
var display__skip(var self, var txt)
{
	struct display *__self = (void*)self;(void)__self;
	var  n, c;
n = 1;
c = ((unsigned char*)txt)[ n];
while (1) {
{
	var if__cond = c ;
if ((if__cond == 0)) {
	break;
}
}
{
	var if__cond = (c -  64) ;
if ((if__cond < 0)) {
	n = (n +  1);
	break;
} else if ((if__cond >= 0)) {
	{
		var if__cond = (c -  126) ;
		if ((if__cond > 0)) {
			n = (n +  1);
break;
		}
	}
}
}
n = (n +  1);
c = ((unsigned char*)txt)[ n];
}
return n;
}
var display__set_focus(var self, var wi)
{
	struct display *__self = (void*)self;(void)__self;
__self->focus_ = wi;
	return 0;
}
var display__mouse_hide(var self)
{
	struct display *__self = (void*)self;(void)__self;
	return 0;
}
var display__mouse_show(var self)
{
	struct display *__self = (void*)self;(void)__self;
{
	var if__cond = (__self->mouse_y_ -  __self->height_ +  2) ;
if ((if__cond < 0)) {
((var(*)())display__moveto)(self, (var)__self->mouse_x_, (var)__self->mouse_y_);
} else if ((if__cond >= 0)) {
((var(*)())display__moveto)(self, (var)__self->mouse_x_, (var)(__self->height_ -  2));
}
}
	return 0;
}
var display__arrow_event(var self, var key)
{
	struct display *__self = (void*)self;(void)__self;
{
	var if__cond = key ;
if ((if__cond == 65)) {
__self->cur_y_ = (__self->cur_y_ -  1);
} else if ((if__cond == 66)) {
__self->cur_y_ = (__self->cur_y_ +  1);
} else if ((if__cond == 67)) {
__self->cur_x_ = (__self->cur_x_ +  1);
} else if ((if__cond == 68)) {
__self->cur_x_ = (__self->cur_x_ -  1);
}
}
{
	var if__cond = (__self->cur_y_) ;
if ((if__cond < 0)) {
__self->cur_y_ = 0;
}
}
{
	var if__cond = (__self->cur_y_ -  __self->height_ +  2) ;
if ((if__cond >= 0)) {
__self->cur_y_ = (__self->height_ -  2);
}
}
{
	var if__cond = (__self->cur_x_) ;
if ((if__cond < 0)) {
__self->cur_x_ = 0;
}
}
{
	var if__cond = (__self->cur_x_ -  __self->width_) ;
if ((if__cond >= 0)) {
__self->cur_x_ = (__self->width_ -  1);
}
}
__self->event_ = EVENT_KEYBOARD;
((var(*)())display__dispatch)(self, (var)EVENT_KEYBOARD, (var)__self->cur_x_, (var)__self->cur_y_, (var)0);
	return 0;
}
var display__mouse_event(var self, var release)
{
	struct display *__self = (void*)self;(void)__self;
{
	var if__cond = (__self->nb_n_ -  3) ;
if ((if__cond != 0)) {
return 0;
}
}
((var(*)())display__mouse_hide)(self);
__self->event_ = EVENT_MOUSE;
__self->mouse_btn_ = ((var*)(__self->n_))[0] +  (1000 * release);
__self->mouse_x_ = (((var*)(__self->n_))[1] -  1);
__self->mouse_y_ = (((var*)(__self->n_))[2] -  1);
((var(*)())display__mouse_show)(self);
((var(*)())display__dispatch)(self, (var)EVENT_MOUSE, (var)__self->mouse_x_, (var)__self->mouse_y_, (var)__self->mouse_btn_);
return 0;
}
var display__csi(var self, var txt)
{
	struct display *__self = (void*)self;(void)__self;
	var  n, c, l, state;
n = 1;
c = ((unsigned char*)txt)[ n];
__self->nb_n_ = 0;
state = 0;
((var(*)())print)(txt);
((var(*)())print)((var)"  ");
((var(*)())flush)();
while (1) {
{
	var if__cond = c ;
if ((if__cond == 0)) {
	break;
}
}
l = ((var(*)())display__read_num)(self, (var)(txt +  n));
((var(*)())display__printb)(self, (var)(txt+ n), (var)1);
{
	var if__cond = l ;
if ((if__cond == 0)) {
	{
		var if__cond = c ;
		if ((if__cond == 59)) {
		} else if ((if__cond == 58)) {
		} else if ((if__cond == 60)) {
			state = 60;
		} else if ((if__cond == 65)) {
((var(*)())display__arrow_event)(self, (var)c);
		} else if ((if__cond == 66)) {
((var(*)())display__arrow_event)(self, (var)c);
		} else if ((if__cond == 67)) {
((var(*)())display__arrow_event)(self, (var)c);
		} else if ((if__cond == 68)) {
((var(*)())display__arrow_event)(self, (var)c);
		} else if ((if__cond == 109)) {
			{
				var if__cond = state ;
				if ((if__cond == 60)) {
((var(*)())display__mouse_event)(self, (var)1);
				}
			}
			state = 0;
		} else if ((if__cond == 77)) {
			{
				var if__cond = state ;
				if ((if__cond == 60)) {
((var(*)())display__mouse_event)(self, (var)0);
				}
			}
			state = 0;
		} else if ((if__cond == 82)) {
((var(*)())display__print)(self, (var)(var)"R:");
((var(*)())display__print10)(self, (var)__self->nb_n_);
((var(*)())display__flush)(self);
		} else if ((if__cond != 0)) {
			l = ((var(*)())display__skip)(self, (var)(txt+ n));
		}
	}
	n = (n +  1 +  l);
} else if ((if__cond != 0)) {
	n = (n +  l);
}
}
{
	var if__cond = state ;
if ((if__cond == 0)) {
	__self->nb_n_ = 0;
}
}
c = ((unsigned char*)txt)[ n];
}
return n;
}
var display__process(var self, var txt)
{
	struct display *__self = (void*)self;(void)__self;
	struct term *term1 = (void*)0;
(*((var*)&term1)) = __self->term_;
	var  i, c, nxt, n;
{
	var if__cond = txt ;
if ((if__cond == 0)) {
return 0 ;
}
}
i = 0;
c = ((unsigned char*)txt)[ 0];
while (1) {
{
	var if__cond = c ;
if ((if__cond == 0)) {
	break;
}
}
nxt = ((unsigned char*)txt)[ (i+ 1)];
n = 0;
{
	var if__cond = c ;
if ((if__cond == 27)) {
	{
		var if__cond = nxt ;
		if ((if__cond == 0)) {
((var(*)())display__dispatch)(self, (var)EVENT_KEYBOARD, (var)-1, (var)-1, (var)27);
		} else if ((if__cond == 91)) {
((var(*)())print)((var)"\n");
			n = ((var(*)())display__csi)(self, (var)(txt+ i+ 1));
		} else if ((if__cond != 0)) {
			n = ((var(*)())display__skip)(self, (var)(txt+ i+ 1));
		}
	}
} else if ((if__cond != 0)) {
	((var(*)())display__dispatch)(self, (var)EVENT_KEYBOARD, (var)-1, (var)-1, (var)		((unsigned char*)txt)[ i]);
}
}
{
	var if__cond = n ;
if ((if__cond == 0)) {
	i = (i +  1);
} else if ((if__cond != 0)) {
	i = (i +  n +  1);
}
}
c = ((unsigned char*)txt)[ i];
}
return 0;
}
var display__width(var self)
{
	struct display *__self = (void*)self;(void)__self;
return __self->width_;
}
var display__height(var self)
{
	struct display *__self = (void*)self;(void)__self;
return __self->height_;
}
var display__event(var self, var id, var len, var data)
{
	struct display *__self = (void*)self;(void)__self;
{
	var if__cond = id ;
if ((if__cond == 1)) {
return 	((var(*)())display__process)(self, (var)data);
((var(*)())display__flush)(self);
} else if ((if__cond != 0)) {
return -1;
}
}
return 0;
}
var display__dispatch(var self, var type, var x, var y, var data)
{
	struct display *__self = (void*)self;(void)__self;
	var  i, r;
	struct widget *wi = (void*)0;
i = 0;
__self->focus_old_ = __self->focus_;
{
	var if__cond = type ;
if ((if__cond == EVENT_WINDOW)) {
((var(*)())display__clear)(self);
}
}
{
	var if__cond = (__self->focus_) ;
if ((if__cond != 0)) {
(*((var*)&wi)) = __self->focus_old_;
r = ((var(*)())widget__event)((var)wi, (var)type, (var)x, (var)y, (var)data);
((var(*)())display__moveto)(self, (var)__self->cur_x_, (var)__self->cur_y_);
{
	var if__cond = r ;
	if ((if__cond > 0)) {
		i = __self->nb_widgets_ ;
	}
}
}
}
while (1) {
{
	var if__cond = i -  __self->nb_widgets_ ;
if ((if__cond >= 0)) {
	break;
}
}
(*((var*)&wi)) = (((var*)(__self->widgets_))[i]);
{
	var if__cond = ((*((var*)&wi)) -  __self->focus_old_) ;
if ((if__cond != 0)) {
	r = ((var(*)())widget__event)((var)wi, (var)type, (var)x, (var)y, (var)data);
}
}
i = (i +  1);
((var(*)())display__moveto)(self, (var)__self->cur_x_, (var)__self->cur_y_);
{
	var if__cond = r ;
if ((if__cond > 0)) {
	break;
}
}
}
{
	var if__cond = (__self->focus_old_ -  __self->focus_) ;
if ((if__cond != 0)) {
{
	var if__cond = (__self->focus_old_) ;
	if ((if__cond != 0)) {
		(*((var*)&wi)) = __self->focus_old_;
((var(*)())widget__event)((var)wi, (var)EVENT_UNFOCUS, (var)0, (var)0, (var)__self->focus_);
	}
}
{
	var if__cond = (__self->focus_) ;
	if ((if__cond != 0)) {
		(*((var*)&wi)) = __self->focus_;
((var(*)())widget__event)((var)wi, (var)EVENT_FOCUS, (var)0, (var)0, (var)__self->focus_old_);
	}
}
}
}
	return 0;
}
var display__events(var self)
{
	struct display *__self = (void*)self;(void)__self;
	struct term *term = (void*)0;
(*((var*)&term)) = __self->term_;
{
	var if__cond = __self->state_ ;
if ((if__cond == -1)) {
__self->state_ = 0;
((var(*)())display__dispatch)(self, (var)EVENT_DRAW, (var)0, (var)0, (var)0);
((var(*)())display__flush)(self);
}
}
((var(*)())term__wait)((var)term, (var)10);
{
	var if__cond = ((var*)(term))[3] ;
if ((if__cond == 0)) {
return 0;
}
}
((var(*)())display__event)(self, (var)((var*)(term))[3], (var)((var*)(term))[4], (var)((var*)(term))[5]);
((var(*)())display__dispatch)(self, (var)EVENT_DRAW, (var)0, (var)0, (var)0);
((var(*)())display__flush)(self);
return 0;
}
var edit__start_cb(var self, var me, var v)
{
	struct edit *__self = (void*)self;(void)__self;
	struct edit *m = (void*)0;
(*((var*)&m)) = me;
((var(*)())edit__show_menu)((var)m, (var)1, (var)((var)0));
	return 0;
}
var edit__menu_cb(var self, var me, var item, var data, var state)
{
	struct edit *__self = (void*)self;(void)__self;
	struct edit *m = (void*)0;
(*((var*)&m)) = me;
((var(*)())edit__show_sub_menu)((var)m, (var)item, (var)data, (var)state);
	return 0;
}
var edit__execute(var self, var cmd)
{
	struct edit *__self = (void*)self;(void)__self;
{
	var if__cond = ((var(*)())str_cmp)(cmd, (var)(var)"quit") ;
if ((if__cond == 0)) {
((var(*)())quit)();
}
}
	return 0;
}
var edit__get_menu(var self, var id)
{
	struct edit *__self = (void*)self;(void)__self;
{
	var if__cond = ((var(*)())str_cmp)(id, (var)(var)"file") ;
if ((if__cond == 0)) {
return (var)"	item \"New\" \"new\";	item \"Open\" \"open\";	item \"Save\" \"êve22;	item \"Save as\" \"saveas\";	item \"\" \"\";	item \"Print\" \"print\";	item \"\" \"\";	item \"Quit\" \"quit\";";
}
}
{
	var if__cond = ((var(*)())str_cmp)(id, (var)(var)"edit") ;
if ((if__cond == 0)) {
return (var)"	item \"Undo\" \"undo\";	item \"Redo\" \"redo\";	item \"\" \"\";	item \"Cut\" \"cut\";	item \"Copy\" \"copy\";	item \"Paste\" \"past\";	item \"\" \"\";	item \"Select all\" \"selectall\";	item \"\" \"\";	item \"Preferences\" \"preferences\";";
}
}
{
	var if__cond = ((var(*)())str_cmp)(id, (var)(var)"search") ;
if ((if__cond == 0)) {
return (var)"	item \"Find\" \"find\";	item \"Find next\" \"next\";	item \"Find previous\" \"prev\";	item \"\" \"\";	item \"Replace\" \"replace\";";
}
}
{
	var if__cond = ((var(*)())str_cmp)(id, (var)(var)"help") ;
if ((if__cond == 0)) {
return (var)"	item \"About...\" \"about\";";
}
}
{
	var if__cond = ((var(*)())str_cmp)(id, (var)(var)"") ;
if ((if__cond == 0)) {
return (var)"	item \"\" \"\";";
}
}
return (var)"";
}
var edit__show_sub_menu(var self, var item, var data, var state)
{
	struct edit *__self = (void*)self;(void)__self;
	var  it, cmd;
	struct menu *m = (void*)0;
(*((var*)&m)) = __self->menu_;
it = ((var(*)())menu__get_item)((var)m, (var)item, (var)data);
cmd = ((var(*)())menu__get_cmd)((var)m, (var)it);
{
	var if__cond = ((unsigned char*)it)[ 0] ;
if ((if__cond == 0)) {
} else if ((if__cond == 115)) {
((var(*)())menu__show)((var)m, (var)state, (var)	((var(*)())edit__get_menu)(self, (var)cmd));
{
	var if__cond = state ;
	if ((if__cond == 0)) {
((var(*)())menu__hide)((var)m);
	}
}
} else if ((if__cond == 105)) {
((var(*)())menu__show)((var)m, (var)state, (var)(var)"");
{
	var if__cond = state ;
	if ((if__cond == 0)) {
((var(*)())edit__execute)(self, (var)cmd);
	}
}
}
}
	return 0;
}
var edit__show_menu(var self, var v, var sub)
{
	struct edit *__self = (void*)self;(void)__self;
	struct menu *m = (void*)0;
(*((var*)&m)) = __self->menu_;
{
	var if__cond = ((var(*)())menu__shown)((var)m) ;
if ((if__cond == 0)) {
((var(*)())menu__show)((var)m, (var)1, (var)sub);
} else if ((if__cond != 0)) {
((var(*)())menu__show)((var)m, (var)0, (var)0);
}
}
	return 0;
}
var edit__main(var self, var argc, var argv)
{
	struct edit *__self = (void*)self;(void)__self;
	var  x, root_menu;
	struct display *dpy = (void*)0;
	struct button *b = (void*)0;
	struct edit *e = (void*)0;
	struct menu *m = (void*)0;
	struct textarea *t = (void*)0;
root_menu = (var)"sub \"File\" \"file\";sub \"Edit\" \"edit\";sub \"Search\" \"search\";sub \"Help\" \"help\";item \"Quit\" \"quit\";";
(*((var*)&dpy)) = (var)malloc(sizeof(struct display));
((var(*)())display__init)((var)dpy);
((var(*)())edit__execute)(self, (var)(var)"bio");
((var(*)())clipboard__set)((var)"hÃ©llo....", (var)9);
(*((var*)&t)) = 0;
__self->text_ = ((var(*)())textarea__create_full)((var)t, (var)(*((var*)&dpy)));
(*((var*)&e)) = self;
__self->menu_ = ((var(*)())menu__menu_create)((var)m, (var)(*((var*)&dpy)), (var)(var)edit__menu_cb, (var)(*((var*)&e)), (var)root_menu);
((var(*)())button__start_btn_create)((var)b, (var)(*((var*)&dpy)), (var)(var)edit__start_cb, (var)(*((var*)&e)));
x = 0;
while (1) {
{
	var if__cond = x ;
if ((if__cond != 0)) {
	break;
}
}
x = ((var(*)())display__events)((var)dpy);
}
return 0;
}
int main(int argc, char *argv[]) {
	return startup((var)argc,(var)argv);
}
