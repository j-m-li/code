
#ifndef var
#define JACK_HACK
#define var short
#define __poke Memory__poke
#define __peek Memory__peek
#endif

#if 0

#endif

#ifndef JACK_GuiDocGoalT0_H
#define JACK_GuiDocGoalT0_H
var GuiDocGoalT0__get_x_size();
var GuiDocGoalT0__get_y_size();
var GuiDocGoalT0__draw(var dblcol, var row);
var GuiDocGoalT0__blank(var dblcol, var row);
#endif


#if 0

#endif

#ifndef JACK_GuiBoard_H
#define JACK_GuiBoard_H
var GuiBoard__new(var x_offset, var y_offset);
var GuiBoard__dispose(var __this);
var GuiBoard__drawPip(var __this, var num);
var GuiBoard__blankPip(var __this, var num);
var GuiBoard__drawGrid(var __this);
#endif


#if 0

#endif

#ifndef JACK_TitleCredit_H
#define JACK_TitleCredit_H
var TitleCredit__get_x_size();
var TitleCredit__get_y_size();
var TitleCredit__draw(var dblcol, var row);
var TitleCredit__blank(var dblcol, var row);
#endif


#if 0

#endif

#ifndef JACK_GameBoard_H
#define JACK_GameBoard_H
var GameBoard__new();
var GameBoard__initGameScreen(var __this);
var GameBoard__dispose(var __this);
var GameBoard__debouncePipNumberInput(var __this);
var GameBoard__xorMaskFromPipNumber(var pip_number);
var GameBoard__run(var __this);
var GameBoard__waitForDifficultyChoice(var __this);
var GameBoard__setState(var __this, var state);
var GameBoard__blankMaskedPips(var __this, var mask);
var GameBoard__drawMaskedPips(var __this, var mask);
var GameBoard__generateGame(var __this);
var GameBoard__set_random_seed(var __this, var val);
var GameBoard__rand(var __this);
#endif


#if 0

#endif

#ifndef JACK_StartupScreen_H
#define JACK_StartupScreen_H
var StartupScreen__show_title_screen();
#endif


#if 0

#endif

#ifndef JACK_GuiPip_H
#define JACK_GuiPip_H
var GuiPip__get_x_size();
var GuiPip__get_y_size();
var GuiPip__draw(var dblcol, var row);
var GuiPip__blank(var dblcol, var row);
#endif


#if 0

#endif

#ifndef JACK_Font_H
#define JACK_Font_H
var Font__new();
var Font__get(var __this, var c);
#endif


#if 0

#endif

#ifndef JACK_Array_H
#define JACK_Array_H
var Array__new(var size);
var Array__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Output_H
#define JACK_Output_H
var Output__init();
var Output__deInit();
var Output__moveCursor(var row, var col);
var Output__printString(var s);
var Output__println();
var Output__printChar(var c);
var Output__printInt(var c);
var Output__backSpace();
#endif


#if 0

#endif

#ifndef JACK_Sys_H
#define JACK_Sys_H
var Sys__init();
var Sys__deInit();
var Sys__halt();
var Sys__error(var errorCode);
var Sys__wait(var duration);
#endif


#if 0

#endif

#ifndef JACK_Screen_H
#define JACK_Screen_H
var Screen__init();
var Screen__deInit();
var Screen__clearScreen();
var Screen__setColor(var b);
var Screen__drawPixel(var x, var y);
var Screen__drawLine(var x, var y, var x2, var y2);
var Screen__drawRectangle(var x, var y, var x2, var y2);
var Screen__drawCircle(var x, var y, var r);
#endif


#if 0

#endif

#ifndef JACK_Math_H
#define JACK_Math_H
var Math__init();
var Math__deInit();
var Math__abs(var a);
var Math__multiply(var x, var y);
var Math__divide(var x, var y);
var Math__min(var x, var y);
var Math__max(var x, var y);
var Math__sqrt(var x);
var Math__shiftLeft(var value, var shift);
var Math__shiftRight(var value, var shift);
var Math__rem(var a, var b);
var Math__xor(var a, var b);
var Math__log2(var n);
var Math__sizeOfInt();
var Math__isBigEndian();
var Math__isWindows();
#endif


#if 0

#endif

#ifndef JACK_String_H
#define JACK_String_H
var String__new(var maxLength);
var String__dispose(var __this);
var String__length(var __this);
var String__charAt(var __this, var a);
var String__setCharAt(var __this, var j, var c);
var String__getArray(var __this);
var String__appendChar(var __this, var c);
var String__eraseLastChar(var __this);
var String__intValue(var __this);
var String__setInt(var __this, var j);
var String__appendFromNative(var __this, var native);
var String__ord(var s);
var String__backSpace();
var String__doubleQuote();
var String__newLine();
var String__copy(var __this);
var String__appendString(var __this, var p);
var String__compare(var __this, var s);
#endif


#if 0

#endif

#ifndef JACK_Memory_H
#define JACK_Memory_H
var Memory__init();
var Memory__deInit();
var Memory__peek(var addr);
var Memory__poke(var addr, var value);
var Memory__defrag();
var Memory__checkEmpty();
var Memory__alloc(var size);
var Memory__log(var msg, var p, var q);
var Memory__deAlloc(var p);
#endif


#if 0

#endif

#ifndef JACK_Keyboard_H
#define JACK_Keyboard_H
var Keyboard__exit();
var Keyboard__exits(var a, var b);
var Keyboard__init();
var Keyboard__deInit();
var Keyboard__keyPressed();
var Keyboard__getKey();
var Keyboard__getChar();
var Keyboard__readChar();
var Keyboard__readLine(var message);
var Keyboard__readInt(var message);
var Keyboard__NEWLINE();
var Keyboard__BACKSPACE();
var Keyboard__LEFT_ARROW();
var Keyboard__UP_ARROW();
var Keyboard__RIGHT_ARROW();
var Keyboard__DOWN_ARROW();
var Keyboard__HOME();
var Keyboard__END();
var Keyboard__PAGE_UP();
var Keyboard__PAGE_DOWN();
var Keyboard__INSERT();
var Keyboard__DELETE();
var Keyboard__ESC();
var Keyboard__F1();
var Keyboard__F2();
var Keyboard__F3();
var Keyboard__F4();
var Keyboard__F5();
var Keyboard__F6();
var Keyboard__F7();
var Keyboard__F8();
var Keyboard__F9();
var Keyboard__F10();
var Keyboard__F11();
var Keyboard__F12();
#endif


#if 0

#endif

#ifndef JACK_GuiDigit_H
#define JACK_GuiDigit_H
var GuiDigit__get_x_size();
var GuiDigit__get_y_size();
var GuiDigit__draw_one(var dblcol, var row);
var GuiDigit__draw_two(var dblcol, var row);
var GuiDigit__draw_three(var dblcol, var row);
var GuiDigit__draw_four(var dblcol, var row);
var GuiDigit__draw_five(var dblcol, var row);
var GuiDigit__draw_six(var dblcol, var row);
var GuiDigit__draw_seven(var dblcol, var row);
var GuiDigit__draw_eight(var dblcol, var row);
var GuiDigit__draw_nine(var dblcol, var row);
var GuiDigit__draw_zero(var dblcol, var row);
var GuiDigit__blank(var dblcol, var row);
#endif


#if 0

#endif

#ifndef JACK_Util_H
#define JACK_Util_H
var Util__mod(var a, var b);
var Util__xor(var a, var b);
#endif


#if 0

#endif

#ifndef JACK_Main_H
#define JACK_Main_H
var Main__main();
#endif

#define JACK_IMPLEMENTATION
/*
 *                     jack public domain compiler
 *
 *                      15 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *
 */


#ifndef JACK_MAIN_C_FILE
#define JACK_MAIN_C_FILE
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#ifndef _WIN32
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <termios.h>
#include <sys/ioctl.h>
#include <signal.h>
struct stat File__status;
struct termios Keyboard__term;
struct dirent *File__dp;
DIR *File__dir;
char **Sys__argv__;
#else
#include <windows.h>
#include <conio.h>
#include <io.h>
#include <direct.h>
struct __stat64 File__status;
HANDLE File__hFind;
WIN32_FIND_DATAW File__FindFileData;
LPWSTR *Sys__argv__;
int _nCmdShow = 0;
#endif
int Keyboard__flags;
int Sys__argc__;
var Memory__getString(var*);
unsigned char image32[512 * 256 * 4];
#ifdef JACK_HACK
var Memory__memory[65536];
#else
var Memory__memory[65536];
//var Memory__memory[1];
#endif

#ifdef JACK_IMPLEMENTATION
#ifndef _WIN32
int main(int argc, char *argv[]) {
	Sys__argc__ = argc;
	Sys__argv__ = argv;
#else
#ifdef _CONSOLE
int main(int argc, char *argv[]) {
#else
int WINAPI wWinMain(HINSTANCE hi,HINSTANCE prev,LPWSTR cmd,int nCmdShow) {
	_nCmdShow = nCmdShow;
	Sys__argv__ = CommandLineToArgvW(GetCommandLineW(), &Sys__argc__);
#endif
#endif
	Sys__init();
	return 0;
}

void screen2rgba(int width, int height) 
{
	int x, y, xx;
	var p;
	var m;
	int l;	
	m = 16384;
	for (y = 0; y < height; y++) {
		for (x = 0; x < (width >> 4); x++) {
			p = Memory__peek(m + (y * (width>>4)) + x);
			//l =  (height - y) * width + (x << 4);
			l =  y * width + (x << 4);
			for (xx = 0; xx < 16; xx++) {
				if ((p >> xx) & 0x01) {
					 image32[(l+xx)*4] = 0x0;
					 image32[(l+xx)*4+1] = 0x0;
					 image32[(l+xx)*4+2] = 0x0;
					 image32[(l+xx)*4+3] = 0xFF;
				} else {
					 image32[(l+xx)*4] = 0xFF;
					 image32[(l+xx)*4+1] = 0xFF;
					 image32[(l+xx)*4+2] = 0xFF;
					 image32[(l+xx)*4+3] = 0xFF;
				}
			}		
		}
	}
	return;
}


var Memory__getString(var* str) {
#ifndef JACK_HACK
#else
#endif
	static var in = 0;
	var m, i;
	if (in) {
		return 0;
	}
	in = -1;

	i = 0;
	while (str[i]) {
		i++;
	}
	m = String__new(i + 1);
	i = 0;
	while (str[i]) {
		String__appendChar(m, str[i]);
		i++;
	}	
	in = 0;
	return (var)m;
}

#endif
#endif
/*
 *                     jack public domain compiler
 *
 *                      15 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *
 */


#ifndef JACK_X11_C_H
#define JACK_X11_C_H
#ifndef _WIN32
#ifndef __APPLE__

#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/keysym.h>
#include <X11/keysymdef.h>
#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glx.h>
#include <GL/glext.h>
#include <GL/glu.h>

#ifdef JACK_IMPLEMENTATION
var Screen__need_refresh = -1;
Display *__display = NULL;
XImage *ximage;
int width = 512;
int height = 256;
Visual *visual;
Window window;
Window root;
GC gc;
XVisualInfo *vi;
Colormap cmap;
XSetWindowAttributes swa;
XWindowAttributes gwa;
GLXFBConfig *fbc;
GLuint base;
GLuint tex = 1;
Atom wm_del;
var isfirst = -1;
var is_wait = 0;
var need_update = -1;
GLint att[] = {GLX_RENDER_TYPE, GLX_RGBA_BIT, 
		GLX_DRAWABLE_TYPE, GLX_WINDOW_BIT,
	       	GLX_DOUBLEBUFFER, True,
		GLX_RED_SIZE, 1,
		GLX_GREEN_SIZE, 1,
		GLX_BLUE_SIZE, 1,
		None};
GLXContext glc;
void init();

var Screen__clear()
{
	var i, j;
	unsigned char *p;
	unsigned char *q;
	init();
	for (i = 0; i < height; i++) {
		p = image32 + (i * width * 4);	
		for (j = 0; j < width; j++) {
			q = p + (j << 2);
			q[0] = 0xFF; //blue
			q[1] = 0xFF; //green
			q[2] = 0xFF; //red
			q[3] = 0xFF; //alpha
		}
	}
	Screen__need_refresh = -1;
	return 0;
}

/*XImage *CreateImage()
{
	image32 = (unsigned char*)malloc(width * height * sizeof(unsigned int));
	//return XCreateImage(display, visual, 
	//		DefaultDepth(display, DefaultScreen(display)),
	//
	return NULL;
}*/


void init() 
{
	int fbcount;
	if (__display != NULL) {
		return;
	}
	__display = XOpenDisplay(NULL);
	root = DefaultRootWindow(__display);
	fbc = glXChooseFBConfig(__display, DefaultScreen(__display), att, &fbcount);
	if (fbc == NULL) {
		printf("\n Failed to get config.\n");
		return;
	}
	//vi = glXChooseVisual(display, 0, att);
	vi = glXGetVisualFromFBConfig(__display, fbc[0]);
	if (vi == NULL) {
		printf("\n No GL visual found.\n");
		return;
	}
	//visual = XDefaultVisual(display, 0);
	cmap = XCreateColormap(__display, root, vi->visual, AllocNone);
	swa.colormap = cmap;
	swa.event_mask = ButtonPressMask|ExposureMask|KeyPressMask
		|KeyReleaseMask;
	window = XCreateWindow(__display, root, 
			0, 0, width, height, 0, vi->depth, InputOutput,
			vi->visual, CWColormap|CWEventMask, &swa);  

	XMapWindow(__display, window);
	XStoreName(__display, window, "JACK Application");

	glc = glXCreateContext(__display, vi, NULL, GL_TRUE);
	glXMakeCurrent(__display, window, glc);
	//glEnable(GL_DEPTH_TEST);

	wm_del = XInternAtom(__display, "WM_DELETE_WINDOW", False);
	XSetWMProtocols(__display, window, &wm_del, 1);
	XMapWindow(__display, window);	
	
	glWindowPos2i(0, 0);
	glViewport(0, 0, width, height);
	glClearColor(1,1,1,1);
	glClearDepth(1);
	glGenTextures(1, &tex);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
	glEnable(GL_TEXTURE_2D);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glBindTexture(GL_TEXTURE_2D, 0);
}

var dump_font(var c);

void deInit()
{
	if (__display != NULL) {
		glXMakeCurrent(__display, None, NULL);
		glXDestroyContext(__display, glc);
		XDestroyWindow(__display, window);
		XCloseDisplay(__display);
		__display = NULL;
	}
}

void display()
{
	//glClearColor(1,0,0,1);
	//glClear(GL_COLOR_BUFFER_BIT);
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glLoadIdentity();
	glBegin(GL_QUADS);
	glColor4f(1, 1, 1, 1);
	glTexCoord2f(0,0); glVertex3f(-1,1, -1);
	glTexCoord2f(1,0); glVertex3f( 1,1, -1);
	glTexCoord2f(1,1); glVertex3f( 1, -1, -1);
	glTexCoord2f(0,1); glVertex3f(-1, -1, -1);
	glTexCoord2f(0,0); glVertex3f(-1,1, -1);
	glColor4f(0, 0, 0, 1);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, 0);
//	dump_font('A');
}


var dump_font(var c)
{
	FILE *f;
	int x, y, xx, i, l;
	char text[255];
	if (!c) {
		return 0;
	}
	Screen__clear();
	display();
	text[0] = c;
	glDisable(GL_TEXTURE_2D);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, height, 0, -1, 1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glRasterPos2i(0, 11);
//	glBegin(GL_QUADS);
//	glColor4f(0, 0, 0, 1);
//	glEnd();
	glListBase(base);
	glCallLists(1, GL_UNSIGNED_BYTE, text);
	glReadPixels(0, 0, width, height, GL_RGBA, 
			GL_UNSIGNED_BYTE, image32);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	i = (c - 32) * 6;
	f = fopen("Font.jack", "a+w");
	fprintf(f, "\t\t// %c (%d)\n", (int)c, (int)c);
	for (y = 0; y < 11; y++) {
		x = 0;
		l =  (height - y - 1) * width + (x << 4);
		c = 0;
		for (xx = 0; xx < 8; xx++) {
			if (!image32[(l+xx)*4+1]) {
				 c = c | (1 << xx);
			}
		}
		y++;
		l =  (height - y - 1) * width + (x << 4);
		if (y < 11) {
			for (xx = 0; xx < 8; xx++) {
				if (!image32[(l+xx)*4+1]) {
					 c = c | (256 << xx);
				}
			}
		}
		if (c > 32767) {
			if (c == 32768) {
				fprintf(f, "\t\tlet v[%d] = 32767 + 1;\n", i);
			} else {
				fprintf(f, "\t\tlet v[%d] = -%d;\n", i,
					((~(int)c) + 1) & 0x7FFF);
			}
		} else {
			fprintf(f, "\t\tlet v[%d] = %d;\n", i, (int)c);
		}
		i++;
	}
	fclose(f);
	return 0;
}


void make_font()
{
	var c;
	FILE *f;
	XFontStruct *fontInfo;
	Font id;
	unsigned int first,last;
	fontInfo = XLoadQueryFont(__display, "*-24-*");
	id = fontInfo->fid;
	first = fontInfo->min_char_or_byte2;
	last = fontInfo->max_char_or_byte2;
	base = glGenLists(last + 1);
	glXUseXFont(id, first, last-first+1, base+first);
	f = fopen("Font.jack", "a+w");
	fprintf(f, "class Font {\n");
	fprintf(f, "\tfield Array v;\n");
	fprintf(f, "\tconstructor Font new() {\n");
	fprintf(f, "\t\tlet v = Array.new(570);\n");
	fclose(f);
	for (c = 32; c < 127; c++) {
		dump_font(c);
	}
	Screen__clear();
	display();
}

var processEvent()
{
	XEvent ev;
	KeySym key;
	char text[255];
	int r;
	var c;

	XWindowAttributes a;

	XNextEvent(__display, &ev);
	gc = DefaultGC(__display, 0);
	switch (ev.type) {
	case KeyRelease:
		if (!is_wait) {
			Memory__poke(24576, 0);
		}
		return 0;
	case KeyPress:
		c = 0;
		r = XLookupString(&ev.xkey, text, 255, &key, 0);
		if (r == 1 && text[0]) {
			c = text[0];
		}
		switch (key) {
		case XK_Left:
			c = Keyboard__LEFT_ARROW();
			break;
		case XK_Right:
			c = Keyboard__RIGHT_ARROW();
			break;
		case XK_Up:
			c = Keyboard__UP_ARROW();
			break;
		case XK_Down:
			c = Keyboard__DOWN_ARROW();
			break;
		case XK_Return:
			c = Keyboard__NEWLINE();
			break;
		case XK_BackSpace:
			c = Keyboard__BACKSPACE();
			break;
		case XK_Home:
			c = Keyboard__HOME();
			break;
		case XK_Page_Up:
			c = Keyboard__PAGE_UP();
			break;
		case XK_Page_Down:
			c = Keyboard__PAGE_DOWN();
			break;
		case XK_Insert:
			c = Keyboard__INSERT();
			break;
		case XK_Delete:
			c = Keyboard__DELETE();
			break;
		case XK_Escape:
			c = Keyboard__ESC();
			break;
		case XK_F12:
			c = Keyboard__F12();
			break;
		}
		if (key >= XK_F1 && key <= XK_F11) {
			c = (key - XK_F1) + Keyboard__F1();
		}
		if (c) {	
			return c;
		}
		break;
	case Expose:
		XGetWindowAttributes(__display, window, &a);	
		glViewport(0, 0, a.width, a.height);
		glXMakeCurrent(__display, window, glc);
		display();
		//if (!done) {	
		//	make_font();
		//}
		glXSwapBuffers(__display, window);	
		isfirst = 0;	
		break;
	case ButtonPress:
		//printf("Click\n");	
		break;
	case ClientMessage:
		if (ev.xclient.data.l[0] == wm_del) {
			deInit();
			exit(0);
		}
		break;
	}
	return 0;
}

var refresh() 
{
	XEvent ev;
	init();
	screen2rgba(width, height);
	memset(&ev, 0, sizeof(ev));
	ev.type = Expose;
	ev.xexpose.window = window;
	XSendEvent(__display, window, True,ExposureMask, &ev);
	return 0;
}

var Screen__refresh()
{
	Screen__need_refresh = -1;
	return 0;
}

var Screen__processEvents(var iswait)
{
	static var nextk = 0;
	var e, r;

	r = nextk;
	nextk = 0;
	is_wait = iswait;
	init();
	if (Screen__need_refresh) {
		while (XPending(__display)) {
			e = processEvent();
			if (e) {
				if (r || iswait) {
					nextk = e;
				} else {
					r = e;
				}
			}
		}
		refresh();
		while (!XPending(__display)) {
			usleep(1000);
		}
	}
	while (XPending(__display)) {
		e = processEvent();
		if (e) {
			if (r || iswait) {
				nextk = e;
			} else {
				r = e;
			}
		}
	}
	if (!r) {
		if (!iswait && Screen__need_refresh) {
			usleep(1000);
		}
	} else {
		Memory__poke(24576, r);
	}
	Screen__need_refresh = 0;
	return r;
}


#endif // JACK_IMPLEMENTATION

#endif // __APPLE
#endif // _WIN32
#endif // H

/*
 *                     jack public domain compiler
 *
 *                      15 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *
 */


#ifndef JACK_WIN32_H
#define JACK_WIN32_H
#ifdef _WIN32
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <stdio.h>

#ifdef _WIN64
#else
#endif

#ifdef JACK_IMPLEMENTATION
HDC hDC;
HGLRC hRC;
HWND hWnd = NULL;
MSG msg;
HINSTANCE hInstance = 0;
PAINTSTRUCT ps;
var key = 0;
int width = 512;
int height = 256;
GLuint tex = 1;
var refresh = 0;
COORD coord;
HANDLE output;
var is_wait = 0;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glLoadIdentity();
	glBegin(GL_QUADS);
	glTexCoord2f(0,0); glVertex3f(-1,1, -1);
	glTexCoord2f(1,0); glVertex3f( 1,1, -1);
	glTexCoord2f(1,1); glVertex3f( 1, -1, -1);
	glTexCoord2f(0,1); glVertex3f(-1, -1, -1);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, 0);
	SwapBuffers(hDC);
}

void deInit()
{
	wglMakeCurrent(NULL, NULL);
	ReleaseDC(hWnd, hDC);
	wglDeleteContext(hRC);
	DestroyWindow(hWnd);
	exit(0);
}

LONG WINAPI WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	static var waskey = 0;
	RECT r;

	switch(uMsg) {
	case WM_PAINT:
		GetClientRect(hWnd, &r);
		BeginPaint(hWnd, &ps);
		EndPaint(hWnd, &ps);
		glViewport(0, 0, r.right, r.bottom);
		wglMakeCurrent(hDC, hRC);
		screen2rgba(width, height);
		display();
		return 0;
	case WM_SIZE:
		PostMessage(hWnd, WM_PAINT, 0, 0);
		return 0;
	case WM_KEYUP:
		key = 0;
		if (!is_wait) {
			Memory__poke(24576, 0);
		}
		break;
	case WM_KEYDOWN:
		switch (wParam) {
		case VK_LEFT:
			key = Keyboard__LEFT_ARROW();
			break;
		case VK_RIGHT:
			key = Keyboard__RIGHT_ARROW();
			break;
		case VK_UP:
			key = Keyboard__UP_ARROW();
			break;
		case VK_DOWN:
			key = Keyboard__DOWN_ARROW();
			break;
		case VK_RETURN:
			key = Keyboard__NEWLINE();
			break;
		case VK_BACK:
			key = Keyboard__BACKSPACE();
			break;
		case VK_HOME:
			key = Keyboard__HOME();
			break;
		case VK_PRIOR:
			key = Keyboard__PAGE_UP();
			break;
		case VK_NEXT:
			key = Keyboard__PAGE_DOWN();
			break;
		case VK_INSERT:
			key = Keyboard__INSERT();
			break;
		case VK_DELETE:
			key = Keyboard__DELETE();
			break;
		case VK_ESCAPE:
			key = Keyboard__ESC();
			break;
		}
		if (wParam >= VK_F1 && wParam <= VK_F12) {
			key = (wParam - VK_F1) + Keyboard__F1();
		}
		if (key) {
			waskey = -1;
			return 0;
		}
		waskey = 0;
		break;
	case WM_CHAR:
		key = wParam;
		if (waskey) {
			key = 0;
			waskey = 0;
		}
		return 0;
	case WM_QUIT:
		deInit();
		return 0;
		break;
	case WM_CLOSE:
		deInit();
		return 0;
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}


void init()
{	
	int pf;
	WNDCLASSW wc;
	PIXELFORMATDESCRIPTOR pfd;
	RECT r;
	DWORD s;
	if (hWnd) {
		return;
	}
	FreeConsole();
	if (!hInstance) {
		hInstance = GetModuleHandle(NULL);
		wc.style = CS_OWNDC;
		wc.lpfnWndProc = (WNDPROC)WindowProc;
		wc.cbClsExtra = 0;
		wc.cbWndExtra = 0;
		wc.hInstance = hInstance;
		wc.hIcon = LoadIcon(NULL, IDI_WINLOGO);
		wc.hCursor = LoadCursor(NULL, IDC_ARROW);
		wc.hbrBackground = NULL;
		wc.lpszMenuName = NULL;
		wc.lpszClassName = L"Jack App";
		if (!RegisterClass(&wc)) {
			printf("Cannot register class!!\n");
			return;
		}
	}
	r.top = 0;
	r.left = 0;
	r.bottom = height;
	r.right = width;
	s = WS_OVERLAPPEDWINDOW | WS_CLIPSIBLINGS | WS_CLIPCHILDREN;
	AdjustWindowRect(&r, s, FALSE);
	hWnd = CreateWindowW(L"Jack App", L"Jack application", s,
			CW_USEDEFAULT, CW_USEDEFAULT, 
			r.right - r.left , r.bottom - r.top,
			NULL, NULL, hInstance, NULL);
	if (hWnd == NULL) {
		printf("Cannot Create Window!!\n");
		return;
	}
	GetClientRect(hWnd, &r);
	
	hDC = GetDC(hWnd);
	memset(&pfd, 0, sizeof(pfd));
	pfd.nSize = sizeof(pfd);
	pfd.nVersion = 1;
	pfd.dwFlags = PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL;
	pfd.iPixelType = PFD_TYPE_RGBA;
	pfd.cColorBits = 32;

	pf = ChoosePixelFormat(hDC, &pfd);
	if (pf == 0) {
		printf("Cannot choose pixel format!\n");
		return;
	}

	if (SetPixelFormat(hDC, pf, &pfd) == FALSE) {
		printf("Cannot set pixel format!\n");
		return;
	}

	DescribePixelFormat(hDC, pf, sizeof(PIXELFORMATDESCRIPTOR), &pfd);

	ReleaseDC(hWnd, hDC);
	hDC = GetDC(hWnd);
	hRC = wglCreateContext(hDC);
	wglMakeCurrent(hDC, hRC);

	ShowWindow(hWnd, _nCmdShow);

	glClearColor(1,1,1,1);
	glClearDepth(1);
	glGenTextures(1, &tex);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
	//glBindTexture(GL_TEXTURE_2D, 0);
	glEnable(GL_TEXTURE_2D);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	//glViewport(0, 0, width, height);
}

var Screen__refresh() 
{
	if (refresh) return 0;
	refresh = -1;
	init();
	PostMessage(hWnd, WM_PAINT, 0, 0);
	return 0;
}

var Screen__processEvents(var iswait)
{
	static var nextk = 0;
	var k = nextk;
	nextk = 0;
	is_wait = iswait;
	init();
	key = 0;
	if (refresh) {
		while (PeekMessage(&msg, hWnd, 0, 0, PM_REMOVE)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
			if (key) { 
				if (k || iswait) {
					nextk = key;
				} else {
					k = key;
				}
				key = 0;
			}
		}
		PostMessage(hWnd, WM_PAINT, 0, 0);
		while (!PeekMessage(&msg, hWnd, 0, 0, PM_NOREMOVE)) {
			Sleep(2);
		}
	}
	while (PeekMessage(&msg, hWnd, 0, 0, PM_REMOVE)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
		if (key) {
			if (k || iswait) {
				nextk = key;
			} else {
				k = key;
			}
			key = 0;
		}
	}
	if (!k) {
		if (!iswait && refresh) {
			Sleep(2);
		}
	} else {
		Memory__poke(24576, k);
	}
	refresh = 0;
	return k;
}

#endif // JACK:IMPLEMENTATION

#endif // _WIN32
#endif // H

/*
 *                          Apple MacOS support
 *
 *                      7 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *  This source code is vastly inspired by that work :
 *  https://github.com:/jimon/osx_app_in_plain_c
 */

#ifndef JACK_MAC_H
#define JACK_MAC_H
#ifdef __APPLE__
#include <TargetConditionals.h>
#if TARGET_IPHONE_SIMULATOR
         // iOS Simulator
#elif TARGET_OS_IPHONE
        // iOS device
#elif TARGET_OS_MAC
        // Other kinds of Mac OS
#else
#   error "Unknown Apple platform"
#endif

#ifdef __LP64__
#define EncodeNSInteger "q"
#define EncodeNSUInteger "L"
#else
#define EncodeNSInteger "i"
#define EncodeNSUInteger "I"
#endif
#include <stdio.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>
#include <objc/NSObjCRuntime.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <CoreGraphics/CGBase.h>
#include <CoreGraphics/CGGeometry.h>
#include <Carbon/Carbon.h>

#define kVK_Insert 0x72

enum  {   
    	NSEventTypeLeftMouseDown             = 1,
    	NSEventTypeLeftMouseUp               = 2,
    	NSEventTypeRightMouseDown            = 3,
    	NSEventTypeRightMouseUp              = 4,
    	NSEventTypeMouseMoved                = 5,
    	NSEventTypeLeftMouseDragged          = 6,
    	NSEventTypeRightMouseDragged         = 7,
    	NSEventTypeMouseEntered              = 8,
    	NSEventTypeMouseExited               = 9,
    	NSEventTypeKeyDown                   = 10,
    	NSEventTypeKeyUp                     = 11,
    	NSEventTypeFlagsChanged              = 12,
    	NSEventTypeAppKitDefined             = 13,
    	NSEventTypeSystemDefined             = 14,
    	NSEventTypeApplicationDefined        = 15,
    	NSEventTypePeriodic                  = 16,
    	NSEventTypeCursorUpdate              = 17,
    	NSEventTypeScrollWheel               = 22,
    	NSEventTypeTabletPoint               = 23,
    	NSEventTypeTabletProximity           = 24,
    	NSEventTypeOtherMouseDown            = 25,
    	NSEventTypeOtherMouseUp              = 26,
    	NSEventTypeOtherMouseDragged         = 27,
    	NSEventTypeGesture  		     = 29,
    	NSEventTypeMagnify 		     = 30,
    	NSEventTypeSwipe   		     = 31,
    	NSEventTypeRotate  		     = 18,
    	NSEventTypeBeginGesture   	     = 19,
    	NSEventTypeEndGesture 		     = 20,
    	NSEventTypeSmartMagnify		     = 32,
    	NSEventTypeQuickLook 		     = 33,
    	NSEventTypePressure 		     = 34,
    	NSEventTypeDirectTouch 		     = 37,
	NSEventTypeChangeMode 		     = 38
};

enum {
    	NSOpenGLPFAAllRenderers           =   1,
    	NSOpenGLPFATripleBuffer           =   3,
    	NSOpenGLPFADoubleBuffer           =   5,	
    	NSOpenGLPFAAuxBuffers             =   7,	
    	NSOpenGLPFAColorSize              =   8,	
    	NSOpenGLPFAAlphaSize              =  11,	
    	NSOpenGLPFADepthSize              =  12,	
    	NSOpenGLPFAStencilSize            =  13,	
    	NSOpenGLPFAAccumSize              =  14,
    	NSOpenGLPFAMinimumPolicy          =  51,	
    	NSOpenGLPFAMaximumPolicy          =  52,	
    	NSOpenGLPFASampleBuffers          =  55,	
    	NSOpenGLPFASamples                =  56,	
    	NSOpenGLPFAAuxDepthStencil        =  57,	
    	NSOpenGLPFAColorFloat             =  58,	
    	NSOpenGLPFAMultisample            =  59,    
    	NSOpenGLPFASupersample            =  60,    
    	NSOpenGLPFASampleAlpha            =  61,    
    	NSOpenGLPFARendererID             =  70,	
    	NSOpenGLPFANoRecovery             =  72,	
    	NSOpenGLPFAAccelerated            =  73,	
    	NSOpenGLPFAClosestPolicy          =  74,	
    	NSOpenGLPFABackingStore           =  76,	
    	NSOpenGLPFAScreenMask             =  84,	
    	NSOpenGLPFAAllowOfflineRenderers  =  96,  
    	NSOpenGLPFAAcceleratedCompute     =  97,	
    	NSOpenGLPFAOpenGLProfile          =  99,  
    	NSOpenGLPFAVirtualScreenCount     = 128,	
    	NSOpenGLPFAStereo                 =   6,
    	NSOpenGLPFAOffScreen              =  53,
    	NSOpenGLPFAFullScreen             =  54,
    	NSOpenGLPFASingleRenderer         =  71,
    	NSOpenGLPFARobust                 =  75,
    	NSOpenGLPFAMPSafe                 =  78,
    	NSOpenGLPFAWindow                 =  80,
    	NSOpenGLPFAMultiScreen            =  81,
    	NSOpenGLPFACompliant              =  83,
    	NSOpenGLPFAPixelBuffer            =  90,
    	NSOpenGLPFARemotePixelBuffer      =  91,
};


typedef CGPoint NSPoint;
typedef CGRect NSRect;
extern id NSApp;
extern id const NSDefaultRunLoopMode;

#ifdef __arm64__
#define objc_msgSend_stret objc_msgSend
#define objc_msgSend_fpret objc_msgSend
#endif
#define objc_msgSend ((id(*)(id,SEL,...))objc_msgSend)

#ifdef JACK_IMPLEMENTATION

int windowCount = 0;
int width = 512;
int height = 256;
var refresh_ = 0;
var key = 0;
var is_wait = 0;
SEL allocSel = 0;
SEL initSel;
GLuint tex = 1;
id pool;
Class NSAutoreleasePoolClass;
id poolAlloc;
Class NSApplicationClass;
SEL sharedApplicationSel;
SEL setActivationPolicySel;
Class NSObjectClass;
Class AppDelegateClass;
Protocol* NSApplicationDelegateProtocol;
bool resultAddProtoc;
SEL applicationShouldTerminateSel;
bool resultAddMethod;
id dgAlloc;
id dg;
SEL autoreleaseSel;
SEL setDelegateSel;
SEL finishLaunchingSel;
Class NSMenuClass;
id menubarAlloc;
id menubar;
Class NSMenuItemClass;
id appMenuItemAlloc;
id appMenuItem;
SEL addItemSel;
SEL setMainMenuSel;
id appMenuAlloc;
id appMenu;
Class NSProcessInfoClass;
SEL processInfoSel;
id processInfo;
SEL processNameSel;
id appName;
Class NSStringClass;
SEL stringWithUTF8StringSel;
id quitTitlePrefixString;
SEL stringByAppendingStringSel;
id quitTitle;
id quitMenuItemKey;
id quitMenuItemAlloc;
SEL initWithTitleSel;
SEL terminateSel;
id quitMenuItem;
SEL setSubmenuSel;
NSRect rect = {{0, 0}, {512, 256}};
Class NSWindowClass;
id windowAlloc;
SEL initWithContentRectSel;
id window;
SEL setReleasedWhenClosedSel;
Class WindowDelegateClass;
Protocol* NSWindowDelegateProtocol;
SEL windowWillCloseSel;
id wdgAlloc;
id wdg;
SEL contentViewSel;
id contentView;
SEL setWantsBestResolutionOpenGLSurfaceSel;
NSPoint point = {20, 20};
SEL cascadeTopLeftFromPointSel;
id titleString;
SEL setTitleSel;
uint32_t glAttributes[] = { 
	NSOpenGLPFADoubleBuffer,
	NSOpenGLPFAColorSize, 24,
	NSOpenGLPFAAlphaSize, 8,
	0};
Class NSOpenGLPixelFormatClass;
id pixelFormatAlloc;
SEL initWithAttributesSel;
id pixelFormat;
Class NSOpenGLContextClass;
id openGLContextAlloc;
SEL initWithFormatSel;
id openGLContext;
SEL setViewSel;
SEL makeKeyAndOrderFrontSel;
SEL setAcceptsMouseMovedEventsSel;
Class NSColorClass;
id blackColor;
SEL setBackgroundColorSel;
SEL activateIgnoringOtherAppsSel;
Class NSDateClass;
SEL distantPastSel;
SEL nextEventMatchingMaskSel;
SEL frameSel;
SEL typeSel;
SEL buttonNumberSel;
SEL keyCodeSel;
SEL keyWindowSel;
SEL mouseLocationOutsideOfEventStreamSel;
SEL convertRectToBackingSel;
SEL scrollingDeltaXSel;
SEL scrollingDeltaYSel;
SEL hasPreciseScrollingDeltasSel;
SEL modifierFlagsSel;
SEL charactersSel;
SEL UTF8StringSel;
SEL sendEventSel;
SEL updateWindowsSel;
SEL updateSel;
SEL makeCurrentContextSel;
SEL flushBufferSel;
id distantPast;
id event;
NSUInteger eventType;
id currentWindow;
id currentWindowContentView;
NSRect adjustFrame;
NSPoint p;
NSRect r = {0, 0, 0, 0};
NSInteger number;
CGFloat deltaX;
CGFloat deltaY;
BOOL precisionScrolling;
NSUInteger modifiers;
id inputText;
const char * inputTextUTF8;
uint16_t keyCode;
int terminate = 0;

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glLoadIdentity();
	glBegin(GL_QUADS);
	glTexCoord2f(0,0); glVertex3f(-1,1, -1);
	glTexCoord2f(1,0); glVertex3f( 1,1, -1);
	glTexCoord2f(1,1); glVertex3f( 1, -1, -1);
	glTexCoord2f(0,1); glVertex3f(-1, -1, -1);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, 0);
}

void deInit()
{
	objc_msgSend(pool, sel_registerName("drain"));
}

NSUInteger applicationShouldTerminate(id self, SEL _sel, id sender)
{
	deInit();
	return 1;
}

void windowWillClose(id self, SEL _sel, id notification)
{
	deInit();
	terminate = -1;
}

void init()
{
	if (allocSel) return;

	allocSel = sel_registerName("alloc");
	initSel = sel_registerName("init");

	NSAutoreleasePoolClass = objc_getClass("NSAutoreleasePool");
	poolAlloc = objc_msgSend((id)NSAutoreleasePoolClass, allocSel);
	pool = objc_msgSend(poolAlloc, initSel);

	NSApplicationClass = objc_getClass("NSApplication");
	sharedApplicationSel = sel_registerName("sharedApplication");
	objc_msgSend((id)NSApplicationClass, sharedApplicationSel);

	setActivationPolicySel = sel_registerName("setActivationPolicy:");
	objc_msgSend(NSApp, setActivationPolicySel, 0);

	NSObjectClass = objc_getClass("NSObject");
	AppDelegateClass = objc_allocateClassPair(
			NSObjectClass, "AppDelegate", 0);
	NSApplicationDelegateProtocol = objc_getProtocol(
			"NSApplicationDelegate");
	resultAddProtoc = class_addProtocol(
			AppDelegateClass, NSApplicationDelegateProtocol);
	applicationShouldTerminateSel = sel_registerName(
			"applicationShouldTerminate:");
	resultAddMethod = class_addMethod(
			AppDelegateClass, applicationShouldTerminateSel, 
			(IMP)applicationShouldTerminate, 
			EncodeNSUInteger "@:@");
	dgAlloc = objc_msgSend((id)AppDelegateClass, allocSel);
	dg = objc_msgSend(dgAlloc, initSel);

	autoreleaseSel = sel_registerName("autorelease");
	objc_msgSend(dg, autoreleaseSel);

	setDelegateSel = sel_registerName("setDelegate:");
	objc_msgSend(NSApp, setDelegateSel, dg);

	finishLaunchingSel = sel_registerName("finishLaunching");
	objc_msgSend(NSApp, finishLaunchingSel);

	NSMenuClass = objc_getClass("NSMenu");
	menubarAlloc = objc_msgSend((id)NSMenuClass, allocSel);
	menubar = objc_msgSend(menubarAlloc, initSel);
	objc_msgSend(menubar, autoreleaseSel);

	NSMenuItemClass = objc_getClass("NSMenuItem");
	appMenuItemAlloc = objc_msgSend((id)NSMenuItemClass, allocSel);
	appMenuItem = objc_msgSend(appMenuItemAlloc, initSel);
	objc_msgSend(appMenuItem, autoreleaseSel);

	addItemSel = sel_registerName("addItem:");
	objc_msgSend(menubar, addItemSel, appMenuItem);

	setMainMenuSel = sel_registerName("setMainMenu:");
	objc_msgSend(NSApp, setMainMenuSel, menubar);

	appMenuAlloc = objc_msgSend((id)NSMenuClass, allocSel);
	appMenu = objc_msgSend(appMenuAlloc, initSel);
	objc_msgSend(appMenu, autoreleaseSel);

	NSProcessInfoClass = objc_getClass("NSProcessInfo");
	processInfoSel = sel_registerName("processInfo");
	processInfo = objc_msgSend((id)NSProcessInfoClass, processInfoSel);
	processNameSel = sel_registerName("processName");
	appName = objc_msgSend(processInfo, processNameSel);

	NSStringClass = objc_getClass("NSString");
	stringWithUTF8StringSel = sel_registerName("stringWithUTF8String:");
	quitTitlePrefixString = objc_msgSend(
			(id)NSStringClass, stringWithUTF8StringSel, "Quit ");
	stringByAppendingStringSel = sel_registerName(
			"stringByAppendingString:");
	quitTitle = objc_msgSend(quitTitlePrefixString, 
			stringByAppendingStringSel, appName);

	quitMenuItemKey = objc_msgSend((id)NSStringClass, 
			stringWithUTF8StringSel, "q");
	quitMenuItemAlloc = objc_msgSend((id)NSMenuItemClass, allocSel);
	initWithTitleSel = sel_registerName(
			"initWithTitle:action:keyEquivalent:");
	terminateSel = sel_registerName("terminate:");
	quitMenuItem = objc_msgSend(quitMenuItemAlloc, 
			initWithTitleSel, quitTitle, 
			terminateSel, quitMenuItemKey);
	objc_msgSend(quitMenuItem, autoreleaseSel);

	objc_msgSend(appMenu, addItemSel, quitMenuItem);

	setSubmenuSel = sel_registerName("setSubmenu:");
	objc_msgSend(appMenuItem, setSubmenuSel, appMenu);

	NSWindowClass = objc_getClass("NSWindow");
	windowAlloc = objc_msgSend((id)NSWindowClass, allocSel);
	initWithContentRectSel = sel_registerName(
			"initWithContentRect:styleMask:backing:defer:");
	window = objc_msgSend(windowAlloc, initWithContentRectSel, 
			rect, 15, 2, NO);
	objc_msgSend(window, autoreleaseSel);

	setReleasedWhenClosedSel = sel_registerName("setReleasedWhenClosed:");
	objc_msgSend(window, setReleasedWhenClosedSel, NO);

	windowCount = 1;

	WindowDelegateClass = objc_allocateClassPair(
			NSObjectClass, "WindowDelegate", 0);
	NSWindowDelegateProtocol = objc_getProtocol("NSWindowDelegate");
	resultAddProtoc = class_addProtocol(
			WindowDelegateClass, NSWindowDelegateProtocol);
	windowWillCloseSel = sel_registerName("windowWillClose:");
	resultAddMethod = class_addMethod(
			WindowDelegateClass, windowWillCloseSel, 
			(IMP)windowWillClose,  "v@:@");
	wdgAlloc = objc_msgSend((id)WindowDelegateClass, allocSel);
	wdg = objc_msgSend(wdgAlloc, initSel);
	objc_msgSend(wdg, autoreleaseSel);

	objc_msgSend(window, setDelegateSel, wdg);

	contentViewSel = sel_registerName("contentView");
	contentView = objc_msgSend(window, contentViewSel);

	setWantsBestResolutionOpenGLSurfaceSel = sel_registerName(
			"setWantsBestResolutionOpenGLSurface:");
	objc_msgSend(contentView, 
			setWantsBestResolutionOpenGLSurfaceSel, YES);
	cascadeTopLeftFromPointSel = sel_registerName(
			"cascadeTopLeftFromPoint:");
	objc_msgSend(window, cascadeTopLeftFromPointSel, point);

	titleString = objc_msgSend((id)NSStringClass, 
			stringWithUTF8StringSel, "JACK Application");
	setTitleSel = sel_registerName("setTitle:");
	objc_msgSend(window, setTitleSel, titleString);

	NSOpenGLPixelFormatClass = objc_getClass("NSOpenGLPixelFormat");
	pixelFormatAlloc = objc_msgSend(
			(id)NSOpenGLPixelFormatClass, allocSel);
	initWithAttributesSel = sel_registerName("initWithAttributes:");
	pixelFormat = objc_msgSend(pixelFormatAlloc, 
			initWithAttributesSel, glAttributes);
	objc_msgSend(pixelFormat, autoreleaseSel);

	NSOpenGLContextClass = objc_getClass("NSOpenGLContext");
	openGLContextAlloc = objc_msgSend((id)NSOpenGLContextClass, allocSel);
	initWithFormatSel = sel_registerName("initWithFormat:shareContext:");
	openGLContext = objc_msgSend(openGLContextAlloc, 
			initWithFormatSel, pixelFormat, nil);
	objc_msgSend(openGLContext, autoreleaseSel);

	setViewSel = sel_registerName("setView:");
	objc_msgSend(openGLContext, setViewSel, contentView);

	makeKeyAndOrderFrontSel = sel_registerName("makeKeyAndOrderFront:");
	objc_msgSend(window, makeKeyAndOrderFrontSel, window);

	setAcceptsMouseMovedEventsSel = sel_registerName(
			"setAcceptsMouseMovedEvents:");
	objc_msgSend(window, setAcceptsMouseMovedEventsSel, YES);

	NSColorClass = objc_getClass("NSColor");
	blackColor = ((id (*)(Class, SEL))objc_msgSend)(
			NSColorClass, sel_registerName("blackColor"));
	setBackgroundColorSel = sel_registerName("setBackgroundColor:");
	objc_msgSend(window, setBackgroundColorSel, blackColor);

	activateIgnoringOtherAppsSel = sel_registerName(
			"activateIgnoringOtherApps:");
	objc_msgSend(NSApp, activateIgnoringOtherAppsSel, YES);


	NSDateClass = objc_getClass("NSDate");
	distantPastSel = sel_registerName("distantPast");
	nextEventMatchingMaskSel = sel_registerName(
			"nextEventMatchingMask:untilDate:inMode:dequeue:");
	frameSel = sel_registerName("frame");
	typeSel = sel_registerName("type");
	buttonNumberSel = sel_registerName("buttonNumber");
	keyCodeSel = sel_registerName("keyCode");
	keyWindowSel = sel_registerName("keyWindow");
	mouseLocationOutsideOfEventStreamSel = sel_registerName(
			"mouseLocationOutsideOfEventStream");
	convertRectToBackingSel = sel_registerName("convertRectToBacking:");
	scrollingDeltaXSel = sel_registerName("scrollingDeltaX");
	scrollingDeltaYSel = sel_registerName("scrollingDeltaY");
	hasPreciseScrollingDeltasSel = sel_registerName(
			"hasPreciseScrollingDeltas");
	modifierFlagsSel = sel_registerName("modifierFlags");
	charactersSel = sel_registerName("characters");
	UTF8StringSel = sel_registerName("UTF8String");
	sendEventSel = sel_registerName("sendEvent:");
	updateWindowsSel = sel_registerName("updateWindows");
	updateSel = sel_registerName("update");
	makeCurrentContextSel = sel_registerName("makeCurrentContext");
	flushBufferSel = sel_registerName("flushBuffer");
	return;
}

void initgl()
{

	objc_msgSend(NSApp, updateWindowsSel);

	objc_msgSend(openGLContext, updateSel);

	objc_msgSend(openGLContext, makeCurrentContextSel);

	rect = ((NSRect(*)(id,SEL))objc_msgSend_stret)(contentView, frameSel);

	rect = ((NSRect(*)(id,SEL,NSRect))objc_msgSend_stret)(
			contentView, convertRectToBackingSel, rect);

	glViewport(0, 0, rect.size.width, rect.size.height);
	glClearColor(1,1,1,1);
	glClearDepth(1);
	glGenTextures(1, &tex);
	glBindTexture(GL_TEXTURE_2D, tex);
	glTexImage2D(
		GL_TEXTURE_2D,
		0,
		3,
		width,
		height,
		0,
		GL_RGBA,
		GL_UNSIGNED_BYTE,
		image32);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);
	glEnable(GL_TEXTURE_2D);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

var getKey(var k)
{
	var key = 0;
	switch (k) {
	case kVK_LeftArrow:
		key = Keyboard__LEFT_ARROW();
		break;
	case kVK_RightArrow:
		key = Keyboard__RIGHT_ARROW();
		break;
	case kVK_UpArrow:
		key = Keyboard__UP_ARROW();
		break;
	case kVK_DownArrow:
		key = Keyboard__DOWN_ARROW();
		break;
	case kVK_Return:
		key = Keyboard__NEWLINE();
		break;
	case kVK_Delete:
		key = Keyboard__BACKSPACE();
		break;
	case kVK_Home:
		key = Keyboard__HOME();
		break;
	case kVK_PageUp:
		key = Keyboard__PAGE_UP();
		break;
	case kVK_PageDown:
		key = Keyboard__PAGE_DOWN();
		break;
	case kVK_Insert:
		key = Keyboard__INSERT();
		break;
	case kVK_ForwardDelete:
		key = Keyboard__DELETE();
		break;
	case kVK_Escape:
		key = Keyboard__ESC();
		break;
	case kVK_F1:
		key = Keyboard__F1();
		break;
	case kVK_F2:
		key = Keyboard__F2();
		break;
	case kVK_F3:
		key = Keyboard__F3();
		break;
	case kVK_F4:
		key = Keyboard__F4();
		break;
	case kVK_F5:
		key = Keyboard__F5();
		break;
	case kVK_F6:
		key = Keyboard__F6();
		break;
	case kVK_F7:
		key = Keyboard__F7();
		break;
	case kVK_F8:
		key = Keyboard__F8();
		break;
	case kVK_F9:
		key = Keyboard__F9();
		break;
	case kVK_F10:
		key = Keyboard__F10();
		break;
	case kVK_F11:
		key = Keyboard__F11();
		break;
	case kVK_F12:
		key = Keyboard__F12();
		break;
	}

	return key;	
}

int check_event()
{

	distantPast = objc_msgSend((id)NSDateClass, distantPastSel);
	event = objc_msgSend(NSApp, nextEventMatchingMaskSel, 
				NSUIntegerMax, distantPast, 
				NSDefaultRunLoopMode, YES);
	if (!event) return 0;
	eventType = (NSUInteger)objc_msgSend(event, typeSel);

	switch (eventType) {
	case NSEventTypeMouseMoved:
	case NSEventTypeLeftMouseDragged:
	case NSEventTypeRightMouseDragged:
	case NSEventTypeOtherMouseDragged:
		currentWindow = objc_msgSend(NSApp, keyWindowSel);
		currentWindowContentView = objc_msgSend(
				currentWindow, contentViewSel);
		adjustFrame = ((NSRect(*)(id,SEL))objc_msgSend_stret)(
				currentWindowContentView, frameSel);
		p = ((NSPoint(*)(id,SEL))objc_msgSend)(
				currentWindow, 
				mouseLocationOutsideOfEventStreamSel);
		if (p.x < 0) {
			p.x = 0;
		} else if (p.x > adjustFrame.size.width) {
			p.x = adjustFrame.size.width;
		}
		if (p.y < 0) {
			p.y = 0;
		} else if (p.y > adjustFrame.size.height) {
		       	p.y = adjustFrame.size.height;
		}
		r.origin.x = p.x;
		r.origin.y = p.y;
		r.size.width = 0;
		r.size.height = 0;
		r = ((NSRect(*)(id,SEL,NSRect))objc_msgSend_stret)(
				currentWindowContentView, 
				convertRectToBackingSel, r);
		p = r.origin;

		break;
	case NSEventTypeLeftMouseDown:
		break;
	case NSEventTypeLeftMouseUp:
		break;
	case NSEventTypeRightMouseDown:
		break;
	case NSEventTypeRightMouseUp:
		break;
	case NSEventTypeOtherMouseDown:
		number = (NSInteger)objc_msgSend(event, buttonNumberSel);
		break;
	case NSEventTypeOtherMouseUp:
		number = (NSInteger)objc_msgSend(event, buttonNumberSel);
		break;
	case NSEventTypeScrollWheel:
		deltaX = ((CGFloat(*)(id,SEL))objc_msgSend_fpret)(
				event, scrollingDeltaXSel);
		deltaY = ((CGFloat(*)(id,SEL))objc_msgSend_fpret)(
				event, scrollingDeltaYSel);
		precisionScrolling = (BOOL)objc_msgSend(
				event, hasPreciseScrollingDeltasSel);

		if (precisionScrolling) {
			deltaX *= 0.1f; 
			deltaY *= 0.1f;
		}
		break;
	case NSEventTypeFlagsChanged:
		modifiers = (NSUInteger)objc_msgSend(event, modifierFlagsSel);
		break;
	case NSEventTypeKeyDown:
		inputText = objc_msgSend(event, charactersSel);
		inputTextUTF8 = (const char*)objc_msgSend(
				inputText, UTF8StringSel);
		keyCode = (unsigned short)objc_msgSend(event, keyCodeSel);
		key = getKey(keyCode);

		if (!key && inputTextUTF8) {
			key = inputTextUTF8[0]; // FIXME
		}
		break;
	case NSEventTypeKeyUp:
		keyCode = (unsigned short)objc_msgSend(event, keyCodeSel);
		key = 0;
		if (!is_wait) {
			Memory__poke(24576, 0);
		}
		break;
	default:
		break;
	}

	objc_msgSend(NSApp, sendEventSel, event);
	initgl();
	return 1;
}

void update()
{

	objc_msgSend(NSApp, updateWindowsSel);

	objc_msgSend(openGLContext, updateSel);

	objc_msgSend(openGLContext, makeCurrentContextSel);

	rect = ((NSRect(*)(id,SEL))objc_msgSend_stret)(contentView, frameSel);

	rect = ((NSRect(*)(id,SEL,NSRect))objc_msgSend_stret)(
			contentView, convertRectToBackingSel, rect);

	glViewport(0, 0, rect.size.width, rect.size.height);
	screen2rgba(width, height);
	display();
	objc_msgSend(openGLContext, flushBufferSel);
}


var Screen__refresh() 
{
	if (refresh_) return 0;
	refresh_ = -1;
	init();
	return 0;
}

var Screen__processEvents(var iswait)
{
	static var nextk = 0;
	var k = nextk;
	is_wait = iswait;
	nextk = 0;
	init();
	key = 0;
	while (check_event()) {
		if (key) {
			if (k || iswait) {
				nextk = key;
			} else {
				k = key;
			}
			key = 0;
		}
	}
	if (terminate) {
		objc_msgSend(NSApp, terminateSel);
	}
	update();
	if (!k) {
		if (!iswait && refresh_) {
			usleep(1000);
		}
	} else {
		Memory__poke(24576, k);
	}
	refresh_ = 0;
	return k;
}


#endif // JACK_IMPLEMENTATION

#endif // __APPLE__
#endif // H

/*
 *                     jack public domain compiler
 *
 *                      15 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *
 */


/*
 *                     jack public domain compiler
 *
 *                      15 may MMXXI PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *
 */


#ifdef JACK_IMPLEMENTATION
var GuiDocGoalT0__get_x_size() {
	return 112;
}
var GuiDocGoalT0__get_y_size() {
	return 105;
}
var GuiDocGoalT0__draw(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+4+0, 64);
	Memory__poke(base_address+2+0, 8);
	Memory__poke(base_address+4+32, 64);
	Memory__poke(base_address+2+32, 8);
	Memory__poke(base_address+4+64, 64);
	Memory__poke(base_address+2+64, 8);
	Memory__poke(base_address+4+96, 64);
	Memory__poke(base_address+2+96, 8);
	Memory__poke(base_address+4+128, 64);
	Memory__poke(base_address+2+128, 8);
	Memory__poke(base_address+4+160, 64);
	Memory__poke(base_address+2+160, 8);
	Memory__poke(base_address+5+192, 1008);
	Memory__poke(base_address+4+192, 64);
	Memory__poke(base_address+3+192, 126);
	Memory__poke(base_address+2+192, 8);
	Memory__poke(base_address+1+192, 15);
	Memory__poke(base_address+0+192, -16384);
	Memory__poke(base_address+5+224, 8190);
	Memory__poke(base_address+4+224, 64);
	Memory__poke(base_address+3+224, 1023);
	Memory__poke(base_address+2+224, -16376);
	Memory__poke(base_address+1+224, 127);
	Memory__poke(base_address+0+224, -2048);
	Memory__poke(base_address+5+256, 16383);
	Memory__poke(base_address+4+256, 64);
	Memory__poke(base_address+3+256, 2047);
	Memory__poke(base_address+2+256, -8184);
	Memory__poke(base_address+1+256, 255);
	Memory__poke(base_address+0+256, -1024);
	Memory__poke(base_address+5+288, 32767);
	Memory__poke(base_address+4+288, -32704);
	Memory__poke(base_address+3+288, 4095);
	Memory__poke(base_address+2+288, -4088);
	Memory__poke(base_address+1+288, 511);
	Memory__poke(base_address+0+288, -512);
	Memory__poke(base_address+5+320, -1);
	Memory__poke(base_address+4+320, -16320);
	Memory__poke(base_address+3+320, 8191);
	Memory__poke(base_address+2+320, -2040);
	Memory__poke(base_address+1+320, 1023);
	Memory__poke(base_address+0+320, -256);
	Memory__poke(base_address+6+352, 1);
	Memory__poke(base_address+5+352, -1);
	Memory__poke(base_address+4+352, -8128);
	Memory__poke(base_address+3+352, 16383);
	Memory__poke(base_address+2+352, -1016);
	Memory__poke(base_address+1+352, 2047);
	Memory__poke(base_address+0+352, -128);
	Memory__poke(base_address+6+384, 1);
	Memory__poke(base_address+5+384, -1);
	Memory__poke(base_address+4+384, -8128);
	Memory__poke(base_address+3+384, 16383);
	Memory__poke(base_address+2+384, -1016);
	Memory__poke(base_address+1+384, 2047);
	Memory__poke(base_address+0+384, -128);
	Memory__poke(base_address+6+416, 1);
	Memory__poke(base_address+5+416, -1);
	Memory__poke(base_address+4+416, -8128);
	Memory__poke(base_address+3+416, 16383);
	Memory__poke(base_address+2+416, -1016);
	Memory__poke(base_address+1+416, 2047);
	Memory__poke(base_address+0+416, -128);
	Memory__poke(base_address+6+448, 3);
	Memory__poke(base_address+5+448, -1);
	Memory__poke(base_address+4+448, -4032);
	Memory__poke(base_address+3+448, 32767);
	Memory__poke(base_address+2+448, -504);
	Memory__poke(base_address+1+448, 4095);
	Memory__poke(base_address+0+448, -64);
	Memory__poke(base_address+6+480, 3);
	Memory__poke(base_address+5+480, -1);
	Memory__poke(base_address+4+480, -4032);
	Memory__poke(base_address+3+480, 32767);
	Memory__poke(base_address+2+480, -504);
	Memory__poke(base_address+1+480, 4095);
	Memory__poke(base_address+0+480, -64);
	Memory__poke(base_address+6+512, 3);
	Memory__poke(base_address+5+512, -1);
	Memory__poke(base_address+4+512, -4032);
	Memory__poke(base_address+3+512, 32767);
	Memory__poke(base_address+2+512, -504);
	Memory__poke(base_address+1+512, 4095);
	Memory__poke(base_address+0+512, -64);
	Memory__poke(base_address+6+544, 3);
	Memory__poke(base_address+5+544, -1);
	Memory__poke(base_address+4+544, -4032);
	Memory__poke(base_address+3+544, 32767);
	Memory__poke(base_address+2+544, -504);
	Memory__poke(base_address+1+544, 4095);
	Memory__poke(base_address+0+544, -64);
	Memory__poke(base_address+6+576, 3);
	Memory__poke(base_address+5+576, -1);
	Memory__poke(base_address+4+576, -4032);
	Memory__poke(base_address+3+576, 32767);
	Memory__poke(base_address+2+576, -504);
	Memory__poke(base_address+1+576, 4095);
	Memory__poke(base_address+0+576, -64);
	Memory__poke(base_address+6+608, 3);
	Memory__poke(base_address+5+608, -1);
	Memory__poke(base_address+4+608, -4032);
	Memory__poke(base_address+3+608, 32767);
	Memory__poke(base_address+2+608, -504);
	Memory__poke(base_address+1+608, 4095);
	Memory__poke(base_address+0+608, -64);
	Memory__poke(base_address+6+640, 1);
	Memory__poke(base_address+5+640, -1);
	Memory__poke(base_address+4+640, -8128);
	Memory__poke(base_address+3+640, 16383);
	Memory__poke(base_address+2+640, -1016);
	Memory__poke(base_address+1+640, 2047);
	Memory__poke(base_address+0+640, -128);
	Memory__poke(base_address+6+672, 1);
	Memory__poke(base_address+5+672, -1);
	Memory__poke(base_address+4+672, -8128);
	Memory__poke(base_address+3+672, 16383);
	Memory__poke(base_address+2+672, -1016);
	Memory__poke(base_address+1+672, 2047);
	Memory__poke(base_address+0+672, -128);
	Memory__poke(base_address+6+704, 1);
	Memory__poke(base_address+5+704, -1);
	Memory__poke(base_address+4+704, -8128);
	Memory__poke(base_address+3+704, 16383);
	Memory__poke(base_address+2+704, -1016);
	Memory__poke(base_address+1+704, 2047);
	Memory__poke(base_address+0+704, -128);
	Memory__poke(base_address+5+736, -1);
	Memory__poke(base_address+4+736, -16320);
	Memory__poke(base_address+3+736, 8191);
	Memory__poke(base_address+2+736, -2040);
	Memory__poke(base_address+1+736, 1023);
	Memory__poke(base_address+0+736, -256);
	Memory__poke(base_address+5+768, 32767);
	Memory__poke(base_address+4+768, -32704);
	Memory__poke(base_address+3+768, 4095);
	Memory__poke(base_address+2+768, -4088);
	Memory__poke(base_address+1+768, 511);
	Memory__poke(base_address+0+768, -512);
	Memory__poke(base_address+5+800, 16383);
	Memory__poke(base_address+4+800, 64);
	Memory__poke(base_address+3+800, 2047);
	Memory__poke(base_address+2+800, -8184);
	Memory__poke(base_address+1+800, 255);
	Memory__poke(base_address+0+800, -1024);
	Memory__poke(base_address+5+832, 8190);
	Memory__poke(base_address+4+832, 15936);
	Memory__poke(base_address+3+832, 1023);
	Memory__poke(base_address+2+832, -15480);
	Memory__poke(base_address+1+832, 127);
	Memory__poke(base_address+0+832, -2032);
	Memory__poke(base_address+5+864, 1008);
	Memory__poke(base_address+4+864, 8256);
	Memory__poke(base_address+3+864, 126);
	Memory__poke(base_address+2+864, 1096);
	Memory__poke(base_address+1+864, 15);
	Memory__poke(base_address+0+864, -16360);
	Memory__poke(base_address+4+896, 4160);
	Memory__poke(base_address+2+896, 1032);
	Memory__poke(base_address+0+896, 16);
	Memory__poke(base_address+4+928, 6208);
	Memory__poke(base_address+2+928, 776);
	Memory__poke(base_address+0+928, 16);
	Memory__poke(base_address+4+960, 8256);
	Memory__poke(base_address+2+960, 136);
	Memory__poke(base_address+0+960, 16);
	Memory__poke(base_address+4+992, 8768);
	Memory__poke(base_address+2+992, 72);
	Memory__poke(base_address+0+992, 16);
	Memory__poke(base_address+4+1024, 7232);
	Memory__poke(base_address+2+1024, 1992);
	Memory__poke(base_address+0+1024, 56);
	Memory__poke(base_address+4+1056, 64);
	Memory__poke(base_address+2+1056, 8);
	Memory__poke(base_address+6+1088, 511);
	Memory__poke(base_address+5+1088, -1);
	Memory__poke(base_address+4+1088, -1);
	Memory__poke(base_address+3+1088, -1);
	Memory__poke(base_address+2+1088, -1);
	Memory__poke(base_address+1+1088, -1);
	Memory__poke(base_address+0+1088, -1);
	Memory__poke(base_address+4+1120, 64);
	Memory__poke(base_address+2+1120, 8);
	Memory__poke(base_address+4+1152, 64);
	Memory__poke(base_address+2+1152, 8);
	Memory__poke(base_address+4+1184, 64);
	Memory__poke(base_address+2+1184, 8);
	Memory__poke(base_address+4+1216, 64);
	Memory__poke(base_address+2+1216, 8);
	Memory__poke(base_address+4+1248, 64);
	Memory__poke(base_address+2+1248, 8);
	Memory__poke(base_address+4+1280, 64);
	Memory__poke(base_address+2+1280, 8);
	Memory__poke(base_address+5+1312, 1008);
	Memory__poke(base_address+4+1312, 64);
	Memory__poke(base_address+2+1312, 8);
	Memory__poke(base_address+1+1312, 15);
	Memory__poke(base_address+0+1312, -16384);
	Memory__poke(base_address+5+1344, 8190);
	Memory__poke(base_address+4+1344, 64);
	Memory__poke(base_address+2+1344, 8);
	Memory__poke(base_address+1+1344, 127);
	Memory__poke(base_address+0+1344, -2048);
	Memory__poke(base_address+5+1376, 16383);
	Memory__poke(base_address+4+1376, 64);
	Memory__poke(base_address+2+1376, 8);
	Memory__poke(base_address+1+1376, 255);
	Memory__poke(base_address+0+1376, -1024);
	Memory__poke(base_address+5+1408, 32767);
	Memory__poke(base_address+4+1408, -32704);
	Memory__poke(base_address+2+1408, 8);
	Memory__poke(base_address+1+1408, 511);
	Memory__poke(base_address+0+1408, -512);
	Memory__poke(base_address+5+1440, -1);
	Memory__poke(base_address+4+1440, -16320);
	Memory__poke(base_address+2+1440, 8);
	Memory__poke(base_address+1+1440, 1023);
	Memory__poke(base_address+0+1440, -256);
	Memory__poke(base_address+6+1472, 1);
	Memory__poke(base_address+5+1472, -1);
	Memory__poke(base_address+4+1472, -8128);
	Memory__poke(base_address+2+1472, 8);
	Memory__poke(base_address+1+1472, 2047);
	Memory__poke(base_address+0+1472, -128);
	Memory__poke(base_address+6+1504, 1);
	Memory__poke(base_address+5+1504, -1);
	Memory__poke(base_address+4+1504, -8128);
	Memory__poke(base_address+2+1504, 8);
	Memory__poke(base_address+1+1504, 2047);
	Memory__poke(base_address+0+1504, -128);
	Memory__poke(base_address+6+1536, 1);
	Memory__poke(base_address+5+1536, -1);
	Memory__poke(base_address+4+1536, -8128);
	Memory__poke(base_address+2+1536, 8);
	Memory__poke(base_address+1+1536, 2047);
	Memory__poke(base_address+0+1536, -128);
	Memory__poke(base_address+6+1568, 3);
	Memory__poke(base_address+5+1568, -1);
	Memory__poke(base_address+4+1568, -4032);
	Memory__poke(base_address+2+1568, 8);
	Memory__poke(base_address+1+1568, 4095);
	Memory__poke(base_address+0+1568, -64);
	Memory__poke(base_address+6+1600, 3);
	Memory__poke(base_address+5+1600, -1);
	Memory__poke(base_address+4+1600, -4032);
	Memory__poke(base_address+2+1600, 8);
	Memory__poke(base_address+1+1600, 4095);
	Memory__poke(base_address+0+1600, -64);
	Memory__poke(base_address+6+1632, 3);
	Memory__poke(base_address+5+1632, -1);
	Memory__poke(base_address+4+1632, -4032);
	Memory__poke(base_address+2+1632, 8);
	Memory__poke(base_address+1+1632, 4095);
	Memory__poke(base_address+0+1632, -64);
	Memory__poke(base_address+6+1664, 3);
	Memory__poke(base_address+5+1664, -1);
	Memory__poke(base_address+4+1664, -4032);
	Memory__poke(base_address+2+1664, 8);
	Memory__poke(base_address+1+1664, 4095);
	Memory__poke(base_address+0+1664, -64);
	Memory__poke(base_address+6+1696, 3);
	Memory__poke(base_address+5+1696, -1);
	Memory__poke(base_address+4+1696, -4032);
	Memory__poke(base_address+2+1696, 8);
	Memory__poke(base_address+1+1696, 4095);
	Memory__poke(base_address+0+1696, -64);
	Memory__poke(base_address+6+1728, 3);
	Memory__poke(base_address+5+1728, -1);
	Memory__poke(base_address+4+1728, -4032);
	Memory__poke(base_address+2+1728, 8);
	Memory__poke(base_address+1+1728, 4095);
	Memory__poke(base_address+0+1728, -64);
	Memory__poke(base_address+6+1760, 1);
	Memory__poke(base_address+5+1760, -1);
	Memory__poke(base_address+4+1760, -8128);
	Memory__poke(base_address+2+1760, 8);
	Memory__poke(base_address+1+1760, 2047);
	Memory__poke(base_address+0+1760, -128);
	Memory__poke(base_address+6+1792, 1);
	Memory__poke(base_address+5+1792, -1);
	Memory__poke(base_address+4+1792, -8128);
	Memory__poke(base_address+2+1792, 8);
	Memory__poke(base_address+1+1792, 2047);
	Memory__poke(base_address+0+1792, -128);
	Memory__poke(base_address+6+1824, 1);
	Memory__poke(base_address+5+1824, -1);
	Memory__poke(base_address+4+1824, -8128);
	Memory__poke(base_address+2+1824, 8);
	Memory__poke(base_address+1+1824, 2047);
	Memory__poke(base_address+0+1824, -128);
	Memory__poke(base_address+5+1856, -1);
	Memory__poke(base_address+4+1856, -16320);
	Memory__poke(base_address+2+1856, 8);
	Memory__poke(base_address+1+1856, 1023);
	Memory__poke(base_address+0+1856, -256);
	Memory__poke(base_address+5+1888, 32767);
	Memory__poke(base_address+4+1888, -32704);
	Memory__poke(base_address+2+1888, 8);
	Memory__poke(base_address+1+1888, 511);
	Memory__poke(base_address+0+1888, -512);
	Memory__poke(base_address+5+1920, 16383);
	Memory__poke(base_address+4+1920, 64);
	Memory__poke(base_address+2+1920, 8);
	Memory__poke(base_address+1+1920, 255);
	Memory__poke(base_address+0+1920, -1024);
	Memory__poke(base_address+5+1952, 8190);
	Memory__poke(base_address+4+1952, 64);
	Memory__poke(base_address+2+1952, 8);
	Memory__poke(base_address+1+1952, 127);
	Memory__poke(base_address+0+1952, -2048);
	Memory__poke(base_address+5+1984, 1008);
	Memory__poke(base_address+4+1984, 14400);
	Memory__poke(base_address+2+1984, 1992);
	Memory__poke(base_address+1+1984, 15);
	Memory__poke(base_address+0+1984, -16352);
	Memory__poke(base_address+4+2016, 1088);
	Memory__poke(base_address+2+2016, 72);
	Memory__poke(base_address+0+2016, 48);
	Memory__poke(base_address+4+2048, 576);
	Memory__poke(base_address+2+2048, 968);
	Memory__poke(base_address+0+2048, 40);
	Memory__poke(base_address+4+2080, 7744);
	Memory__poke(base_address+2+2080, 1032);
	Memory__poke(base_address+0+2080, 36);
	Memory__poke(base_address+4+2112, 8768);
	Memory__poke(base_address+2+2112, 1032);
	Memory__poke(base_address+0+2112, 124);
	Memory__poke(base_address+4+2144, 8768);
	Memory__poke(base_address+2+2144, 1096);
	Memory__poke(base_address+0+2144, 32);
	Memory__poke(base_address+4+2176, 7232);
	Memory__poke(base_address+2+2176, 904);
	Memory__poke(base_address+0+2176, 32);
	Memory__poke(base_address+4+2208, 64);
	Memory__poke(base_address+2+2208, 8);
	Memory__poke(base_address+6+2240, 511);
	Memory__poke(base_address+5+2240, -1);
	Memory__poke(base_address+4+2240, -1);
	Memory__poke(base_address+3+2240, -1);
	Memory__poke(base_address+2+2240, -1);
	Memory__poke(base_address+1+2240, -1);
	Memory__poke(base_address+0+2240, -1);
	Memory__poke(base_address+4+2272, 64);
	Memory__poke(base_address+2+2272, 8);
	Memory__poke(base_address+4+2304, 64);
	Memory__poke(base_address+2+2304, 8);
	Memory__poke(base_address+4+2336, 64);
	Memory__poke(base_address+2+2336, 8);
	Memory__poke(base_address+4+2368, 64);
	Memory__poke(base_address+2+2368, 8);
	Memory__poke(base_address+4+2400, 64);
	Memory__poke(base_address+2+2400, 8);
	Memory__poke(base_address+5+2432, 1008);
	Memory__poke(base_address+4+2432, 64);
	Memory__poke(base_address+3+2432, 126);
	Memory__poke(base_address+2+2432, 8);
	Memory__poke(base_address+1+2432, 15);
	Memory__poke(base_address+0+2432, -16384);
	Memory__poke(base_address+5+2464, 8190);
	Memory__poke(base_address+4+2464, 64);
	Memory__poke(base_address+3+2464, 1023);
	Memory__poke(base_address+2+2464, -16376);
	Memory__poke(base_address+1+2464, 127);
	Memory__poke(base_address+0+2464, -2048);
	Memory__poke(base_address+5+2496, 16383);
	Memory__poke(base_address+4+2496, 64);
	Memory__poke(base_address+3+2496, 2047);
	Memory__poke(base_address+2+2496, -8184);
	Memory__poke(base_address+1+2496, 255);
	Memory__poke(base_address+0+2496, -1024);
	Memory__poke(base_address+5+2528, 32767);
	Memory__poke(base_address+4+2528, -32704);
	Memory__poke(base_address+3+2528, 4095);
	Memory__poke(base_address+2+2528, -4088);
	Memory__poke(base_address+1+2528, 511);
	Memory__poke(base_address+0+2528, -512);
	Memory__poke(base_address+5+2560, -1);
	Memory__poke(base_address+4+2560, -16320);
	Memory__poke(base_address+3+2560, 8191);
	Memory__poke(base_address+2+2560, -2040);
	Memory__poke(base_address+1+2560, 1023);
	Memory__poke(base_address+0+2560, -256);
	Memory__poke(base_address+6+2592, 1);
	Memory__poke(base_address+5+2592, -1);
	Memory__poke(base_address+4+2592, -8128);
	Memory__poke(base_address+3+2592, 16383);
	Memory__poke(base_address+2+2592, -1016);
	Memory__poke(base_address+1+2592, 2047);
	Memory__poke(base_address+0+2592, -128);
	Memory__poke(base_address+6+2624, 1);
	Memory__poke(base_address+5+2624, -1);
	Memory__poke(base_address+4+2624, -8128);
	Memory__poke(base_address+3+2624, 16383);
	Memory__poke(base_address+2+2624, -1016);
	Memory__poke(base_address+1+2624, 2047);
	Memory__poke(base_address+0+2624, -128);
	Memory__poke(base_address+6+2656, 1);
	Memory__poke(base_address+5+2656, -1);
	Memory__poke(base_address+4+2656, -8128);
	Memory__poke(base_address+3+2656, 16383);
	Memory__poke(base_address+2+2656, -1016);
	Memory__poke(base_address+1+2656, 2047);
	Memory__poke(base_address+0+2656, -128);
	Memory__poke(base_address+6+2688, 3);
	Memory__poke(base_address+5+2688, -1);
	Memory__poke(base_address+4+2688, -4032);
	Memory__poke(base_address+3+2688, 32767);
	Memory__poke(base_address+2+2688, -504);
	Memory__poke(base_address+1+2688, 4095);
	Memory__poke(base_address+0+2688, -64);
	Memory__poke(base_address+6+2720, 3);
	Memory__poke(base_address+5+2720, -1);
	Memory__poke(base_address+4+2720, -4032);
	Memory__poke(base_address+3+2720, 32767);
	Memory__poke(base_address+2+2720, -504);
	Memory__poke(base_address+1+2720, 4095);
	Memory__poke(base_address+0+2720, -64);
	Memory__poke(base_address+6+2752, 3);
	Memory__poke(base_address+5+2752, -1);
	Memory__poke(base_address+4+2752, -4032);
	Memory__poke(base_address+3+2752, 32767);
	Memory__poke(base_address+2+2752, -504);
	Memory__poke(base_address+1+2752, 4095);
	Memory__poke(base_address+0+2752, -64);
	Memory__poke(base_address+6+2784, 3);
	Memory__poke(base_address+5+2784, -1);
	Memory__poke(base_address+4+2784, -4032);
	Memory__poke(base_address+3+2784, 32767);
	Memory__poke(base_address+2+2784, -504);
	Memory__poke(base_address+1+2784, 4095);
	Memory__poke(base_address+0+2784, -64);
	Memory__poke(base_address+6+2816, 3);
	Memory__poke(base_address+5+2816, -1);
	Memory__poke(base_address+4+2816, -4032);
	Memory__poke(base_address+3+2816, 32767);
	Memory__poke(base_address+2+2816, -504);
	Memory__poke(base_address+1+2816, 4095);
	Memory__poke(base_address+0+2816, -64);
	Memory__poke(base_address+6+2848, 3);
	Memory__poke(base_address+5+2848, -1);
	Memory__poke(base_address+4+2848, -4032);
	Memory__poke(base_address+3+2848, 32767);
	Memory__poke(base_address+2+2848, -504);
	Memory__poke(base_address+1+2848, 4095);
	Memory__poke(base_address+0+2848, -64);
	Memory__poke(base_address+6+2880, 1);
	Memory__poke(base_address+5+2880, -1);
	Memory__poke(base_address+4+2880, -8128);
	Memory__poke(base_address+3+2880, 16383);
	Memory__poke(base_address+2+2880, -1016);
	Memory__poke(base_address+1+2880, 2047);
	Memory__poke(base_address+0+2880, -128);
	Memory__poke(base_address+6+2912, 1);
	Memory__poke(base_address+5+2912, -1);
	Memory__poke(base_address+4+2912, -8128);
	Memory__poke(base_address+3+2912, 16383);
	Memory__poke(base_address+2+2912, -1016);
	Memory__poke(base_address+1+2912, 2047);
	Memory__poke(base_address+0+2912, -128);
	Memory__poke(base_address+6+2944, 1);
	Memory__poke(base_address+5+2944, -1);
	Memory__poke(base_address+4+2944, -8128);
	Memory__poke(base_address+3+2944, 16383);
	Memory__poke(base_address+2+2944, -1016);
	Memory__poke(base_address+1+2944, 2047);
	Memory__poke(base_address+0+2944, -128);
	Memory__poke(base_address+5+2976, -1);
	Memory__poke(base_address+4+2976, -16320);
	Memory__poke(base_address+3+2976, 8191);
	Memory__poke(base_address+2+2976, -2040);
	Memory__poke(base_address+1+2976, 1023);
	Memory__poke(base_address+0+2976, -256);
	Memory__poke(base_address+5+3008, 32767);
	Memory__poke(base_address+4+3008, -32704);
	Memory__poke(base_address+3+3008, 4095);
	Memory__poke(base_address+2+3008, -4088);
	Memory__poke(base_address+1+3008, 511);
	Memory__poke(base_address+0+3008, -512);
	Memory__poke(base_address+5+3040, 16383);
	Memory__poke(base_address+4+3040, 64);
	Memory__poke(base_address+3+3040, 2047);
	Memory__poke(base_address+2+3040, -8184);
	Memory__poke(base_address+1+3040, 255);
	Memory__poke(base_address+0+3040, -1024);
	Memory__poke(base_address+5+3072, 8190);
	Memory__poke(base_address+4+3072, 64);
	Memory__poke(base_address+3+3072, 1023);
	Memory__poke(base_address+2+3072, -16376);
	Memory__poke(base_address+1+3072, 127);
	Memory__poke(base_address+0+3072, -2048);
	Memory__poke(base_address+5+3104, 1008);
	Memory__poke(base_address+4+3104, 7232);
	Memory__poke(base_address+3+3104, 126);
	Memory__poke(base_address+2+3104, 904);
	Memory__poke(base_address+1+3104, 15);
	Memory__poke(base_address+0+3104, -16260);
	Memory__poke(base_address+4+3136, 8768);
	Memory__poke(base_address+2+3136, 1096);
	Memory__poke(base_address+0+3136, 64);
	Memory__poke(base_address+4+3168, 8768);
	Memory__poke(base_address+2+3168, 1096);
	Memory__poke(base_address+0+3168, 32);
	Memory__poke(base_address+4+3200, 15424);
	Memory__poke(base_address+2+3200, 904);
	Memory__poke(base_address+0+3200, 16);
	Memory__poke(base_address+4+3232, 8256);
	Memory__poke(base_address+2+3232, 1096);
	Memory__poke(base_address+0+3232, 8);
	Memory__poke(base_address+4+3264, 4160);
	Memory__poke(base_address+2+3264, 1096);
	Memory__poke(base_address+0+3264, 8);
	Memory__poke(base_address+4+3296, 3648);
	Memory__poke(base_address+2+3296, 904);
	Memory__poke(base_address+0+3296, 8);
	Memory__poke(base_address+4+3328, 64);
	Memory__poke(base_address+2+3328, 8);
	return 0;
}
var GuiDocGoalT0__blank(var dblcol, var row) {
	var x1 = 0;
	var y1 = 0;
	var x2 = 0;
	var y2 = 0;
	x1 = dblcol*16;
	y1 = row;
	x2 = x1+111;
	y2 = y1+105;
	Screen__setColor(0);
	Screen__drawRectangle(x1, y1, x2, y2);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
#define m_col_offset__ (__this+0)
#define m_y_offset__ (__this+1)
var GuiBoard__new(var x_offset, var y_offset) {
	var __this;
	__this = Memory__alloc(2);
	__poke(m_col_offset__, x_offset/16);
	__poke(m_y_offset__, y_offset);
	return __this;
}
var GuiBoard__dispose(var __this) {
	return 0;
}
var GuiBoard__drawPip(var __this, var num) {
	var col_offset = 0;
	var y_offset = 0;
	col_offset = 5*Util__mod(num-1, 3);
	y_offset = 78*((num-1)/3);
	GuiPip__draw(__peek(m_col_offset__)+col_offset, __peek(m_y_offset__)+y_offset);
	return 0;
}
var GuiBoard__blankPip(var __this, var num) {
	var col_offset = 0;
	var y_offset = 0;
	col_offset = 5*Util__mod(num-1, 3);
	y_offset = 78*((num-1)/3);
	GuiPip__blank(__peek(m_col_offset__)+col_offset, __peek(m_y_offset__)+y_offset);
	return 0;
}
var GuiBoard__drawGrid(var __this) {
	Screen__drawLine(94, 24, 94, 226);
	Screen__drawLine(174, 24, 174, 226);
	Screen__drawLine(28, 86, 244, 86);
	Screen__drawLine(28, 164, 244, 164);
	GuiDigit__draw_one(1, 71);
	GuiDigit__draw_two(6, 71);
	GuiDigit__draw_three(11, 71);
	GuiDigit__draw_four(1, 149);
	GuiDigit__draw_five(6, 149);
	GuiDigit__draw_six(11, 149);
	GuiDigit__draw_seven(1, 227);
	GuiDigit__draw_eight(6, 227);
	GuiDigit__draw_nine(11, 227);
	return 0;
}
#undef m_col_offset__
#undef m_y_offset__
#endif

#ifdef JACK_IMPLEMENTATION
var TitleCredit__get_x_size() {
	return 208;
}
var TitleCredit__get_y_size() {
	return 17;
}
var TitleCredit__draw(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+2+0, 14336);
	Memory__poke(base_address+1+0, 128);
	Memory__poke(base_address+0+0, 17);
	Memory__poke(base_address+2+32, 17408);
	Memory__poke(base_address+0+32, 27);
	Memory__poke(base_address+5+64, 1);
	Memory__poke(base_address+4+64, -14521);
	Memory__poke(base_address+3+64, 4412);
	Memory__poke(base_address+2+64, 1025);
	Memory__poke(base_address+1+64, -7997);
	Memory__poke(base_address+0+64, -30955);
	Memory__poke(base_address+5+96, 2);
	Memory__poke(base_address+4+96, 8392);
	Memory__poke(base_address+3+96, 4386);
	Memory__poke(base_address+2+96, 14336);
	Memory__poke(base_address+1+96, 4228);
	Memory__poke(base_address+0+96, 18453);
	Memory__poke(base_address+5+128, 3);
	Memory__poke(base_address+4+128, -8113);
	Memory__poke(base_address+3+128, 4386);
	Memory__poke(base_address+2+128, 16384);
	Memory__poke(base_address+1+128, 4228);
	Memory__poke(base_address+0+128, 20241);
	Memory__poke(base_address+4+160, 8264);
	Memory__poke(base_address+3+160, -26308);
	Memory__poke(base_address+2+160, 17408);
	Memory__poke(base_address+1+160, 4231);
	Memory__poke(base_address+0+160, -30575);
	Memory__poke(base_address+5+192, 3);
	Memory__poke(base_address+4+192, -16305);
	Memory__poke(base_address+3+192, 5664);
	Memory__poke(base_address+2+192, 14337);
	Memory__poke(base_address+1+192, -7740);
	Memory__poke(base_address+0+192, 3857);
	Memory__poke(base_address+3+224, 32);
	Memory__poke(base_address+1+224, 3);
	Memory__poke(base_address+0+224, 32767+1);
	Memory__poke(base_address+11+288, 2);
	Memory__poke(base_address+10+288, 4352);
	Memory__poke(base_address+9+288, 6144);
	Memory__poke(base_address+8+288, 480);
	Memory__poke(base_address+7+288, 1806);
	Memory__poke(base_address+6+288, 7224);
	Memory__poke(base_address+5+288, 64);
	Memory__poke(base_address+4+288, 256);
	Memory__poke(base_address+3+288, 514);
	Memory__poke(base_address+2+288, 32);
	Memory__poke(base_address+0+288, 14);
	Memory__poke(base_address+10+320, 2304);
	Memory__poke(base_address+9+320, 4096);
	Memory__poke(base_address+8+320, 544);
	Memory__poke(base_address+7+320, 2193);
	Memory__poke(base_address+6+320, 8772);
	Memory__poke(base_address+5+320, 128);
	Memory__poke(base_address+4+320, 128);
	Memory__poke(base_address+3+320, 514);
	Memory__poke(base_address+0+320, 17);
	Memory__poke(base_address+12+352, -3871);
	Memory__poke(base_address+11+352, -7229);
	Memory__poke(base_address+10+352, 1280);
	Memory__poke(base_address+9+352, 4232);
	Memory__poke(base_address+8+352, -7648);
	Memory__poke(base_address+7+352, 3216);
	Memory__poke(base_address+6+352, 12864);
	Memory__poke(base_address+5+352, 259);
	Memory__poke(base_address+4+352, -16320);
	Memory__poke(base_address+3+352, 3870);
	Memory__poke(base_address+2+352, 14385);
	Memory__poke(base_address+1+352, -11741);
	Memory__poke(base_address+0+352, -14591);
	Memory__poke(base_address+12+384, 2322);
	Memory__poke(base_address+11+384, 9282);
	Memory__poke(base_address+10+384, 768);
	Memory__poke(base_address+9+384, 4233);
	Memory__poke(base_address+8+384, 480);
	Memory__poke(base_address+7+384, 2700);
	Memory__poke(base_address+6+384, 10800);
	Memory__poke(base_address+5+384, 256);
	Memory__poke(base_address+4+384, 8256);
	Memory__poke(base_address+3+384, 546);
	Memory__poke(base_address+2+384, 17440);
	Memory__poke(base_address+1+384, 12836);
	Memory__poke(base_address+0+384, 18561);
	Memory__poke(base_address+12+416, 29170);
	Memory__poke(base_address+11+416, 9282);
	Memory__poke(base_address+10+416, 1280);
	Memory__poke(base_address+9+416, 4233);
	Memory__poke(base_address+8+416, -8160);
	Memory__poke(base_address+7+416, 2434);
	Memory__poke(base_address+6+416, 9736);
	Memory__poke(base_address+5+416, 256);
	Memory__poke(base_address+4+416, 8256);
	Memory__poke(base_address+3+416, 546);
	Memory__poke(base_address+2+416, 17440);
	Memory__poke(base_address+1+416, 4644);
	Memory__poke(base_address+0+416, 18561);
	Memory__poke(base_address+12+448, -32751);
	Memory__poke(base_address+11+448, -7230);
	Memory__poke(base_address+10+448, 2304);
	Memory__poke(base_address+9+448, 4297);
	Memory__poke(base_address+8+448, 4128);
	Memory__poke(base_address+7+448, 2177);
	Memory__poke(base_address+6+448, 8708);
	Memory__poke(base_address+5+448, 128);
	Memory__poke(base_address+4+448, 8320);
	Memory__poke(base_address+3+448, 4642);
	Memory__poke(base_address+2+448, 30752);
	Memory__poke(base_address+1+448, 5059);
	Memory__poke(base_address+0+448, -14191);
	Memory__poke(base_address+12+480, 31200);
	Memory__poke(base_address+11+480, 8263);
	Memory__poke(base_address+10+480, 4352);
	Memory__poke(base_address+9+480, 14513);
	Memory__poke(base_address+8+480, -8160);
	Memory__poke(base_address+7+480, 1823);
	Memory__poke(base_address+6+480, 7292);
	Memory__poke(base_address+5+480, 67);
	Memory__poke(base_address+4+480, -16128);
	Memory__poke(base_address+3+480, 3106);
	Memory__poke(base_address+2+480, 16496);
	Memory__poke(base_address+1+480, 4608);
	Memory__poke(base_address+0+480, 18190);
	Memory__poke(base_address+11+512, 8256);
	Memory__poke(base_address+2+512, 14336);
	Memory__poke(base_address+1+512, 448);
	Memory__poke(base_address+0+512, 16384);
	return 0;
}
var TitleCredit__blank(var dblcol, var row) {
	var x1 = 0;
	var y1 = 0;
	var x2 = 0;
	var y2 = 0;
	x1 = dblcol*16;
	y1 = row;
	x2 = x1+207;
	y2 = y1+17;
	Screen__setColor(0);
	Screen__drawRectangle(x1, y1, x2, y2);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var GameBoard___str0[] = {78,111,46,32,85,115,101,114,32,77,111,118,101,115,58,32,0};
var GameBoard___str1[] = {48,32,32,32,32,0};
var GameBoard___str2[] = {83,111,108,118,101,100,33,33,33,0};
var GameBoard___str3[] = {78,101,119,32,103,97,109,101,63,32,40,121,47,110,41,45,0};
var GameBoard___str4[] = {32,32,32,32,32,32,32,32,32,0};
var GameBoard___str5[] = {32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,0};
var GameBoard___m_A = 0;
var GameBoard___m_M = 0;
var GameBoard___m_Q = 0;
var GameBoard___m_R = 0;
#define m_state__ (__this+0)
#define m_difficulty__ (__this+1)
#define m_guiBoard__ (__this+2)
#define m_rnd_seed__ (__this+3)
#define m_random_values__ (__this+4)
var GameBoard__new() {
	var __this;
	__this = Memory__alloc(5);
	__poke(m_guiBoard__, GuiBoard__new(32, 24));
	__poke(m_difficulty__, 0);
	GameBoard___m_A = 219;
	GameBoard___m_M = 32749;
	GameBoard___m_Q = GameBoard___m_M/GameBoard___m_A;
	GameBoard___m_R = Util__mod(GameBoard___m_M, GameBoard___m_A);
	__poke(m_random_values__, Array__new(40));
	__poke(__peek(m_random_values__)+0, 15069);
	__poke(__peek(m_random_values__)+1, 11931);
	__poke(__peek(m_random_values__)+2, 29581);
	__poke(__peek(m_random_values__)+3, 13810);
	__poke(__peek(m_random_values__)+4, 22605);
	__poke(__peek(m_random_values__)+5, 12277);
	__poke(__peek(m_random_values__)+6, 6304);
	__poke(__peek(m_random_values__)+7, 17071);
	__poke(__peek(m_random_values__)+8, 8807);
	__poke(__peek(m_random_values__)+9, 19730);
	__poke(__peek(m_random_values__)+10, 27331);
	__poke(__peek(m_random_values__)+11, 10308);
	__poke(__peek(m_random_values__)+12, 12243);
	__poke(__peek(m_random_values__)+13, 32514);
	__poke(__peek(m_random_values__)+14, 7012);
	__poke(__peek(m_random_values__)+15, 20622);
	__poke(__peek(m_random_values__)+16, 8019);
	__poke(__peek(m_random_values__)+17, 11483);
	__poke(__peek(m_random_values__)+18, 28322);
	__poke(__peek(m_random_values__)+19, 26509);
	__poke(__peek(m_random_values__)+20, 2588);
	__poke(__peek(m_random_values__)+21, 23259);
	__poke(__peek(m_random_values__)+22, 31528);
	__poke(__peek(m_random_values__)+23, 231);
	__poke(__peek(m_random_values__)+24, 18264);
	__poke(__peek(m_random_values__)+25, 4356);
	__poke(__peek(m_random_values__)+26, 15251);
	__poke(__peek(m_random_values__)+27, 13943);
	__poke(__peek(m_random_values__)+28, 32395);
	__poke(__peek(m_random_values__)+29, 5307);
	__poke(__peek(m_random_values__)+30, 6706);
	__poke(__peek(m_random_values__)+31, 30661);
	__poke(__peek(m_random_values__)+32, 11671);
	__poke(__peek(m_random_values__)+33, 11084);
	__poke(__peek(m_random_values__)+34, 18997);
	__poke(__peek(m_random_values__)+35, 626);
	__poke(__peek(m_random_values__)+36, 10524);
	__poke(__peek(m_random_values__)+37, 852);
	__poke(__peek(m_random_values__)+38, 3907);
	__poke(__peek(m_random_values__)+39, 410);
	return __this;
}
var GameBoard__initGameScreen(var __this) {
	Screen__clearScreen();
	GuiBoard__drawGrid(__peek(m_guiBoard__));
	return 0;
}
var GameBoard__dispose(var __this) {
	Array__dispose(__peek(m_random_values__));
	GuiBoard__dispose(__peek(m_guiBoard__));
	return 0;
}
var GameBoard__debouncePipNumberInput(var __this) {
	var pip_number = 0;
	var ch = 0;
	ch = 0;
	while (-1==((((ch)==(0))?-1:0))) {
		ch = Keyboard__keyPressed();
		if (0!=(((((ch)<(49))?-1:0))|((((ch)>(57))?-1:0)))) {
			ch = 0;
		}

	}
	pip_number = 0;
	if (0!=((((ch)==(49))?-1:0))) {
		pip_number = 1;
	}

	if (0!=((((ch)==(50))?-1:0))) {
		pip_number = 2;
	}

	if (0!=((((ch)==(51))?-1:0))) {
		pip_number = 3;
	}

	if (0!=((((ch)==(52))?-1:0))) {
		pip_number = 4;
	}

	if (0!=((((ch)==(53))?-1:0))) {
		pip_number = 5;
	}

	if (0!=((((ch)==(54))?-1:0))) {
		pip_number = 6;
	}

	if (0!=((((ch)==(55))?-1:0))) {
		pip_number = 7;
	}

	if (0!=((((ch)==(56))?-1:0))) {
		pip_number = 8;
	}

	if (0!=((((ch)==(57))?-1:0))) {
		pip_number = 9;
	}

	while (-1==(~((((ch)==(0))?-1:0)))) {
		ch = Keyboard__keyPressed();
	}
	return pip_number;
}
var GameBoard__xorMaskFromPipNumber(var pip_number) {
	var xor_mask = 0;
	xor_mask = 0;
	if (0!=((((pip_number)==(1))?-1:0))) {
		xor_mask = 27;
	}

	if (0!=((((pip_number)==(2))?-1:0))) {
		xor_mask = 7;
	}

	if (0!=((((pip_number)==(3))?-1:0))) {
		xor_mask = 54;
	}

	if (0!=((((pip_number)==(4))?-1:0))) {
		xor_mask = 73;
	}

	if (0!=((((pip_number)==(5))?-1:0))) {
		xor_mask = 186;
	}

	if (0!=((((pip_number)==(6))?-1:0))) {
		xor_mask = 292;
	}

	if (0!=((((pip_number)==(7))?-1:0))) {
		xor_mask = 216;
	}

	if (0!=((((pip_number)==(8))?-1:0))) {
		xor_mask = 448;
	}

	if (0!=((((pip_number)==(9))?-1:0))) {
		xor_mask = 432;
	}

	return xor_mask;
}
var GameBoard__run(var __this) {
	var exit_game = 0;
	var pip_number = 0;
	var xor_mask = 0;
	var num_user_moves = 0;
	var str = 0;
	var play_again_key = 0;
	exit_game = 0;
	Output__moveCursor(2, 32);
	str = Memory__getString(GameBoard___str0);
	Output__printString(str);
	String__dispose(str);
	while (-1==((((exit_game)==(0))?-1:0))) {
		num_user_moves = 0;
		Output__moveCursor(2, 48);
		str = Memory__getString(GameBoard___str1);
		Output__printString(str);
		String__dispose(str);
		GameBoard__generateGame(__this);
		while (-1==(~((((__peek(m_state__))==(495))?-1:0)))) {
			num_user_moves = num_user_moves+1;
			pip_number = GameBoard__debouncePipNumberInput(__this);
			xor_mask = GameBoard__xorMaskFromPipNumber(pip_number);
			GameBoard__blankMaskedPips(__this, xor_mask);
			__poke(m_state__, Util__xor(__peek(m_state__), xor_mask));
			GameBoard__drawMaskedPips(__this, __peek(m_state__)&xor_mask);
			Output__moveCursor(2, 48);
			Output__printInt(num_user_moves);
		}
		Output__moveCursor(10, 32);
		str = Memory__getString(GameBoard___str2);
		Output__printString(str);
		String__dispose(str);
		Output__moveCursor(11, 32);
		str = Memory__getString(GameBoard___str3);
		Output__printString(str);
		String__dispose(str);
		play_again_key = 0;
		while (-1==(~(((((play_again_key)==(89))?-1:0))|((((play_again_key)==(121))?-1:0))|((((play_again_key)==(78))?-1:0))|((((play_again_key)==(110))?-1:0))))) {
			Output__moveCursor(11, 48);
			play_again_key = Keyboard__readChar();
		}
		if (0!=(((((play_again_key)==(78))?-1:0))|((((play_again_key)==(110))?-1:0)))) {
			exit_game = -1;
		} else {
			Output__moveCursor(10, 32);
			str = Memory__getString(GameBoard___str4);
			Output__printString(str);
			String__dispose(str);
			Output__moveCursor(11, 32);
			str = Memory__getString(GameBoard___str5);
			Output__printString(str);
			GameBoard__generateGame(__this);
		}
	}
	return 0;
}
var GameBoard__waitForDifficultyChoice(var __this) {
	var ch = 0;
	var tics = 0;
	var do_wait_loop = 0;
	var difficulty = 0;
	tics = 0;
	do_wait_loop = -1;
	while (-1==((((do_wait_loop)==(-1))?-1:0))) {
		ch = Keyboard__keyPressed();
		if (0!=((((ch)==(49))?-1:0))) {
			do_wait_loop = 0;
			difficulty = 1;
		}

		if (0!=((((ch)==(50))?-1:0))) {
			do_wait_loop = 0;
			difficulty = 2;
		}

		if (0!=((((ch)==(51))?-1:0))) {
			do_wait_loop = 0;
			difficulty = 3;
		}

		if (0!=((((ch)==(52))?-1:0))) {
			do_wait_loop = 0;
			difficulty = 0;
		}

		tics = tics+1;
	}
	__poke(m_difficulty__, difficulty);
	while (-1==(~((((ch)==(0))?-1:0)))) {
		ch = Keyboard__keyPressed();
	}
	GameBoard__set_random_seed(__this, tics&32767);
	return 0;
}
var GameBoard__setState(var __this, var state) {
	__poke(m_state__, state);
	GameBoard__blankMaskedPips(__this, 511);
	GameBoard__drawMaskedPips(__this, __peek(m_state__));
	return 0;
}
var GameBoard__blankMaskedPips(var __this, var mask) {
	if (0!=(mask&1)) {
		GuiBoard__blankPip(__peek(m_guiBoard__), 1);
	}

	if (0!=(mask&2)) {
		GuiBoard__blankPip(__peek(m_guiBoard__), 2);
	}

	if (0!=(mask&4)) {
		GuiBoard__blankPip(__peek(m_guiBoard__), 3);
	}

	if (0!=(mask&8)) {
		GuiBoard__blankPip(__peek(m_guiBoard__), 4);
	}

	if (0!=(mask&16)) {
		GuiBoard__blankPip(__peek(m_guiBoard__), 5);
	}

	if (0!=(mask&32)) {
		GuiBoard__blankPip(__peek(m_guiBoard__), 6);
	}

	if (0!=(mask&64)) {
		GuiBoard__blankPip(__peek(m_guiBoard__), 7);
	}

	if (0!=(mask&128)) {
		GuiBoard__blankPip(__peek(m_guiBoard__), 8);
	}

	if (0!=(mask&256)) {
		GuiBoard__blankPip(__peek(m_guiBoard__), 9);
	}

	return 0;
}
var GameBoard__drawMaskedPips(var __this, var mask) {
	if (0!=(mask&1)) {
		GuiBoard__drawPip(__peek(m_guiBoard__), 1);
	}

	if (0!=(mask&2)) {
		GuiBoard__drawPip(__peek(m_guiBoard__), 2);
	}

	if (0!=(mask&4)) {
		GuiBoard__drawPip(__peek(m_guiBoard__), 3);
	}

	if (0!=(mask&8)) {
		GuiBoard__drawPip(__peek(m_guiBoard__), 4);
	}

	if (0!=(mask&16)) {
		GuiBoard__drawPip(__peek(m_guiBoard__), 5);
	}

	if (0!=(mask&32)) {
		GuiBoard__drawPip(__peek(m_guiBoard__), 6);
	}

	if (0!=(mask&64)) {
		GuiBoard__drawPip(__peek(m_guiBoard__), 7);
	}

	if (0!=(mask&128)) {
		GuiBoard__drawPip(__peek(m_guiBoard__), 8);
	}

	if (0!=(mask&256)) {
		GuiBoard__drawPip(__peek(m_guiBoard__), 9);
	}

	return 0;
}
var GameBoard__generateGame(var __this) {
	var idx = 0;
	var pip_number = 0;
	var previous_pip_number = 0;
	var xor_mask = 0;
	idx = __peek(m_difficulty__);
	if (0!=((((__peek(m_difficulty__))==(0))?-1:0))) {
		while (-1==(((((__peek(m_rnd_seed__)&511))==(495))?-1:0))) {
			GameBoard__rand(__this);
		}
		GameBoard__setState(__this, __peek(m_rnd_seed__)&511);
	} else {
		__poke(m_state__, 495);
		idx = __peek(m_difficulty__)*3;
		previous_pip_number = -1;
		pip_number = -1;
		while (-1==((((idx)>(0))?-1:0))) {
			while (-1==((((previous_pip_number)==(pip_number))?-1:0))) {
				pip_number = Util__mod(GameBoard__rand(__this), 9)+1;
			}
			previous_pip_number = pip_number;
			xor_mask = GameBoard__xorMaskFromPipNumber(pip_number);
			__poke(m_state__, Util__xor(__peek(m_state__), xor_mask));
			idx = idx-1;
		}
		GameBoard__setState(__this, __peek(m_state__));
	}
	return 0;
}
var GameBoard__set_random_seed(var __this, var val) {
	var index = 0;
	var bias = 0;
	index = Util__mod(val, 40);
	bias = val;
	__poke(m_rnd_seed__, (__peek(__peek(m_random_values__)+index)+bias)&32767);
	return 0;
}
var GameBoard__rand(var __this) {
	var candidate_rnd_seed = 0;
	candidate_rnd_seed = (GameBoard___m_A*(Util__mod(__peek(m_rnd_seed__), GameBoard___m_Q)))-(GameBoard___m_R*(__peek(m_rnd_seed__)/GameBoard___m_Q));
	if (0!=((((candidate_rnd_seed)<(0))?-1:0))) {
		__poke(m_rnd_seed__, candidate_rnd_seed+GameBoard___m_M);
	} else {
		__poke(m_rnd_seed__, candidate_rnd_seed);
	}
	return __peek(m_rnd_seed__);
}
#undef m_state__
#undef m_difficulty__
#undef m_guiBoard__
#undef m_rnd_seed__
#undef m_random_values__
#endif

#ifdef JACK_IMPLEMENTATION
var StartupScreen___str0[] = {84,104,101,32,103,111,97,108,32,111,102,32,116,104,101,32,77,97,103,105,99,32,83,113,117,97,114,101,32,103,97,109,101,32,105,115,32,116,111,32,102,105,110,105,115,104,0};
var StartupScreen___str1[] = {119,105,116,104,32,116,104,101,32,103,97,109,101,32,115,116,97,116,101,32,97,115,32,97,32,115,113,117,97,114,101,46,0};
var StartupScreen___str2[] = {83,116,97,114,116,32,98,121,32,99,104,111,111,115,105,110,103,32,97,32,100,105,102,102,105,99,117,108,116,121,32,108,101,118,101,108,0};
var StartupScreen___str3[] = {99,111,114,114,101,115,112,111,110,100,105,110,103,32,116,111,32,97,98,111,117,116,32,104,111,119,32,109,97,110,121,32,115,116,101,112,115,32,116,111,32,114,101,97,99,104,0};
var StartupScreen___str4[] = {116,104,101,32,115,111,108,117,116,105,111,110,32,111,110,32,116,104,101,32,108,101,102,116,46,32,32,69,97,99,104,32,99,104,111,105,99,101,32,111,102,32,97,32,112,105,112,0};
var StartupScreen___str5[] = {105,110,118,101,114,116,115,32,105,116,115,101,108,102,32,97,110,100,32,116,119,111,32,111,114,32,109,111,114,101,32,110,101,105,103,104,98,111,114,105,110,103,32,112,105,112,115,46,0};
var StartupScreen___str6[] = {70,111,114,32,101,120,97,109,112,108,101,32,97,32,99,111,114,110,101,114,32,112,105,112,32,40,49,44,32,51,44,32,55,44,32,111,114,32,57,41,32,105,110,118,101,114,116,115,0};
var StartupScreen___str7[] = {101,97,99,104,32,111,102,32,105,116,115,32,116,104,114,101,101,32,110,101,105,103,104,98,111,114,105,110,103,32,112,105,112,115,32,97,115,32,119,101,108,108,32,97,115,0};
var StartupScreen___str8[] = {105,116,115,101,108,102,46,32,32,84,104,101,32,99,101,110,116,101,114,32,112,105,112,44,32,35,53,44,32,105,110,118,101,114,116,115,32,105,116,115,101,108,102,32,97,110,100,0};
var StartupScreen___str9[] = {112,105,112,115,32,50,44,32,52,44,32,54,44,32,97,110,100,32,56,46,32,32,70,105,110,97,108,108,121,44,32,116,104,101,32,109,105,100,100,108,101,32,101,100,103,101,32,112,105,112,115,44,32,105,110,118,101,114,116,32,97,108,108,0};
var StartupScreen___str10[] = {112,105,112,115,32,111,102,32,105,116,115,32,101,100,103,101,46,0};
var StartupScreen___str11[] = {72,105,115,116,111,114,121,58,32,32,84,104,105,115,32,103,97,109,101,32,119,97,115,32,111,110,101,32,111,102,32,116,104,101,32,98,117,105,108,116,45,105,110,32,103,97,109,101,115,32,105,110,32,116,104,101,32,108,97,116,101,0};
var StartupScreen___str12[] = {49,57,55,48,39,115,32,80,97,114,107,101,114,32,66,114,111,115,46,32,104,97,110,100,104,101,108,100,32,103,97,109,101,44,32,77,101,114,108,105,110,46,32,32,84,104,105,115,32,105,109,112,108,101,109,101,110,116,97,116,105,111,110,0};
var StartupScreen___str13[] = {119,97,115,32,105,110,115,112,105,114,101,100,32,98,121,32,116,104,101,32,97,115,115,101,109,98,108,121,32,108,97,110,103,117,97,103,101,32,118,101,114,115,105,111,110,32,105,110,32,116,104,101,32,98,111,111,107,0};
var StartupScreen___str14[] = {54,53,48,50,32,71,97,109,101,115,0};
var StartupScreen___str15[] = {32,40,99,41,32,49,57,56,48,32,98,121,32,82,111,100,110,101,121,32,90,97,107,115,46,0};
var StartupScreen__show_title_screen() {
	var str = 0;
	TitleCredit__draw(0, 0);
	GuiDocGoalT0__draw(0, TitleCredit__get_y_size()+8);
	Output__moveCursor(3, 15);
	str = Memory__getString(StartupScreen___str0);
	Output__printString(str);
	Output__moveCursor(4, 15);
	str = Memory__getString(StartupScreen___str1);
	Output__printString(str);
	Output__moveCursor(6, 15);
	str = Memory__getString(StartupScreen___str2);
	Output__printString(str);
	Output__moveCursor(7, 15);
	str = Memory__getString(StartupScreen___str3);
	Output__printString(str);
	Output__moveCursor(8, 15);
	str = Memory__getString(StartupScreen___str4);
	Output__printString(str);
	Output__moveCursor(9, 15);
	str = Memory__getString(StartupScreen___str5);
	Output__printString(str);
	Output__moveCursor(10, 15);
	str = Memory__getString(StartupScreen___str6);
	Output__printString(str);
	Output__moveCursor(11, 15);
	str = Memory__getString(StartupScreen___str7);
	Output__printString(str);
	Output__moveCursor(12, 15);
	str = Memory__getString(StartupScreen___str8);
	Output__printString(str);
	Output__moveCursor(13, 0);
	str = Memory__getString(StartupScreen___str9);
	Output__printString(str);
	Output__moveCursor(14, 0);
	str = Memory__getString(StartupScreen___str10);
	Output__printString(str);
	Output__moveCursor(16, 0);
	str = Memory__getString(StartupScreen___str11);
	Output__printString(str);
	Output__moveCursor(17, 0);
	str = Memory__getString(StartupScreen___str12);
	Output__printString(str);
	Output__moveCursor(18, 0);
	str = Memory__getString(StartupScreen___str13);
	Output__printString(str);
	Output__moveCursor(19, 0);
	Output__printChar(34);
	str = Memory__getString(StartupScreen___str14);
	Output__printString(str);
	Output__printChar(34);
	str = Memory__getString(StartupScreen___str15);
	Output__printString(str);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var GuiPip__get_x_size() {
	return 48;
}
var GuiPip__get_y_size() {
	return 46;
}
var GuiPip__draw(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+1+0, 4092);
	Memory__poke(base_address+1+32, 32767);
	Memory__poke(base_address+0+32, 32767+1);
	Memory__poke(base_address+2+64, 1);
	Memory__poke(base_address+1+64, -1);
	Memory__poke(base_address+0+64, -8192);
	Memory__poke(base_address+2+96, 7);
	Memory__poke(base_address+1+96, -1);
	Memory__poke(base_address+0+96, -2048);
	Memory__poke(base_address+2+128, 31);
	Memory__poke(base_address+1+128, -1);
	Memory__poke(base_address+0+128, -512);
	Memory__poke(base_address+2+160, 63);
	Memory__poke(base_address+1+160, -1);
	Memory__poke(base_address+0+160, -256);
	Memory__poke(base_address+2+192, 127);
	Memory__poke(base_address+1+192, -1);
	Memory__poke(base_address+0+192, -128);
	Memory__poke(base_address+2+224, 255);
	Memory__poke(base_address+1+224, -1);
	Memory__poke(base_address+0+224, -64);
	Memory__poke(base_address+2+256, 511);
	Memory__poke(base_address+1+256, -1);
	Memory__poke(base_address+0+256, -32);
	Memory__poke(base_address+2+288, 1023);
	Memory__poke(base_address+1+288, -1);
	Memory__poke(base_address+0+288, -16);
	Memory__poke(base_address+2+320, 1023);
	Memory__poke(base_address+1+320, -1);
	Memory__poke(base_address+0+320, -16);
	Memory__poke(base_address+2+352, 2047);
	Memory__poke(base_address+1+352, -1);
	Memory__poke(base_address+0+352, -8);
	Memory__poke(base_address+2+384, 2047);
	Memory__poke(base_address+1+384, -1);
	Memory__poke(base_address+0+384, -8);
	Memory__poke(base_address+2+416, 4095);
	Memory__poke(base_address+1+416, -1);
	Memory__poke(base_address+0+416, -4);
	Memory__poke(base_address+2+448, 4095);
	Memory__poke(base_address+1+448, -1);
	Memory__poke(base_address+0+448, -4);
	Memory__poke(base_address+2+480, 8191);
	Memory__poke(base_address+1+480, -1);
	Memory__poke(base_address+0+480, -2);
	Memory__poke(base_address+2+512, 8191);
	Memory__poke(base_address+1+512, -1);
	Memory__poke(base_address+0+512, -2);
	Memory__poke(base_address+2+544, 8191);
	Memory__poke(base_address+1+544, -1);
	Memory__poke(base_address+0+544, -2);
	Memory__poke(base_address+2+576, 16383);
	Memory__poke(base_address+1+576, -1);
	Memory__poke(base_address+0+576, -1);
	Memory__poke(base_address+2+608, 16383);
	Memory__poke(base_address+1+608, -1);
	Memory__poke(base_address+0+608, -1);
	Memory__poke(base_address+2+640, 16383);
	Memory__poke(base_address+1+640, -1);
	Memory__poke(base_address+0+640, -1);
	Memory__poke(base_address+2+672, 16383);
	Memory__poke(base_address+1+672, -1);
	Memory__poke(base_address+0+672, -1);
	Memory__poke(base_address+2+704, 16383);
	Memory__poke(base_address+1+704, -1);
	Memory__poke(base_address+0+704, -1);
	Memory__poke(base_address+2+736, 16383);
	Memory__poke(base_address+1+736, -1);
	Memory__poke(base_address+0+736, -1);
	Memory__poke(base_address+2+768, 16383);
	Memory__poke(base_address+1+768, -1);
	Memory__poke(base_address+0+768, -1);
	Memory__poke(base_address+2+800, 16383);
	Memory__poke(base_address+1+800, -1);
	Memory__poke(base_address+0+800, -1);
	Memory__poke(base_address+2+832, 16383);
	Memory__poke(base_address+1+832, -1);
	Memory__poke(base_address+0+832, -1);
	Memory__poke(base_address+2+864, 16383);
	Memory__poke(base_address+1+864, -1);
	Memory__poke(base_address+0+864, -1);
	Memory__poke(base_address+2+896, 8191);
	Memory__poke(base_address+1+896, -1);
	Memory__poke(base_address+0+896, -2);
	Memory__poke(base_address+2+928, 8191);
	Memory__poke(base_address+1+928, -1);
	Memory__poke(base_address+0+928, -2);
	Memory__poke(base_address+2+960, 8191);
	Memory__poke(base_address+1+960, -1);
	Memory__poke(base_address+0+960, -2);
	Memory__poke(base_address+2+992, 4095);
	Memory__poke(base_address+1+992, -1);
	Memory__poke(base_address+0+992, -4);
	Memory__poke(base_address+2+1024, 4095);
	Memory__poke(base_address+1+1024, -1);
	Memory__poke(base_address+0+1024, -4);
	Memory__poke(base_address+2+1056, 2047);
	Memory__poke(base_address+1+1056, -1);
	Memory__poke(base_address+0+1056, -8);
	Memory__poke(base_address+2+1088, 2047);
	Memory__poke(base_address+1+1088, -1);
	Memory__poke(base_address+0+1088, -8);
	Memory__poke(base_address+2+1120, 1023);
	Memory__poke(base_address+1+1120, -1);
	Memory__poke(base_address+0+1120, -16);
	Memory__poke(base_address+2+1152, 1023);
	Memory__poke(base_address+1+1152, -1);
	Memory__poke(base_address+0+1152, -16);
	Memory__poke(base_address+2+1184, 511);
	Memory__poke(base_address+1+1184, -1);
	Memory__poke(base_address+0+1184, -32);
	Memory__poke(base_address+2+1216, 255);
	Memory__poke(base_address+1+1216, -1);
	Memory__poke(base_address+0+1216, -64);
	Memory__poke(base_address+2+1248, 127);
	Memory__poke(base_address+1+1248, -1);
	Memory__poke(base_address+0+1248, -128);
	Memory__poke(base_address+2+1280, 63);
	Memory__poke(base_address+1+1280, -1);
	Memory__poke(base_address+0+1280, -256);
	Memory__poke(base_address+2+1312, 31);
	Memory__poke(base_address+1+1312, -1);
	Memory__poke(base_address+0+1312, -512);
	Memory__poke(base_address+2+1344, 7);
	Memory__poke(base_address+1+1344, -1);
	Memory__poke(base_address+0+1344, -2048);
	Memory__poke(base_address+2+1376, 1);
	Memory__poke(base_address+1+1376, -1);
	Memory__poke(base_address+0+1376, -8192);
	Memory__poke(base_address+1+1408, 32767);
	Memory__poke(base_address+0+1408, 32767+1);
	Memory__poke(base_address+1+1440, 4092);
	return 0;
}
var GuiPip__blank(var dblcol, var row) {
	var x1 = 0;
	var y1 = 0;
	var x2 = 0;
	var y2 = 0;
	x1 = dblcol*16;
	y1 = row;
	x2 = x1+47;
	y2 = y1+46;
	Screen__setColor(0);
	Screen__drawRectangle(x1, y1, x2, y2);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
#define fnt__ (__this+0)
var Font__new() {
	var __this;
	__this = Memory__alloc(1);
	__poke(fnt__, Array__new(570));
	__poke(__peek(fnt__)+0, 0);
	__poke(__peek(fnt__)+1, 0);
	__poke(__peek(fnt__)+2, 0);
	__poke(__peek(fnt__)+3, 0);
	__poke(__peek(fnt__)+4, 0);
	__poke(__peek(fnt__)+5, 0);
	__poke(__peek(fnt__)+6, 6144);
	__poke(__peek(fnt__)+7, 6168);
	__poke(__peek(fnt__)+8, 6168);
	__poke(__peek(fnt__)+9, 6144);
	__poke(__peek(fnt__)+10, 24);
	__poke(__peek(fnt__)+11, 0);
	__poke(__peek(fnt__)+12, 5140);
	__poke(__peek(fnt__)+13, 20);
	__poke(__peek(fnt__)+14, 0);
	__poke(__peek(fnt__)+15, 0);
	__poke(__peek(fnt__)+16, 0);
	__poke(__peek(fnt__)+17, 0);
	__poke(__peek(fnt__)+18, 20480);
	__poke(__peek(fnt__)+19, -472);
	__poke(__peek(fnt__)+20, 32548);
	__poke(__peek(fnt__)+21, 2580);
	__poke(__peek(fnt__)+22, 0);
	__poke(__peek(fnt__)+23, 0);
	__poke(__peek(fnt__)+24, 11272);
	__poke(__peek(fnt__)+25, 2634);
	__poke(__peek(fnt__)+26, 10268);
	__poke(__peek(fnt__)+27, 6697);
	__poke(__peek(fnt__)+28, 8);
	__poke(__peek(fnt__)+29, 0);
	__poke(__peek(fnt__)+30, 17920);
	__poke(__peek(fnt__)+31, 5673);
	__poke(__peek(fnt__)+32, 13320);
	__poke(__peek(fnt__)+33, 12618);
	__poke(__peek(fnt__)+34, 0);
	__poke(__peek(fnt__)+35, 0);
	__poke(__peek(fnt__)+36, 17436);
	__poke(__peek(fnt__)+37, 9284);
	__poke(__peek(fnt__)+38, 16924);
	__poke(__peek(fnt__)+39, -1660);
	__poke(__peek(fnt__)+40, 0);
	__poke(__peek(fnt__)+41, 0);
	__poke(__peek(fnt__)+42, 4096);
	__poke(__peek(fnt__)+43, 4112);
	__poke(__peek(fnt__)+44, 0);
	__poke(__peek(fnt__)+45, 0);
	__poke(__peek(fnt__)+46, 0);
	__poke(__peek(fnt__)+47, 0);
	__poke(__peek(fnt__)+48, 1032);
	__poke(__peek(fnt__)+49, 514);
	__poke(__peek(fnt__)+50, 513);
	__poke(__peek(fnt__)+51, 1026);
	__poke(__peek(fnt__)+52, 8);
	__poke(__peek(fnt__)+53, 0);
	__poke(__peek(fnt__)+54, 513);
	__poke(__peek(fnt__)+55, 1028);
	__poke(__peek(fnt__)+56, 1032);
	__poke(__peek(fnt__)+57, 516);
	__poke(__peek(fnt__)+58, 1);
	__poke(__peek(fnt__)+59, 0);
	__poke(__peek(fnt__)+60, 0);
	__poke(__peek(fnt__)+61, 18688);
	__poke(__peek(fnt__)+62, 7210);
	__poke(__peek(fnt__)+63, 10780);
	__poke(__peek(fnt__)+64, 73);
	__poke(__peek(fnt__)+65, 0);
	__poke(__peek(fnt__)+66, 0);
	__poke(__peek(fnt__)+67, 2056);
	__poke(__peek(fnt__)+68, 2110);
	__poke(__peek(fnt__)+69, 8);
	__poke(__peek(fnt__)+70, 0);
	__poke(__peek(fnt__)+71, 0);
	__poke(__peek(fnt__)+72, 0);
	__poke(__peek(fnt__)+73, 0);
	__poke(__peek(fnt__)+74, 0);
	__poke(__peek(fnt__)+75, 6144);
	__poke(__peek(fnt__)+76, 1032);
	__poke(__peek(fnt__)+77, 0);
	__poke(__peek(fnt__)+78, 0);
	__poke(__peek(fnt__)+79, 0);
	__poke(__peek(fnt__)+80, 124);
	__poke(__peek(fnt__)+81, 0);
	__poke(__peek(fnt__)+82, 0);
	__poke(__peek(fnt__)+83, 0);
	__poke(__peek(fnt__)+84, 0);
	__poke(__peek(fnt__)+85, 0);
	__poke(__peek(fnt__)+86, 0);
	__poke(__peek(fnt__)+87, 6144);
	__poke(__peek(fnt__)+88, 24);
	__poke(__peek(fnt__)+89, 0);
	__poke(__peek(fnt__)+90, 0);
	__poke(__peek(fnt__)+91, 8256);
	__poke(__peek(fnt__)+92, 2064);
	__poke(__peek(fnt__)+93, 516);
	__poke(__peek(fnt__)+94, 1);
	__poke(__peek(fnt__)+95, 0);
	__poke(__peek(fnt__)+96, 23552);
	__poke(__peek(fnt__)+97, 12834);
	__poke(__peek(fnt__)+98, 9770);
	__poke(__peek(fnt__)+99, 7458);
	__poke(__peek(fnt__)+100, 0);
	__poke(__peek(fnt__)+101, 0);
	__poke(__peek(fnt__)+102, 6144);
	__poke(__peek(fnt__)+103, 4112);
	__poke(__peek(fnt__)+104, 4112);
	__poke(__peek(fnt__)+105, 4112);
	__poke(__peek(fnt__)+106, 0);
	__poke(__peek(fnt__)+107, 0);
	__poke(__peek(fnt__)+108, 15360);
	__poke(__peek(fnt__)+109, 8228);
	__poke(__peek(fnt__)+110, 3088);
	__poke(__peek(fnt__)+111, 15876);
	__poke(__peek(fnt__)+112, 0);
	__poke(__peek(fnt__)+113, 0);
	__poke(__peek(fnt__)+114, 15360);
	__poke(__peek(fnt__)+115, 8224);
	__poke(__peek(fnt__)+116, 8248);
	__poke(__peek(fnt__)+117, 15392);
	__poke(__peek(fnt__)+118, 0);
	__poke(__peek(fnt__)+119, 0);
	__poke(__peek(fnt__)+120, 4096);
	__poke(__peek(fnt__)+121, 5144);
	__poke(__peek(fnt__)+122, 15890);
	__poke(__peek(fnt__)+123, 4112);
	__poke(__peek(fnt__)+124, 0);
	__poke(__peek(fnt__)+125, 0);
	__poke(__peek(fnt__)+126, 15360);
	__poke(__peek(fnt__)+127, 7172);
	__poke(__peek(fnt__)+128, 8244);
	__poke(__peek(fnt__)+129, 15396);
	__poke(__peek(fnt__)+130, 0);
	__poke(__peek(fnt__)+131, 0);
	__poke(__peek(fnt__)+132, 12288);
	__poke(__peek(fnt__)+133, 3080);
	__poke(__peek(fnt__)+134, 16956);
	__poke(__peek(fnt__)+135, 15426);
	__poke(__peek(fnt__)+136, 0);
	__poke(__peek(fnt__)+137, 0);
	__poke(__peek(fnt__)+138, 15872);
	__poke(__peek(fnt__)+139, 12320);
	__poke(__peek(fnt__)+140, 6160);
	__poke(__peek(fnt__)+141, 2056);
	__poke(__peek(fnt__)+142, 0);
	__poke(__peek(fnt__)+143, 0);
	__poke(__peek(fnt__)+144, 15360);
	__poke(__peek(fnt__)+145, 9282);
	__poke(__peek(fnt__)+146, 16956);
	__poke(__peek(fnt__)+147, 15426);
	__poke(__peek(fnt__)+148, 0);
	__poke(__peek(fnt__)+149, 0);
	__poke(__peek(fnt__)+150, 15360);
	__poke(__peek(fnt__)+151, 9252);
	__poke(__peek(fnt__)+152, 4156);
	__poke(__peek(fnt__)+153, 2072);
	__poke(__peek(fnt__)+154, 0);
	__poke(__peek(fnt__)+155, 0);
	__poke(__peek(fnt__)+156, 0);
	__poke(__peek(fnt__)+157, 6144);
	__poke(__peek(fnt__)+158, 24);
	__poke(__peek(fnt__)+159, 6144);
	__poke(__peek(fnt__)+160, 24);
	__poke(__peek(fnt__)+161, 0);
	__poke(__peek(fnt__)+162, 0);
	__poke(__peek(fnt__)+163, 6144);
	__poke(__peek(fnt__)+164, 24);
	__poke(__peek(fnt__)+165, 6144);
	__poke(__peek(fnt__)+166, 1032);
	__poke(__peek(fnt__)+167, 0);
	__poke(__peek(fnt__)+168, 16384);
	__poke(__peek(fnt__)+169, 1040);
	__poke(__peek(fnt__)+170, 1025);
	__poke(__peek(fnt__)+171, 16400);
	__poke(__peek(fnt__)+172, 0);
	__poke(__peek(fnt__)+173, 0);
	__poke(__peek(fnt__)+174, 0);
	__poke(__peek(fnt__)+175, 0);
	__poke(__peek(fnt__)+176, 126);
	__poke(__peek(fnt__)+177, 126);
	__poke(__peek(fnt__)+178, 0);
	__poke(__peek(fnt__)+179, 0);
	__poke(__peek(fnt__)+180, 0);
	__poke(__peek(fnt__)+181, 1025);
	__poke(__peek(fnt__)+182, 16400);
	__poke(__peek(fnt__)+183, 1040);
	__poke(__peek(fnt__)+184, 1);
	__poke(__peek(fnt__)+185, 0);
	__poke(__peek(fnt__)+186, 7176);
	__poke(__peek(fnt__)+187, 4146);
	__poke(__peek(fnt__)+188, 2072);
	__poke(__peek(fnt__)+189, 6144);
	__poke(__peek(fnt__)+190, 24);
	__poke(__peek(fnt__)+191, 0);
	__poke(__peek(fnt__)+192, 15360);
	__poke(__peek(fnt__)+193, -25278);
	__poke(__peek(fnt__)+194, 31141);
	__poke(__peek(fnt__)+195, 15362);
	__poke(__peek(fnt__)+196, 0);
	__poke(__peek(fnt__)+197, 0);
	__poke(__peek(fnt__)+198, 3072);
	__poke(__peek(fnt__)+199, 7180);
	__poke(__peek(fnt__)+200, 7702);
	__poke(__peek(fnt__)+201, 9010);
	__poke(__peek(fnt__)+202, 0);
	__poke(__peek(fnt__)+203, 0);
	__poke(__peek(fnt__)+204, 15872);
	__poke(__peek(fnt__)+205, 13862);
	__poke(__peek(fnt__)+206, 9790);
	__poke(__peek(fnt__)+207, 15910);
	__poke(__peek(fnt__)+208, 0);
	__poke(__peek(fnt__)+209, 0);
	__poke(__peek(fnt__)+210, 15376);
	__poke(__peek(fnt__)+211, 1540);
	__poke(__peek(fnt__)+212, 1542);
	__poke(__peek(fnt__)+213, 15428);
	__poke(__peek(fnt__)+214, 0);
	__poke(__peek(fnt__)+215, 0);
	__poke(__peek(fnt__)+216, 15872);
	__poke(__peek(fnt__)+217, 26150);
	__poke(__peek(fnt__)+218, 26182);
	__poke(__peek(fnt__)+219, 15910);
	__poke(__peek(fnt__)+220, 0);
	__poke(__peek(fnt__)+221, 0);
	__poke(__peek(fnt__)+222, 15872);
	__poke(__peek(fnt__)+223, 1542);
	__poke(__peek(fnt__)+224, 1598);
	__poke(__peek(fnt__)+225, 15878);
	__poke(__peek(fnt__)+226, 0);
	__poke(__peek(fnt__)+227, 0);
	__poke(__peek(fnt__)+228, 15872);
	__poke(__peek(fnt__)+229, 1542);
	__poke(__peek(fnt__)+230, 1598);
	__poke(__peek(fnt__)+231, 1542);
	__poke(__peek(fnt__)+232, 0);
	__poke(__peek(fnt__)+233, 0);
	__poke(__peek(fnt__)+234, 7680);
	__poke(__peek(fnt__)+235, 770);
	__poke(__peek(fnt__)+236, 13115);
	__poke(__peek(fnt__)+237, 7714);
	__poke(__peek(fnt__)+238, 0);
	__poke(__peek(fnt__)+239, 0);
	__poke(__peek(fnt__)+240, 26112);
	__poke(__peek(fnt__)+241, 26214);
	__poke(__peek(fnt__)+242, 26238);
	__poke(__peek(fnt__)+243, 26214);
	__poke(__peek(fnt__)+244, 0);
	__poke(__peek(fnt__)+245, 0);
	__poke(__peek(fnt__)+246, 4096);
	__poke(__peek(fnt__)+247, 4112);
	__poke(__peek(fnt__)+248, 4112);
	__poke(__peek(fnt__)+249, 4112);
	__poke(__peek(fnt__)+250, 0);
	__poke(__peek(fnt__)+251, 0);
	__poke(__peek(fnt__)+252, 8192);
	__poke(__peek(fnt__)+253, 8224);
	__poke(__peek(fnt__)+254, 8736);
	__poke(__peek(fnt__)+255, 7204);
	__poke(__peek(fnt__)+256, 0);
	__poke(__peek(fnt__)+257, 0);
	__poke(__peek(fnt__)+258, 13056);
	__poke(__peek(fnt__)+259, 3867);
	__poke(__peek(fnt__)+260, 2823);
	__poke(__peek(fnt__)+261, 13075);
	__poke(__peek(fnt__)+262, 0);
	__poke(__peek(fnt__)+263, 0);
	__poke(__peek(fnt__)+264, 1536);
	__poke(__peek(fnt__)+265, 1542);
	__poke(__peek(fnt__)+266, 1542);
	__poke(__peek(fnt__)+267, 15878);
	__poke(__peek(fnt__)+268, 0);
	__poke(__peek(fnt__)+269, 0);
	__poke(__peek(fnt__)+270, 17152);
	__poke(__peek(fnt__)+271, 26467);
	__poke(__peek(fnt__)+272, 24423);
	__poke(__peek(fnt__)+273, 23387);
	__poke(__peek(fnt__)+274, 0);
	__poke(__peek(fnt__)+275, 0);
	__poke(__peek(fnt__)+276, 17920);
	__poke(__peek(fnt__)+277, 20046);
	__poke(__peek(fnt__)+278, 30294);
	__poke(__peek(fnt__)+279, 26214);
	__poke(__peek(fnt__)+280, 0);
	__poke(__peek(fnt__)+281, 0);
	__poke(__peek(fnt__)+282, 7680);
	__poke(__peek(fnt__)+283, 8994);
	__poke(__peek(fnt__)+284, 8995);
	__poke(__peek(fnt__)+285, 7714);
	__poke(__peek(fnt__)+286, 0);
	__poke(__peek(fnt__)+287, 0);
	__poke(__peek(fnt__)+288, 15872);
	__poke(__peek(fnt__)+289, 9766);
	__poke(__peek(fnt__)+290, 1566);
	__poke(__peek(fnt__)+291, 1542);
	__poke(__peek(fnt__)+292, 0);
	__poke(__peek(fnt__)+293, 0);
	__poke(__peek(fnt__)+294, 7688);
	__poke(__peek(fnt__)+295, 8994);
	__poke(__peek(fnt__)+296, 8995);
	__poke(__peek(fnt__)+297, 15922);
	__poke(__peek(fnt__)+298, 0);
	__poke(__peek(fnt__)+299, 0);
	__poke(__peek(fnt__)+300, 15872);
	__poke(__peek(fnt__)+301, 9766);
	__poke(__peek(fnt__)+302, 5662);
	__poke(__peek(fnt__)+303, 9782);
	__poke(__peek(fnt__)+304, 0);
	__poke(__peek(fnt__)+305, 0);
	__poke(__peek(fnt__)+306, 15360);
	__poke(__peek(fnt__)+307, 3078);
	__poke(__peek(fnt__)+308, 8216);
	__poke(__peek(fnt__)+309, 15394);
	__poke(__peek(fnt__)+310, 0);
	__poke(__peek(fnt__)+311, 0);
	__poke(__peek(fnt__)+312, 32256);
	__poke(__peek(fnt__)+313, 4112);
	__poke(__peek(fnt__)+314, 4112);
	__poke(__peek(fnt__)+315, 4112);
	__poke(__peek(fnt__)+316, 0);
	__poke(__peek(fnt__)+317, 0);
	__poke(__peek(fnt__)+318, 17920);
	__poke(__peek(fnt__)+319, 17990);
	__poke(__peek(fnt__)+320, 17990);
	__poke(__peek(fnt__)+321, 15396);
	__poke(__peek(fnt__)+322, 0);
	__poke(__peek(fnt__)+323, 0);
	__poke(__peek(fnt__)+324, 17920);
	__poke(__peek(fnt__)+325, 9316);
	__poke(__peek(fnt__)+326, 14380);
	__poke(__peek(fnt__)+327, 6168);
	__poke(__peek(fnt__)+328, 0);
	__poke(__peek(fnt__)+329, 0);
	__poke(__peek(fnt__)+330, -9472);
	__poke(__peek(fnt__)+331, 23131);
	__poke(__peek(fnt__)+332, 30302);
	__poke(__peek(fnt__)+333, 26214);
	__poke(__peek(fnt__)+334, 0);
	__poke(__peek(fnt__)+335, 0);
	__poke(__peek(fnt__)+336, 25600);
	__poke(__peek(fnt__)+337, 6180);
	__poke(__peek(fnt__)+338, 6168);
	__poke(__peek(fnt__)+339, 26148);
	__poke(__peek(fnt__)+340, 0);
	__poke(__peek(fnt__)+341, 0);
	__poke(__peek(fnt__)+342, 9216);
	__poke(__peek(fnt__)+343, 6196);
	__poke(__peek(fnt__)+344, 6168);
	__poke(__peek(fnt__)+345, 6168);
	__poke(__peek(fnt__)+346, 0);
	__poke(__peek(fnt__)+347, 0);
	__poke(__peek(fnt__)+348, 15872);
	__poke(__peek(fnt__)+349, 6160);
	__poke(__peek(fnt__)+350, 1032);
	__poke(__peek(fnt__)+351, 15878);
	__poke(__peek(fnt__)+352, 0);
	__poke(__peek(fnt__)+353, 0);
	__poke(__peek(fnt__)+354, 3096);
	__poke(__peek(fnt__)+355, 3084);
	__poke(__peek(fnt__)+356, 3084);
	__poke(__peek(fnt__)+357, 3084);
	__poke(__peek(fnt__)+358, 24);
	__poke(__peek(fnt__)+359, 0);
	__poke(__peek(fnt__)+360, 1028);
	__poke(__peek(fnt__)+361, 2056);
	__poke(__peek(fnt__)+362, 4120);
	__poke(__peek(fnt__)+363, 8240);
	__poke(__peek(fnt__)+364, 0);
	__poke(__peek(fnt__)+365, 0);
	__poke(__peek(fnt__)+366, 6168);
	__poke(__peek(fnt__)+367, 4112);
	__poke(__peek(fnt__)+368, 4112);
	__poke(__peek(fnt__)+369, 6160);
	__poke(__peek(fnt__)+370, 24);
	__poke(__peek(fnt__)+371, 0);
	__poke(__peek(fnt__)+372, 7168);
	__poke(__peek(fnt__)+373, 20);
	__poke(__peek(fnt__)+374, 0);
	__poke(__peek(fnt__)+375, 0);
	__poke(__peek(fnt__)+376, 0);
	__poke(__peek(fnt__)+377, 0);
	__poke(__peek(fnt__)+378, 0);
	__poke(__peek(fnt__)+379, 0);
	__poke(__peek(fnt__)+380, 0);
	__poke(__peek(fnt__)+381, 0);
	__poke(__peek(fnt__)+382, 126);
	__poke(__peek(fnt__)+383, 0);
	__poke(__peek(fnt__)+384, 2052);
	__poke(__peek(fnt__)+385, 0);
	__poke(__peek(fnt__)+386, 0);
	__poke(__peek(fnt__)+387, 0);
	__poke(__peek(fnt__)+388, 0);
	__poke(__peek(fnt__)+389, 0);
	__poke(__peek(fnt__)+390, 0);
	__poke(__peek(fnt__)+391, 7168);
	__poke(__peek(fnt__)+392, 7704);
	__poke(__peek(fnt__)+393, 7190);
	__poke(__peek(fnt__)+394, 0);
	__poke(__peek(fnt__)+395, 0);
	__poke(__peek(fnt__)+396, 1536);
	__poke(__peek(fnt__)+397, 15886);
	__poke(__peek(fnt__)+398, 9766);
	__poke(__peek(fnt__)+399, 7734);
	__poke(__peek(fnt__)+400, 0);
	__poke(__peek(fnt__)+401, 0);
	__poke(__peek(fnt__)+402, 0);
	__poke(__peek(fnt__)+403, 7176);
	__poke(__peek(fnt__)+404, 518);
	__poke(__peek(fnt__)+405, 7174);
	__poke(__peek(fnt__)+406, 0);
	__poke(__peek(fnt__)+407, 0);
	__poke(__peek(fnt__)+408, 8192);
	__poke(__peek(fnt__)+409, 15416);
	__poke(__peek(fnt__)+410, 12854);
	__poke(__peek(fnt__)+411, 15414);
	__poke(__peek(fnt__)+412, 0);
	__poke(__peek(fnt__)+413, 0);
	__poke(__peek(fnt__)+414, 0);
	__poke(__peek(fnt__)+415, 7176);
	__poke(__peek(fnt__)+416, 15926);
	__poke(__peek(fnt__)+417, 7174);
	__poke(__peek(fnt__)+418, 0);
	__poke(__peek(fnt__)+419, 0);
	__poke(__peek(fnt__)+420, 6144);
	__poke(__peek(fnt__)+421, 6168);
	__poke(__peek(fnt__)+422, 2056);
	__poke(__peek(fnt__)+423, 2056);
	__poke(__peek(fnt__)+424, 0);
	__poke(__peek(fnt__)+425, 0);
	__poke(__peek(fnt__)+426, 0);
	__poke(__peek(fnt__)+427, 15368);
	__poke(__peek(fnt__)+428, 12854);
	__poke(__peek(fnt__)+429, 15414);
	__poke(__peek(fnt__)+430, 7216);
	__poke(__peek(fnt__)+431, 0);
	__poke(__peek(fnt__)+432, 1536);
	__poke(__peek(fnt__)+433, 7694);
	__poke(__peek(fnt__)+434, 9766);
	__poke(__peek(fnt__)+435, 9766);
	__poke(__peek(fnt__)+436, 0);
	__poke(__peek(fnt__)+437, 0);
	__poke(__peek(fnt__)+438, 4096);
	__poke(__peek(fnt__)+439, 6144);
	__poke(__peek(fnt__)+440, 6168);
	__poke(__peek(fnt__)+441, 6168);
	__poke(__peek(fnt__)+442, 0);
	__poke(__peek(fnt__)+443, 0);
	__poke(__peek(fnt__)+444, 4096);
	__poke(__peek(fnt__)+445, 4096);
	__poke(__peek(fnt__)+446, 4112);
	__poke(__peek(fnt__)+447, 4112);
	__poke(__peek(fnt__)+448, 7184);
	__poke(__peek(fnt__)+449, 0);
	__poke(__peek(fnt__)+450, 1536);
	__poke(__peek(fnt__)+451, 7686);
	__poke(__peek(fnt__)+452, 3598);
	__poke(__peek(fnt__)+453, 5662);
	__poke(__peek(fnt__)+454, 0);
	__poke(__peek(fnt__)+455, 0);
	__poke(__peek(fnt__)+456, 3072);
	__poke(__peek(fnt__)+457, 3084);
	__poke(__peek(fnt__)+458, 3084);
	__poke(__peek(fnt__)+459, 2060);
	__poke(__peek(fnt__)+460, 0);
	__poke(__peek(fnt__)+461, 0);
	__poke(__peek(fnt__)+462, 0);
	__poke(__peek(fnt__)+463, 32548);
	__poke(__peek(fnt__)+464, 19291);
	__poke(__peek(fnt__)+465, 19275);
	__poke(__peek(fnt__)+466, 0);
	__poke(__peek(fnt__)+467, 0);
	__poke(__peek(fnt__)+468, 0);
	__poke(__peek(fnt__)+469, 7688);
	__poke(__peek(fnt__)+470, 9766);
	__poke(__peek(fnt__)+471, 9766);
	__poke(__peek(fnt__)+472, 0);
	__poke(__peek(fnt__)+473, 0);
	__poke(__peek(fnt__)+474, 0);
	__poke(__peek(fnt__)+475, 7176);
	__poke(__peek(fnt__)+476, 9766);
	__poke(__peek(fnt__)+477, 7206);
	__poke(__peek(fnt__)+478, 0);
	__poke(__peek(fnt__)+479, 0);
	__poke(__peek(fnt__)+480, 0);
	__poke(__peek(fnt__)+481, 15880);
	__poke(__peek(fnt__)+482, 9766);
	__poke(__peek(fnt__)+483, 7734);
	__poke(__peek(fnt__)+484, 1542);
	__poke(__peek(fnt__)+485, 0);
	__poke(__peek(fnt__)+486, 0);
	__poke(__peek(fnt__)+487, 15368);
	__poke(__peek(fnt__)+488, 12854);
	__poke(__peek(fnt__)+489, 15414);
	__poke(__peek(fnt__)+490, 8224);
	__poke(__peek(fnt__)+491, 0);
	__poke(__peek(fnt__)+492, 0);
	__poke(__peek(fnt__)+493, 7184);
	__poke(__peek(fnt__)+494, 3084);
	__poke(__peek(fnt__)+495, 3084);
	__poke(__peek(fnt__)+496, 0);
	__poke(__peek(fnt__)+497, 0);
	__poke(__peek(fnt__)+498, 0);
	__poke(__peek(fnt__)+499, 7176);
	__poke(__peek(fnt__)+500, 7174);
	__poke(__peek(fnt__)+501, 7184);
	__poke(__peek(fnt__)+502, 0);
	__poke(__peek(fnt__)+503, 0);
	__poke(__peek(fnt__)+504, 2048);
	__poke(__peek(fnt__)+505, 6152);
	__poke(__peek(fnt__)+506, 2056);
	__poke(__peek(fnt__)+507, 6152);
	__poke(__peek(fnt__)+508, 0);
	__poke(__peek(fnt__)+509, 0);
	__poke(__peek(fnt__)+510, 0);
	__poke(__peek(fnt__)+511, 9728);
	__poke(__peek(fnt__)+512, 9766);
	__poke(__peek(fnt__)+513, 15412);
	__poke(__peek(fnt__)+514, 0);
	__poke(__peek(fnt__)+515, 0);
	__poke(__peek(fnt__)+516, 0);
	__poke(__peek(fnt__)+517, 13824);
	__poke(__peek(fnt__)+518, 5140);
	__poke(__peek(fnt__)+519, 2076);
	__poke(__peek(fnt__)+520, 0);
	__poke(__peek(fnt__)+521, 0);
	__poke(__peek(fnt__)+522, 0);
	__poke(__peek(fnt__)+523, 27392);
	__poke(__peek(fnt__)+524, 13870);
	__poke(__peek(fnt__)+525, 5686);
	__poke(__peek(fnt__)+526, 0);
	__poke(__peek(fnt__)+527, 0);
	__poke(__peek(fnt__)+528, 0);
	__poke(__peek(fnt__)+529, 5632);
	__poke(__peek(fnt__)+530, 3084);
	__poke(__peek(fnt__)+531, 5660);
	__poke(__peek(fnt__)+532, 0);
	__poke(__peek(fnt__)+533, 0);
	__poke(__peek(fnt__)+534, 0);
	__poke(__peek(fnt__)+535, 9728);
	__poke(__peek(fnt__)+536, 9766);
	__poke(__peek(fnt__)+537, 15412);
	__poke(__peek(fnt__)+538, 7200);
	__poke(__peek(fnt__)+539, 0);
	__poke(__peek(fnt__)+540, 0);
	__poke(__peek(fnt__)+541, 7168);
	__poke(__peek(fnt__)+542, 2072);
	__poke(__peek(fnt__)+543, 7684);
	__poke(__peek(fnt__)+544, 0);
	__poke(__peek(fnt__)+545, 0);
	__poke(__peek(fnt__)+546, 6160);
	__poke(__peek(fnt__)+547, 2056);
	__poke(__peek(fnt__)+548, 2060);
	__poke(__peek(fnt__)+549, 6152);
	__poke(__peek(fnt__)+550, 16);
	__poke(__peek(fnt__)+551, 0);
	__poke(__peek(fnt__)+552, 6144);
	__poke(__peek(fnt__)+553, 6168);
	__poke(__peek(fnt__)+554, 6168);
	__poke(__peek(fnt__)+555, 6168);
	__poke(__peek(fnt__)+556, 0);
	__poke(__peek(fnt__)+557, 0);
	__poke(__peek(fnt__)+558, 6152);
	__poke(__peek(fnt__)+559, 4120);
	__poke(__peek(fnt__)+560, 4112);
	__poke(__peek(fnt__)+561, 6168);
	__poke(__peek(fnt__)+562, 8);
	__poke(__peek(fnt__)+563, 0);
	__poke(__peek(fnt__)+564, 0);
	__poke(__peek(fnt__)+565, 0);
	__poke(__peek(fnt__)+566, 60);
	__poke(__peek(fnt__)+567, 0);
	__poke(__peek(fnt__)+568, 0);
	__poke(__peek(fnt__)+569, 0);
	return __this;
}
var Font__get(var __this, var c) {
	var i = 0;
	i = (c-32)*6;
	return __peek(fnt__)+i;
}
#undef fnt__
#endif

#ifdef JACK_IMPLEMENTATION
var Array__new(var size) {
	var a = 0;
	a = Memory__alloc(size);
	return a;
}
var Array__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Output___x = 0;
var Output___y = 0;
var Output___f = 0;
var Output__init() {
	Output___x = 0;
	Output___y = 0;
	Output___f = Font__new();
	return 0;
}
var Output__deInit() {
	return 0;
}
var Output__moveCursor(var row, var col) {
	var xx = 0;
	var yy = 0;
	Output___x = col;
	Output___y = row;
	if (0!=((((Output___x)<(0))?-1:0))) {
		Output___x = 0;
	}

	if (0!=((((Output___x)>(63))?-1:0))) {
		Output___x = 63;
	}

	if (0!=((((Output___y)<(0))?-1:0))) {
		Output___y = 0;
	}

	if (0!=((((Output___y)>(22))?-1:0))) {
		Output___y = 22;
	}

	xx = Output___x;
	yy = Output___y;
	Output__printChar(32);
	Output___x = xx;
	Output___y = yy;
 	
#ifdef _WIN32
	output = GetStdHandle(STD_OUTPUT_HANDLE);
	coord.X = (SHORT)xx;
	coord.Y = (SHORT)yy;
	SetConsoleCursorPosition(output, coord);	
#else
	printf("\033[%ld;%ldf ", (long)yy + 1, (long)xx + 1);
 	fflush(stdout);
#endif

	return 0;
}
var Output__printString(var s) {
	var i = 0;
	var l = 0;
	var c = 0;
	i = 0;
	l = String__length(s);
	while (-1==((((i)<(l))?-1:0))) {
		c = String__charAt(s, i);
		Output__printChar(c);
		i = i+1;
	}
	return 0;
}
var Output__println() {
	Output___y = Output___y+1;
	if (0!=((((Output___y)>(22))?-1:0))) {
		Output___y = 22;
	}

	Output___x = 0;
 	putc('\n', stdout);
	return 0;
}
var Output__printChar(var c) {
	var xx = 0;
	var yy = 0;
	var i = 0;
	var j = 0;
	var l = 0;
	var p = 0;
	var chr = 0;
	var m = 0;
	if (0!=(((((c)>(1114111))?-1:0))|((((c)<(0))?-1:0)))) {
		return 0;
	}

	if (0!=(((((c)<(32))?-1:0))|((((c)>(126))?-1:0)))) {
		c = 32;
	}

	xx = Output___x;
	yy = Output___y;
	chr = Font__get(Output___f, c);
	if (0!=(xx&1)) {
		m = 255;
	} else {
		m = 255*256;
	}
	i = 0;
	j = 0;
	while (-1==((((i)<(11))?-1:0))) {
		l = ((yy*11)+i)*32;
		l = l+(xx/2);
		l = l+16384;
		p = Memory__peek(l);
		if (0!=((xx&1))) {
			p = (p&m)|(__peek(chr+j)*256);
		} else {
			p = (p&m)|(__peek(chr+j)&255);
		}
		Memory__poke(l, p);
		l = l+32;
		if (0!=((((i)<(10))?-1:0))) {
			p = Memory__peek(l);
			if (0!=(xx&1)) {
				p = (p&m)|(__peek(chr+j)&~m);
			} else {
				p = (p&m)|((__peek(chr+j)/256)&255);
			}
			Memory__poke(l, p);
		}

		i = i+2;
		j = j+1;
	}
 	printf("%c", (char)c);
 	fflush(stdout);
	Output___x = Output___x+1;
	if (0!=((((Output___x)>(63))?-1:0))) {
		Output___x = 0;
		Output___y = Output___y+1;
		if (0!=((((Output___y)>(22))?-1:0))) {
			Output___y = 22;
		}

	}

	return 0;
}
var Output__printInt(var c) {
	var s = 0;
	s = String__new(8);
	s = String__setInt(s, c);
	Output__printString(s);
	String__dispose(s);
	return 0;
}
var Output__backSpace() {
	var xx = 0;
	var yy = 0;
	Output___x = Output___x-1;
	if (0!=((((Output___x)<(0))?-1:0))) {
		Output___x = 0;
	}

	xx = Output___x;
	yy = Output___y;
	Output__printChar(8);
	Output___x = xx;
	Output___y = yy;
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Sys___str0[] = {69,114,114,111,114,40,0};
var Sys___str1[] = {41,0};
var Sys___in_error = 0;
var Sys__init() {
	Sys___in_error = 0;
	Memory__init();
 
#ifndef JACK_HACK
 	Sys2__init();
#endif

	Math__init();
	Output__init();
	Screen__init();
	Keyboard__init();
	Main__main();
	return 0;
}
var Sys__deInit() {
	Math__deInit();
	Output__deInit();
	Screen__deInit();
	Keyboard__deInit();
	Memory__deInit();
	return 0;
}
var Sys__halt() {
 	exit(0);
	return 0;
}
var Sys__error(var errorCode) {
	if (0!=(Sys___in_error)) {
		return 0;
	}

	Sys___in_error = -1;
	Output__printString(Memory__getString(Sys___str0));
	Output__printInt(errorCode);
	Output__printString(Memory__getString(Sys___str1));
	Output__println();

 	errorCode = 0;
 	errorCode = 1 / (errorCode);
 	exit(errorCode);

	Sys___in_error = 0;
	return 0;
}
var Sys__wait(var duration) {
	Screen__processEvents(-1);
 
#ifdef _WIN32
 	Sleep(duration);
#else
 	usleep(duration * 1000);
#endif

	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Screen___color = 0;
var Screen__init() {
	Screen___color = -1;
	return 0;
}
var Screen__deInit() {
	return 0;
}
var Screen__clearScreen() {
	var i = 0;
	i = 16384;
	while (-1==((((i)<(24576))?-1:0))) {
		Memory__poke(i, 0);
		i = i+1;
	}
 	puts("\033[2J");
	return 0;
}
var Screen__setColor(var b) {
	Screen___color = b;
	return 0;
}
var Screen__drawPixel(var x, var y) {
	var b = 0;
	var i = 0;
	var r = 0;
	var p = 0;
	i = (x/16)+(y*(512/16))+16384;
	b = Memory__peek(i);
	r = x-((x/16)*16);
	p = 1;
	while (-1==((((r)>(0))?-1:0))) {
		p = p*2;
		r = r-1;
	}
	if (0!=(Screen___color)) {
		b = b|p;
	} else {
		b = b&~p;
	}
	Memory__poke(i, b);
	return 0;
}
var Screen__drawLine(var x, var y, var x2, var y2) {
	var a = 0;
	var b = 0;
	var dx = 0;
	var dy = 0;
	var ax = 0;
	var ay = 0;
	var adyMinusbdx = 0;
	dx = x2-x;
	dy = y2-y;
	if (0!=((((dx)==(0))?-1:0))) {
		if (0!=((((y)>(y2))?-1:0))) {
			a = y2;
			y2 = y;
			y = a;
		}

		b = y;
		y2 = y2+1;
		Screen__drawPixel(x, b);
		while (-1==((((b)<(y2))?-1:0))) {
			b = b+1;
			Screen__drawPixel(x, b);
		}
		return 0;
	}

	if (0!=((((dy)==(0))?-1:0))) {
		if (0!=((((x)>(x2))?-1:0))) {
			a = x2;
			x2 = x;
			x = a;
		}

		a = x;
		x2 = x2+1;
		Screen__drawPixel(a, y);
		while (-1==((((a)<(x2))?-1:0))) {
			a = a+1;
			Screen__drawPixel(a, y);
		}
		return 0;
	}

	ax = 0;
	ay = 0;
	if (0!=(((((dx)<(0))?-1:0))&((((dy)<(0))?-1:0)))) {
		dx = -dx;
		dy = -dy;
		x = x2;
		y = y2;
	} else {
		if (0!=(((((dx)>(0))?-1:0))&((((dy)<(0))?-1:0)))) {
			dy = -dy;
			ay = dy;
		} else {
			if (0!=(((((dx)<(0))?-1:0))&((((dy)>(0))?-1:0)))) {
				dx = -dx;
				ax = dx;
			}

		}
	}
	a = 0;
	b = 0;
	adyMinusbdx = 0;
	Screen__drawPixel(x, y);
	while (-1==(((((dx)>(a))?-1:0))&((((dy)>(b))?-1:0)))) {
		if (0!=((((adyMinusbdx)<(0))?-1:0))) {
			a = a+1;
			adyMinusbdx = adyMinusbdx+dy;
		} else {
			b = b+1;
			adyMinusbdx = adyMinusbdx-dx;
		}
		if (0!=(ay)) {
			Screen__drawPixel(x+a, y-b);
		} else {
			if (0!=(ax)) {
				Screen__drawPixel(x-a, y+b);
			} else {
				Screen__drawPixel(x+a, y+b);
			}
		}
	}
	return 0;
}
var Screen__drawRectangle(var x, var y, var x2, var y2) {
	var i = 0;
	i = y;
	Screen__drawLine(x, i, x2, i);
	while (-1==((((i)<(y2))?-1:0))) {
		i = i+1;
		Screen__drawLine(x, i, x2, i);
	}
	return 0;
}
var Screen__drawCircle(var x, var y, var r) {
	var dy = 0;
	var s = 0;
	var r2 = 0;
	var x0 = 0;
	var x1 = 0;
	var y0 = 0;
	dy = -r;
	if (0!=(((((r)>(181))?-1:0))|((((r)<(0))?-1:0)))) {
		return 0;
	}

	r2 = r*r;
	while (-1==((((r)>(dy))?-1:0))) {
		s = Math__sqrt(r2-(dy*dy));
		x0 = x-s;
		y0 = y+dy;
		x1 = x+s;
		if (0!=((((x0)<(0))?-1:0))) {
			x0 = 0;
		}

		if (0!=((((x0)>(511))?-1:0))) {
			x0 = 511;
		}

		if (0!=((((x1)<(0))?-1:0))) {
			x1 = 0;
		}

		if (0!=((((x1)>(511))?-1:0))) {
			x1 = 511;
		}

		if (0!=((((y0)<(0))?-1:0))) {
			y0 = 0;
		}

		if (0!=((((y0)>(255))?-1:0))) {
			y0 = 255;
		}

		Screen__drawLine(x0, y0, x1, y0);
		dy = dy+1;
	}
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Math__init() {
	return 0;
}
var Math__deInit() {
	return 0;
}
var Math__abs(var a) {
	if (0!=((((a)<(0))?-1:0))) {
		return -a;
	}

	return a;
}
var Math__multiply(var x, var y) {
	var sum = 0;
	var j = 0;
	var b = 0;
	var shiftedX = 0;
	sum = 0;
	shiftedX = x;
	if (0!=(((((x)<(1))?-1:0))|((((y)<(1))?-1:0)))) {
		return 0;
	}

	j = 0;
	b = 1;
	while (-1==((((j)<(16))?-1:0))) {
		if (0!=(y&b)) {
			sum = sum+shiftedX;
		}

		b = b+b;
		shiftedX = shiftedX+shiftedX;
		j = j+1;
	}
	return sum;
}
var Math__divide(var x, var y) {
	var q = 0;
	if (0!=(((((x)<(0))?-1:0))|((((y)<(1))?-1:0)))) {
		return 0;
	}

	if (0!=((((y)>(x))?-1:0))) {
		return 0;
	}

	q = Math__divide(x, y+y);
	if (0!=(((((x-((q+q)*y)))<(y))?-1:0))) {
		return q+q;
	}

	return (q+q)+1;
}
var Math__min(var x, var y) {
	if (0!=((((x)<(y))?-1:0))) {
		return x;
	}

	return y;
}
var Math__max(var x, var y) {
	if (0!=((((x)>(y))?-1:0))) {
		return x;
	}

	return y;
}
var Math__sqrt(var x) {
	var y = 0;
	var j = 0;
	var y2j = 0;
	var n2 = 0;
	var xp = 0;
	if (0!=((((x)<(1))?-1:0))) {
		return 0;
	}

	xp = x+1;
	y = 0;
	n2 = 128;
	j = 7;
	while (-1==((((j)>(-1))?-1:0))) {
		y2j = y+n2;
		y2j = y2j*y2j;
		if (0!=((((y2j)<(xp))?-1:0))) {
			y = y+n2;
		}

		n2 = n2/2;
		j = j-1;
	}
	return y;
}
var Math__shiftLeft(var value, var shift) {
	while (-1==((((shift)>(0))?-1:0))) {
		value = value*2;
		shift = shift-1;
	}
	return value;
}
var Math__shiftRight(var value, var shift) {
	while (-1==((((shift)>(0))?-1:0))) {
		value = value/2;
		shift = shift-1;
	}
	return value;
}
var Math__rem(var a, var b) {
	var c = 0;
	if (0!=((((b)==(0))?-1:0))) {
		return 0;
	}

	c = a/b;
	c = c*b;
	return a-c;
}
var Math__xor(var a, var b) {
	var c = 0;
	c = a|b;
	c = c&(~((a)&(b)));
	return c;
}
var Math__log2(var n) {
	var r = 0;
	r = 0;
	if (0!=((((n)==(0))?-1:0))) {
		return -1;
	}

	while (-1==((((n)>(1))?-1:0))) {
		n = Math__shiftRight(n, 1);
		r = r+1;
	}
	return r;
}
var Math__sizeOfInt() {
	var s = 0;
 	s = sizeof(var);
	return s;
}
var Math__isBigEndian() {
	var s = 0;
 	int x = 1;
 	char *y = (char*)&x;
 	s = 0;
 	if (!y[0]) { s = -1;}
	return s;
}
var Math__isWindows() {
	var s = 0;
	s = 0;
 #ifdef _WIN32
 	s = -1;
 #endif
	return s;
}
#endif

#ifdef JACK_IMPLEMENTATION
var String___str0[] = {45,0};
#define str__ (__this+0)
#define size__ (__this+1)
var String__new(var maxLength) {
	var __this;
	__this = Memory__alloc(2);
	__poke(str__, Array__new(maxLength+1));
	__poke(__peek(str__)+0, 0);
	__poke(size__, maxLength);
	return __this;
}
var String__dispose(var __this) {
	Array__dispose(__peek(str__));
	Memory__deAlloc(__this);
	return 0;
}
var String__length(var __this) {
	var s = 0;
	var l = 0;
	l = 0;
	s = __peek(str__);
	if (0!=((((s)==(0))?-1:0))) {
		return 0;
	}

	while (-1==((((0)==(((((__peek(s+l))==(0))?-1:0))))?-1:0))) {
		l = l+1;
	}
	return l;
}
var String__charAt(var __this, var a) {
	var ret = 0;
	ret = __peek(__peek(str__)+a);
	return ret;
}
var String__setCharAt(var __this, var j, var c) {
	var s = 0;
	s = __peek(str__);
	__poke(s+j, c);
	return 0;
}
var String__getArray(var __this) {
	return __peek(str__);
}
var String__appendChar(var __this, var c) {
	var l = 0;
	var i = 0;
	var nl = 0;
	var max = 0;
	var b = 0;
	var d = 0;
	d = __peek(str__);
	if (0!=((((__peek(size__))<(1))?-1:0))) {
		Sys__error(12);
	}

	max = __peek(size__);
	l = String__length(__this);
	if (0!=((((l)<((max-1)))?-1:0))) {
		__poke(__peek(str__)+l, c);
		__poke(__peek(str__)+l+1, 0);
		return __this;
	}

	nl = (l*2)+4;
	b = Array__new(nl+1);
	i = 0;
	while (-1==((((i)<(l))?-1:0))) {
		__poke(b+i, __peek(d+i));
		i = i+1;
	}
	__poke(b+l, c);
	__poke(b+l+1, 0);
	Array__dispose(__peek(str__));
	__poke(size__, nl);
	__poke(str__, b);
	return __this;
}
var String__eraseLastChar(var __this) {
	var l = 0;
	var s = 0;
	s = __peek(str__);
	l = String__length(__this);
	if (0!=((((l)>(0))?-1:0))) {
		__poke(s+l-1, 0);
	}

	return 0;
}
var String__intValue(var __this) {
	var v = 0;
	var s = 0;
	var d = 0;
	var i = 0;
	var o = 0;
	o = __peek(str__);
	v = 0;
	s = 1;
	d = __peek(o+0);
	i = 1;
	if (0!=((((d)==(45))?-1:0))) {
		s = -1;
		d = __peek(o+i);
		i = i+1;
	}

	while (-1==(((((d)>(47))?-1:0))&((((d)<(58))?-1:0)))) {
		v = v*10;
		v = v+d-48;
		d = __peek(o+i);
		i = i+1;
	}
	return v*s;
}
var String__setInt(var __this, var j) {
	var n = 0;
	var k = 0;
	var s = 0;
	var p = 0;
	p = 0;
	s = __this;
	String__setCharAt(s, 0, 0);
	if (0!=((((j)<(0))?-1:0))) {
		j = -j;
		s = String__appendString(s, Memory__getString(String___str0));
	}

	n = 10000;

 	if (sizeof(var) == 8) {
 		n = n * n * n * n * 100;
 	} else if (sizeof(var) == 4) {
 		n = n * n * 10; 
 	} 

	while (-1==((((n)>(0))?-1:0))) {
		k = j/n;
		if (0!=((((k)>(0))?-1:0))) {
			p = -1;
		}

		if (0!=(p)) {
			s = String__appendChar(s, k+48);
		}

		j = Math__rem(j, n);
		n = n/10;
	}
	if (0!=((((p)==(0))?-1:0))) {
		s = String__appendChar(s, 48);
	}

	return __this;
}
var String__appendFromNative(var __this, var native) {
	var l = 0;
	var i = 0;
	var c = 0;
	var n = 0;
	var s = 0;
	s = __this;
	n = native;
	i = 0;
 
#ifdef JACK_HACK 
 	n = 0;
 	l = n;
#else
#ifdef _WIN32
 	l = (var)wcslen((wchar_t*)n);
#else
	l = strlen((char*)n);
#endif 
#endif 

	while (-1==((((i)<(l))?-1:0))) {
 
#ifdef JACK_HACK 
 	c = 0;
#else
#ifdef _WIN32
 		c = (var)((wchar_t*)n)[i];// FIXME UTF16
#else
 		c = (var)(((char*)n)[i]) & 255; // FIXME UTF8
#endif 
#endif 

		s = String__appendChar(s, c);
		i = i+1;
	}
	return __this;
}
var String__ord(var s) {
	return __peek(s+0);
}
var String__backSpace() {
	return 8;
}
var String__doubleQuote() {
	return 34;
}
var String__newLine() {
	return 10;
}
var String__copy(var __this) {
	var s = 0;
	var j = 0;
	var l = 0;
	j = 0;
	l = String__length(__this);
	s = String__new(l+1);
	while (-1==((((j)<(l))?-1:0))) {
		s = String__appendChar(s, String__charAt(__this, j));
		j = j+1;
	}
	return s;
}
var String__appendString(var __this, var p) {
	var j = 0;
	var l = 0;
	var s = 0;
	s = __this;
	j = 0;
	l = String__length(p);
	while (-1==((((j)<(l))?-1:0))) {
		s = String__appendChar(s, String__charAt(p, j));
		j = j+1;
	}
	return __this;
}
var String__compare(var __this, var s) {
	var p = 0;
	var j = 0;
	var lp = 0;
	var ls = 0;
	var r = 0;
	p = __this;
	lp = String__length(p);
	ls = String__length(s);
	j = 0;
	while (-1==(((((j)<(lp))?-1:0))&((((j)<(ls))?-1:0)))) {
		r = String__charAt(p, j)-String__charAt(s, j);
		if (0!=(r)) {
			return r;
		}

		j = j+1;
	}
	return lp-ls;
}
#undef str__
#undef size__
#endif

#ifdef JACK_IMPLEMENTATION
var Memory___str0[] = {65,108,108,111,99,32,97,114,101,110,97,32,105,115,32,110,111,116,32,102,114,101,101,33,32,112,61,0};
var Memory___str1[] = {32,112,91,48,93,61,0};
var Memory___str2[] = {85,110,101,115,112,101,99,101,100,32,112,48,32,112,61,0};
var Memory___str3[] = {83,105,122,101,32,116,111,111,32,115,109,97,108,108,32,105,110,32,97,108,108,111,99,33,0};
var Memory___str4[] = {69,114,114,111,114,32,105,110,32,97,108,108,111,99,33,0};
var Memory___str5[] = {32,112,61,0};
var Memory___str6[] = {32,97,114,101,110,97,61,0};
var Memory___str7[] = {32,101,110,100,61,0};
var Memory___str8[] = {32,112,91,48,93,61,0};
var Memory___str9[] = {69,114,114,111,114,32,105,110,32,97,108,108,111,99,33,0};
var Memory___str10[] = {32,112,91,48,93,61,0};
var Memory___str11[] = {32,97,114,101,110,97,61,0};
var Memory___str12[] = {32,97,115,105,122,101,61,0};
var Memory___str13[] = {100,101,65,108,108,111,99,32,101,114,114,111,114,58,32,97,114,101,110,97,61,0};
var Memory___str14[] = {32,112,61,0};
var Memory___str15[] = {69,114,114,111,114,32,105,110,32,100,101,65,108,108,111,99,33,0};
var Memory___str16[] = {32,97,115,105,122,101,61,0};
var Memory___arena = 0;
var Memory___asize = 0;
var Memory___freep = 0;
var Memory___mem = 0;
var Memory___keyread = 0;
var Memory__init() {
	var i = 0;
	Memory___mem = 0;
	Memory___keyread = 0;
 #ifndef JACK_HACK
 	return 0;
 #endif
	i = 0;
	while (-1==((((i)<(24576))?-1:0))) {
		Memory__poke(i, 0);
		i = i+1;
	}
	Memory___arena = Math__abs(__peek(Memory___mem+0));
	Memory___arena = 0;
	Memory___asize = 16384;
	__poke(Memory___arena+0, Memory___asize);
	Memory___freep = Memory___arena;
	return 0;
}
var Memory__deInit() {
	return 0;
}
var Memory__peek(var addr) {
	if (0!=((((addr)<(0))?-1:0))) {
		Sys__error(27);
	}

	if (0!=((((addr)>(24576))?-1:0))) {
		Sys__error(28);
	}

	if (0!=((((addr)==(24576))?-1:0))) {
		Memory___keyread = -1;
		addr = addr;
	}

 	if (addr == 24576) {
 		Screen__processEvents(0);
	}
 	return Memory__memory[addr];
	return __peek(Memory___mem+addr);
}
var Memory__poke(var addr, var value) {
	if (0!=((((addr)<(0))?-1:0))) {
		Sys__error(29);
	}

	if (0!=((((addr)>(24576))?-1:0))) {
		Sys__error(30);
	}

	if (0!=(((((addr)>(16383))?-1:0))&((((addr)<(24576))?-1:0)))) {
		if (0!=(Memory___keyread)) {
			__poke(Memory___mem+24576, 0);
			Memory___keyread = 0;
		}

		Screen__refresh();
	}

 	return Memory__memory[addr] = value;
	__poke(Memory___mem+addr, value);
	return 0;
}
var Memory__defrag() {
	var p = 0;
	var q = 0;
	var end = 0;
	end = Memory___arena+Memory___asize;
	p = Memory___arena;
	while (-1==((((p)<(end))?-1:0))) {
		if (0!=((((__peek(p+0))>(0))?-1:0))) {
			q = p+__peek(p+0);
			while (-1==(((((q)<(end))?-1:0))&((((__peek(q+0))>(0))?-1:0)))) {
				__poke(p+0, q-p);
				q = q+__peek(q+0);
			}
		} else {
			if (0!=((((__peek(p+0))==(0))?-1:0))) {
				return 0;
			}

		}
		p = p+Math__abs(__peek(p+0));
	}
	return 0;
}
var Memory__checkEmpty() {
	var ok = 0;
	var p = 0;
	var end = 0;
 	return -1;
	end = Memory___arena+Memory___asize;
	p = Memory___arena;
	ok = -1;
	while (-1==((((p)<(end))?-1:0))) {
		if (0!=((((__peek(p+0))<(0))?-1:0))) {
			Output__printString(Memory__getString(Memory___str0));
			Output__printInt(p);
			Output__printString(Memory__getString(Memory___str1));
			Output__printInt(__peek(p+0));
			Output__println();
			ok = 0;
		} else {
			if (0!=((((__peek(p+0))==(0))?-1:0))) {
				Output__printString(Memory__getString(Memory___str2));
				Output__printInt(p);
				Output__println();
				return 0;
			}

		}
		p = p+Math__abs(__peek(p+0));
	}
	return ok;
}
var Memory__alloc(var size) {
	var p = 0;
	var end = 0;
	var k = 0;
	var tries = 0;
	var i = 0;
	var j = 0;
	var doit = 0;
 #ifndef JACK_HACK
 	p = (var) malloc(sizeof(var)* (size+1));
 	((var*)p)[0] = -(size+1);
 	return ((var)(((var*)p+1))) / sizeof(var);
 #endif
	tries = 0;
	i = 0;
	j = 0;
	if (0!=((((size)<(1))?-1:0))) {
		Output__printString(Memory__getString(Memory___str3));
		Output__printInt(size);
		Output__println();
		Sys__error(24);
		return 0;
	}

	while (-1==((((tries)<(3))?-1:0))) {
		end = Memory___arena+Memory___asize;
		p = Memory___freep;
		doit = -1;
		while (-1==(doit|((((((((p)==(Memory___freep))?-1:0)))==(0))?-1:0)))) {
			doit = 0;
			if (0!=((((__peek(p+0))>(size))?-1:0))) {
				if (0!=(((((size+1))==(__peek(p+0)))?-1:0))) {
					__poke(p+0, -__peek(p+0));
				} else {
					k = __peek(p+0);
					__poke(p+0, -(size+1));
					__poke(p+size+1, (k-size)-1);
				}
				Memory___freep = p;
				return p+1;
			}

			p = p+Math__abs(__peek(p+0));
			if (0!=((((p)==(end))?-1:0))) {
				p = Memory___arena;
			}

			if (0!=(((((p)<(Memory___arena))?-1:0))|((((p)>((end-1)))?-1:0))|((((__peek(p+0))==(0))?-1:0)))) {
				Output__printString(Memory__getString(Memory___str4));
				Output__printString(Memory__getString(Memory___str5));
				Output__printInt(p);
				Output__printString(Memory__getString(Memory___str6));
				Output__printInt(Memory___arena);
				Output__printString(Memory__getString(Memory___str7));
				Output__printInt(end);
				Output__printString(Memory__getString(Memory___str8));
				Output__printInt(__peek(p+0));
				Output__println();
				Sys__error(23);
			}

		}
		if (0!=((((tries)==(0))?-1:0))) {
			Memory__defrag();
		} else {
			k = Memory___asize;
			Memory___asize = Memory___asize+(size*8)+64;
			i = 0;
			j = Memory___arena+k;
			while (-1==((((i)<(j))?-1:0))) {
				i = i+1;
			}
			__poke(end+0, Memory___asize-k);
			__poke(Memory___arena+Memory___asize-1, 0);
		}
		tries = tries+1;
	}
	Output__printString(Memory__getString(Memory___str9));
	Output__println();
	Sys__error(26);
	return 0;
}
var Memory__log(var msg, var p, var q) {
	return 0;
	Output__printString(msg);
	Output__printInt(p);
	Output__printString(Memory__getString(Memory___str10));
	Output__printInt(q);
	Output__printString(Memory__getString(Memory___str11));
	Output__printInt(Memory___arena);
	Output__printString(Memory__getString(Memory___str12));
	Output__printInt(Memory___asize);
}
var Memory__deAlloc(var p) {
	var pi = 0;
 #ifndef JACK_HACK
 	free(((var*)(p* sizeof(var)))-1);
 	return 0;
 #endif
	if (0!=((((p)<(Memory___arena))?-1:0))) {
		Output__printString(Memory__getString(Memory___str13));
		Output__printInt(Memory___arena);
		Output__printString(Memory__getString(Memory___str14));
		Output__printInt(p);
		Output__println();
		Sys__error(25);
		return 0;
	}

	pi = p;
	if (0!=(((((pi)<(Memory___arena))?-1:0))|(((((Memory___arena+Memory___asize))<(pi))?-1:0))|((((__peek(Memory___mem+pi-1))>((-1)))?-1:0)))) {
		Output__println();
		Output__printInt(Memory___arena);
		Output__printString(Memory__getString(Memory___str15));
		Output__printInt(pi);
		Output__printString(Memory__getString(Memory___str16));
		Output__printInt(Memory___asize);
		Output__println();
		return 0;
	}

	pi = pi-1;
	Memory__poke(pi, -Memory__peek(pi));
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Keyboard__exit() {
 #ifndef _WIN32
 	Keyboard__term.c_lflag |= (ICANON | ECHO);
 	tcsetattr(0, TCSANOW, &Keyboard__term);
	exit(0);
 #endif
	return 0;
}
var Keyboard__exits(var a, var b) {
	Keyboard__exit();
	return 0;
}
var Keyboard__init() {
 
#ifndef _WIN32
 	struct sigaction act;
 	memset(&act, 0, sizeof(act));
 	sigemptyset(&act.sa_mask);
 	atexit((void(*)())Keyboard__exits);
 	tcgetattr(0, &Keyboard__term);
 	act.sa_handler = ((void(*)(int))Keyboard__exits);
 	act.sa_flags = 0;
 	sigaction(SIGINT, &act, NULL); 
 	sigaction(SIGTSTP, &act, NULL); 
 	Keyboard__term.c_lflag &= ~(ICANON);
 	tcsetattr(0, TCSANOW, &Keyboard__term);
#endif

	return 0;
}
var Keyboard__deInit() {
	return 0;
}
var Keyboard__keyPressed() {
	var c = 0;
	c = Keyboard__getKey();
	if (0!=(c)) {
		Memory__poke(24576, c);
	}

	return Memory__peek(24576);
}
var Keyboard__getKey() {
	var x = 0;
	x = Keyboard__getChar();
	if (0!=((((x)==(10))?-1:0))) {
		return 128;
	}

	if (0!=((((x)==(127))?-1:0))) {
		return 129;
	}

	if (0!=((((x)==(27))?-1:0))) {
		x = Keyboard__getChar();
		if (0!=((((x)==(0))?-1:0))) {
			return 140;
		}

		if (0!=((((x)==(91))?-1:0))) {
			x = Keyboard__getChar();
			if (0!=((((x)==(65))?-1:0))) {
				x = 131;
			}

			if (0!=((((x)==(66))?-1:0))) {
				x = 133;
			}

			if (0!=((((x)==(67))?-1:0))) {
				x = 132;
			}

			if (0!=((((x)==(68))?-1:0))) {
				x = 130;
			}

			if (0!=((((x)==(53))?-1:0))) {
				x = Keyboard__getChar();
				if (0!=((((x)==(126))?-1:0))) {
					x = 136;
				}

			}

			if (0!=((((x)==(54))?-1:0))) {
				x = Keyboard__getChar();
				if (0!=((((x)==(126))?-1:0))) {
					x = 137;
				}

			}

			if (0!=((((x)==(50))?-1:0))) {
				x = Keyboard__getChar();
				if (0!=((((x)==(126))?-1:0))) {
					x = 138;
				}

				if (0!=((((x)==(52))?-1:0))) {
					x = Keyboard__getChar();
					x = (x-125)+150;
				}

			}

			if (0!=((((x)==(51))?-1:0))) {
				x = Keyboard__getChar();
				if (0!=((((x)==(126))?-1:0))) {
					x = 139;
				}

			}

			if (0!=((((x)==(91))?-1:0))) {
				x = Keyboard__getChar();
				if (0!=((((x)==(70))?-1:0))) {
					x = 135;
				}

			}

			if (0!=((((x)==(91))?-1:0))) {
				x = Keyboard__getChar();
				if (0!=((((x)==(72))?-1:0))) {
					x = 134;
				}

			}

		} else {
			if (0!=((((x)==(79))?-1:0))) {
				x = Keyboard__getChar();
				x = (x-80)+141;
			}

		}
	}

	return x;
}
var Keyboard__getChar() {
	var x = 0;
 
#ifndef _WIN32
 	//fd_set rd;
 	int flags;
 	flags = fcntl(STDIN_FILENO, F_GETFL, 0);
 	fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
 	//struct timeval tv = {0};
 	//tv.tv_usec = 1000;
 	//FD_ZERO(&rd);
 	//FD_SET(STDIN_FILENO, &rd);
 	//x = select(1, &rd, NULL, NULL, &tv);
	x = getchar();
 	//ioctl(STDIN_FILENO, FIONREAD, ((int*)&x)); // crash on linux 64bit
 	if (x > 0) {
 		x = x;
 	} else {
 		x = 0;
 	}
 	//printf("KKEY %d\n",(int) x);
#else
 	x = 0;
 	if (_kbhit()) {
 		x = _getch();
 	}
#endif

	return x;
}
var Keyboard__readChar() {
	var k = 0;
	k = Keyboard__keyPressed();
	while (-1==((((k)==(0))?-1:0))) {
		Sys__wait(50);
		k = Keyboard__keyPressed();
	}
	Memory__poke(24576, 0);
	while (-1==(Keyboard__keyPressed())) {
		Sys__wait(50);
	}
	Memory__poke(24576, 0);
	return k;
}
var Keyboard__readLine(var message) {
	var s = 0;
	var k = 0;
	s = String__new(256);
	Output__printString(message);
	k = Keyboard__readChar();
	while (-1==((((((((k)==(10))?-1:0)))==(0))?-1:0))) {
		s = String__appendChar(s, k);
		k = Keyboard__readChar();
	}
	return s;
}
var Keyboard__readInt(var message) {
	var k = 0;
	var i = 0;
	Output__printString(message);
	i = 0;
	k = Keyboard__readChar();
	while (-1==(((((k)>(47))?-1:0))&((((k)<(58))?-1:0)))) {
		i = (k-48)+(i*10);
		k = Keyboard__readChar();
	}
	return i;
}
var Keyboard__NEWLINE() {
	return 128;
}
var Keyboard__BACKSPACE() {
	return 129;
}
var Keyboard__LEFT_ARROW() {
	return 130;
}
var Keyboard__UP_ARROW() {
	return 131;
}
var Keyboard__RIGHT_ARROW() {
	return 132;
}
var Keyboard__DOWN_ARROW() {
	return 133;
}
var Keyboard__HOME() {
	return 134;
}
var Keyboard__END() {
	return 135;
}
var Keyboard__PAGE_UP() {
	return 136;
}
var Keyboard__PAGE_DOWN() {
	return 137;
}
var Keyboard__INSERT() {
	return 138;
}
var Keyboard__DELETE() {
	return 139;
}
var Keyboard__ESC() {
	return 140;
}
var Keyboard__F1() {
	return 141;
}
var Keyboard__F2() {
	return 142;
}
var Keyboard__F3() {
	return 143;
}
var Keyboard__F4() {
	return 144;
}
var Keyboard__F5() {
	return 145;
}
var Keyboard__F6() {
	return 146;
}
var Keyboard__F7() {
	return 147;
}
var Keyboard__F8() {
	return 148;
}
var Keyboard__F9() {
	return 149;
}
var Keyboard__F10() {
	return 150;
}
var Keyboard__F11() {
	return 151;
}
var Keyboard__F12() {
	return 152;
}
#endif

#ifdef JACK_IMPLEMENTATION
var GuiDigit__get_x_size() {
	return 16;
}
var GuiDigit__get_y_size() {
	return 14;
}
var GuiDigit__draw_one(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+0, 48);
	Memory__poke(base_address+32, 48);
	Memory__poke(base_address+64, 60);
	Memory__poke(base_address+96, 60);
	Memory__poke(base_address+128, 48);
	Memory__poke(base_address+160, 48);
	Memory__poke(base_address+192, 48);
	Memory__poke(base_address+224, 48);
	Memory__poke(base_address+256, 48);
	Memory__poke(base_address+288, 48);
	Memory__poke(base_address+320, 48);
	Memory__poke(base_address+352, 48);
	Memory__poke(base_address+384, 252);
	Memory__poke(base_address+416, 252);
	return 0;
}
var GuiDigit__draw_two(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+0, 252);
	Memory__poke(base_address+32, 252);
	Memory__poke(base_address+64, 771);
	Memory__poke(base_address+96, 771);
	Memory__poke(base_address+128, 768);
	Memory__poke(base_address+160, 768);
	Memory__poke(base_address+192, 240);
	Memory__poke(base_address+224, 240);
	Memory__poke(base_address+256, 12);
	Memory__poke(base_address+288, 12);
	Memory__poke(base_address+320, 3);
	Memory__poke(base_address+352, 3);
	Memory__poke(base_address+384, 1023);
	Memory__poke(base_address+416, 1023);
	return 0;
}
var GuiDigit__draw_three(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+0, 1023);
	Memory__poke(base_address+32, 1023);
	Memory__poke(base_address+64, 768);
	Memory__poke(base_address+96, 768);
	Memory__poke(base_address+128, 192);
	Memory__poke(base_address+160, 192);
	Memory__poke(base_address+192, 240);
	Memory__poke(base_address+224, 240);
	Memory__poke(base_address+256, 768);
	Memory__poke(base_address+288, 768);
	Memory__poke(base_address+320, 771);
	Memory__poke(base_address+352, 771);
	Memory__poke(base_address+384, 252);
	Memory__poke(base_address+416, 252);
	return 0;
}
var GuiDigit__draw_four(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+0, 192);
	Memory__poke(base_address+32, 192);
	Memory__poke(base_address+64, 240);
	Memory__poke(base_address+96, 240);
	Memory__poke(base_address+128, 204);
	Memory__poke(base_address+160, 204);
	Memory__poke(base_address+192, 195);
	Memory__poke(base_address+224, 195);
	Memory__poke(base_address+256, 1023);
	Memory__poke(base_address+288, 1023);
	Memory__poke(base_address+320, 192);
	Memory__poke(base_address+352, 192);
	Memory__poke(base_address+384, 192);
	Memory__poke(base_address+416, 192);
	return 0;
}
var GuiDigit__draw_five(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+0, 1023);
	Memory__poke(base_address+32, 1023);
	Memory__poke(base_address+64, 3);
	Memory__poke(base_address+96, 3);
	Memory__poke(base_address+128, 255);
	Memory__poke(base_address+160, 255);
	Memory__poke(base_address+192, 768);
	Memory__poke(base_address+224, 768);
	Memory__poke(base_address+256, 768);
	Memory__poke(base_address+288, 768);
	Memory__poke(base_address+320, 771);
	Memory__poke(base_address+352, 771);
	Memory__poke(base_address+384, 252);
	Memory__poke(base_address+416, 252);
	return 0;
}
var GuiDigit__draw_six(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+0, 1008);
	Memory__poke(base_address+32, 1008);
	Memory__poke(base_address+64, 12);
	Memory__poke(base_address+96, 12);
	Memory__poke(base_address+128, 3);
	Memory__poke(base_address+160, 3);
	Memory__poke(base_address+192, 255);
	Memory__poke(base_address+224, 255);
	Memory__poke(base_address+256, 771);
	Memory__poke(base_address+288, 771);
	Memory__poke(base_address+320, 771);
	Memory__poke(base_address+352, 771);
	Memory__poke(base_address+384, 252);
	Memory__poke(base_address+416, 252);
	return 0;
}
var GuiDigit__draw_seven(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+0, 1023);
	Memory__poke(base_address+32, 1023);
	Memory__poke(base_address+64, 768);
	Memory__poke(base_address+96, 768);
	Memory__poke(base_address+128, 192);
	Memory__poke(base_address+160, 192);
	Memory__poke(base_address+192, 48);
	Memory__poke(base_address+224, 48);
	Memory__poke(base_address+256, 12);
	Memory__poke(base_address+288, 12);
	Memory__poke(base_address+320, 12);
	Memory__poke(base_address+352, 12);
	Memory__poke(base_address+384, 12);
	Memory__poke(base_address+416, 12);
	return 0;
}
var GuiDigit__draw_eight(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+0, 252);
	Memory__poke(base_address+32, 252);
	Memory__poke(base_address+64, 771);
	Memory__poke(base_address+96, 771);
	Memory__poke(base_address+128, 771);
	Memory__poke(base_address+160, 771);
	Memory__poke(base_address+192, 252);
	Memory__poke(base_address+224, 252);
	Memory__poke(base_address+256, 771);
	Memory__poke(base_address+288, 771);
	Memory__poke(base_address+320, 771);
	Memory__poke(base_address+352, 771);
	Memory__poke(base_address+384, 252);
	Memory__poke(base_address+416, 252);
	return 0;
}
var GuiDigit__draw_nine(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+0, 252);
	Memory__poke(base_address+32, 252);
	Memory__poke(base_address+64, 771);
	Memory__poke(base_address+96, 771);
	Memory__poke(base_address+128, 771);
	Memory__poke(base_address+160, 771);
	Memory__poke(base_address+192, 1020);
	Memory__poke(base_address+224, 1020);
	Memory__poke(base_address+256, 768);
	Memory__poke(base_address+288, 768);
	Memory__poke(base_address+320, 192);
	Memory__poke(base_address+352, 192);
	Memory__poke(base_address+384, 63);
	Memory__poke(base_address+416, 63);
	return 0;
}
var GuiDigit__draw_zero(var dblcol, var row) {
	var base_address = 0;
	base_address = 16384+(32*row)+dblcol;
	Memory__poke(base_address+0, 252);
	Memory__poke(base_address+32, 252);
	Memory__poke(base_address+64, 771);
	Memory__poke(base_address+96, 771);
	Memory__poke(base_address+128, 963);
	Memory__poke(base_address+160, 963);
	Memory__poke(base_address+192, 819);
	Memory__poke(base_address+224, 819);
	Memory__poke(base_address+256, 783);
	Memory__poke(base_address+288, 783);
	Memory__poke(base_address+320, 771);
	Memory__poke(base_address+352, 771);
	Memory__poke(base_address+384, 252);
	Memory__poke(base_address+416, 252);
	return 0;
}
var GuiDigit__blank(var dblcol, var row) {
	var x1 = 0;
	var y1 = 0;
	var x2 = 0;
	var y2 = 0;
	x1 = dblcol*16;
	y1 = row;
	x2 = x1+15;
	y2 = y1+186;
	Screen__setColor(0);
	Screen__drawRectangle(x1, y1, x2, y2);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Util__mod(var a, var b) {
	var div = 0;
	div = a/b;
	return a-(div*b);
}
var Util__xor(var a, var b) {
	return ~(a&b)&(a|b);
}
#endif

#ifdef JACK_IMPLEMENTATION
var Main___str0[] = {67,104,111,111,115,101,32,108,101,118,101,108,58,32,101,97,115,121,40,49,41,44,32,109,101,100,105,117,109,40,50,41,44,32,104,97,114,100,40,51,41,44,32,111,114,32,114,97,110,100,111,109,40,52,41,32,45,32,0};
var Main__main() {
	var game = 0;
	var str = 0;
	StartupScreen__show_title_screen();
	Output__moveCursor(22, 0);
	str = Memory__getString(Main___str0);
	Output__printString(str);
	game = GameBoard__new();
	GameBoard__waitForDifficultyChoice(game);
	GameBoard__initGameScreen(game);
	GameBoard__run(game);
	GameBoard__dispose(game);
	return 0;
}
#endif

