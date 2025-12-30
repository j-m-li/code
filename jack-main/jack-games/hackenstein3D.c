
#ifndef var
#define JACK_HACK
#define var short
#define __poke Memory__poke
#define __peek Memory__peek
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

#ifndef JACK_Walls_H
#define JACK_Walls_H
var Walls__init();
var Walls__generate(var playerLocation, var wallDistances, var wallPatterns);
var Walls__untarget();
var Walls__paths();
var Walls__targetInSight();
var Walls__atExit(var playerRoom);
var Walls__cleanup();
var Walls__setupTrigTables();
#endif


#if 0

#endif

#ifndef JACK_Player_H
#define JACK_Player_H
var Player__init(var xR, var xP, var yR, var yP, var o, var pathsRef);
var Player__reLocate(var steps);
var Player__reOrient(var rot);
var Player__getLocation(var locArray);
var Player__roomNum();
var Player__cleanup();
#endif


#if 0

#endif

#ifndef JACK_Display_H
#define JACK_Display_H
var Display__init();
var Display__walls(var wallDistances, var wallPatterns);
var Display__scores(var targets, var steps);
var Display__startUp();
var Display__splash_screen(var line1, var line2);
var Display__printString(var r, var c, var s);
var Display__cleanup();
var Display__drawSightClear();
var Display__drawSightFired();
var Display__drawPistolClear();
var Display__drawPistolFired();
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
var Walls___xWalls = 0;
var Walls___yWalls = 0;
var Walls___allowedPaths = 0;
var Walls___exit = 0;
var Walls___patterns = 0;
var Walls___targetVisible = 0;
var Walls___targetWallDirection = 0;
var Walls___targetWallNum = 0;
var Walls___tanTable = 0;
var Walls___atanTable = 0;
var Walls___maxDelta = 0;
var Walls__init() {
	Walls___exit = 2;
	Walls___targetVisible = 0;
	Walls__setupTrigTables();
	Walls___xWalls = Array__new(72);
	__poke(Walls___xWalls+0, 1);
	__poke(Walls___xWalls+1, 1);
	__poke(Walls___xWalls+2, 5);
	__poke(Walls___xWalls+3, 1);
	__poke(Walls___xWalls+4, 1);
	__poke(Walls___xWalls+5, 1);
	__poke(Walls___xWalls+6, 1);
	__poke(Walls___xWalls+7, 1);
	__poke(Walls___xWalls+8, 0);
	__poke(Walls___xWalls+9, 3);
	__poke(Walls___xWalls+10, 2);
	__poke(Walls___xWalls+11, 0);
	__poke(Walls___xWalls+12, 2);
	__poke(Walls___xWalls+13, 0);
	__poke(Walls___xWalls+14, 0);
	__poke(Walls___xWalls+15, 0);
	__poke(Walls___xWalls+16, 0);
	__poke(Walls___xWalls+17, 0);
	__poke(Walls___xWalls+18, 0);
	__poke(Walls___xWalls+19, 0);
	__poke(Walls___xWalls+20, 0);
	__poke(Walls___xWalls+21, 0);
	__poke(Walls___xWalls+22, 2);
	__poke(Walls___xWalls+23, 0);
	__poke(Walls___xWalls+24, 0);
	__poke(Walls___xWalls+25, 0);
	__poke(Walls___xWalls+26, 2);
	__poke(Walls___xWalls+27, 0);
	__poke(Walls___xWalls+28, 0);
	__poke(Walls___xWalls+29, 3);
	__poke(Walls___xWalls+30, 0);
	__poke(Walls___xWalls+31, 2);
	__poke(Walls___xWalls+32, 0);
	__poke(Walls___xWalls+33, 2);
	__poke(Walls___xWalls+34, 0);
	__poke(Walls___xWalls+35, 0);
	__poke(Walls___xWalls+36, 0);
	__poke(Walls___xWalls+37, 0);
	__poke(Walls___xWalls+38, 0);
	__poke(Walls___xWalls+39, 3);
	__poke(Walls___xWalls+40, 0);
	__poke(Walls___xWalls+41, 0);
	__poke(Walls___xWalls+42, 0);
	__poke(Walls___xWalls+43, 0);
	__poke(Walls___xWalls+44, 2);
	__poke(Walls___xWalls+45, 2);
	__poke(Walls___xWalls+46, 0);
	__poke(Walls___xWalls+47, 0);
	__poke(Walls___xWalls+48, 2);
	__poke(Walls___xWalls+49, 0);
	__poke(Walls___xWalls+50, 0);
	__poke(Walls___xWalls+51, 0);
	__poke(Walls___xWalls+52, 2);
	__poke(Walls___xWalls+53, 2);
	__poke(Walls___xWalls+54, 2);
	__poke(Walls___xWalls+55, 2);
	__poke(Walls___xWalls+56, 0);
	__poke(Walls___xWalls+57, 2);
	__poke(Walls___xWalls+58, 0);
	__poke(Walls___xWalls+59, 0);
	__poke(Walls___xWalls+60, 2);
	__poke(Walls___xWalls+61, 2);
	__poke(Walls___xWalls+62, 2);
	__poke(Walls___xWalls+63, 0);
	__poke(Walls___xWalls+64, 1);
	__poke(Walls___xWalls+65, 1);
	__poke(Walls___xWalls+66, 1);
	__poke(Walls___xWalls+67, -4);
	__poke(Walls___xWalls+68, 1);
	__poke(Walls___xWalls+69, 1);
	__poke(Walls___xWalls+70, 1);
	__poke(Walls___xWalls+71, 1);
	Walls___yWalls = Array__new(72);
	__poke(Walls___yWalls+0, 1);
	__poke(Walls___yWalls+1, 1);
	__poke(Walls___yWalls+2, 1);
	__poke(Walls___yWalls+3, 1);
	__poke(Walls___yWalls+4, 1);
	__poke(Walls___yWalls+5, 1);
	__poke(Walls___yWalls+6, 1);
	__poke(Walls___yWalls+7, -4);
	__poke(Walls___yWalls+8, 0);
	__poke(Walls___yWalls+9, 2);
	__poke(Walls___yWalls+10, 2);
	__poke(Walls___yWalls+11, 2);
	__poke(Walls___yWalls+12, 0);
	__poke(Walls___yWalls+13, 2);
	__poke(Walls___yWalls+14, 0);
	__poke(Walls___yWalls+15, 0);
	__poke(Walls___yWalls+16, 0);
	__poke(Walls___yWalls+17, 2);
	__poke(Walls___yWalls+18, 2);
	__poke(Walls___yWalls+19, 0);
	__poke(Walls___yWalls+20, 2);
	__poke(Walls___yWalls+21, 2);
	__poke(Walls___yWalls+22, 2);
	__poke(Walls___yWalls+23, 0);
	__poke(Walls___yWalls+24, 2);
	__poke(Walls___yWalls+25, 0);
	__poke(Walls___yWalls+26, 0);
	__poke(Walls___yWalls+27, 2);
	__poke(Walls___yWalls+28, 2);
	__poke(Walls___yWalls+29, 2);
	__poke(Walls___yWalls+30, 2);
	__poke(Walls___yWalls+31, 0);
	__poke(Walls___yWalls+32, 2);
	__poke(Walls___yWalls+33, 0);
	__poke(Walls___yWalls+34, 0);
	__poke(Walls___yWalls+35, 0);
	__poke(Walls___yWalls+36, 0);
	__poke(Walls___yWalls+37, 0);
	__poke(Walls___yWalls+38, 2);
	__poke(Walls___yWalls+39, 0);
	__poke(Walls___yWalls+40, 0);
	__poke(Walls___yWalls+41, 2);
	__poke(Walls___yWalls+42, 2);
	__poke(Walls___yWalls+43, 0);
	__poke(Walls___yWalls+44, 0);
	__poke(Walls___yWalls+45, 0);
	__poke(Walls___yWalls+46, 0);
	__poke(Walls___yWalls+47, 0);
	__poke(Walls___yWalls+48, 0);
	__poke(Walls___yWalls+49, 0);
	__poke(Walls___yWalls+50, 0);
	__poke(Walls___yWalls+51, 2);
	__poke(Walls___yWalls+52, 2);
	__poke(Walls___yWalls+53, 0);
	__poke(Walls___yWalls+54, 0);
	__poke(Walls___yWalls+55, 0);
	__poke(Walls___yWalls+56, 0);
	__poke(Walls___yWalls+57, 0);
	__poke(Walls___yWalls+58, 2);
	__poke(Walls___yWalls+59, 0);
	__poke(Walls___yWalls+60, 2);
	__poke(Walls___yWalls+61, 0);
	__poke(Walls___yWalls+62, 0);
	__poke(Walls___yWalls+63, 0);
	__poke(Walls___yWalls+64, 1);
	__poke(Walls___yWalls+65, 1);
	__poke(Walls___yWalls+66, 1);
	__poke(Walls___yWalls+67, 1);
	__poke(Walls___yWalls+68, 1);
	__poke(Walls___yWalls+69, -4);
	__poke(Walls___yWalls+70, 1);
	__poke(Walls___yWalls+71, 1);
	Walls___allowedPaths = Array__new(256);
	__poke(Walls___allowedPaths+0, -1);
	__poke(Walls___allowedPaths+1, 0);
	__poke(Walls___allowedPaths+2, 0);
	__poke(Walls___allowedPaths+3, -1);
	__poke(Walls___allowedPaths+4, 0);
	__poke(Walls___allowedPaths+5, 0);
	__poke(Walls___allowedPaths+6, -1);
	__poke(Walls___allowedPaths+7, -1);
	__poke(Walls___allowedPaths+8, 0);
	__poke(Walls___allowedPaths+9, 0);
	__poke(Walls___allowedPaths+10, -1);
	__poke(Walls___allowedPaths+11, 0);
	__poke(Walls___allowedPaths+12, -1);
	__poke(Walls___allowedPaths+13, 0);
	__poke(Walls___allowedPaths+14, 0);
	__poke(Walls___allowedPaths+15, 0);
	__poke(Walls___allowedPaths+16, 0);
	__poke(Walls___allowedPaths+17, 0);
	__poke(Walls___allowedPaths+18, 0);
	__poke(Walls___allowedPaths+19, -1);
	__poke(Walls___allowedPaths+20, -1);
	__poke(Walls___allowedPaths+21, 0);
	__poke(Walls___allowedPaths+22, -1);
	__poke(Walls___allowedPaths+23, -1);
	__poke(Walls___allowedPaths+24, -1);
	__poke(Walls___allowedPaths+25, 0);
	__poke(Walls___allowedPaths+26, -1);
	__poke(Walls___allowedPaths+27, -1);
	__poke(Walls___allowedPaths+28, -1);
	__poke(Walls___allowedPaths+29, 0);
	__poke(Walls___allowedPaths+30, -1);
	__poke(Walls___allowedPaths+31, 0);
	__poke(Walls___allowedPaths+32, -1);
	__poke(Walls___allowedPaths+33, -1);
	__poke(Walls___allowedPaths+34, 0);
	__poke(Walls___allowedPaths+35, 0);
	__poke(Walls___allowedPaths+36, -1);
	__poke(Walls___allowedPaths+37, 0);
	__poke(Walls___allowedPaths+38, 0);
	__poke(Walls___allowedPaths+39, 0);
	__poke(Walls___allowedPaths+40, -1);
	__poke(Walls___allowedPaths+41, 0);
	__poke(Walls___allowedPaths+42, 0);
	__poke(Walls___allowedPaths+43, -1);
	__poke(Walls___allowedPaths+44, -1);
	__poke(Walls___allowedPaths+45, -1);
	__poke(Walls___allowedPaths+46, -1);
	__poke(Walls___allowedPaths+47, -1);
	__poke(Walls___allowedPaths+48, -1);
	__poke(Walls___allowedPaths+49, 0);
	__poke(Walls___allowedPaths+50, -1);
	__poke(Walls___allowedPaths+51, 0);
	__poke(Walls___allowedPaths+52, -1);
	__poke(Walls___allowedPaths+53, -1);
	__poke(Walls___allowedPaths+54, 0);
	__poke(Walls___allowedPaths+55, -1);
	__poke(Walls___allowedPaths+56, 0);
	__poke(Walls___allowedPaths+57, -1);
	__poke(Walls___allowedPaths+58, -1);
	__poke(Walls___allowedPaths+59, -1);
	__poke(Walls___allowedPaths+60, -1);
	__poke(Walls___allowedPaths+61, -1);
	__poke(Walls___allowedPaths+62, -1);
	__poke(Walls___allowedPaths+63, 0);
	__poke(Walls___allowedPaths+64, -1);
	__poke(Walls___allowedPaths+65, -1);
	__poke(Walls___allowedPaths+66, 0);
	__poke(Walls___allowedPaths+67, 0);
	__poke(Walls___allowedPaths+68, -1);
	__poke(Walls___allowedPaths+69, -1);
	__poke(Walls___allowedPaths+70, 0);
	__poke(Walls___allowedPaths+71, 0);
	__poke(Walls___allowedPaths+72, 0);
	__poke(Walls___allowedPaths+73, -1);
	__poke(Walls___allowedPaths+74, 0);
	__poke(Walls___allowedPaths+75, -1);
	__poke(Walls___allowedPaths+76, -1);
	__poke(Walls___allowedPaths+77, -1);
	__poke(Walls___allowedPaths+78, -1);
	__poke(Walls___allowedPaths+79, -1);
	__poke(Walls___allowedPaths+80, -1);
	__poke(Walls___allowedPaths+81, -1);
	__poke(Walls___allowedPaths+82, -1);
	__poke(Walls___allowedPaths+83, 0);
	__poke(Walls___allowedPaths+84, 0);
	__poke(Walls___allowedPaths+85, -1);
	__poke(Walls___allowedPaths+86, 0);
	__poke(Walls___allowedPaths+87, -1);
	__poke(Walls___allowedPaths+88, -1);
	__poke(Walls___allowedPaths+89, 0);
	__poke(Walls___allowedPaths+90, -1);
	__poke(Walls___allowedPaths+91, 0);
	__poke(Walls___allowedPaths+92, 0);
	__poke(Walls___allowedPaths+93, -1);
	__poke(Walls___allowedPaths+94, 0);
	__poke(Walls___allowedPaths+95, 0);
	__poke(Walls___allowedPaths+96, -1);
	__poke(Walls___allowedPaths+97, -1);
	__poke(Walls___allowedPaths+98, 0);
	__poke(Walls___allowedPaths+99, 0);
	__poke(Walls___allowedPaths+100, 0);
	__poke(Walls___allowedPaths+101, -1);
	__poke(Walls___allowedPaths+102, 0);
	__poke(Walls___allowedPaths+103, -1);
	__poke(Walls___allowedPaths+104, -1);
	__poke(Walls___allowedPaths+105, 0);
	__poke(Walls___allowedPaths+106, -1);
	__poke(Walls___allowedPaths+107, 0);
	__poke(Walls___allowedPaths+108, -1);
	__poke(Walls___allowedPaths+109, -1);
	__poke(Walls___allowedPaths+110, 0);
	__poke(Walls___allowedPaths+111, -1);
	__poke(Walls___allowedPaths+112, -1);
	__poke(Walls___allowedPaths+113, -1);
	__poke(Walls___allowedPaths+114, -1);
	__poke(Walls___allowedPaths+115, -1);
	__poke(Walls___allowedPaths+116, -1);
	__poke(Walls___allowedPaths+117, 0);
	__poke(Walls___allowedPaths+118, -1);
	__poke(Walls___allowedPaths+119, 0);
	__poke(Walls___allowedPaths+120, -1);
	__poke(Walls___allowedPaths+121, -1);
	__poke(Walls___allowedPaths+122, 0);
	__poke(Walls___allowedPaths+123, -1);
	__poke(Walls___allowedPaths+124, 0);
	__poke(Walls___allowedPaths+125, 0);
	__poke(Walls___allowedPaths+126, -1);
	__poke(Walls___allowedPaths+127, 0);
	__poke(Walls___allowedPaths+128, -1);
	__poke(Walls___allowedPaths+129, -1);
	__poke(Walls___allowedPaths+130, 0);
	__poke(Walls___allowedPaths+131, -1);
	__poke(Walls___allowedPaths+132, -1);
	__poke(Walls___allowedPaths+133, 0);
	__poke(Walls___allowedPaths+134, -1);
	__poke(Walls___allowedPaths+135, 0);
	__poke(Walls___allowedPaths+136, -1);
	__poke(Walls___allowedPaths+137, -1);
	__poke(Walls___allowedPaths+138, 0);
	__poke(Walls___allowedPaths+139, 0);
	__poke(Walls___allowedPaths+140, -1);
	__poke(Walls___allowedPaths+141, -1);
	__poke(Walls___allowedPaths+142, 0);
	__poke(Walls___allowedPaths+143, -1);
	__poke(Walls___allowedPaths+144, 0);
	__poke(Walls___allowedPaths+145, -1);
	__poke(Walls___allowedPaths+146, -1);
	__poke(Walls___allowedPaths+147, -1);
	__poke(Walls___allowedPaths+148, 0);
	__poke(Walls___allowedPaths+149, -1);
	__poke(Walls___allowedPaths+150, -1);
	__poke(Walls___allowedPaths+151, 0);
	__poke(Walls___allowedPaths+152, -1);
	__poke(Walls___allowedPaths+153, -1);
	__poke(Walls___allowedPaths+154, 0);
	__poke(Walls___allowedPaths+155, 0);
	__poke(Walls___allowedPaths+156, -1);
	__poke(Walls___allowedPaths+157, 0);
	__poke(Walls___allowedPaths+158, 0);
	__poke(Walls___allowedPaths+159, 0);
	__poke(Walls___allowedPaths+160, 0);
	__poke(Walls___allowedPaths+161, -1);
	__poke(Walls___allowedPaths+162, 0);
	__poke(Walls___allowedPaths+163, 0);
	__poke(Walls___allowedPaths+164, -1);
	__poke(Walls___allowedPaths+165, -1);
	__poke(Walls___allowedPaths+166, 0);
	__poke(Walls___allowedPaths+167, 0);
	__poke(Walls___allowedPaths+168, -1);
	__poke(Walls___allowedPaths+169, -1);
	__poke(Walls___allowedPaths+170, 0);
	__poke(Walls___allowedPaths+171, 0);
	__poke(Walls___allowedPaths+172, -1);
	__poke(Walls___allowedPaths+173, -1);
	__poke(Walls___allowedPaths+174, 0);
	__poke(Walls___allowedPaths+175, -1);
	__poke(Walls___allowedPaths+176, 0);
	__poke(Walls___allowedPaths+177, 0);
	__poke(Walls___allowedPaths+178, -1);
	__poke(Walls___allowedPaths+179, -1);
	__poke(Walls___allowedPaths+180, 0);
	__poke(Walls___allowedPaths+181, 0);
	__poke(Walls___allowedPaths+182, -1);
	__poke(Walls___allowedPaths+183, -1);
	__poke(Walls___allowedPaths+184, 0);
	__poke(Walls___allowedPaths+185, -1);
	__poke(Walls___allowedPaths+186, -1);
	__poke(Walls___allowedPaths+187, -1);
	__poke(Walls___allowedPaths+188, 0);
	__poke(Walls___allowedPaths+189, -1);
	__poke(Walls___allowedPaths+190, -1);
	__poke(Walls___allowedPaths+191, 0);
	__poke(Walls___allowedPaths+192, -1);
	__poke(Walls___allowedPaths+193, 0);
	__poke(Walls___allowedPaths+194, 0);
	__poke(Walls___allowedPaths+195, -1);
	__poke(Walls___allowedPaths+196, 0);
	__poke(Walls___allowedPaths+197, -1);
	__poke(Walls___allowedPaths+198, -1);
	__poke(Walls___allowedPaths+199, 0);
	__poke(Walls___allowedPaths+200, -1);
	__poke(Walls___allowedPaths+201, -1);
	__poke(Walls___allowedPaths+202, 0);
	__poke(Walls___allowedPaths+203, 0);
	__poke(Walls___allowedPaths+204, -1);
	__poke(Walls___allowedPaths+205, -1);
	__poke(Walls___allowedPaths+206, 0);
	__poke(Walls___allowedPaths+207, 0);
	__poke(Walls___allowedPaths+208, 0);
	__poke(Walls___allowedPaths+209, 0);
	__poke(Walls___allowedPaths+210, 0);
	__poke(Walls___allowedPaths+211, -1);
	__poke(Walls___allowedPaths+212, 0);
	__poke(Walls___allowedPaths+213, 0);
	__poke(Walls___allowedPaths+214, -1);
	__poke(Walls___allowedPaths+215, -1);
	__poke(Walls___allowedPaths+216, 0);
	__poke(Walls___allowedPaths+217, 0);
	__poke(Walls___allowedPaths+218, -1);
	__poke(Walls___allowedPaths+219, -1);
	__poke(Walls___allowedPaths+220, -1);
	__poke(Walls___allowedPaths+221, 0);
	__poke(Walls___allowedPaths+222, -1);
	__poke(Walls___allowedPaths+223, 0);
	__poke(Walls___allowedPaths+224, 0);
	__poke(Walls___allowedPaths+225, -1);
	__poke(Walls___allowedPaths+226, 0);
	__poke(Walls___allowedPaths+227, -1);
	__poke(Walls___allowedPaths+228, 0);
	__poke(Walls___allowedPaths+229, 0);
	__poke(Walls___allowedPaths+230, -1);
	__poke(Walls___allowedPaths+231, -1);
	__poke(Walls___allowedPaths+232, 0);
	__poke(Walls___allowedPaths+233, -1);
	__poke(Walls___allowedPaths+234, -1);
	__poke(Walls___allowedPaths+235, -1);
	__poke(Walls___allowedPaths+236, 0);
	__poke(Walls___allowedPaths+237, -1);
	__poke(Walls___allowedPaths+238, -1);
	__poke(Walls___allowedPaths+239, -1);
	__poke(Walls___allowedPaths+240, 0);
	__poke(Walls___allowedPaths+241, 0);
	__poke(Walls___allowedPaths+242, -1);
	__poke(Walls___allowedPaths+243, -1);
	__poke(Walls___allowedPaths+244, 0);
	__poke(Walls___allowedPaths+245, 0);
	__poke(Walls___allowedPaths+246, -1);
	__poke(Walls___allowedPaths+247, -1);
	__poke(Walls___allowedPaths+248, 0);
	__poke(Walls___allowedPaths+249, 0);
	__poke(Walls___allowedPaths+250, -1);
	__poke(Walls___allowedPaths+251, -1);
	__poke(Walls___allowedPaths+252, 0);
	__poke(Walls___allowedPaths+253, -1);
	__poke(Walls___allowedPaths+254, -1);
	__poke(Walls___allowedPaths+255, 0);
	Walls___patterns = Array__new(80);
	__poke(Walls___patterns+0, -1);
	__poke(Walls___patterns+1, -32767);
	__poke(Walls___patterns+2, -32743);
	__poke(Walls___patterns+3, -26567);
	__poke(Walls___patterns+4, -26599);
	__poke(Walls___patterns+5, -32743);
	__poke(Walls___patterns+6, -31975);
	__poke(Walls___patterns+7, -30947);
	__poke(Walls___patterns+8, -31975);
	__poke(Walls___patterns+9, -29951);
	__poke(Walls___patterns+10, -31999);
	__poke(Walls___patterns+11, -31871);
	__poke(Walls___patterns+12, -31999);
	__poke(Walls___patterns+13, -32743);
	__poke(Walls___patterns+14, -32743);
	__poke(Walls___patterns+15, -24575);
	__poke(Walls___patterns+16, -1);
	__poke(Walls___patterns+17, -8191);
	__poke(Walls___patterns+18, -8167);
	__poke(Walls___patterns+19, -31975);
	__poke(Walls___patterns+20, -31999);
	__poke(Walls___patterns+21, -32767);
	__poke(Walls___patterns+22, -32671);
	__poke(Walls___patterns+23, -32671);
	__poke(Walls___patterns+24, -26623);
	__poke(Walls___patterns+25, -26623);
	__poke(Walls___patterns+26, -32755);
	__poke(Walls___patterns+27, -32755);
	__poke(Walls___patterns+28, -32383);
	__poke(Walls___patterns+29, -32383);
	__poke(Walls___patterns+30, -32767);
	__poke(Walls___patterns+31, -32767);
	__poke(Walls___patterns+32, -1);
	__poke(Walls___patterns+33, -32767);
	__poke(Walls___patterns+34, -32767);
	__poke(Walls___patterns+35, -32767);
	__poke(Walls___patterns+36, -32767);
	__poke(Walls___patterns+37, -32319);
	__poke(Walls___patterns+38, -31775);
	__poke(Walls___patterns+39, -30863);
	__poke(Walls___patterns+40, -31183);
	__poke(Walls___patterns+41, -30863);
	__poke(Walls___patterns+42, -31775);
	__poke(Walls___patterns+43, -32319);
	__poke(Walls___patterns+44, -32767);
	__poke(Walls___patterns+45, -32767);
	__poke(Walls___patterns+46, -32767);
	__poke(Walls___patterns+47, -32767);
	__poke(Walls___patterns+48, 1);
	__poke(Walls___patterns+49, 16257);
	__poke(Walls___patterns+50, 6385);
	__poke(Walls___patterns+51, 8161);
	__poke(Walls___patterns+52, 3169);
	__poke(Walls___patterns+53, 20417);
	__poke(Walls___patterns+54, 26609);
	__poke(Walls___patterns+55, 32761);
	__poke(Walls___patterns+56, 32765);
	__poke(Walls___patterns+57, 26589);
	__poke(Walls___patterns+58, 20429);
	__poke(Walls___patterns+59, 3177);
	__poke(Walls___patterns+60, 8161);
	__poke(Walls___patterns+61, 6385);
	__poke(Walls___patterns+62, 16257);
	__poke(Walls___patterns+63, 1);
	__poke(Walls___patterns+64, -1);
	__poke(Walls___patterns+65, -32767);
	__poke(Walls___patterns+66, -32767);
	__poke(Walls___patterns+67, -32767);
	__poke(Walls___patterns+68, -32767);
	__poke(Walls___patterns+69, -31);
	__poke(Walls___patterns+70, -1055);
	__poke(Walls___patterns+71, -31);
	__poke(Walls___patterns+72, -31);
	__poke(Walls___patterns+73, -31);
	__poke(Walls___patterns+74, -31);
	__poke(Walls___patterns+75, -31);
	__poke(Walls___patterns+76, -32767);
	__poke(Walls___patterns+77, -32767);
	__poke(Walls___patterns+78, -32767);
	__poke(Walls___patterns+79, -32767);
	return 0;
}
var Walls__generate(var playerLocation, var wallDistances, var wallPatterns) {
	var xRoom = 0;
	var xPos = 0;
	var xPlayer = 0;
	var yRoom = 0;
	var yPos = 0;
	var yPlayer = 0;
	var theta = 0;
	var mu = 0;
	var muQ1 = 0;
	var muSgn = 0;
	var sinTh64 = 0;
	var cosTh64 = 0;
	var tanMu64 = 0;
	var tanMu64D = 0;
	var cotMu64 = 0;
	var cotMu64D = 0;
	var maxDeltaX = 0;
	var maxDeltaY = 0;
	var pixel = 0;
	var direction = 0;
	var direction8 = 0;
	var deltaX = 0;
	var deltaY = 0;
	var lineX = 0;
	var lineY = 0;
	var lineX8 = 0;
	var lineY8 = 0;
	var found = 0;
	var vtex = 0;
	var vwall = 0;
	var vwallLookup = 0;
	var vd = 0;
	var vseg = 0;
	var htex = 0;
	var hwall = 0;
	var hwallLookup = 0;
	var hd = 0;
	var hseg = 0;
	xRoom = __peek(playerLocation+0);
	xPos = __peek(playerLocation+1);
	yRoom = __peek(playerLocation+2);
	yPos = __peek(playerLocation+3);
	theta = __peek(playerLocation+4)*64;
	cosTh64 = __peek(playerLocation+5);
	sinTh64 = __peek(playerLocation+6);
	xPlayer = xRoom*64+xPos;
	yPlayer = yRoom*64+yPos;
	pixel = 0;
	while (-1==((((pixel)<(256))?-1:0))) {
		mu = theta+__peek(Walls___atanTable+pixel);
		if (0!=((((mu)>(4095))?-1:0))) {
			mu = mu-4096;
		}

		if (0!=((((mu)<(0))?-1:0))) {
			mu = mu+4096;
		}

		if (0!=((((mu)<(1025))?-1:0))) {
			muQ1 = mu;
			muSgn = 1;
		} else {
			if (0!=((((mu)<(2048))?-1:0))) {
				muQ1 = 2048-mu;
				muSgn = -1;
			} else {
				if (0!=((((mu)<(3073))?-1:0))) {
					muQ1 = mu-2048;
					muSgn = 1;
				} else {
					muQ1 = 4096-mu;
					muSgn = -1;
				}
			}
		}
		if (0!=((((muSgn)==(-1))?-1:0))) {
			tanMu64 = -__peek(Walls___tanTable+muQ1);
			cotMu64 = -__peek(Walls___tanTable+1024-muQ1);
		} else {
			tanMu64 = __peek(Walls___tanTable+muQ1);
			cotMu64 = __peek(Walls___tanTable+1024-muQ1);
		}
		if (0!=((((muQ1)>(942))?-1:0))) {
			maxDeltaY = __peek(Walls___maxDelta+1024-muQ1);
		} else {
			maxDeltaY = 32767;
		}
		if (0!=((((muQ1)<(81))?-1:0))) {
			maxDeltaX = __peek(Walls___maxDelta+muQ1);
		} else {
			maxDeltaX = 32767;
		}
		if (0!=((((mu)<(2048))?-1:0))) {
			direction = 64;
			direction8 = 8;
			cotMu64D = cotMu64;
			lineX8 = (xRoom+1)*8;
		} else {
			direction = -64;
			direction8 = -8;
			cotMu64D = -cotMu64;
			lineX8 = xRoom*8;
		}
		lineX = lineX8*8;
		deltaX = lineX-xPlayer;
		if (0!=((((((-maxDeltaX))<(deltaX))?-1:0))&((((deltaX)<(maxDeltaX))?-1:0)))) {
			deltaY = (cotMu64*deltaX)/64;
			lineY = yPlayer+deltaY;
			if (0!=(((((lineY)>(-1))?-1:0))&((((lineY)<(513))?-1:0)))) {
				vwall = lineY/64;
				vwallLookup = lineX8+vwall;
				vtex = __peek(Walls___yWalls+vwallLookup);
			} else {
				vtex = 0;
				lineX = 16384;
				lineY = 16384;
			}
			while (-1==(((((vtex)==(0))?-1:0))&((((lineX)<(513))?-1:0))&((((lineX)>(-1))?-1:0)))) {
				deltaX = deltaX+direction;
				lineX = lineX+direction;
				lineX8 = lineX8+direction8;
				deltaY = deltaY+cotMu64D;
				lineY = lineY+cotMu64D;
				if (0!=(((((lineY)>(-1))?-1:0))&((((lineY)<(513))?-1:0)))) {
					vwall = lineY/64;
					vwallLookup = lineX8+vwall;
					vtex = __peek(Walls___yWalls+vwallLookup);
				} else {
					vtex = 0;
					lineX = 16384;
					lineY = 16384;
				}
			}
		} else {
			vtex = 0;
			lineX = 16384;
			lineY = 16384;
		}
		if (0!=(((((lineY)<(513))?-1:0))&((((lineY)>(-1))?-1:0)))) {
			vd = ((sinTh64*deltaX)+(cosTh64*deltaY))/32;
			if (0!=((((vd)<(0))?-1:0))) {
				vd = 32767;
			}

			vseg = (lineY&63)/4;
		} else {
			vd = 32767;
			vseg = 0;
		}
		if (0!=(((((mu)<(1024))?-1:0))|((((mu)>(3071))?-1:0)))) {
			direction = 64;
			direction8 = 8;
			tanMu64D = tanMu64;
			lineY8 = (yRoom+1)*8;
		} else {
			direction = -64;
			direction8 = -8;
			tanMu64D = -tanMu64;
			lineY8 = yRoom*8;
		}
		lineY = lineY8*8;
		deltaY = lineY-yPlayer;
		if (0!=((((((-maxDeltaY))<(deltaY))?-1:0))&((((deltaY)<(maxDeltaY))?-1:0)))) {
			deltaX = (tanMu64*deltaY)/64;
			lineX = xPlayer+deltaX;
			if (0!=(((((lineX)>(-1))?-1:0))&((((lineX)<(513))?-1:0)))) {
				hwall = lineX/64;
				hwallLookup = lineY8+hwall;
				htex = __peek(Walls___xWalls+hwallLookup);
			} else {
				htex = 0;
				lineX = 16384;
				lineY = 16384;
			}
			while (-1==(((((htex)==(0))?-1:0))&((((lineY)<(513))?-1:0))&((((lineY)>(-1))?-1:0)))) {
				deltaY = deltaY+direction;
				lineY = lineY+direction;
				lineY8 = lineY8+direction8;
				deltaX = deltaX+tanMu64D;
				lineX = lineX+tanMu64D;
				if (0!=(((((lineX)>(-1))?-1:0))&((((lineX)<(513))?-1:0)))) {
					hwall = lineX/64;
					hwallLookup = lineY8+hwall;
					htex = __peek(Walls___xWalls+hwallLookup);
				} else {
					htex = 0;
					lineX = 16384;
					lineY = 16384;
				}
			}
		} else {
			htex = 0;
			lineX = 16384;
			lineY = 16384;
		}
		if (0!=(((((lineX)<(513))?-1:0))&((((lineX)>(-1))?-1:0)))) {
			hd = ((sinTh64*deltaX)+(cosTh64*deltaY))/32;
			if (0!=((((hd)<(0))?-1:0))) {
				hd = 32767;
			}

			hseg = (lineX&63)/4;
		} else {
			hd = 32767;
			hseg = 0;
		}
		if (0!=((((vd)<(hd))?-1:0))) {
			__poke(wallDistances+pixel, vd);
			if (0!=((((vtex)<(0))?-1:0))) {
				__poke(wallPatterns+pixel, __peek(Walls___patterns+((-vtex)*16)-(vseg+1)));
			} else {
				__poke(wallPatterns+pixel, __peek(Walls___patterns+(vtex*16)+(vseg-16)));
			}
			if (0!=((((pixel)==(128))?-1:0))) {
				Walls___targetWallDirection = 0;
				Walls___targetWallNum = vwallLookup;
				if (0!=(((((vtex)==(3))?-1:0))|((((vtex)==(-3))?-1:0)))) {
					Walls___targetVisible = -1;
				} else {
					Walls___targetVisible = 0;
				}
			}

		} else {
			__poke(wallDistances+pixel, hd);
			if (0!=((((htex)<(0))?-1:0))) {
				__poke(wallPatterns+pixel, __peek(Walls___patterns+((-htex)*16)-(hseg+1)));
			} else {
				__poke(wallPatterns+pixel, __peek(Walls___patterns+(htex*16)+(hseg-16)));
			}
			if (0!=((((pixel)==(128))?-1:0))) {
				Walls___targetWallDirection = 0;
				Walls___targetWallNum = hwallLookup;
				if (0!=(((((htex)==(3))?-1:0))|((((htex)==(-3))?-1:0)))) {
					Walls___targetVisible = -1;
				} else {
					Walls___targetVisible = 0;
				}
			}

		}
		pixel = pixel+1;
	}
	return 0;
}
var Walls__untarget() {
	if (0!=(Walls___targetVisible)) {
		if (0!=((((Walls___targetWallDirection)==(0))?-1:0))) {
			__poke(Walls___xWalls+Walls___targetWallNum, 2);
		} else {
			__poke(Walls___yWalls+Walls___targetWallNum, 2);
		}
		Walls___targetVisible = 0;
	}

	return 0;
}
var Walls__paths() {
	return Walls___allowedPaths;
}
var Walls__targetInSight() {
	return Walls___targetVisible;
}
var Walls__atExit(var playerRoom) {
	if (0!=((((playerRoom)==(Walls___exit))?-1:0))) {
		return -1;
	} else {
		return 0;
	}
}
var Walls__cleanup() {
	Array__dispose(Walls___xWalls);
	Array__dispose(Walls___yWalls);
	Array__dispose(Walls___allowedPaths);
	Array__dispose(Walls___patterns);
	Array__dispose(Walls___tanTable);
	Array__dispose(Walls___atanTable);
	Array__dispose(Walls___maxDelta);
	return 0;
}
var Walls__setupTrigTables() {
	Walls___tanTable = Array__new(1025);
	__poke(Walls___tanTable+0, 0);
	__poke(Walls___tanTable+1, 0);
	__poke(Walls___tanTable+2, 0);
	__poke(Walls___tanTable+3, 0);
	__poke(Walls___tanTable+4, 0);
	__poke(Walls___tanTable+5, 0);
	__poke(Walls___tanTable+6, 1);
	__poke(Walls___tanTable+7, 1);
	__poke(Walls___tanTable+8, 1);
	__poke(Walls___tanTable+9, 1);
	__poke(Walls___tanTable+10, 1);
	__poke(Walls___tanTable+11, 1);
	__poke(Walls___tanTable+12, 1);
	__poke(Walls___tanTable+13, 1);
	__poke(Walls___tanTable+14, 1);
	__poke(Walls___tanTable+15, 1);
	__poke(Walls___tanTable+16, 2);
	__poke(Walls___tanTable+17, 2);
	__poke(Walls___tanTable+18, 2);
	__poke(Walls___tanTable+19, 2);
	__poke(Walls___tanTable+20, 2);
	__poke(Walls___tanTable+21, 2);
	__poke(Walls___tanTable+22, 2);
	__poke(Walls___tanTable+23, 2);
	__poke(Walls___tanTable+24, 2);
	__poke(Walls___tanTable+25, 2);
	__poke(Walls___tanTable+26, 3);
	__poke(Walls___tanTable+27, 3);
	__poke(Walls___tanTable+28, 3);
	__poke(Walls___tanTable+29, 3);
	__poke(Walls___tanTable+30, 3);
	__poke(Walls___tanTable+31, 3);
	__poke(Walls___tanTable+32, 3);
	__poke(Walls___tanTable+33, 3);
	__poke(Walls___tanTable+34, 3);
	__poke(Walls___tanTable+35, 3);
	__poke(Walls___tanTable+36, 4);
	__poke(Walls___tanTable+37, 4);
	__poke(Walls___tanTable+38, 4);
	__poke(Walls___tanTable+39, 4);
	__poke(Walls___tanTable+40, 4);
	__poke(Walls___tanTable+41, 4);
	__poke(Walls___tanTable+42, 4);
	__poke(Walls___tanTable+43, 4);
	__poke(Walls___tanTable+44, 4);
	__poke(Walls___tanTable+45, 4);
	__poke(Walls___tanTable+46, 5);
	__poke(Walls___tanTable+47, 5);
	__poke(Walls___tanTable+48, 5);
	__poke(Walls___tanTable+49, 5);
	__poke(Walls___tanTable+50, 5);
	__poke(Walls___tanTable+51, 5);
	__poke(Walls___tanTable+52, 5);
	__poke(Walls___tanTable+53, 5);
	__poke(Walls___tanTable+54, 5);
	__poke(Walls___tanTable+55, 5);
	__poke(Walls___tanTable+56, 6);
	__poke(Walls___tanTable+57, 6);
	__poke(Walls___tanTable+58, 6);
	__poke(Walls___tanTable+59, 6);
	__poke(Walls___tanTable+60, 6);
	__poke(Walls___tanTable+61, 6);
	__poke(Walls___tanTable+62, 6);
	__poke(Walls___tanTable+63, 6);
	__poke(Walls___tanTable+64, 6);
	__poke(Walls___tanTable+65, 6);
	__poke(Walls___tanTable+66, 7);
	__poke(Walls___tanTable+67, 7);
	__poke(Walls___tanTable+68, 7);
	__poke(Walls___tanTable+69, 7);
	__poke(Walls___tanTable+70, 7);
	__poke(Walls___tanTable+71, 7);
	__poke(Walls___tanTable+72, 7);
	__poke(Walls___tanTable+73, 7);
	__poke(Walls___tanTable+74, 7);
	__poke(Walls___tanTable+75, 7);
	__poke(Walls___tanTable+76, 7);
	__poke(Walls___tanTable+77, 8);
	__poke(Walls___tanTable+78, 8);
	__poke(Walls___tanTable+79, 8);
	__poke(Walls___tanTable+80, 8);
	__poke(Walls___tanTable+81, 8);
	__poke(Walls___tanTable+82, 8);
	__poke(Walls___tanTable+83, 8);
	__poke(Walls___tanTable+84, 8);
	__poke(Walls___tanTable+85, 8);
	__poke(Walls___tanTable+86, 8);
	__poke(Walls___tanTable+87, 9);
	__poke(Walls___tanTable+88, 9);
	__poke(Walls___tanTable+89, 9);
	__poke(Walls___tanTable+90, 9);
	__poke(Walls___tanTable+91, 9);
	__poke(Walls___tanTable+92, 9);
	__poke(Walls___tanTable+93, 9);
	__poke(Walls___tanTable+94, 9);
	__poke(Walls___tanTable+95, 9);
	__poke(Walls___tanTable+96, 9);
	__poke(Walls___tanTable+97, 10);
	__poke(Walls___tanTable+98, 10);
	__poke(Walls___tanTable+99, 10);
	__poke(Walls___tanTable+100, 10);
	__poke(Walls___tanTable+101, 10);
	__poke(Walls___tanTable+102, 10);
	__poke(Walls___tanTable+103, 10);
	__poke(Walls___tanTable+104, 10);
	__poke(Walls___tanTable+105, 10);
	__poke(Walls___tanTable+106, 10);
	__poke(Walls___tanTable+107, 11);
	__poke(Walls___tanTable+108, 11);
	__poke(Walls___tanTable+109, 11);
	__poke(Walls___tanTable+110, 11);
	__poke(Walls___tanTable+111, 11);
	__poke(Walls___tanTable+112, 11);
	__poke(Walls___tanTable+113, 11);
	__poke(Walls___tanTable+114, 11);
	__poke(Walls___tanTable+115, 11);
	__poke(Walls___tanTable+116, 12);
	__poke(Walls___tanTable+117, 12);
	__poke(Walls___tanTable+118, 12);
	__poke(Walls___tanTable+119, 12);
	__poke(Walls___tanTable+120, 12);
	__poke(Walls___tanTable+121, 12);
	__poke(Walls___tanTable+122, 12);
	__poke(Walls___tanTable+123, 12);
	__poke(Walls___tanTable+124, 12);
	__poke(Walls___tanTable+125, 12);
	__poke(Walls___tanTable+126, 13);
	__poke(Walls___tanTable+127, 13);
	__poke(Walls___tanTable+128, 13);
	__poke(Walls___tanTable+129, 13);
	__poke(Walls___tanTable+130, 13);
	__poke(Walls___tanTable+131, 13);
	__poke(Walls___tanTable+132, 13);
	__poke(Walls___tanTable+133, 13);
	__poke(Walls___tanTable+134, 13);
	__poke(Walls___tanTable+135, 13);
	__poke(Walls___tanTable+136, 14);
	__poke(Walls___tanTable+137, 14);
	__poke(Walls___tanTable+138, 14);
	__poke(Walls___tanTable+139, 14);
	__poke(Walls___tanTable+140, 14);
	__poke(Walls___tanTable+141, 14);
	__poke(Walls___tanTable+142, 14);
	__poke(Walls___tanTable+143, 14);
	__poke(Walls___tanTable+144, 14);
	__poke(Walls___tanTable+145, 14);
	__poke(Walls___tanTable+146, 15);
	__poke(Walls___tanTable+147, 15);
	__poke(Walls___tanTable+148, 15);
	__poke(Walls___tanTable+149, 15);
	__poke(Walls___tanTable+150, 15);
	__poke(Walls___tanTable+151, 15);
	__poke(Walls___tanTable+152, 15);
	__poke(Walls___tanTable+153, 15);
	__poke(Walls___tanTable+154, 15);
	__poke(Walls___tanTable+155, 16);
	__poke(Walls___tanTable+156, 16);
	__poke(Walls___tanTable+157, 16);
	__poke(Walls___tanTable+158, 16);
	__poke(Walls___tanTable+159, 16);
	__poke(Walls___tanTable+160, 16);
	__poke(Walls___tanTable+161, 16);
	__poke(Walls___tanTable+162, 16);
	__poke(Walls___tanTable+163, 16);
	__poke(Walls___tanTable+164, 16);
	__poke(Walls___tanTable+165, 17);
	__poke(Walls___tanTable+166, 17);
	__poke(Walls___tanTable+167, 17);
	__poke(Walls___tanTable+168, 17);
	__poke(Walls___tanTable+169, 17);
	__poke(Walls___tanTable+170, 17);
	__poke(Walls___tanTable+171, 17);
	__poke(Walls___tanTable+172, 17);
	__poke(Walls___tanTable+173, 17);
	__poke(Walls___tanTable+174, 17);
	__poke(Walls___tanTable+175, 18);
	__poke(Walls___tanTable+176, 18);
	__poke(Walls___tanTable+177, 18);
	__poke(Walls___tanTable+178, 18);
	__poke(Walls___tanTable+179, 18);
	__poke(Walls___tanTable+180, 18);
	__poke(Walls___tanTable+181, 18);
	__poke(Walls___tanTable+182, 18);
	__poke(Walls___tanTable+183, 18);
	__poke(Walls___tanTable+184, 19);
	__poke(Walls___tanTable+185, 19);
	__poke(Walls___tanTable+186, 19);
	__poke(Walls___tanTable+187, 19);
	__poke(Walls___tanTable+188, 19);
	__poke(Walls___tanTable+189, 19);
	__poke(Walls___tanTable+190, 19);
	__poke(Walls___tanTable+191, 19);
	__poke(Walls___tanTable+192, 19);
	__poke(Walls___tanTable+193, 20);
	__poke(Walls___tanTable+194, 20);
	__poke(Walls___tanTable+195, 20);
	__poke(Walls___tanTable+196, 20);
	__poke(Walls___tanTable+197, 20);
	__poke(Walls___tanTable+198, 20);
	__poke(Walls___tanTable+199, 20);
	__poke(Walls___tanTable+200, 20);
	__poke(Walls___tanTable+201, 20);
	__poke(Walls___tanTable+202, 20);
	__poke(Walls___tanTable+203, 21);
	__poke(Walls___tanTable+204, 21);
	__poke(Walls___tanTable+205, 21);
	__poke(Walls___tanTable+206, 21);
	__poke(Walls___tanTable+207, 21);
	__poke(Walls___tanTable+208, 21);
	__poke(Walls___tanTable+209, 21);
	__poke(Walls___tanTable+210, 21);
	__poke(Walls___tanTable+211, 21);
	__poke(Walls___tanTable+212, 22);
	__poke(Walls___tanTable+213, 22);
	__poke(Walls___tanTable+214, 22);
	__poke(Walls___tanTable+215, 22);
	__poke(Walls___tanTable+216, 22);
	__poke(Walls___tanTable+217, 22);
	__poke(Walls___tanTable+218, 22);
	__poke(Walls___tanTable+219, 22);
	__poke(Walls___tanTable+220, 22);
	__poke(Walls___tanTable+221, 23);
	__poke(Walls___tanTable+222, 23);
	__poke(Walls___tanTable+223, 23);
	__poke(Walls___tanTable+224, 23);
	__poke(Walls___tanTable+225, 23);
	__poke(Walls___tanTable+226, 23);
	__poke(Walls___tanTable+227, 23);
	__poke(Walls___tanTable+228, 23);
	__poke(Walls___tanTable+229, 23);
	__poke(Walls___tanTable+230, 24);
	__poke(Walls___tanTable+231, 24);
	__poke(Walls___tanTable+232, 24);
	__poke(Walls___tanTable+233, 24);
	__poke(Walls___tanTable+234, 24);
	__poke(Walls___tanTable+235, 24);
	__poke(Walls___tanTable+236, 24);
	__poke(Walls___tanTable+237, 24);
	__poke(Walls___tanTable+238, 24);
	__poke(Walls___tanTable+239, 25);
	__poke(Walls___tanTable+240, 25);
	__poke(Walls___tanTable+241, 25);
	__poke(Walls___tanTable+242, 25);
	__poke(Walls___tanTable+243, 25);
	__poke(Walls___tanTable+244, 25);
	__poke(Walls___tanTable+245, 25);
	__poke(Walls___tanTable+246, 25);
	__poke(Walls___tanTable+247, 25);
	__poke(Walls___tanTable+248, 26);
	__poke(Walls___tanTable+249, 26);
	__poke(Walls___tanTable+250, 26);
	__poke(Walls___tanTable+251, 26);
	__poke(Walls___tanTable+252, 26);
	__poke(Walls___tanTable+253, 26);
	__poke(Walls___tanTable+254, 26);
	__poke(Walls___tanTable+255, 26);
	__poke(Walls___tanTable+256, 27);
	__poke(Walls___tanTable+257, 27);
	__poke(Walls___tanTable+258, 27);
	__poke(Walls___tanTable+259, 27);
	__poke(Walls___tanTable+260, 27);
	__poke(Walls___tanTable+261, 27);
	__poke(Walls___tanTable+262, 27);
	__poke(Walls___tanTable+263, 27);
	__poke(Walls___tanTable+264, 27);
	__poke(Walls___tanTable+265, 28);
	__poke(Walls___tanTable+266, 28);
	__poke(Walls___tanTable+267, 28);
	__poke(Walls___tanTable+268, 28);
	__poke(Walls___tanTable+269, 28);
	__poke(Walls___tanTable+270, 28);
	__poke(Walls___tanTable+271, 28);
	__poke(Walls___tanTable+272, 28);
	__poke(Walls___tanTable+273, 28);
	__poke(Walls___tanTable+274, 29);
	__poke(Walls___tanTable+275, 29);
	__poke(Walls___tanTable+276, 29);
	__poke(Walls___tanTable+277, 29);
	__poke(Walls___tanTable+278, 29);
	__poke(Walls___tanTable+279, 29);
	__poke(Walls___tanTable+280, 29);
	__poke(Walls___tanTable+281, 29);
	__poke(Walls___tanTable+282, 30);
	__poke(Walls___tanTable+283, 30);
	__poke(Walls___tanTable+284, 30);
	__poke(Walls___tanTable+285, 30);
	__poke(Walls___tanTable+286, 30);
	__poke(Walls___tanTable+287, 30);
	__poke(Walls___tanTable+288, 30);
	__poke(Walls___tanTable+289, 30);
	__poke(Walls___tanTable+290, 31);
	__poke(Walls___tanTable+291, 31);
	__poke(Walls___tanTable+292, 31);
	__poke(Walls___tanTable+293, 31);
	__poke(Walls___tanTable+294, 31);
	__poke(Walls___tanTable+295, 31);
	__poke(Walls___tanTable+296, 31);
	__poke(Walls___tanTable+297, 31);
	__poke(Walls___tanTable+298, 31);
	__poke(Walls___tanTable+299, 32);
	__poke(Walls___tanTable+300, 32);
	__poke(Walls___tanTable+301, 32);
	__poke(Walls___tanTable+302, 32);
	__poke(Walls___tanTable+303, 32);
	__poke(Walls___tanTable+304, 32);
	__poke(Walls___tanTable+305, 32);
	__poke(Walls___tanTable+306, 32);
	__poke(Walls___tanTable+307, 33);
	__poke(Walls___tanTable+308, 33);
	__poke(Walls___tanTable+309, 33);
	__poke(Walls___tanTable+310, 33);
	__poke(Walls___tanTable+311, 33);
	__poke(Walls___tanTable+312, 33);
	__poke(Walls___tanTable+313, 33);
	__poke(Walls___tanTable+314, 33);
	__poke(Walls___tanTable+315, 34);
	__poke(Walls___tanTable+316, 34);
	__poke(Walls___tanTable+317, 34);
	__poke(Walls___tanTable+318, 34);
	__poke(Walls___tanTable+319, 34);
	__poke(Walls___tanTable+320, 34);
	__poke(Walls___tanTable+321, 34);
	__poke(Walls___tanTable+322, 34);
	__poke(Walls___tanTable+323, 35);
	__poke(Walls___tanTable+324, 35);
	__poke(Walls___tanTable+325, 35);
	__poke(Walls___tanTable+326, 35);
	__poke(Walls___tanTable+327, 35);
	__poke(Walls___tanTable+328, 35);
	__poke(Walls___tanTable+329, 35);
	__poke(Walls___tanTable+330, 35);
	__poke(Walls___tanTable+331, 36);
	__poke(Walls___tanTable+332, 36);
	__poke(Walls___tanTable+333, 36);
	__poke(Walls___tanTable+334, 36);
	__poke(Walls___tanTable+335, 36);
	__poke(Walls___tanTable+336, 36);
	__poke(Walls___tanTable+337, 36);
	__poke(Walls___tanTable+338, 37);
	__poke(Walls___tanTable+339, 37);
	__poke(Walls___tanTable+340, 37);
	__poke(Walls___tanTable+341, 37);
	__poke(Walls___tanTable+342, 37);
	__poke(Walls___tanTable+343, 37);
	__poke(Walls___tanTable+344, 37);
	__poke(Walls___tanTable+345, 37);
	__poke(Walls___tanTable+346, 38);
	__poke(Walls___tanTable+347, 38);
	__poke(Walls___tanTable+348, 38);
	__poke(Walls___tanTable+349, 38);
	__poke(Walls___tanTable+350, 38);
	__poke(Walls___tanTable+351, 38);
	__poke(Walls___tanTable+352, 38);
	__poke(Walls___tanTable+353, 38);
	__poke(Walls___tanTable+354, 39);
	__poke(Walls___tanTable+355, 39);
	__poke(Walls___tanTable+356, 39);
	__poke(Walls___tanTable+357, 39);
	__poke(Walls___tanTable+358, 39);
	__poke(Walls___tanTable+359, 39);
	__poke(Walls___tanTable+360, 39);
	__poke(Walls___tanTable+361, 40);
	__poke(Walls___tanTable+362, 40);
	__poke(Walls___tanTable+363, 40);
	__poke(Walls___tanTable+364, 40);
	__poke(Walls___tanTable+365, 40);
	__poke(Walls___tanTable+366, 40);
	__poke(Walls___tanTable+367, 40);
	__poke(Walls___tanTable+368, 41);
	__poke(Walls___tanTable+369, 41);
	__poke(Walls___tanTable+370, 41);
	__poke(Walls___tanTable+371, 41);
	__poke(Walls___tanTable+372, 41);
	__poke(Walls___tanTable+373, 41);
	__poke(Walls___tanTable+374, 41);
	__poke(Walls___tanTable+375, 41);
	__poke(Walls___tanTable+376, 42);
	__poke(Walls___tanTable+377, 42);
	__poke(Walls___tanTable+378, 42);
	__poke(Walls___tanTable+379, 42);
	__poke(Walls___tanTable+380, 42);
	__poke(Walls___tanTable+381, 42);
	__poke(Walls___tanTable+382, 42);
	__poke(Walls___tanTable+383, 43);
	__poke(Walls___tanTable+384, 43);
	__poke(Walls___tanTable+385, 43);
	__poke(Walls___tanTable+386, 43);
	__poke(Walls___tanTable+387, 43);
	__poke(Walls___tanTable+388, 43);
	__poke(Walls___tanTable+389, 43);
	__poke(Walls___tanTable+390, 44);
	__poke(Walls___tanTable+391, 44);
	__poke(Walls___tanTable+392, 44);
	__poke(Walls___tanTable+393, 44);
	__poke(Walls___tanTable+394, 44);
	__poke(Walls___tanTable+395, 44);
	__poke(Walls___tanTable+396, 44);
	__poke(Walls___tanTable+397, 45);
	__poke(Walls___tanTable+398, 45);
	__poke(Walls___tanTable+399, 45);
	__poke(Walls___tanTable+400, 45);
	__poke(Walls___tanTable+401, 45);
	__poke(Walls___tanTable+402, 45);
	__poke(Walls___tanTable+403, 46);
	__poke(Walls___tanTable+404, 46);
	__poke(Walls___tanTable+405, 46);
	__poke(Walls___tanTable+406, 46);
	__poke(Walls___tanTable+407, 46);
	__poke(Walls___tanTable+408, 46);
	__poke(Walls___tanTable+409, 46);
	__poke(Walls___tanTable+410, 47);
	__poke(Walls___tanTable+411, 47);
	__poke(Walls___tanTable+412, 47);
	__poke(Walls___tanTable+413, 47);
	__poke(Walls___tanTable+414, 47);
	__poke(Walls___tanTable+415, 47);
	__poke(Walls___tanTable+416, 47);
	__poke(Walls___tanTable+417, 48);
	__poke(Walls___tanTable+418, 48);
	__poke(Walls___tanTable+419, 48);
	__poke(Walls___tanTable+420, 48);
	__poke(Walls___tanTable+421, 48);
	__poke(Walls___tanTable+422, 48);
	__poke(Walls___tanTable+423, 49);
	__poke(Walls___tanTable+424, 49);
	__poke(Walls___tanTable+425, 49);
	__poke(Walls___tanTable+426, 49);
	__poke(Walls___tanTable+427, 49);
	__poke(Walls___tanTable+428, 49);
	__poke(Walls___tanTable+429, 49);
	__poke(Walls___tanTable+430, 50);
	__poke(Walls___tanTable+431, 50);
	__poke(Walls___tanTable+432, 50);
	__poke(Walls___tanTable+433, 50);
	__poke(Walls___tanTable+434, 50);
	__poke(Walls___tanTable+435, 50);
	__poke(Walls___tanTable+436, 51);
	__poke(Walls___tanTable+437, 51);
	__poke(Walls___tanTable+438, 51);
	__poke(Walls___tanTable+439, 51);
	__poke(Walls___tanTable+440, 51);
	__poke(Walls___tanTable+441, 51);
	__poke(Walls___tanTable+442, 52);
	__poke(Walls___tanTable+443, 52);
	__poke(Walls___tanTable+444, 52);
	__poke(Walls___tanTable+445, 52);
	__poke(Walls___tanTable+446, 52);
	__poke(Walls___tanTable+447, 52);
	__poke(Walls___tanTable+448, 53);
	__poke(Walls___tanTable+449, 53);
	__poke(Walls___tanTable+450, 53);
	__poke(Walls___tanTable+451, 53);
	__poke(Walls___tanTable+452, 53);
	__poke(Walls___tanTable+453, 53);
	__poke(Walls___tanTable+454, 54);
	__poke(Walls___tanTable+455, 54);
	__poke(Walls___tanTable+456, 54);
	__poke(Walls___tanTable+457, 54);
	__poke(Walls___tanTable+458, 54);
	__poke(Walls___tanTable+459, 54);
	__poke(Walls___tanTable+460, 55);
	__poke(Walls___tanTable+461, 55);
	__poke(Walls___tanTable+462, 55);
	__poke(Walls___tanTable+463, 55);
	__poke(Walls___tanTable+464, 55);
	__poke(Walls___tanTable+465, 55);
	__poke(Walls___tanTable+466, 56);
	__poke(Walls___tanTable+467, 56);
	__poke(Walls___tanTable+468, 56);
	__poke(Walls___tanTable+469, 56);
	__poke(Walls___tanTable+470, 56);
	__poke(Walls___tanTable+471, 56);
	__poke(Walls___tanTable+472, 57);
	__poke(Walls___tanTable+473, 57);
	__poke(Walls___tanTable+474, 57);
	__poke(Walls___tanTable+475, 57);
	__poke(Walls___tanTable+476, 57);
	__poke(Walls___tanTable+477, 57);
	__poke(Walls___tanTable+478, 58);
	__poke(Walls___tanTable+479, 58);
	__poke(Walls___tanTable+480, 58);
	__poke(Walls___tanTable+481, 58);
	__poke(Walls___tanTable+482, 58);
	__poke(Walls___tanTable+483, 59);
	__poke(Walls___tanTable+484, 59);
	__poke(Walls___tanTable+485, 59);
	__poke(Walls___tanTable+486, 59);
	__poke(Walls___tanTable+487, 59);
	__poke(Walls___tanTable+488, 59);
	__poke(Walls___tanTable+489, 60);
	__poke(Walls___tanTable+490, 60);
	__poke(Walls___tanTable+491, 60);
	__poke(Walls___tanTable+492, 60);
	__poke(Walls___tanTable+493, 60);
	__poke(Walls___tanTable+494, 61);
	__poke(Walls___tanTable+495, 61);
	__poke(Walls___tanTable+496, 61);
	__poke(Walls___tanTable+497, 61);
	__poke(Walls___tanTable+498, 61);
	__poke(Walls___tanTable+499, 61);
	__poke(Walls___tanTable+500, 62);
	__poke(Walls___tanTable+501, 62);
	__poke(Walls___tanTable+502, 62);
	__poke(Walls___tanTable+503, 62);
	__poke(Walls___tanTable+504, 62);
	__poke(Walls___tanTable+505, 63);
	__poke(Walls___tanTable+506, 63);
	__poke(Walls___tanTable+507, 63);
	__poke(Walls___tanTable+508, 63);
	__poke(Walls___tanTable+509, 63);
	__poke(Walls___tanTable+510, 64);
	__poke(Walls___tanTable+511, 64);
	__poke(Walls___tanTable+512, 64);
	__poke(Walls___tanTable+513, 64);
	__poke(Walls___tanTable+514, 64);
	__poke(Walls___tanTable+515, 65);
	__poke(Walls___tanTable+516, 65);
	__poke(Walls___tanTable+517, 65);
	__poke(Walls___tanTable+518, 65);
	__poke(Walls___tanTable+519, 65);
	__poke(Walls___tanTable+520, 66);
	__poke(Walls___tanTable+521, 66);
	__poke(Walls___tanTable+522, 66);
	__poke(Walls___tanTable+523, 66);
	__poke(Walls___tanTable+524, 66);
	__poke(Walls___tanTable+525, 67);
	__poke(Walls___tanTable+526, 67);
	__poke(Walls___tanTable+527, 67);
	__poke(Walls___tanTable+528, 67);
	__poke(Walls___tanTable+529, 67);
	__poke(Walls___tanTable+530, 68);
	__poke(Walls___tanTable+531, 68);
	__poke(Walls___tanTable+532, 68);
	__poke(Walls___tanTable+533, 68);
	__poke(Walls___tanTable+534, 68);
	__poke(Walls___tanTable+535, 69);
	__poke(Walls___tanTable+536, 69);
	__poke(Walls___tanTable+537, 69);
	__poke(Walls___tanTable+538, 69);
	__poke(Walls___tanTable+539, 70);
	__poke(Walls___tanTable+540, 70);
	__poke(Walls___tanTable+541, 70);
	__poke(Walls___tanTable+542, 70);
	__poke(Walls___tanTable+543, 70);
	__poke(Walls___tanTable+544, 71);
	__poke(Walls___tanTable+545, 71);
	__poke(Walls___tanTable+546, 71);
	__poke(Walls___tanTable+547, 71);
	__poke(Walls___tanTable+548, 71);
	__poke(Walls___tanTable+549, 72);
	__poke(Walls___tanTable+550, 72);
	__poke(Walls___tanTable+551, 72);
	__poke(Walls___tanTable+552, 72);
	__poke(Walls___tanTable+553, 73);
	__poke(Walls___tanTable+554, 73);
	__poke(Walls___tanTable+555, 73);
	__poke(Walls___tanTable+556, 73);
	__poke(Walls___tanTable+557, 74);
	__poke(Walls___tanTable+558, 74);
	__poke(Walls___tanTable+559, 74);
	__poke(Walls___tanTable+560, 74);
	__poke(Walls___tanTable+561, 74);
	__poke(Walls___tanTable+562, 75);
	__poke(Walls___tanTable+563, 75);
	__poke(Walls___tanTable+564, 75);
	__poke(Walls___tanTable+565, 75);
	__poke(Walls___tanTable+566, 76);
	__poke(Walls___tanTable+567, 76);
	__poke(Walls___tanTable+568, 76);
	__poke(Walls___tanTable+569, 76);
	__poke(Walls___tanTable+570, 77);
	__poke(Walls___tanTable+571, 77);
	__poke(Walls___tanTable+572, 77);
	__poke(Walls___tanTable+573, 77);
	__poke(Walls___tanTable+574, 77);
	__poke(Walls___tanTable+575, 78);
	__poke(Walls___tanTable+576, 78);
	__poke(Walls___tanTable+577, 78);
	__poke(Walls___tanTable+578, 78);
	__poke(Walls___tanTable+579, 79);
	__poke(Walls___tanTable+580, 79);
	__poke(Walls___tanTable+581, 79);
	__poke(Walls___tanTable+582, 79);
	__poke(Walls___tanTable+583, 80);
	__poke(Walls___tanTable+584, 80);
	__poke(Walls___tanTable+585, 80);
	__poke(Walls___tanTable+586, 80);
	__poke(Walls___tanTable+587, 81);
	__poke(Walls___tanTable+588, 81);
	__poke(Walls___tanTable+589, 81);
	__poke(Walls___tanTable+590, 81);
	__poke(Walls___tanTable+591, 82);
	__poke(Walls___tanTable+592, 82);
	__poke(Walls___tanTable+593, 82);
	__poke(Walls___tanTable+594, 83);
	__poke(Walls___tanTable+595, 83);
	__poke(Walls___tanTable+596, 83);
	__poke(Walls___tanTable+597, 83);
	__poke(Walls___tanTable+598, 84);
	__poke(Walls___tanTable+599, 84);
	__poke(Walls___tanTable+600, 84);
	__poke(Walls___tanTable+601, 84);
	__poke(Walls___tanTable+602, 85);
	__poke(Walls___tanTable+603, 85);
	__poke(Walls___tanTable+604, 85);
	__poke(Walls___tanTable+605, 85);
	__poke(Walls___tanTable+606, 86);
	__poke(Walls___tanTable+607, 86);
	__poke(Walls___tanTable+608, 86);
	__poke(Walls___tanTable+609, 87);
	__poke(Walls___tanTable+610, 87);
	__poke(Walls___tanTable+611, 87);
	__poke(Walls___tanTable+612, 87);
	__poke(Walls___tanTable+613, 88);
	__poke(Walls___tanTable+614, 88);
	__poke(Walls___tanTable+615, 88);
	__poke(Walls___tanTable+616, 89);
	__poke(Walls___tanTable+617, 89);
	__poke(Walls___tanTable+618, 89);
	__poke(Walls___tanTable+619, 89);
	__poke(Walls___tanTable+620, 90);
	__poke(Walls___tanTable+621, 90);
	__poke(Walls___tanTable+622, 90);
	__poke(Walls___tanTable+623, 91);
	__poke(Walls___tanTable+624, 91);
	__poke(Walls___tanTable+625, 91);
	__poke(Walls___tanTable+626, 91);
	__poke(Walls___tanTable+627, 92);
	__poke(Walls___tanTable+628, 92);
	__poke(Walls___tanTable+629, 92);
	__poke(Walls___tanTable+630, 93);
	__poke(Walls___tanTable+631, 93);
	__poke(Walls___tanTable+632, 93);
	__poke(Walls___tanTable+633, 94);
	__poke(Walls___tanTable+634, 94);
	__poke(Walls___tanTable+635, 94);
	__poke(Walls___tanTable+636, 95);
	__poke(Walls___tanTable+637, 95);
	__poke(Walls___tanTable+638, 95);
	__poke(Walls___tanTable+639, 95);
	__poke(Walls___tanTable+640, 96);
	__poke(Walls___tanTable+641, 96);
	__poke(Walls___tanTable+642, 96);
	__poke(Walls___tanTable+643, 97);
	__poke(Walls___tanTable+644, 97);
	__poke(Walls___tanTable+645, 97);
	__poke(Walls___tanTable+646, 98);
	__poke(Walls___tanTable+647, 98);
	__poke(Walls___tanTable+648, 98);
	__poke(Walls___tanTable+649, 99);
	__poke(Walls___tanTable+650, 99);
	__poke(Walls___tanTable+651, 99);
	__poke(Walls___tanTable+652, 100);
	__poke(Walls___tanTable+653, 100);
	__poke(Walls___tanTable+654, 100);
	__poke(Walls___tanTable+655, 101);
	__poke(Walls___tanTable+656, 101);
	__poke(Walls___tanTable+657, 101);
	__poke(Walls___tanTable+658, 102);
	__poke(Walls___tanTable+659, 102);
	__poke(Walls___tanTable+660, 102);
	__poke(Walls___tanTable+661, 103);
	__poke(Walls___tanTable+662, 103);
	__poke(Walls___tanTable+663, 104);
	__poke(Walls___tanTable+664, 104);
	__poke(Walls___tanTable+665, 104);
	__poke(Walls___tanTable+666, 105);
	__poke(Walls___tanTable+667, 105);
	__poke(Walls___tanTable+668, 105);
	__poke(Walls___tanTable+669, 106);
	__poke(Walls___tanTable+670, 106);
	__poke(Walls___tanTable+671, 106);
	__poke(Walls___tanTable+672, 107);
	__poke(Walls___tanTable+673, 107);
	__poke(Walls___tanTable+674, 108);
	__poke(Walls___tanTable+675, 108);
	__poke(Walls___tanTable+676, 108);
	__poke(Walls___tanTable+677, 109);
	__poke(Walls___tanTable+678, 109);
	__poke(Walls___tanTable+679, 109);
	__poke(Walls___tanTable+680, 110);
	__poke(Walls___tanTable+681, 110);
	__poke(Walls___tanTable+682, 111);
	__poke(Walls___tanTable+683, 111);
	__poke(Walls___tanTable+684, 111);
	__poke(Walls___tanTable+685, 112);
	__poke(Walls___tanTable+686, 112);
	__poke(Walls___tanTable+687, 113);
	__poke(Walls___tanTable+688, 113);
	__poke(Walls___tanTable+689, 113);
	__poke(Walls___tanTable+690, 114);
	__poke(Walls___tanTable+691, 114);
	__poke(Walls___tanTable+692, 115);
	__poke(Walls___tanTable+693, 115);
	__poke(Walls___tanTable+694, 115);
	__poke(Walls___tanTable+695, 116);
	__poke(Walls___tanTable+696, 116);
	__poke(Walls___tanTable+697, 117);
	__poke(Walls___tanTable+698, 117);
	__poke(Walls___tanTable+699, 118);
	__poke(Walls___tanTable+700, 118);
	__poke(Walls___tanTable+701, 118);
	__poke(Walls___tanTable+702, 119);
	__poke(Walls___tanTable+703, 119);
	__poke(Walls___tanTable+704, 120);
	__poke(Walls___tanTable+705, 120);
	__poke(Walls___tanTable+706, 121);
	__poke(Walls___tanTable+707, 121);
	__poke(Walls___tanTable+708, 122);
	__poke(Walls___tanTable+709, 122);
	__poke(Walls___tanTable+710, 122);
	__poke(Walls___tanTable+711, 123);
	__poke(Walls___tanTable+712, 123);
	__poke(Walls___tanTable+713, 124);
	__poke(Walls___tanTable+714, 124);
	__poke(Walls___tanTable+715, 125);
	__poke(Walls___tanTable+716, 125);
	__poke(Walls___tanTable+717, 126);
	__poke(Walls___tanTable+718, 126);
	__poke(Walls___tanTable+719, 127);
	__poke(Walls___tanTable+720, 127);
	__poke(Walls___tanTable+721, 128);
	__poke(Walls___tanTable+722, 128);
	__poke(Walls___tanTable+723, 129);
	__poke(Walls___tanTable+724, 129);
	__poke(Walls___tanTable+725, 130);
	__poke(Walls___tanTable+726, 130);
	__poke(Walls___tanTable+727, 131);
	__poke(Walls___tanTable+728, 131);
	__poke(Walls___tanTable+729, 132);
	__poke(Walls___tanTable+730, 132);
	__poke(Walls___tanTable+731, 133);
	__poke(Walls___tanTable+732, 133);
	__poke(Walls___tanTable+733, 134);
	__poke(Walls___tanTable+734, 134);
	__poke(Walls___tanTable+735, 135);
	__poke(Walls___tanTable+736, 135);
	__poke(Walls___tanTable+737, 136);
	__poke(Walls___tanTable+738, 136);
	__poke(Walls___tanTable+739, 137);
	__poke(Walls___tanTable+740, 137);
	__poke(Walls___tanTable+741, 138);
	__poke(Walls___tanTable+742, 139);
	__poke(Walls___tanTable+743, 139);
	__poke(Walls___tanTable+744, 140);
	__poke(Walls___tanTable+745, 140);
	__poke(Walls___tanTable+746, 141);
	__poke(Walls___tanTable+747, 141);
	__poke(Walls___tanTable+748, 142);
	__poke(Walls___tanTable+749, 143);
	__poke(Walls___tanTable+750, 143);
	__poke(Walls___tanTable+751, 144);
	__poke(Walls___tanTable+752, 144);
	__poke(Walls___tanTable+753, 145);
	__poke(Walls___tanTable+754, 146);
	__poke(Walls___tanTable+755, 146);
	__poke(Walls___tanTable+756, 147);
	__poke(Walls___tanTable+757, 147);
	__poke(Walls___tanTable+758, 148);
	__poke(Walls___tanTable+759, 149);
	__poke(Walls___tanTable+760, 149);
	__poke(Walls___tanTable+761, 150);
	__poke(Walls___tanTable+762, 151);
	__poke(Walls___tanTable+763, 151);
	__poke(Walls___tanTable+764, 152);
	__poke(Walls___tanTable+765, 153);
	__poke(Walls___tanTable+766, 153);
	__poke(Walls___tanTable+767, 154);
	__poke(Walls___tanTable+768, 155);
	__poke(Walls___tanTable+769, 155);
	__poke(Walls___tanTable+770, 156);
	__poke(Walls___tanTable+771, 157);
	__poke(Walls___tanTable+772, 157);
	__poke(Walls___tanTable+773, 158);
	__poke(Walls___tanTable+774, 159);
	__poke(Walls___tanTable+775, 159);
	__poke(Walls___tanTable+776, 160);
	__poke(Walls___tanTable+777, 161);
	__poke(Walls___tanTable+778, 161);
	__poke(Walls___tanTable+779, 162);
	__poke(Walls___tanTable+780, 163);
	__poke(Walls___tanTable+781, 164);
	__poke(Walls___tanTable+782, 164);
	__poke(Walls___tanTable+783, 165);
	__poke(Walls___tanTable+784, 166);
	__poke(Walls___tanTable+785, 167);
	__poke(Walls___tanTable+786, 167);
	__poke(Walls___tanTable+787, 168);
	__poke(Walls___tanTable+788, 169);
	__poke(Walls___tanTable+789, 170);
	__poke(Walls___tanTable+790, 171);
	__poke(Walls___tanTable+791, 171);
	__poke(Walls___tanTable+792, 172);
	__poke(Walls___tanTable+793, 173);
	__poke(Walls___tanTable+794, 174);
	__poke(Walls___tanTable+795, 175);
	__poke(Walls___tanTable+796, 175);
	__poke(Walls___tanTable+797, 176);
	__poke(Walls___tanTable+798, 177);
	__poke(Walls___tanTable+799, 178);
	__poke(Walls___tanTable+800, 179);
	__poke(Walls___tanTable+801, 180);
	__poke(Walls___tanTable+802, 181);
	__poke(Walls___tanTable+803, 181);
	__poke(Walls___tanTable+804, 182);
	__poke(Walls___tanTable+805, 183);
	__poke(Walls___tanTable+806, 184);
	__poke(Walls___tanTable+807, 185);
	__poke(Walls___tanTable+808, 186);
	__poke(Walls___tanTable+809, 187);
	__poke(Walls___tanTable+810, 188);
	__poke(Walls___tanTable+811, 189);
	__poke(Walls___tanTable+812, 190);
	__poke(Walls___tanTable+813, 191);
	__poke(Walls___tanTable+814, 192);
	__poke(Walls___tanTable+815, 193);
	__poke(Walls___tanTable+816, 194);
	__poke(Walls___tanTable+817, 195);
	__poke(Walls___tanTable+818, 196);
	__poke(Walls___tanTable+819, 197);
	__poke(Walls___tanTable+820, 198);
	__poke(Walls___tanTable+821, 199);
	__poke(Walls___tanTable+822, 200);
	__poke(Walls___tanTable+823, 201);
	__poke(Walls___tanTable+824, 202);
	__poke(Walls___tanTable+825, 203);
	__poke(Walls___tanTable+826, 204);
	__poke(Walls___tanTable+827, 205);
	__poke(Walls___tanTable+828, 206);
	__poke(Walls___tanTable+829, 208);
	__poke(Walls___tanTable+830, 209);
	__poke(Walls___tanTable+831, 210);
	__poke(Walls___tanTable+832, 211);
	__poke(Walls___tanTable+833, 212);
	__poke(Walls___tanTable+834, 213);
	__poke(Walls___tanTable+835, 215);
	__poke(Walls___tanTable+836, 216);
	__poke(Walls___tanTable+837, 217);
	__poke(Walls___tanTable+838, 218);
	__poke(Walls___tanTable+839, 219);
	__poke(Walls___tanTable+840, 221);
	__poke(Walls___tanTable+841, 222);
	__poke(Walls___tanTable+842, 223);
	__poke(Walls___tanTable+843, 225);
	__poke(Walls___tanTable+844, 226);
	__poke(Walls___tanTable+845, 227);
	__poke(Walls___tanTable+846, 229);
	__poke(Walls___tanTable+847, 230);
	__poke(Walls___tanTable+848, 231);
	__poke(Walls___tanTable+849, 233);
	__poke(Walls___tanTable+850, 234);
	__poke(Walls___tanTable+851, 235);
	__poke(Walls___tanTable+852, 237);
	__poke(Walls___tanTable+853, 238);
	__poke(Walls___tanTable+854, 240);
	__poke(Walls___tanTable+855, 241);
	__poke(Walls___tanTable+856, 243);
	__poke(Walls___tanTable+857, 244);
	__poke(Walls___tanTable+858, 246);
	__poke(Walls___tanTable+859, 247);
	__poke(Walls___tanTable+860, 249);
	__poke(Walls___tanTable+861, 251);
	__poke(Walls___tanTable+862, 252);
	__poke(Walls___tanTable+863, 254);
	__poke(Walls___tanTable+864, 256);
	__poke(Walls___tanTable+865, 257);
	__poke(Walls___tanTable+866, 259);
	__poke(Walls___tanTable+867, 261);
	__poke(Walls___tanTable+868, 262);
	__poke(Walls___tanTable+869, 264);
	__poke(Walls___tanTable+870, 266);
	__poke(Walls___tanTable+871, 268);
	__poke(Walls___tanTable+872, 269);
	__poke(Walls___tanTable+873, 271);
	__poke(Walls___tanTable+874, 273);
	__poke(Walls___tanTable+875, 275);
	__poke(Walls___tanTable+876, 277);
	__poke(Walls___tanTable+877, 279);
	__poke(Walls___tanTable+878, 281);
	__poke(Walls___tanTable+879, 283);
	__poke(Walls___tanTable+880, 285);
	__poke(Walls___tanTable+881, 287);
	__poke(Walls___tanTable+882, 289);
	__poke(Walls___tanTable+883, 291);
	__poke(Walls___tanTable+884, 293);
	__poke(Walls___tanTable+885, 296);
	__poke(Walls___tanTable+886, 298);
	__poke(Walls___tanTable+887, 300);
	__poke(Walls___tanTable+888, 302);
	__poke(Walls___tanTable+889, 305);
	__poke(Walls___tanTable+890, 307);
	__poke(Walls___tanTable+891, 309);
	__poke(Walls___tanTable+892, 312);
	__poke(Walls___tanTable+893, 314);
	__poke(Walls___tanTable+894, 317);
	__poke(Walls___tanTable+895, 319);
	__poke(Walls___tanTable+896, 322);
	__poke(Walls___tanTable+897, 324);
	__poke(Walls___tanTable+898, 327);
	__poke(Walls___tanTable+899, 330);
	__poke(Walls___tanTable+900, 332);
	__poke(Walls___tanTable+901, 335);
	__poke(Walls___tanTable+902, 338);
	__poke(Walls___tanTable+903, 341);
	__poke(Walls___tanTable+904, 344);
	__poke(Walls___tanTable+905, 347);
	__poke(Walls___tanTable+906, 350);
	__poke(Walls___tanTable+907, 353);
	__poke(Walls___tanTable+908, 356);
	__poke(Walls___tanTable+909, 359);
	__poke(Walls___tanTable+910, 362);
	__poke(Walls___tanTable+911, 366);
	__poke(Walls___tanTable+912, 369);
	__poke(Walls___tanTable+913, 372);
	__poke(Walls___tanTable+914, 376);
	__poke(Walls___tanTable+915, 379);
	__poke(Walls___tanTable+916, 383);
	__poke(Walls___tanTable+917, 386);
	__poke(Walls___tanTable+918, 390);
	__poke(Walls___tanTable+919, 394);
	__poke(Walls___tanTable+920, 398);
	__poke(Walls___tanTable+921, 402);
	__poke(Walls___tanTable+922, 406);
	__poke(Walls___tanTable+923, 410);
	__poke(Walls___tanTable+924, 414);
	__poke(Walls___tanTable+925, 418);
	__poke(Walls___tanTable+926, 423);
	__poke(Walls___tanTable+927, 427);
	__poke(Walls___tanTable+928, 431);
	__poke(Walls___tanTable+929, 436);
	__poke(Walls___tanTable+930, 441);
	__poke(Walls___tanTable+931, 446);
	__poke(Walls___tanTable+932, 450);
	__poke(Walls___tanTable+933, 455);
	__poke(Walls___tanTable+934, 461);
	__poke(Walls___tanTable+935, 466);
	__poke(Walls___tanTable+936, 471);
	__poke(Walls___tanTable+937, 477);
	__poke(Walls___tanTable+938, 482);
	__poke(Walls___tanTable+939, 488);
	__poke(Walls___tanTable+940, 494);
	__poke(Walls___tanTable+941, 500);
	__poke(Walls___tanTable+942, 506);
	__poke(Walls___tanTable+943, 512);
	__poke(Walls___tanTable+944, 519);
	__poke(Walls___tanTable+945, 526);
	__poke(Walls___tanTable+946, 532);
	__poke(Walls___tanTable+947, 539);
	__poke(Walls___tanTable+948, 546);
	__poke(Walls___tanTable+949, 554);
	__poke(Walls___tanTable+950, 561);
	__poke(Walls___tanTable+951, 569);
	__poke(Walls___tanTable+952, 577);
	__poke(Walls___tanTable+953, 585);
	__poke(Walls___tanTable+954, 594);
	__poke(Walls___tanTable+955, 602);
	__poke(Walls___tanTable+956, 611);
	__poke(Walls___tanTable+957, 621);
	__poke(Walls___tanTable+958, 630);
	__poke(Walls___tanTable+959, 640);
	__poke(Walls___tanTable+960, 650);
	__poke(Walls___tanTable+961, 660);
	__poke(Walls___tanTable+962, 671);
	__poke(Walls___tanTable+963, 682);
	__poke(Walls___tanTable+964, 693);
	__poke(Walls___tanTable+965, 705);
	__poke(Walls___tanTable+966, 717);
	__poke(Walls___tanTable+967, 730);
	__poke(Walls___tanTable+968, 743);
	__poke(Walls___tanTable+969, 757);
	__poke(Walls___tanTable+970, 771);
	__poke(Walls___tanTable+971, 785);
	__poke(Walls___tanTable+972, 801);
	__poke(Walls___tanTable+973, 816);
	__poke(Walls___tanTable+974, 833);
	__poke(Walls___tanTable+975, 850);
	__poke(Walls___tanTable+976, 868);
	__poke(Walls___tanTable+977, 886);
	__poke(Walls___tanTable+978, 905);
	__poke(Walls___tanTable+979, 926);
	__poke(Walls___tanTable+980, 947);
	__poke(Walls___tanTable+981, 969);
	__poke(Walls___tanTable+982, 992);
	__poke(Walls___tanTable+983, 1016);
	__poke(Walls___tanTable+984, 1042);
	__poke(Walls___tanTable+985, 1069);
	__poke(Walls___tanTable+986, 1097);
	__poke(Walls___tanTable+987, 1126);
	__poke(Walls___tanTable+988, 1158);
	__poke(Walls___tanTable+989, 1191);
	__poke(Walls___tanTable+990, 1226);
	__poke(Walls___tanTable+991, 1263);
	__poke(Walls___tanTable+992, 1303);
	__poke(Walls___tanTable+993, 1345);
	__poke(Walls___tanTable+994, 1390);
	__poke(Walls___tanTable+995, 1438);
	__poke(Walls___tanTable+996, 1489);
	__poke(Walls___tanTable+997, 1544);
	__poke(Walls___tanTable+998, 1604);
	__poke(Walls___tanTable+999, 1668);
	__poke(Walls___tanTable+1000, 1738);
	__poke(Walls___tanTable+1001, 1813);
	__poke(Walls___tanTable+1002, 1896);
	__poke(Walls___tanTable+1003, 1986);
	__poke(Walls___tanTable+1004, 2085);
	__poke(Walls___tanTable+1005, 2195);
	__poke(Walls___tanTable+1006, 2317);
	__poke(Walls___tanTable+1007, 2454);
	__poke(Walls___tanTable+1008, 2607);
	__poke(Walls___tanTable+1009, 2781);
	__poke(Walls___tanTable+1010, 2980);
	__poke(Walls___tanTable+1011, 3209);
	__poke(Walls___tanTable+1012, 3476);
	__poke(Walls___tanTable+1013, 3793);
	__poke(Walls___tanTable+1014, 4172);
	__poke(Walls___tanTable+1015, 4635);
	__poke(Walls___tanTable+1016, 5215);
	__poke(Walls___tanTable+1017, 5960);
	__poke(Walls___tanTable+1018, 6953);
	__poke(Walls___tanTable+1019, 8344);
	__poke(Walls___tanTable+1020, 10430);
	__poke(Walls___tanTable+1021, 13907);
	__poke(Walls___tanTable+1022, 20861);
	__poke(Walls___tanTable+1023, 32767);
	__poke(Walls___tanTable+1024, 32767);
	Walls___maxDelta = Array__new(82);
	__poke(Walls___maxDelta+81, 63);
	__poke(Walls___maxDelta+80, 63);
	__poke(Walls___maxDelta+79, 62);
	__poke(Walls___maxDelta+78, 61);
	__poke(Walls___maxDelta+77, 60);
	__poke(Walls___maxDelta+76, 60);
	__poke(Walls___maxDelta+75, 59);
	__poke(Walls___maxDelta+74, 58);
	__poke(Walls___maxDelta+73, 57);
	__poke(Walls___maxDelta+72, 56);
	__poke(Walls___maxDelta+71, 56);
	__poke(Walls___maxDelta+70, 55);
	__poke(Walls___maxDelta+69, 54);
	__poke(Walls___maxDelta+68, 53);
	__poke(Walls___maxDelta+67, 52);
	__poke(Walls___maxDelta+66, 52);
	__poke(Walls___maxDelta+65, 51);
	__poke(Walls___maxDelta+64, 50);
	__poke(Walls___maxDelta+63, 49);
	__poke(Walls___maxDelta+62, 48);
	__poke(Walls___maxDelta+61, 48);
	__poke(Walls___maxDelta+60, 47);
	__poke(Walls___maxDelta+59, 46);
	__poke(Walls___maxDelta+58, 45);
	__poke(Walls___maxDelta+57, 44);
	__poke(Walls___maxDelta+56, 44);
	__poke(Walls___maxDelta+55, 43);
	__poke(Walls___maxDelta+54, 42);
	__poke(Walls___maxDelta+53, 41);
	__poke(Walls___maxDelta+52, 40);
	__poke(Walls___maxDelta+51, 40);
	__poke(Walls___maxDelta+50, 39);
	__poke(Walls___maxDelta+49, 38);
	__poke(Walls___maxDelta+48, 37);
	__poke(Walls___maxDelta+47, 36);
	__poke(Walls___maxDelta+46, 36);
	__poke(Walls___maxDelta+45, 35);
	__poke(Walls___maxDelta+44, 34);
	__poke(Walls___maxDelta+43, 33);
	__poke(Walls___maxDelta+42, 33);
	__poke(Walls___maxDelta+41, 32);
	__poke(Walls___maxDelta+40, 31);
	__poke(Walls___maxDelta+39, 30);
	__poke(Walls___maxDelta+38, 29);
	__poke(Walls___maxDelta+37, 29);
	__poke(Walls___maxDelta+36, 28);
	__poke(Walls___maxDelta+35, 27);
	__poke(Walls___maxDelta+34, 26);
	__poke(Walls___maxDelta+33, 25);
	__poke(Walls___maxDelta+32, 25);
	__poke(Walls___maxDelta+31, 24);
	__poke(Walls___maxDelta+30, 23);
	__poke(Walls___maxDelta+29, 22);
	__poke(Walls___maxDelta+28, 22);
	__poke(Walls___maxDelta+27, 21);
	__poke(Walls___maxDelta+26, 20);
	__poke(Walls___maxDelta+25, 19);
	__poke(Walls___maxDelta+24, 18);
	__poke(Walls___maxDelta+23, 18);
	__poke(Walls___maxDelta+22, 17);
	__poke(Walls___maxDelta+21, 16);
	__poke(Walls___maxDelta+20, 15);
	__poke(Walls___maxDelta+19, 14);
	__poke(Walls___maxDelta+18, 14);
	__poke(Walls___maxDelta+17, 13);
	__poke(Walls___maxDelta+16, 12);
	__poke(Walls___maxDelta+15, 11);
	__poke(Walls___maxDelta+14, 10);
	__poke(Walls___maxDelta+13, 10);
	__poke(Walls___maxDelta+12, 9);
	__poke(Walls___maxDelta+11, 8);
	__poke(Walls___maxDelta+10, 7);
	__poke(Walls___maxDelta+9, 7);
	__poke(Walls___maxDelta+8, 6);
	__poke(Walls___maxDelta+7, 5);
	__poke(Walls___maxDelta+6, 4);
	__poke(Walls___maxDelta+5, 3);
	__poke(Walls___maxDelta+4, 3);
	__poke(Walls___maxDelta+3, 2);
	__poke(Walls___maxDelta+2, 1);
	__poke(Walls___maxDelta+1, 0);
	__poke(Walls___maxDelta+0, 0);
	Walls___atanTable = Array__new(256);
	__poke(Walls___atanTable+0, -511);
	__poke(Walls___atanTable+1, -508);
	__poke(Walls___atanTable+2, -506);
	__poke(Walls___atanTable+3, -503);
	__poke(Walls___atanTable+4, -501);
	__poke(Walls___atanTable+5, -498);
	__poke(Walls___atanTable+6, -495);
	__poke(Walls___atanTable+7, -493);
	__poke(Walls___atanTable+8, -490);
	__poke(Walls___atanTable+9, -487);
	__poke(Walls___atanTable+10, -485);
	__poke(Walls___atanTable+11, -482);
	__poke(Walls___atanTable+12, -479);
	__poke(Walls___atanTable+13, -476);
	__poke(Walls___atanTable+14, -473);
	__poke(Walls___atanTable+15, -470);
	__poke(Walls___atanTable+16, -468);
	__poke(Walls___atanTable+17, -465);
	__poke(Walls___atanTable+18, -462);
	__poke(Walls___atanTable+19, -459);
	__poke(Walls___atanTable+20, -456);
	__poke(Walls___atanTable+21, -453);
	__poke(Walls___atanTable+22, -450);
	__poke(Walls___atanTable+23, -447);
	__poke(Walls___atanTable+24, -444);
	__poke(Walls___atanTable+25, -441);
	__poke(Walls___atanTable+26, -438);
	__poke(Walls___atanTable+27, -434);
	__poke(Walls___atanTable+28, -431);
	__poke(Walls___atanTable+29, -428);
	__poke(Walls___atanTable+30, -425);
	__poke(Walls___atanTable+31, -422);
	__poke(Walls___atanTable+32, -418);
	__poke(Walls___atanTable+33, -415);
	__poke(Walls___atanTable+34, -412);
	__poke(Walls___atanTable+35, -409);
	__poke(Walls___atanTable+36, -405);
	__poke(Walls___atanTable+37, -402);
	__poke(Walls___atanTable+38, -398);
	__poke(Walls___atanTable+39, -395);
	__poke(Walls___atanTable+40, -392);
	__poke(Walls___atanTable+41, -388);
	__poke(Walls___atanTable+42, -385);
	__poke(Walls___atanTable+43, -381);
	__poke(Walls___atanTable+44, -378);
	__poke(Walls___atanTable+45, -374);
	__poke(Walls___atanTable+46, -370);
	__poke(Walls___atanTable+47, -367);
	__poke(Walls___atanTable+48, -363);
	__poke(Walls___atanTable+49, -359);
	__poke(Walls___atanTable+50, -356);
	__poke(Walls___atanTable+51, -352);
	__poke(Walls___atanTable+52, -348);
	__poke(Walls___atanTable+53, -345);
	__poke(Walls___atanTable+54, -341);
	__poke(Walls___atanTable+55, -337);
	__poke(Walls___atanTable+56, -333);
	__poke(Walls___atanTable+57, -329);
	__poke(Walls___atanTable+58, -325);
	__poke(Walls___atanTable+59, -321);
	__poke(Walls___atanTable+60, -317);
	__poke(Walls___atanTable+61, -313);
	__poke(Walls___atanTable+62, -309);
	__poke(Walls___atanTable+63, -305);
	__poke(Walls___atanTable+64, -301);
	__poke(Walls___atanTable+65, -297);
	__poke(Walls___atanTable+66, -293);
	__poke(Walls___atanTable+67, -289);
	__poke(Walls___atanTable+68, -285);
	__poke(Walls___atanTable+69, -281);
	__poke(Walls___atanTable+70, -276);
	__poke(Walls___atanTable+71, -272);
	__poke(Walls___atanTable+72, -268);
	__poke(Walls___atanTable+73, -264);
	__poke(Walls___atanTable+74, -259);
	__poke(Walls___atanTable+75, -255);
	__poke(Walls___atanTable+76, -251);
	__poke(Walls___atanTable+77, -246);
	__poke(Walls___atanTable+78, -242);
	__poke(Walls___atanTable+79, -237);
	__poke(Walls___atanTable+80, -233);
	__poke(Walls___atanTable+81, -228);
	__poke(Walls___atanTable+82, -224);
	__poke(Walls___atanTable+83, -219);
	__poke(Walls___atanTable+84, -215);
	__poke(Walls___atanTable+85, -210);
	__poke(Walls___atanTable+86, -206);
	__poke(Walls___atanTable+87, -201);
	__poke(Walls___atanTable+88, -196);
	__poke(Walls___atanTable+89, -192);
	__poke(Walls___atanTable+90, -187);
	__poke(Walls___atanTable+91, -182);
	__poke(Walls___atanTable+92, -178);
	__poke(Walls___atanTable+93, -173);
	__poke(Walls___atanTable+94, -168);
	__poke(Walls___atanTable+95, -163);
	__poke(Walls___atanTable+96, -159);
	__poke(Walls___atanTable+97, -154);
	__poke(Walls___atanTable+98, -149);
	__poke(Walls___atanTable+99, -144);
	__poke(Walls___atanTable+100, -139);
	__poke(Walls___atanTable+101, -135);
	__poke(Walls___atanTable+102, -130);
	__poke(Walls___atanTable+103, -125);
	__poke(Walls___atanTable+104, -120);
	__poke(Walls___atanTable+105, -115);
	__poke(Walls___atanTable+106, -110);
	__poke(Walls___atanTable+107, -105);
	__poke(Walls___atanTable+108, -100);
	__poke(Walls___atanTable+109, -95);
	__poke(Walls___atanTable+110, -90);
	__poke(Walls___atanTable+111, -85);
	__poke(Walls___atanTable+112, -80);
	__poke(Walls___atanTable+113, -75);
	__poke(Walls___atanTable+114, -70);
	__poke(Walls___atanTable+115, -65);
	__poke(Walls___atanTable+116, -60);
	__poke(Walls___atanTable+117, -55);
	__poke(Walls___atanTable+118, -50);
	__poke(Walls___atanTable+119, -45);
	__poke(Walls___atanTable+120, -40);
	__poke(Walls___atanTable+121, -35);
	__poke(Walls___atanTable+122, -30);
	__poke(Walls___atanTable+123, -24);
	__poke(Walls___atanTable+124, -19);
	__poke(Walls___atanTable+125, -14);
	__poke(Walls___atanTable+126, -9);
	__poke(Walls___atanTable+127, -4);
	__poke(Walls___atanTable+128, 0);
	__poke(Walls___atanTable+129, 5);
	__poke(Walls___atanTable+130, 10);
	__poke(Walls___atanTable+131, 15);
	__poke(Walls___atanTable+132, 20);
	__poke(Walls___atanTable+133, 25);
	__poke(Walls___atanTable+134, 31);
	__poke(Walls___atanTable+135, 36);
	__poke(Walls___atanTable+136, 41);
	__poke(Walls___atanTable+137, 46);
	__poke(Walls___atanTable+138, 51);
	__poke(Walls___atanTable+139, 56);
	__poke(Walls___atanTable+140, 61);
	__poke(Walls___atanTable+141, 66);
	__poke(Walls___atanTable+142, 71);
	__poke(Walls___atanTable+143, 76);
	__poke(Walls___atanTable+144, 81);
	__poke(Walls___atanTable+145, 86);
	__poke(Walls___atanTable+146, 91);
	__poke(Walls___atanTable+147, 96);
	__poke(Walls___atanTable+148, 101);
	__poke(Walls___atanTable+149, 106);
	__poke(Walls___atanTable+150, 111);
	__poke(Walls___atanTable+151, 116);
	__poke(Walls___atanTable+152, 121);
	__poke(Walls___atanTable+153, 126);
	__poke(Walls___atanTable+154, 131);
	__poke(Walls___atanTable+155, 136);
	__poke(Walls___atanTable+156, 140);
	__poke(Walls___atanTable+157, 145);
	__poke(Walls___atanTable+158, 150);
	__poke(Walls___atanTable+159, 155);
	__poke(Walls___atanTable+160, 160);
	__poke(Walls___atanTable+161, 164);
	__poke(Walls___atanTable+162, 169);
	__poke(Walls___atanTable+163, 174);
	__poke(Walls___atanTable+164, 179);
	__poke(Walls___atanTable+165, 183);
	__poke(Walls___atanTable+166, 188);
	__poke(Walls___atanTable+167, 193);
	__poke(Walls___atanTable+168, 197);
	__poke(Walls___atanTable+169, 202);
	__poke(Walls___atanTable+170, 207);
	__poke(Walls___atanTable+171, 211);
	__poke(Walls___atanTable+172, 216);
	__poke(Walls___atanTable+173, 220);
	__poke(Walls___atanTable+174, 225);
	__poke(Walls___atanTable+175, 229);
	__poke(Walls___atanTable+176, 234);
	__poke(Walls___atanTable+177, 238);
	__poke(Walls___atanTable+178, 243);
	__poke(Walls___atanTable+179, 247);
	__poke(Walls___atanTable+180, 252);
	__poke(Walls___atanTable+181, 256);
	__poke(Walls___atanTable+182, 260);
	__poke(Walls___atanTable+183, 265);
	__poke(Walls___atanTable+184, 269);
	__poke(Walls___atanTable+185, 273);
	__poke(Walls___atanTable+186, 277);
	__poke(Walls___atanTable+187, 282);
	__poke(Walls___atanTable+188, 286);
	__poke(Walls___atanTable+189, 290);
	__poke(Walls___atanTable+190, 294);
	__poke(Walls___atanTable+191, 298);
	__poke(Walls___atanTable+192, 302);
	__poke(Walls___atanTable+193, 306);
	__poke(Walls___atanTable+194, 310);
	__poke(Walls___atanTable+195, 314);
	__poke(Walls___atanTable+196, 318);
	__poke(Walls___atanTable+197, 322);
	__poke(Walls___atanTable+198, 326);
	__poke(Walls___atanTable+199, 330);
	__poke(Walls___atanTable+200, 334);
	__poke(Walls___atanTable+201, 338);
	__poke(Walls___atanTable+202, 342);
	__poke(Walls___atanTable+203, 346);
	__poke(Walls___atanTable+204, 349);
	__poke(Walls___atanTable+205, 353);
	__poke(Walls___atanTable+206, 357);
	__poke(Walls___atanTable+207, 360);
	__poke(Walls___atanTable+208, 364);
	__poke(Walls___atanTable+209, 368);
	__poke(Walls___atanTable+210, 371);
	__poke(Walls___atanTable+211, 375);
	__poke(Walls___atanTable+212, 379);
	__poke(Walls___atanTable+213, 382);
	__poke(Walls___atanTable+214, 386);
	__poke(Walls___atanTable+215, 389);
	__poke(Walls___atanTable+216, 393);
	__poke(Walls___atanTable+217, 396);
	__poke(Walls___atanTable+218, 399);
	__poke(Walls___atanTable+219, 403);
	__poke(Walls___atanTable+220, 406);
	__poke(Walls___atanTable+221, 410);
	__poke(Walls___atanTable+222, 413);
	__poke(Walls___atanTable+223, 416);
	__poke(Walls___atanTable+224, 419);
	__poke(Walls___atanTable+225, 423);
	__poke(Walls___atanTable+226, 426);
	__poke(Walls___atanTable+227, 429);
	__poke(Walls___atanTable+228, 432);
	__poke(Walls___atanTable+229, 435);
	__poke(Walls___atanTable+230, 439);
	__poke(Walls___atanTable+231, 442);
	__poke(Walls___atanTable+232, 445);
	__poke(Walls___atanTable+233, 448);
	__poke(Walls___atanTable+234, 451);
	__poke(Walls___atanTable+235, 454);
	__poke(Walls___atanTable+236, 457);
	__poke(Walls___atanTable+237, 460);
	__poke(Walls___atanTable+238, 463);
	__poke(Walls___atanTable+239, 466);
	__poke(Walls___atanTable+240, 469);
	__poke(Walls___atanTable+241, 471);
	__poke(Walls___atanTable+242, 474);
	__poke(Walls___atanTable+243, 477);
	__poke(Walls___atanTable+244, 480);
	__poke(Walls___atanTable+245, 483);
	__poke(Walls___atanTable+246, 486);
	__poke(Walls___atanTable+247, 488);
	__poke(Walls___atanTable+248, 491);
	__poke(Walls___atanTable+249, 494);
	__poke(Walls___atanTable+250, 496);
	__poke(Walls___atanTable+251, 499);
	__poke(Walls___atanTable+252, 502);
	__poke(Walls___atanTable+253, 504);
	__poke(Walls___atanTable+254, 507);
	__poke(Walls___atanTable+255, 509);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Player___sinTable = 0;
var Player___cosTable = 0;
var Player___stepX = 0;
var Player___stepY = 0;
var Player___roomPaths = 0;
var Player___xRoom = 0;
var Player___xPos = 0;
var Player___yRoom8 = 0;
var Player___yRoom = 0;
var Player___yPos = 0;
var Player___orientation = 0;
var Player___sinVal = 0;
var Player___cosVal = 0;
var Player___xstep = 0;
var Player___ystep = 0;
var Player__init(var xR, var xP, var yR, var yP, var o, var pathsRef) {
	var i = 0;
	Player___cosTable = Array__new(64);
	Player___sinTable = Array__new(64);
	Player___stepX = Array__new(64);
	Player___stepY = Array__new(64);
	__poke(Player___cosTable+0, 64);
	__poke(Player___cosTable+1, 63);
	__poke(Player___cosTable+2, 62);
	__poke(Player___cosTable+3, 61);
	__poke(Player___cosTable+4, 59);
	__poke(Player___cosTable+5, 56);
	__poke(Player___cosTable+6, 53);
	__poke(Player___cosTable+7, 49);
	__poke(Player___cosTable+8, 45);
	__poke(Player___cosTable+9, 40);
	__poke(Player___cosTable+10, 35);
	__poke(Player___cosTable+11, 30);
	__poke(Player___cosTable+12, 24);
	__poke(Player___cosTable+13, 18);
	__poke(Player___cosTable+14, 12);
	__poke(Player___cosTable+15, 6);
	__poke(Player___cosTable+16, 0);
	__poke(Player___cosTable+17, -6);
	__poke(Player___cosTable+18, -12);
	__poke(Player___cosTable+19, -18);
	__poke(Player___cosTable+20, -24);
	__poke(Player___cosTable+21, -30);
	__poke(Player___cosTable+22, -35);
	__poke(Player___cosTable+23, -40);
	__poke(Player___cosTable+24, -45);
	__poke(Player___cosTable+25, -49);
	__poke(Player___cosTable+26, -53);
	__poke(Player___cosTable+27, -56);
	__poke(Player___cosTable+28, -59);
	__poke(Player___cosTable+29, -61);
	__poke(Player___cosTable+30, -62);
	__poke(Player___cosTable+31, -63);
	__poke(Player___cosTable+32, -64);
	__poke(Player___cosTable+33, -63);
	__poke(Player___cosTable+34, -62);
	__poke(Player___cosTable+35, -61);
	__poke(Player___cosTable+36, -59);
	__poke(Player___cosTable+37, -56);
	__poke(Player___cosTable+38, -53);
	__poke(Player___cosTable+39, -49);
	__poke(Player___cosTable+40, -45);
	__poke(Player___cosTable+41, -40);
	__poke(Player___cosTable+42, -35);
	__poke(Player___cosTable+43, -30);
	__poke(Player___cosTable+44, -24);
	__poke(Player___cosTable+45, -18);
	__poke(Player___cosTable+46, -12);
	__poke(Player___cosTable+47, -6);
	__poke(Player___cosTable+48, 0);
	__poke(Player___cosTable+49, 6);
	__poke(Player___cosTable+50, 12);
	__poke(Player___cosTable+51, 18);
	__poke(Player___cosTable+52, 24);
	__poke(Player___cosTable+53, 30);
	__poke(Player___cosTable+54, 35);
	__poke(Player___cosTable+55, 40);
	__poke(Player___cosTable+56, 45);
	__poke(Player___cosTable+57, 49);
	__poke(Player___cosTable+58, 53);
	__poke(Player___cosTable+59, 56);
	__poke(Player___cosTable+60, 59);
	__poke(Player___cosTable+61, 61);
	__poke(Player___cosTable+62, 62);
	__poke(Player___cosTable+63, 63);
	__poke(Player___sinTable+0, 0);
	__poke(Player___sinTable+1, 6);
	__poke(Player___sinTable+2, 12);
	__poke(Player___sinTable+3, 18);
	__poke(Player___sinTable+4, 24);
	__poke(Player___sinTable+5, 30);
	__poke(Player___sinTable+6, 35);
	__poke(Player___sinTable+7, 40);
	__poke(Player___sinTable+8, 45);
	__poke(Player___sinTable+9, 49);
	__poke(Player___sinTable+10, 53);
	__poke(Player___sinTable+11, 56);
	__poke(Player___sinTable+12, 59);
	__poke(Player___sinTable+13, 61);
	__poke(Player___sinTable+14, 62);
	__poke(Player___sinTable+15, 63);
	__poke(Player___sinTable+16, 64);
	__poke(Player___sinTable+17, 63);
	__poke(Player___sinTable+18, 62);
	__poke(Player___sinTable+19, 61);
	__poke(Player___sinTable+20, 59);
	__poke(Player___sinTable+21, 56);
	__poke(Player___sinTable+22, 53);
	__poke(Player___sinTable+23, 49);
	__poke(Player___sinTable+24, 45);
	__poke(Player___sinTable+25, 40);
	__poke(Player___sinTable+26, 35);
	__poke(Player___sinTable+27, 30);
	__poke(Player___sinTable+28, 24);
	__poke(Player___sinTable+29, 18);
	__poke(Player___sinTable+30, 12);
	__poke(Player___sinTable+31, 6);
	__poke(Player___sinTable+32, 0);
	__poke(Player___sinTable+33, -6);
	__poke(Player___sinTable+34, -12);
	__poke(Player___sinTable+35, -18);
	__poke(Player___sinTable+36, -24);
	__poke(Player___sinTable+37, -30);
	__poke(Player___sinTable+38, -35);
	__poke(Player___sinTable+39, -40);
	__poke(Player___sinTable+40, -45);
	__poke(Player___sinTable+41, -49);
	__poke(Player___sinTable+42, -53);
	__poke(Player___sinTable+43, -56);
	__poke(Player___sinTable+44, -59);
	__poke(Player___sinTable+45, -61);
	__poke(Player___sinTable+46, -62);
	__poke(Player___sinTable+47, -63);
	__poke(Player___sinTable+48, -64);
	__poke(Player___sinTable+49, -63);
	__poke(Player___sinTable+50, -62);
	__poke(Player___sinTable+51, -61);
	__poke(Player___sinTable+52, -59);
	__poke(Player___sinTable+53, -56);
	__poke(Player___sinTable+54, -53);
	__poke(Player___sinTable+55, -49);
	__poke(Player___sinTable+56, -45);
	__poke(Player___sinTable+57, -40);
	__poke(Player___sinTable+58, -35);
	__poke(Player___sinTable+59, -30);
	__poke(Player___sinTable+60, -24);
	__poke(Player___sinTable+61, -18);
	__poke(Player___sinTable+62, -12);
	__poke(Player___sinTable+63, -6);
	__poke(Player___stepX+0, 0);
	__poke(Player___stepX+1, 0);
	__poke(Player___stepX+2, 1);
	__poke(Player___stepX+3, 1);
	__poke(Player___stepX+4, 2);
	__poke(Player___stepX+5, 3);
	__poke(Player___stepX+6, 3);
	__poke(Player___stepX+7, 4);
	__poke(Player___stepX+8, 4);
	__poke(Player___stepX+9, 4);
	__poke(Player___stepX+10, 5);
	__poke(Player___stepX+11, 5);
	__poke(Player___stepX+12, 5);
	__poke(Player___stepX+13, 6);
	__poke(Player___stepX+14, 6);
	__poke(Player___stepX+15, 6);
	__poke(Player___stepX+16, 6);
	__poke(Player___stepX+17, 6);
	__poke(Player___stepX+18, 6);
	__poke(Player___stepX+19, 6);
	__poke(Player___stepX+20, 5);
	__poke(Player___stepX+21, 5);
	__poke(Player___stepX+22, 5);
	__poke(Player___stepX+23, 4);
	__poke(Player___stepX+24, 4);
	__poke(Player___stepX+25, 4);
	__poke(Player___stepX+26, 3);
	__poke(Player___stepX+27, 3);
	__poke(Player___stepX+28, 2);
	__poke(Player___stepX+29, 1);
	__poke(Player___stepX+30, 1);
	__poke(Player___stepX+31, 0);
	__poke(Player___stepX+32, 0);
	__poke(Player___stepX+33, 0);
	__poke(Player___stepX+34, -1);
	__poke(Player___stepX+35, -1);
	__poke(Player___stepX+36, -2);
	__poke(Player___stepX+37, -3);
	__poke(Player___stepX+38, -3);
	__poke(Player___stepX+39, -4);
	__poke(Player___stepX+40, -4);
	__poke(Player___stepX+41, -4);
	__poke(Player___stepX+42, -5);
	__poke(Player___stepX+43, -5);
	__poke(Player___stepX+44, -5);
	__poke(Player___stepX+45, -6);
	__poke(Player___stepX+46, -6);
	__poke(Player___stepX+47, -6);
	__poke(Player___stepX+48, -6);
	__poke(Player___stepX+49, -6);
	__poke(Player___stepX+50, -6);
	__poke(Player___stepX+51, -6);
	__poke(Player___stepX+52, -5);
	__poke(Player___stepX+53, -5);
	__poke(Player___stepX+54, -5);
	__poke(Player___stepX+55, -4);
	__poke(Player___stepX+56, -4);
	__poke(Player___stepX+57, -4);
	__poke(Player___stepX+58, -3);
	__poke(Player___stepX+59, -3);
	__poke(Player___stepX+60, -2);
	__poke(Player___stepX+61, -1);
	__poke(Player___stepX+62, -1);
	__poke(Player___stepX+63, 0);
	__poke(Player___stepY+0, 6);
	__poke(Player___stepY+1, 6);
	__poke(Player___stepY+2, 6);
	__poke(Player___stepY+3, 6);
	__poke(Player___stepY+4, 5);
	__poke(Player___stepY+5, 5);
	__poke(Player___stepY+6, 5);
	__poke(Player___stepY+7, 4);
	__poke(Player___stepY+8, 4);
	__poke(Player___stepY+9, 4);
	__poke(Player___stepY+10, 3);
	__poke(Player___stepY+11, 3);
	__poke(Player___stepY+12, 2);
	__poke(Player___stepY+13, 1);
	__poke(Player___stepY+14, 1);
	__poke(Player___stepY+15, 0);
	__poke(Player___stepY+16, 0);
	__poke(Player___stepY+17, 0);
	__poke(Player___stepY+18, -1);
	__poke(Player___stepY+19, -1);
	__poke(Player___stepY+20, -2);
	__poke(Player___stepY+21, -3);
	__poke(Player___stepY+22, -3);
	__poke(Player___stepY+23, -4);
	__poke(Player___stepY+24, -4);
	__poke(Player___stepY+25, -4);
	__poke(Player___stepY+26, -5);
	__poke(Player___stepY+27, -5);
	__poke(Player___stepY+28, -5);
	__poke(Player___stepY+29, -6);
	__poke(Player___stepY+30, -6);
	__poke(Player___stepY+31, -6);
	__poke(Player___stepY+32, -6);
	__poke(Player___stepY+33, -6);
	__poke(Player___stepY+34, -6);
	__poke(Player___stepY+35, -6);
	__poke(Player___stepY+36, -5);
	__poke(Player___stepY+37, -5);
	__poke(Player___stepY+38, -5);
	__poke(Player___stepY+39, -4);
	__poke(Player___stepY+40, -4);
	__poke(Player___stepY+41, -4);
	__poke(Player___stepY+42, -3);
	__poke(Player___stepY+43, -3);
	__poke(Player___stepY+44, -2);
	__poke(Player___stepY+45, -1);
	__poke(Player___stepY+46, -1);
	__poke(Player___stepY+47, 0);
	__poke(Player___stepY+48, 0);
	__poke(Player___stepY+49, 0);
	__poke(Player___stepY+50, 1);
	__poke(Player___stepY+51, 1);
	__poke(Player___stepY+52, 2);
	__poke(Player___stepY+53, 3);
	__poke(Player___stepY+54, 3);
	__poke(Player___stepY+55, 4);
	__poke(Player___stepY+56, 4);
	__poke(Player___stepY+57, 4);
	__poke(Player___stepY+58, 5);
	__poke(Player___stepY+59, 5);
	__poke(Player___stepY+60, 5);
	__poke(Player___stepY+61, 6);
	__poke(Player___stepY+62, 6);
	__poke(Player___stepY+63, 6);
	Player___roomPaths = pathsRef;
	Player___xRoom = xR;
	Player___xPos = xP;
	Player___yRoom8 = (yR*8);
	Player___yRoom = yR;
	Player___yPos = yP;
	Player___orientation = o;
	Player__reOrient(0);
	Player__reLocate(0);
	return 0;
}
var Player__reLocate(var steps) {
	var roomLookup = 0;
	var moved = 0;
	var nxRoom = 0;
	var nxPos = 0;
	var nyRoom8 = 0;
	var nyRoom = 0;
	var nyPos = 0;
	nxRoom = Player___xRoom;
	nyRoom8 = Player___yRoom8;
	nyRoom = Player___yRoom;
	nxPos = Player___xPos+(Player___xstep*steps);
	nyPos = Player___yPos+(Player___ystep*steps);
	roomLookup = (Player___xRoom+Player___yRoom8)*4;
	moved = -1;
	while (-1==((((nxPos)>(63))?-1:0))) {
		if (0!=(~(__peek(Player___roomPaths+roomLookup+3)))) {
			moved = 0;
		}

		nxRoom = nxRoom+1;
		nxPos = nxPos-64;
	}
	while (-1==((((nxPos)<(0))?-1:0))) {
		if (0!=(~(__peek(Player___roomPaths+roomLookup+2)))) {
			moved = 0;
		}

		nxRoom = nxRoom-1;
		nxPos = nxPos+64;
	}
	while (-1==((((nyPos)>(63))?-1:0))) {
		if (0!=(~(__peek(Player___roomPaths+roomLookup+0)))) {
			moved = 0;
		}

		nyRoom8 = nyRoom8+8;
		nyRoom = nyRoom+1;
		nyPos = nyPos-64;
	}
	while (-1==((((nyPos)<(0))?-1:0))) {
		if (0!=(~(__peek(Player___roomPaths+roomLookup+1)))) {
			moved = 0;
		}

		nyRoom8 = nyRoom8-8;
		nyRoom = nyRoom-1;
		nyPos = nyPos+64;
	}
	if (0!=(moved)) {
		Player___xRoom = nxRoom;
		Player___yRoom8 = nyRoom8;
		Player___yRoom = nyRoom;
		Player___xPos = nxPos;
		Player___yPos = nyPos;
	}

	return 0;
}
var Player__reOrient(var rot) {
	Player___orientation = Player___orientation+rot;
	if (0!=((((Player___orientation)<(0))?-1:0))) {
		Player___orientation = Player___orientation+64;
	}

	if (0!=((((Player___orientation)>(63))?-1:0))) {
		Player___orientation = Player___orientation-64;
	}

	Player___cosVal = __peek(Player___cosTable+Player___orientation);
	Player___sinVal = __peek(Player___sinTable+Player___orientation);
	Player___xstep = __peek(Player___stepX+Player___orientation);
	Player___ystep = __peek(Player___stepY+Player___orientation);
	return 0;
}
var Player__getLocation(var locArray) {
	__poke(locArray+0, Player___xRoom);
	__poke(locArray+1, Player___xPos);
	__poke(locArray+2, Player___yRoom);
	__poke(locArray+3, Player___yPos);
	__poke(locArray+4, Player___orientation);
	__poke(locArray+5, Player___cosVal);
	__poke(locArray+6, Player___sinVal);
	return 0;
}
var Player__roomNum() {
	return (Player___xRoom+Player___yRoom8);
}
var Player__cleanup() {
	Array__dispose(Player___sinTable);
	Array__dispose(Player___cosTable);
	Array__dispose(Player___stepX);
	Array__dispose(Player___stepY);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Display___str0[] = {32,83,99,111,114,101,32,32,0};
var Display___str1[] = {47,51,32,32,65,99,116,105,111,110,115,32,32,0};
var Display___str2[] = {32,0};
var Display___str3[] = {32,32,72,32,65,32,67,32,75,32,69,32,78,32,83,32,84,32,69,32,73,32,78,32,0};
var Display___str4[] = {32,32,32,32,32,35,35,35,35,92,32,32,32,35,35,35,35,92,32,0};
var Display___str5[] = {32,32,32,32,32,92,92,92,92,35,92,32,32,35,92,92,92,92,35,92,32,0};
var Display___str6[] = {32,32,32,32,32,32,32,32,32,35,92,32,32,35,92,32,32,32,32,35,92,32,0};
var Display___str7[] = {32,32,32,32,32,32,35,35,35,35,92,32,32,35,92,32,32,32,32,35,92,32,0};
var Display___str8[] = {32,32,32,32,32,32,92,92,92,35,92,32,32,35,92,32,32,32,32,35,92,32,0};
var Display___str9[] = {32,32,32,32,32,32,32,32,32,35,92,32,32,35,92,32,32,32,35,92,92,32,0};
var Display___str10[] = {32,32,32,32,32,35,35,35,35,35,92,32,32,35,35,35,35,35,92,92,32,0};
var Display___str11[] = {32,32,32,32,32,92,92,92,92,92,92,32,32,92,92,92,92,92,92,32,0};
var Display___str12[] = {69,115,99,97,112,101,32,102,114,111,109,32,67,97,115,116,108,101,32,72,97,99,107,101,110,115,116,101,105,110,32,80,97,114,116,32,73,73,0};
var Display___str13[] = {85,115,101,32,97,114,114,111,119,32,107,101,121,115,32,116,111,32,109,111,118,101,46,32,80,114,101,115,115,32,83,80,65,67,69,32,116,111,32,115,104,111,111,116,46,0};
var Display___str14[] = {68,101,115,116,114,111,121,32,116,104,101,32,116,97,114,103,101,116,115,32,97,110,100,32,102,105,110,100,32,116,104,101,32,101,120,105,116,46,0};
var Display___str15[] = {32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,91,80,114,101,115,115,32,83,80,65,67,69,32,116,111,32,115,116,97,114,116,93,0};
var Display___str16[] = {74,97,109,101,115,32,76,101,105,98,101,114,116,32,50,48,49,55,0};
var Display___patternMask = 0;
var Display___stepStr = 0;
var Display___targetStr = 0;
var Display___text1 = 0;
var Display___text2 = 0;
var Display___text3 = 0;
var Display___screenLocation = 0;
var Display___cp0 = 0;
var Display___cp1 = 0;
var Display___cp2 = 0;
var Display___cp3 = 0;
var Display___cp4 = 0;
var Display___cp5 = 0;
var Display___cp6 = 0;
var Display___cp7 = 0;
var Display___sp0 = 0;
var Display___sp1 = 0;
var Display___sp2 = 0;
var Display___sp3 = 0;
var Display___sp4 = 0;
var Display___sp5 = 0;
var Display___sp6 = 0;
var Display___sp7 = 0;
var Display___pt0 = 0;
var Display___pt1 = 0;
var Display___pt2 = 0;
var Display___pt3 = 0;
var Display___pt4 = 0;
var Display___pt5 = 0;
var Display___pt6 = 0;
var Display___pt7 = 0;
var Display___pb0 = 0;
var Display___pb1 = 0;
var Display___pb2 = 0;
var Display___pb3 = 0;
var Display___pb4 = 0;
var Display___pb5 = 0;
var Display___pb6 = 0;
var Display___pb7 = 0;
var Display___pp0 = 0;
var Display___pp1 = 0;
var Display___pp2 = 0;
var Display___pp3 = 0;
var Display___pp4 = 0;
var Display___pp5 = 0;
var Display___pp6 = 0;
var Display___pp7 = 0;
var Display___wp0 = 0;
var Display___wp1 = 0;
var Display___wp2 = 0;
var Display___wp3 = 0;
var Display___wp4 = 0;
var Display___wp5 = 0;
var Display___wp6 = 0;
var Display___wp7 = 0;
var Display___wd0 = 0;
var Display___wd1 = 0;
var Display___wd2 = 0;
var Display___wd3 = 0;
var Display___wd4 = 0;
var Display___wd5 = 0;
var Display___wd6 = 0;
var Display___wd7 = 0;
var Display__init() {
	var i = 0;
	var p = 0;
	var q = 0;
	Display___stepStr = String__new(10);
	Display___targetStr = String__new(10);
	Display___text1 = Memory__getString(Display___str0);
	Display___text2 = Memory__getString(Display___str1);
	Display___text3 = Memory__getString(Display___str2);
	Display___screenLocation = 16384;
	Display___patternMask = Array__new(16);
	i = 0;
	p = 3;
	q = 1;
	while (-1==((((i)<(16))?-1:0))) {
		__poke(Display___patternMask+i, q);
		i = i+1;
		p = p+p+p+p;
		q = q+q;
	}
	return 0;
}
var Display__walls(var wallDistances, var wallPatterns) {
	var pixel = 0;
	var strip = 0;
	var vPos = 0;
	var lineT = 0;
	var memValT = 0;
	var lineB = 0;
	var memValB = 0;
	var wp = 0;
	strip = 0;
	pixel = 0;
	while (-1==((((strip)<(32))?-1:0))) {
		Display___cp0 = 0;
		Display___cp1 = 0;
		Display___cp2 = 0;
		Display___cp3 = 0;
		Display___cp4 = 0;
		Display___cp5 = 0;
		Display___cp6 = 0;
		Display___cp7 = 0;
		Display___sp0 = 7;
		Display___sp1 = 7;
		Display___sp2 = 7;
		Display___sp3 = 7;
		Display___sp4 = 7;
		Display___sp5 = 7;
		Display___sp6 = 7;
		Display___sp7 = 7;
		Display___pp0 = 256;
		Display___pp1 = 256;
		Display___pp2 = 256;
		Display___pp3 = 256;
		Display___pp4 = 256;
		Display___pp5 = 256;
		Display___pp6 = 256;
		Display___pp7 = 256;
		Display___wp0 = __peek(wallPatterns+pixel);
		Display___wd0 = __peek(wallDistances+pixel);
		Display___wp1 = __peek(wallPatterns+pixel+1);
		Display___wd1 = __peek(wallDistances+pixel+1);
		Display___wp2 = __peek(wallPatterns+pixel+2);
		Display___wd2 = __peek(wallDistances+pixel+2);
		Display___wp3 = __peek(wallPatterns+pixel+3);
		Display___wd3 = __peek(wallDistances+pixel+3);
		Display___wp4 = __peek(wallPatterns+pixel+4);
		Display___wd4 = __peek(wallDistances+pixel+4);
		Display___wp5 = __peek(wallPatterns+pixel+5);
		Display___wd5 = __peek(wallDistances+pixel+5);
		Display___wp6 = __peek(wallPatterns+pixel+6);
		Display___wd6 = __peek(wallDistances+pixel+6);
		Display___wp7 = __peek(wallPatterns+pixel+7);
		Display___wd7 = __peek(wallDistances+pixel+7);
		Display___pt0 = ~(((((Display___wp0&128))==(0))?-1:0));
		Display___pb0 = ~(((((Display___wp0&256))==(0))?-1:0));
		Display___pt1 = ~(((((Display___wp1&128))==(0))?-1:0));
		Display___pb1 = ~(((((Display___wp1&256))==(0))?-1:0));
		Display___pt2 = ~(((((Display___wp2&128))==(0))?-1:0));
		Display___pb2 = ~(((((Display___wp2&256))==(0))?-1:0));
		Display___pt3 = ~(((((Display___wp3&128))==(0))?-1:0));
		Display___pb3 = ~(((((Display___wp3&256))==(0))?-1:0));
		Display___pt4 = ~(((((Display___wp4&128))==(0))?-1:0));
		Display___pb4 = ~(((((Display___wp4&256))==(0))?-1:0));
		Display___pt5 = ~(((((Display___wp5&128))==(0))?-1:0));
		Display___pb5 = ~(((((Display___wp5&256))==(0))?-1:0));
		Display___pt6 = ~(((((Display___wp6&128))==(0))?-1:0));
		Display___pb6 = ~(((((Display___wp6&256))==(0))?-1:0));
		Display___pt7 = ~(((((Display___wp7&128))==(0))?-1:0));
		Display___pb7 = ~(((((Display___wp7&256))==(0))?-1:0));
		lineT = 4064+strip;
		lineB = 4096+strip;
		vPos = 63;
		while (-1==((((vPos)>(-1))?-1:0))) {
			memValT = 0;
			memValB = 0;
			if (0!=((((Display___sp0)>(-1))?-1:0))) {
				if (0!=(Display___pt0)) {
					memValT = memValT+3;
				}

				if (0!=(Display___pb0)) {
					memValB = memValB+3;
				}

			}

			Display___cp0 = Display___cp0+Display___wd0;
			while (-1==((((Display___cp0)>(512))?-1:0))) {
				Display___cp0 = Display___cp0-512;
				Display___sp0 = Display___sp0-1;
				Display___pp0 = Display___pp0+Display___pp0;
				Display___pt0 = ~(((((Display___wp0&__peek(Display___patternMask+Display___sp0)))==(0))?-1:0));
				Display___pb0 = ~(((((Display___wp0&Display___pp0))==(0))?-1:0));
			}
			if (0!=((((Display___sp1)>(-1))?-1:0))) {
				if (0!=(Display___pt1)) {
					memValT = memValT+12;
				}

				if (0!=(Display___pb1)) {
					memValB = memValB+12;
				}

			}

			Display___cp1 = Display___cp1+Display___wd1;
			while (-1==((((Display___cp1)>(512))?-1:0))) {
				Display___cp1 = Display___cp1-512;
				Display___sp1 = Display___sp1-1;
				Display___pp1 = Display___pp1+Display___pp1;
				Display___pt1 = ~(((((Display___wp1&__peek(Display___patternMask+Display___sp1)))==(0))?-1:0));
				Display___pb1 = ~(((((Display___wp1&Display___pp1))==(0))?-1:0));
			}
			if (0!=((((Display___sp2)>(-1))?-1:0))) {
				if (0!=(Display___pt2)) {
					memValT = memValT+48;
				}

				if (0!=(Display___pb2)) {
					memValB = memValB+48;
				}

			}

			Display___cp2 = Display___cp2+Display___wd2;
			while (-1==((((Display___cp2)>(512))?-1:0))) {
				Display___cp2 = Display___cp2-512;
				Display___sp2 = Display___sp2-1;
				Display___pp2 = Display___pp2+Display___pp2;
				Display___pt2 = ~(((((Display___wp2&__peek(Display___patternMask+Display___sp2)))==(0))?-1:0));
				Display___pb2 = ~(((((Display___wp2&Display___pp2))==(0))?-1:0));
			}
			if (0!=((((Display___sp3)>(-1))?-1:0))) {
				if (0!=(Display___pt3)) {
					memValT = memValT+192;
				}

				if (0!=(Display___pb3)) {
					memValB = memValB+192;
				}

			}

			Display___cp3 = Display___cp3+Display___wd3;
			while (-1==((((Display___cp3)>(512))?-1:0))) {
				Display___cp3 = Display___cp3-512;
				Display___sp3 = Display___sp3-1;
				Display___pp3 = Display___pp3+Display___pp3;
				Display___pt3 = ~(((((Display___wp3&__peek(Display___patternMask+Display___sp3)))==(0))?-1:0));
				Display___pb3 = ~(((((Display___wp3&Display___pp3))==(0))?-1:0));
			}
			if (0!=((((Display___sp4)>(-1))?-1:0))) {
				if (0!=(Display___pt4)) {
					memValT = memValT+768;
				}

				if (0!=(Display___pb4)) {
					memValB = memValB+768;
				}

			}

			Display___cp4 = Display___cp4+Display___wd4;
			while (-1==((((Display___cp4)>(512))?-1:0))) {
				Display___cp4 = Display___cp4-512;
				Display___sp4 = Display___sp4-1;
				Display___pp4 = Display___pp4+Display___pp4;
				Display___pt4 = ~(((((Display___wp4&__peek(Display___patternMask+Display___sp4)))==(0))?-1:0));
				Display___pb4 = ~(((((Display___wp4&Display___pp4))==(0))?-1:0));
			}
			if (0!=((((Display___sp5)>(-1))?-1:0))) {
				if (0!=(Display___pt5)) {
					memValT = memValT+3072;
				}

				if (0!=(Display___pb5)) {
					memValB = memValB+3072;
				}

			}

			Display___cp5 = Display___cp5+Display___wd5;
			while (-1==((((Display___cp5)>(512))?-1:0))) {
				Display___cp5 = Display___cp5-512;
				Display___sp5 = Display___sp5-1;
				Display___pp5 = Display___pp5+Display___pp5;
				Display___pt5 = ~(((((Display___wp5&__peek(Display___patternMask+Display___sp5)))==(0))?-1:0));
				Display___pb5 = ~(((((Display___wp5&Display___pp5))==(0))?-1:0));
			}
			if (0!=((((Display___sp6)>(-1))?-1:0))) {
				if (0!=(Display___pt6)) {
					memValT = memValT+12288;
				}

				if (0!=(Display___pb6)) {
					memValB = memValB+12288;
				}

			}

			Display___cp6 = Display___cp6+Display___wd6;
			while (-1==((((Display___cp6)>(512))?-1:0))) {
				Display___cp6 = Display___cp6-512;
				Display___sp6 = Display___sp6-1;
				Display___pp6 = Display___pp6+Display___pp6;
				Display___pt6 = ~(((((Display___wp6&__peek(Display___patternMask+Display___sp6)))==(0))?-1:0));
				Display___pb6 = ~(((((Display___wp6&Display___pp6))==(0))?-1:0));
			}
			if (0!=((((Display___sp7)>(-1))?-1:0))) {
				if (0!=(Display___pt7)) {
					memValT = memValT-16384;
				}

				if (0!=(Display___pb7)) {
					memValB = memValB-16384;
				}

			}

			Display___cp7 = Display___cp7+Display___wd7;
			while (-1==((((Display___cp7)>(512))?-1:0))) {
				Display___cp7 = Display___cp7-512;
				Display___sp7 = Display___sp7-1;
				Display___pp7 = Display___pp7+Display___pp7;
				Display___pt7 = ~(((((Display___wp7&__peek(Display___patternMask+Display___sp7)))==(0))?-1:0));
				Display___pb7 = ~(((((Display___wp7&Display___pp7))==(0))?-1:0));
			}
			__poke(Display___screenLocation+lineT, memValT);
			__poke(Display___screenLocation+lineB, memValB);
			lineT = lineT-32;
			lineB = lineB+32;
			__poke(Display___screenLocation+lineT, memValT);
			__poke(Display___screenLocation+lineB, memValB);
			lineT = lineT-32;
			lineB = lineB+32;
			vPos = vPos-1;
		}
		strip = strip+1;
		pixel = pixel+8;
	}
	return 0;
}
var Display__scores(var targets, var steps) {
	String__setInt(Display___targetStr, targets);
	String__setInt(Display___stepStr, steps);
	Output__moveCursor(0, 35);
	Output__printString(Display___text1);
	Output__printString(Display___targetStr);
	Output__printString(Display___text2);
	Output__printString(Display___stepStr);
	Output__printString(Display___text3);
	return 0;
}
var Display__startUp() {
	Display__printString(2, 18, Memory__getString(Display___str3));
	Display__printString(4, 18, Memory__getString(Display___str4));
	Display__printString(5, 18, Memory__getString(Display___str5));
	Display__printString(6, 18, Memory__getString(Display___str6));
	Display__printString(7, 18, Memory__getString(Display___str7));
	Display__printString(8, 18, Memory__getString(Display___str8));
	Display__printString(9, 18, Memory__getString(Display___str9));
	Display__printString(10, 18, Memory__getString(Display___str10));
	Display__printString(11, 18, Memory__getString(Display___str11));
	Display__printString(13, 12, Memory__getString(Display___str12));
	Display__printString(19, 0, Memory__getString(Display___str13));
	Display__printString(20, 0, Memory__getString(Display___str14));
	Display__printString(22, 0, Memory__getString(Display___str15));
	return 0;
}
var Display__splash_screen(var line1, var line2) {
	var key = 0;
	key = 0;
	Screen__clearScreen();
	Output__moveCursor(10, 25);
	Output__printString(line1);
	Output__moveCursor(11, 25);
	Output__printString(line2);
	Display__printString(21, 40, Memory__getString(Display___str16));
	while (-1==((((key)==(0))?-1:0))) {
		key = Keyboard__keyPressed();
	}
	return 0;
}
var Display__printString(var r, var c, var s) {
	Output__moveCursor(r, c);
	Output__printString(s);
	String__dispose(s);
	return 0;
}
var Display__cleanup() {
	Array__dispose(Display___patternMask);
	String__dispose(Display___stepStr);
	String__dispose(Display___targetStr);
	String__dispose(Display___text1);
	String__dispose(Display___text2);
	String__dispose(Display___text3);
	return 0;
}
var Display__drawSightClear() {
	__poke(Display___screenLocation+3887, __peek(Display___screenLocation+3887)|(~32767));
	__poke(Display___screenLocation+3888, __peek(Display___screenLocation+3888)|1);
	__poke(Display___screenLocation+3919, __peek(Display___screenLocation+3919)|(~32767));
	__poke(Display___screenLocation+3920, __peek(Display___screenLocation+3920)|1);
	__poke(Display___screenLocation+3951, __peek(Display___screenLocation+3951)|(~32767));
	__poke(Display___screenLocation+3952, __peek(Display___screenLocation+3952)|1);
	__poke(Display___screenLocation+3983, __peek(Display___screenLocation+3983)|(~32767));
	__poke(Display___screenLocation+3984, __peek(Display___screenLocation+3984)|1);
	__poke(Display___screenLocation+4015, __peek(Display___screenLocation+4015)|(~32767));
	__poke(Display___screenLocation+4016, __peek(Display___screenLocation+4016)|1);
	__poke(Display___screenLocation+4047, __peek(Display___screenLocation+4047)|(~32767));
	__poke(Display___screenLocation+4048, __peek(Display___screenLocation+4048)|1);
	__poke(Display___screenLocation+4079, __peek(Display___screenLocation+4079)|-512);
	__poke(Display___screenLocation+4080, __peek(Display___screenLocation+4080)|127);
	__poke(Display___screenLocation+4111, __peek(Display___screenLocation+4111)|-512);
	__poke(Display___screenLocation+4112, __peek(Display___screenLocation+4112)|127);
	__poke(Display___screenLocation+4143, __peek(Display___screenLocation+4143)|(~32767));
	__poke(Display___screenLocation+4144, __peek(Display___screenLocation+4144)|1);
	__poke(Display___screenLocation+4175, __peek(Display___screenLocation+4175)|(~32767));
	__poke(Display___screenLocation+4176, __peek(Display___screenLocation+4176)|1);
	__poke(Display___screenLocation+4207, __peek(Display___screenLocation+4207)|(~32767));
	__poke(Display___screenLocation+4208, __peek(Display___screenLocation+4208)|1);
	__poke(Display___screenLocation+4239, __peek(Display___screenLocation+4239)|(~32767));
	__poke(Display___screenLocation+4240, __peek(Display___screenLocation+4240)|1);
	__poke(Display___screenLocation+4271, __peek(Display___screenLocation+4271)|(~32767));
	__poke(Display___screenLocation+4272, __peek(Display___screenLocation+4272)|1);
	__poke(Display___screenLocation+4303, __peek(Display___screenLocation+4303)|(~32767));
	__poke(Display___screenLocation+4304, __peek(Display___screenLocation+4304)|1);
	return 0;
}
var Display__drawSightFired() {
	__poke(Display___screenLocation+3887, __peek(Display___screenLocation+3887)|(~32767));
	__poke(Display___screenLocation+3888, __peek(Display___screenLocation+3888)|65);
	__poke(Display___screenLocation+3919, __peek(Display___screenLocation+3919)|(~32767));
	__poke(Display___screenLocation+3920, __peek(Display___screenLocation+3920)|1);
	__poke(Display___screenLocation+3951, __peek(Display___screenLocation+3951)|-8192);
	__poke(Display___screenLocation+3952, __peek(Display___screenLocation+3952)|7);
	__poke(Display___screenLocation+3983, __peek(Display___screenLocation+3983)|-8192);
	__poke(Display___screenLocation+3984, __peek(Display___screenLocation+3984)|7);
	__poke(Display___screenLocation+4015, __peek(Display___screenLocation+4015)|-2048);
	__poke(Display___screenLocation+4016, __peek(Display___screenLocation+4016)|31);
	__poke(Display___screenLocation+4047, __peek(Display___screenLocation+4047)|-2048);
	__poke(Display___screenLocation+4048, __peek(Display___screenLocation+4048)|31);
	__poke(Display___screenLocation+4079, __peek(Display___screenLocation+4079)|-512);
	__poke(Display___screenLocation+4080, __peek(Display___screenLocation+4080)|127);
	__poke(Display___screenLocation+4111, __peek(Display___screenLocation+4111)|-512);
	__poke(Display___screenLocation+4112, __peek(Display___screenLocation+4112)|127);
	__poke(Display___screenLocation+4143, __peek(Display___screenLocation+4143)|-2048);
	__poke(Display___screenLocation+4144, __peek(Display___screenLocation+4144)|31);
	__poke(Display___screenLocation+4175, __peek(Display___screenLocation+4175)|-2048);
	__poke(Display___screenLocation+4176, __peek(Display___screenLocation+4176)|31);
	__poke(Display___screenLocation+4207, __peek(Display___screenLocation+4207)|-7168);
	__poke(Display___screenLocation+4208, __peek(Display___screenLocation+4208)|7);
	__poke(Display___screenLocation+4239, __peek(Display___screenLocation+4239)|-8192);
	__poke(Display___screenLocation+4240, __peek(Display___screenLocation+4240)|7);
	__poke(Display___screenLocation+4271, __peek(Display___screenLocation+4271)|(~32767));
	__poke(Display___screenLocation+4272, __peek(Display___screenLocation+4272)|1);
	__poke(Display___screenLocation+4303, __peek(Display___screenLocation+4303)|(~32767));
	__poke(Display___screenLocation+4304, __peek(Display___screenLocation+4304)|1);
	return 0;
}
var Display__drawPistolClear() {
	__poke(Display___screenLocation+6288, __peek(Display___screenLocation+6288)|-16384);
	__poke(Display___screenLocation+6320, __peek(Display___screenLocation+6320)|-16384);
	__poke(Display___screenLocation+6352, __peek(Display___screenLocation+6352)|-4096);
	__poke(Display___screenLocation+6353, __peek(Display___screenLocation+6353)|15);
	__poke(Display___screenLocation+6384, __peek(Display___screenLocation+6384)|-4096);
	__poke(Display___screenLocation+6385, __peek(Display___screenLocation+6385)|15);
	__poke(Display___screenLocation+6416, __peek(Display___screenLocation+6416)|-1024);
	__poke(Display___screenLocation+6417, __peek(Display___screenLocation+6417)|63);
	__poke(Display___screenLocation+6448, __peek(Display___screenLocation+6448)|-1024);
	__poke(Display___screenLocation+6449, __peek(Display___screenLocation+6449)|63);
	__poke(Display___screenLocation+6480, __peek(Display___screenLocation+6480)|-1024);
	__poke(Display___screenLocation+6481, __peek(Display___screenLocation+6481)|255);
	__poke(Display___screenLocation+6512, __peek(Display___screenLocation+6512)|-1024);
	__poke(Display___screenLocation+6513, __peek(Display___screenLocation+6513)|255);
	__poke(Display___screenLocation+6544, __peek(Display___screenLocation+6544)|-1024);
	__poke(Display___screenLocation+6545, __peek(Display___screenLocation+6545)|1023);
	__poke(Display___screenLocation+6576, __peek(Display___screenLocation+6576)|-1024);
	__poke(Display___screenLocation+6577, __peek(Display___screenLocation+6577)|1023);
	__poke(Display___screenLocation+6608, __peek(Display___screenLocation+6608)|-4096);
	__poke(Display___screenLocation+6609, __peek(Display___screenLocation+6609)|4095);
	__poke(Display___screenLocation+6640, __peek(Display___screenLocation+6640)|-4096);
	__poke(Display___screenLocation+6641, __peek(Display___screenLocation+6641)|4095);
	__poke(Display___screenLocation+6672, __peek(Display___screenLocation+6672)|-16384);
	__poke(Display___screenLocation+6673, __peek(Display___screenLocation+6673)|-1);
	__poke(Display___screenLocation+6704, __peek(Display___screenLocation+6704)|-16384);
	__poke(Display___screenLocation+6705, __peek(Display___screenLocation+6705)|-1);
	__poke(Display___screenLocation+6737, __peek(Display___screenLocation+6737)|-1);
	__poke(Display___screenLocation+6738, __peek(Display___screenLocation+6738)|3);
	__poke(Display___screenLocation+6769, __peek(Display___screenLocation+6769)|-1);
	__poke(Display___screenLocation+6770, __peek(Display___screenLocation+6770)|3);
	__poke(Display___screenLocation+6801, __peek(Display___screenLocation+6801)|-1);
	__poke(Display___screenLocation+6802, __peek(Display___screenLocation+6802)|15);
	__poke(Display___screenLocation+6833, __peek(Display___screenLocation+6833)|-1);
	__poke(Display___screenLocation+6834, __peek(Display___screenLocation+6834)|15);
	__poke(Display___screenLocation+6865, __peek(Display___screenLocation+6865)|-1);
	__poke(Display___screenLocation+6866, __peek(Display___screenLocation+6866)|63);
	__poke(Display___screenLocation+6897, __peek(Display___screenLocation+6897)|-1);
	__poke(Display___screenLocation+6898, __peek(Display___screenLocation+6898)|63);
	__poke(Display___screenLocation+6929, __peek(Display___screenLocation+6929)|16383);
	__poke(Display___screenLocation+6930, __peek(Display___screenLocation+6930)|780);
	__poke(Display___screenLocation+6961, __peek(Display___screenLocation+6961)|16383);
	__poke(Display___screenLocation+6962, __peek(Display___screenLocation+6962)|780);
	__poke(Display___screenLocation+6993, __peek(Display___screenLocation+6993)|16332);
	__poke(Display___screenLocation+6994, __peek(Display___screenLocation+6994)|768);
	__poke(Display___screenLocation+7025, __peek(Display___screenLocation+7025)|16332);
	__poke(Display___screenLocation+7026, __peek(Display___screenLocation+7026)|768);
	__poke(Display___screenLocation+7057, __peek(Display___screenLocation+7057)|-196);
	__poke(Display___screenLocation+7058, __peek(Display___screenLocation+7058)|4095);
	__poke(Display___screenLocation+7089, __peek(Display___screenLocation+7089)|-196);
	__poke(Display___screenLocation+7090, __peek(Display___screenLocation+7090)|4095);
	__poke(Display___screenLocation+7121, __peek(Display___screenLocation+7121)|-784);
	__poke(Display___screenLocation+7122, __peek(Display___screenLocation+7122)|4095);
	__poke(Display___screenLocation+7153, __peek(Display___screenLocation+7153)|-784);
	__poke(Display___screenLocation+7154, __peek(Display___screenLocation+7154)|4095);
	__poke(Display___screenLocation+7185, __peek(Display___screenLocation+7185)|-16);
	__poke(Display___screenLocation+7186, __peek(Display___screenLocation+7186)|4095);
	__poke(Display___screenLocation+7217, __peek(Display___screenLocation+7217)|-16);
	__poke(Display___screenLocation+7218, __peek(Display___screenLocation+7218)|4095);
	__poke(Display___screenLocation+7249, __peek(Display___screenLocation+7249)|-16);
	__poke(Display___screenLocation+7250, __peek(Display___screenLocation+7250)|4095);
	__poke(Display___screenLocation+7281, __peek(Display___screenLocation+7281)|-16);
	__poke(Display___screenLocation+7282, __peek(Display___screenLocation+7282)|4095);
	__poke(Display___screenLocation+7313, __peek(Display___screenLocation+7313)|-16);
	__poke(Display___screenLocation+7314, __peek(Display___screenLocation+7314)|-1);
	__poke(Display___screenLocation+7345, __peek(Display___screenLocation+7345)|-16);
	__poke(Display___screenLocation+7346, __peek(Display___screenLocation+7346)|-1);
	__poke(Display___screenLocation+7377, __peek(Display___screenLocation+7377)|-16);
	__poke(Display___screenLocation+7378, __peek(Display___screenLocation+7378)|16383);
	__poke(Display___screenLocation+7379, __peek(Display___screenLocation+7379)|15);
	__poke(Display___screenLocation+7409, __peek(Display___screenLocation+7409)|-16);
	__poke(Display___screenLocation+7410, __peek(Display___screenLocation+7410)|16383);
	__poke(Display___screenLocation+7411, __peek(Display___screenLocation+7411)|15);
	__poke(Display___screenLocation+7441, __peek(Display___screenLocation+7441)|-64);
	__poke(Display___screenLocation+7442, __peek(Display___screenLocation+7442)|16383);
	__poke(Display___screenLocation+7443, __peek(Display___screenLocation+7443)|48);
	__poke(Display___screenLocation+7473, __peek(Display___screenLocation+7473)|-64);
	__poke(Display___screenLocation+7474, __peek(Display___screenLocation+7474)|16383);
	__poke(Display___screenLocation+7475, __peek(Display___screenLocation+7475)|48);
	__poke(Display___screenLocation+7505, __peek(Display___screenLocation+7505)|-4);
	__poke(Display___screenLocation+7506, __peek(Display___screenLocation+7506)|16383);
	__poke(Display___screenLocation+7507, __peek(Display___screenLocation+7507)|192);
	__poke(Display___screenLocation+7537, __peek(Display___screenLocation+7537)|-4);
	__poke(Display___screenLocation+7538, __peek(Display___screenLocation+7538)|16383);
	__poke(Display___screenLocation+7539, __peek(Display___screenLocation+7539)|192);
	__poke(Display___screenLocation+7569, __peek(Display___screenLocation+7569)|-49);
	__poke(Display___screenLocation+7570, __peek(Display___screenLocation+7570)|16383);
	__poke(Display___screenLocation+7571, __peek(Display___screenLocation+7571)|192);
	__poke(Display___screenLocation+7601, __peek(Display___screenLocation+7601)|-49);
	__poke(Display___screenLocation+7602, __peek(Display___screenLocation+7602)|16383);
	__poke(Display___screenLocation+7603, __peek(Display___screenLocation+7603)|192);
	__poke(Display___screenLocation+7633, __peek(Display___screenLocation+7633)|-973);
	__poke(Display___screenLocation+7634, __peek(Display___screenLocation+7634)|16383);
	__poke(Display___screenLocation+7635, __peek(Display___screenLocation+7635)|768);
	__poke(Display___screenLocation+7665, __peek(Display___screenLocation+7665)|-973);
	__poke(Display___screenLocation+7666, __peek(Display___screenLocation+7666)|16383);
	__poke(Display___screenLocation+7667, __peek(Display___screenLocation+7667)|768);
	__poke(Display___screenLocation+7697, __peek(Display___screenLocation+7697)|-4045);
	__poke(Display___screenLocation+7698, __peek(Display___screenLocation+7698)|16383);
	__poke(Display___screenLocation+7699, __peek(Display___screenLocation+7699)|3072);
	__poke(Display___screenLocation+7729, __peek(Display___screenLocation+7729)|-4045);
	__poke(Display___screenLocation+7730, __peek(Display___screenLocation+7730)|16383);
	__poke(Display___screenLocation+7731, __peek(Display___screenLocation+7731)|3072);
	__poke(Display___screenLocation+7761, __peek(Display___screenLocation+7761)|-16333);
	__poke(Display___screenLocation+7762, __peek(Display___screenLocation+7762)|4095);
	__poke(Display___screenLocation+7763, __peek(Display___screenLocation+7763)|3072);
	__poke(Display___screenLocation+7793, __peek(Display___screenLocation+7793)|-16333);
	__poke(Display___screenLocation+7794, __peek(Display___screenLocation+7794)|4095);
	__poke(Display___screenLocation+7795, __peek(Display___screenLocation+7795)|3072);
	__poke(Display___screenLocation+7825, __peek(Display___screenLocation+7825)|12);
	__poke(Display___screenLocation+7826, __peek(Display___screenLocation+7826)|1023);
	__poke(Display___screenLocation+7827, __peek(Display___screenLocation+7827)|12288);
	__poke(Display___screenLocation+7857, __peek(Display___screenLocation+7857)|12);
	__poke(Display___screenLocation+7858, __peek(Display___screenLocation+7858)|1023);
	__poke(Display___screenLocation+7859, __peek(Display___screenLocation+7859)|12288);
	__poke(Display___screenLocation+7889, __peek(Display___screenLocation+7889)|12);
	__poke(Display___screenLocation+7890, __peek(Display___screenLocation+7890)|1020);
	__poke(Display___screenLocation+7891, __peek(Display___screenLocation+7891)|12288);
	__poke(Display___screenLocation+7921, __peek(Display___screenLocation+7921)|12);
	__poke(Display___screenLocation+7922, __peek(Display___screenLocation+7922)|1020);
	__poke(Display___screenLocation+7923, __peek(Display___screenLocation+7923)|12288);
	__poke(Display___screenLocation+7953, __peek(Display___screenLocation+7953)|48);
	__poke(Display___screenLocation+7954, __peek(Display___screenLocation+7954)|48);
	__poke(Display___screenLocation+7955, __peek(Display___screenLocation+7955)|12288);
	__poke(Display___screenLocation+7985, __peek(Display___screenLocation+7985)|48);
	__poke(Display___screenLocation+7986, __peek(Display___screenLocation+7986)|48);
	__poke(Display___screenLocation+7987, __peek(Display___screenLocation+7987)|12288);
	__poke(Display___screenLocation+8017, __peek(Display___screenLocation+8017)|192);
	__poke(Display___screenLocation+8019, __peek(Display___screenLocation+8019)|12288);
	__poke(Display___screenLocation+8049, __peek(Display___screenLocation+8049)|192);
	__poke(Display___screenLocation+8051, __peek(Display___screenLocation+8051)|12288);
	__poke(Display___screenLocation+8081, __peek(Display___screenLocation+8081)|768);
	__poke(Display___screenLocation+8083, __peek(Display___screenLocation+8083)|12288);
	__poke(Display___screenLocation+8113, __peek(Display___screenLocation+8113)|768);
	__poke(Display___screenLocation+8115, __peek(Display___screenLocation+8115)|12288);
	__poke(Display___screenLocation+8145, __peek(Display___screenLocation+8145)|3072);
	__poke(Display___screenLocation+8147, __peek(Display___screenLocation+8147)|12288);
	__poke(Display___screenLocation+8177, __peek(Display___screenLocation+8177)|3072);
	__poke(Display___screenLocation+8179, __peek(Display___screenLocation+8179)|12288);
	return 0;
}
var Display__drawPistolFired() {
	__poke(Display___screenLocation+6160, __peek(Display___screenLocation+6160)|-64);
	__poke(Display___screenLocation+6161, __peek(Display___screenLocation+6161)|255);
	__poke(Display___screenLocation+6192, __peek(Display___screenLocation+6192)|-64);
	__poke(Display___screenLocation+6193, __peek(Display___screenLocation+6193)|255);
	__poke(Display___screenLocation+6224, __peek(Display___screenLocation+6224)|-784);
	__poke(Display___screenLocation+6225, __peek(Display___screenLocation+6225)|1023);
	__poke(Display___screenLocation+6256, __peek(Display___screenLocation+6256)|-784);
	__poke(Display___screenLocation+6257, __peek(Display___screenLocation+6257)|1023);
	__poke(Display___screenLocation+6288, __peek(Display___screenLocation+6288)|-16);
	__poke(Display___screenLocation+6289, __peek(Display___screenLocation+6289)|831);
	__poke(Display___screenLocation+6320, __peek(Display___screenLocation+6320)|-16);
	__poke(Display___screenLocation+6321, __peek(Display___screenLocation+6321)|831);
	__poke(Display___screenLocation+6352, __peek(Display___screenLocation+6352)|-16);
	__poke(Display___screenLocation+6353, __peek(Display___screenLocation+6353)|1023);
	__poke(Display___screenLocation+6384, __peek(Display___screenLocation+6384)|-16);
	__poke(Display___screenLocation+6385, __peek(Display___screenLocation+6385)|1023);
	__poke(Display___screenLocation+6416, __peek(Display___screenLocation+6416)|-208);
	__poke(Display___screenLocation+6417, __peek(Display___screenLocation+6417)|255);
	__poke(Display___screenLocation+6448, __peek(Display___screenLocation+6448)|-208);
	__poke(Display___screenLocation+6449, __peek(Display___screenLocation+6449)|255);
	__poke(Display___screenLocation+6480, __peek(Display___screenLocation+6480)|-16);
	__poke(Display___screenLocation+6481, __peek(Display___screenLocation+6481)|255);
	__poke(Display___screenLocation+6512, __peek(Display___screenLocation+6512)|-16);
	__poke(Display___screenLocation+6513, __peek(Display___screenLocation+6513)|255);
	__poke(Display___screenLocation+6544, __peek(Display___screenLocation+6544)|-64);
	__poke(Display___screenLocation+6545, __peek(Display___screenLocation+6545)|1023);
	__poke(Display___screenLocation+6576, __peek(Display___screenLocation+6576)|-64);
	__poke(Display___screenLocation+6577, __peek(Display___screenLocation+6577)|1023);
	__poke(Display___screenLocation+6608, __peek(Display___screenLocation+6608)|-4096);
	__poke(Display___screenLocation+6609, __peek(Display___screenLocation+6609)|4095);
	__poke(Display___screenLocation+6640, __peek(Display___screenLocation+6640)|-4096);
	__poke(Display___screenLocation+6641, __peek(Display___screenLocation+6641)|4095);
	__poke(Display___screenLocation+6672, __peek(Display___screenLocation+6672)|-16384);
	__poke(Display___screenLocation+6673, __peek(Display___screenLocation+6673)|-1);
	__poke(Display___screenLocation+6704, __peek(Display___screenLocation+6704)|-16384);
	__poke(Display___screenLocation+6705, __peek(Display___screenLocation+6705)|-1);
	__poke(Display___screenLocation+6737, __peek(Display___screenLocation+6737)|-1);
	__poke(Display___screenLocation+6738, __peek(Display___screenLocation+6738)|3);
	__poke(Display___screenLocation+6769, __peek(Display___screenLocation+6769)|-1);
	__poke(Display___screenLocation+6770, __peek(Display___screenLocation+6770)|3);
	__poke(Display___screenLocation+6801, __peek(Display___screenLocation+6801)|-1);
	__poke(Display___screenLocation+6802, __peek(Display___screenLocation+6802)|15);
	__poke(Display___screenLocation+6833, __peek(Display___screenLocation+6833)|-1);
	__poke(Display___screenLocation+6834, __peek(Display___screenLocation+6834)|15);
	__poke(Display___screenLocation+6865, __peek(Display___screenLocation+6865)|-1);
	__poke(Display___screenLocation+6866, __peek(Display___screenLocation+6866)|63);
	__poke(Display___screenLocation+6897, __peek(Display___screenLocation+6897)|-1);
	__poke(Display___screenLocation+6898, __peek(Display___screenLocation+6898)|63);
	__poke(Display___screenLocation+6929, __peek(Display___screenLocation+6929)|16383);
	__poke(Display___screenLocation+6930, __peek(Display___screenLocation+6930)|780);
	__poke(Display___screenLocation+6961, __peek(Display___screenLocation+6961)|16383);
	__poke(Display___screenLocation+6962, __peek(Display___screenLocation+6962)|780);
	__poke(Display___screenLocation+6993, __peek(Display___screenLocation+6993)|16332);
	__poke(Display___screenLocation+6994, __peek(Display___screenLocation+6994)|768);
	__poke(Display___screenLocation+7025, __peek(Display___screenLocation+7025)|16332);
	__poke(Display___screenLocation+7026, __peek(Display___screenLocation+7026)|768);
	__poke(Display___screenLocation+7057, __peek(Display___screenLocation+7057)|-196);
	__poke(Display___screenLocation+7058, __peek(Display___screenLocation+7058)|4095);
	__poke(Display___screenLocation+7089, __peek(Display___screenLocation+7089)|-196);
	__poke(Display___screenLocation+7090, __peek(Display___screenLocation+7090)|4095);
	__poke(Display___screenLocation+7121, __peek(Display___screenLocation+7121)|-784);
	__poke(Display___screenLocation+7122, __peek(Display___screenLocation+7122)|4095);
	__poke(Display___screenLocation+7153, __peek(Display___screenLocation+7153)|-784);
	__poke(Display___screenLocation+7154, __peek(Display___screenLocation+7154)|4095);
	__poke(Display___screenLocation+7185, __peek(Display___screenLocation+7185)|-16);
	__poke(Display___screenLocation+7186, __peek(Display___screenLocation+7186)|4095);
	__poke(Display___screenLocation+7217, __peek(Display___screenLocation+7217)|-16);
	__poke(Display___screenLocation+7218, __peek(Display___screenLocation+7218)|4095);
	__poke(Display___screenLocation+7249, __peek(Display___screenLocation+7249)|-16);
	__poke(Display___screenLocation+7250, __peek(Display___screenLocation+7250)|4095);
	__poke(Display___screenLocation+7281, __peek(Display___screenLocation+7281)|-16);
	__poke(Display___screenLocation+7282, __peek(Display___screenLocation+7282)|4095);
	__poke(Display___screenLocation+7313, __peek(Display___screenLocation+7313)|-16);
	__poke(Display___screenLocation+7314, __peek(Display___screenLocation+7314)|-1);
	__poke(Display___screenLocation+7345, __peek(Display___screenLocation+7345)|-16);
	__poke(Display___screenLocation+7346, __peek(Display___screenLocation+7346)|-1);
	__poke(Display___screenLocation+7377, __peek(Display___screenLocation+7377)|-16);
	__poke(Display___screenLocation+7378, __peek(Display___screenLocation+7378)|16383);
	__poke(Display___screenLocation+7379, __peek(Display___screenLocation+7379)|15);
	__poke(Display___screenLocation+7409, __peek(Display___screenLocation+7409)|-16);
	__poke(Display___screenLocation+7410, __peek(Display___screenLocation+7410)|16383);
	__poke(Display___screenLocation+7411, __peek(Display___screenLocation+7411)|15);
	__poke(Display___screenLocation+7441, __peek(Display___screenLocation+7441)|-64);
	__poke(Display___screenLocation+7442, __peek(Display___screenLocation+7442)|16383);
	__poke(Display___screenLocation+7443, __peek(Display___screenLocation+7443)|48);
	__poke(Display___screenLocation+7473, __peek(Display___screenLocation+7473)|-64);
	__poke(Display___screenLocation+7474, __peek(Display___screenLocation+7474)|16383);
	__poke(Display___screenLocation+7475, __peek(Display___screenLocation+7475)|48);
	__poke(Display___screenLocation+7505, __peek(Display___screenLocation+7505)|-4);
	__poke(Display___screenLocation+7506, __peek(Display___screenLocation+7506)|16383);
	__poke(Display___screenLocation+7507, __peek(Display___screenLocation+7507)|192);
	__poke(Display___screenLocation+7537, __peek(Display___screenLocation+7537)|-4);
	__poke(Display___screenLocation+7538, __peek(Display___screenLocation+7538)|16383);
	__poke(Display___screenLocation+7539, __peek(Display___screenLocation+7539)|192);
	__poke(Display___screenLocation+7569, __peek(Display___screenLocation+7569)|-49);
	__poke(Display___screenLocation+7570, __peek(Display___screenLocation+7570)|16383);
	__poke(Display___screenLocation+7571, __peek(Display___screenLocation+7571)|192);
	__poke(Display___screenLocation+7601, __peek(Display___screenLocation+7601)|-49);
	__poke(Display___screenLocation+7602, __peek(Display___screenLocation+7602)|16383);
	__poke(Display___screenLocation+7603, __peek(Display___screenLocation+7603)|192);
	__poke(Display___screenLocation+7633, __peek(Display___screenLocation+7633)|-973);
	__poke(Display___screenLocation+7634, __peek(Display___screenLocation+7634)|16383);
	__poke(Display___screenLocation+7635, __peek(Display___screenLocation+7635)|768);
	__poke(Display___screenLocation+7665, __peek(Display___screenLocation+7665)|-973);
	__poke(Display___screenLocation+7666, __peek(Display___screenLocation+7666)|16383);
	__poke(Display___screenLocation+7667, __peek(Display___screenLocation+7667)|768);
	__poke(Display___screenLocation+7697, __peek(Display___screenLocation+7697)|-4045);
	__poke(Display___screenLocation+7698, __peek(Display___screenLocation+7698)|16383);
	__poke(Display___screenLocation+7699, __peek(Display___screenLocation+7699)|3072);
	__poke(Display___screenLocation+7729, __peek(Display___screenLocation+7729)|-4045);
	__poke(Display___screenLocation+7730, __peek(Display___screenLocation+7730)|16383);
	__poke(Display___screenLocation+7731, __peek(Display___screenLocation+7731)|3072);
	__poke(Display___screenLocation+7761, __peek(Display___screenLocation+7761)|-16333);
	__poke(Display___screenLocation+7762, __peek(Display___screenLocation+7762)|4095);
	__poke(Display___screenLocation+7763, __peek(Display___screenLocation+7763)|3072);
	__poke(Display___screenLocation+7793, __peek(Display___screenLocation+7793)|-16333);
	__poke(Display___screenLocation+7794, __peek(Display___screenLocation+7794)|4095);
	__poke(Display___screenLocation+7795, __peek(Display___screenLocation+7795)|3072);
	__poke(Display___screenLocation+7825, __peek(Display___screenLocation+7825)|12);
	__poke(Display___screenLocation+7826, __peek(Display___screenLocation+7826)|1023);
	__poke(Display___screenLocation+7827, __peek(Display___screenLocation+7827)|12288);
	__poke(Display___screenLocation+7857, __peek(Display___screenLocation+7857)|12);
	__poke(Display___screenLocation+7858, __peek(Display___screenLocation+7858)|1023);
	__poke(Display___screenLocation+7859, __peek(Display___screenLocation+7859)|12288);
	__poke(Display___screenLocation+7889, __peek(Display___screenLocation+7889)|12);
	__poke(Display___screenLocation+7890, __peek(Display___screenLocation+7890)|1020);
	__poke(Display___screenLocation+7891, __peek(Display___screenLocation+7891)|12288);
	__poke(Display___screenLocation+7921, __peek(Display___screenLocation+7921)|12);
	__poke(Display___screenLocation+7922, __peek(Display___screenLocation+7922)|1020);
	__poke(Display___screenLocation+7923, __peek(Display___screenLocation+7923)|12288);
	__poke(Display___screenLocation+7953, __peek(Display___screenLocation+7953)|48);
	__poke(Display___screenLocation+7954, __peek(Display___screenLocation+7954)|48);
	__poke(Display___screenLocation+7955, __peek(Display___screenLocation+7955)|12288);
	__poke(Display___screenLocation+7985, __peek(Display___screenLocation+7985)|48);
	__poke(Display___screenLocation+7986, __peek(Display___screenLocation+7986)|48);
	__poke(Display___screenLocation+7987, __peek(Display___screenLocation+7987)|12288);
	__poke(Display___screenLocation+8017, __peek(Display___screenLocation+8017)|192);
	__poke(Display___screenLocation+8019, __peek(Display___screenLocation+8019)|12288);
	__poke(Display___screenLocation+8049, __peek(Display___screenLocation+8049)|192);
	__poke(Display___screenLocation+8051, __peek(Display___screenLocation+8051)|12288);
	__poke(Display___screenLocation+8081, __peek(Display___screenLocation+8081)|768);
	__poke(Display___screenLocation+8083, __peek(Display___screenLocation+8083)|12288);
	__poke(Display___screenLocation+8113, __peek(Display___screenLocation+8113)|768);
	__poke(Display___screenLocation+8115, __peek(Display___screenLocation+8115)|12288);
	__poke(Display___screenLocation+8145, __peek(Display___screenLocation+8145)|3072);
	__poke(Display___screenLocation+8147, __peek(Display___screenLocation+8147)|12288);
	__poke(Display___screenLocation+8177, __peek(Display___screenLocation+8177)|3072);
	__poke(Display___screenLocation+8179, __peek(Display___screenLocation+8179)|12288);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Main___str0[] = {89,79,85,32,69,83,67,65,80,69,68,0};
var Main___str1[] = {71,65,77,69,32,79,86,69,82,0};
var Main__main() {
	var wallDistances = 0;
	var wallPatterns = 0;
	var playerLocation = 0;
	var key = 0;
	var exit = 0;
	var win = 0;
	var moved = 0;
	var pistolFired = 0;
	var sightFired = 0;
	var bullet = 0;
	var steps = 0;
	var targets = 0;
	var i = 0;
	var endText = 0;
	var scoreText = 0;
	var stepDelta = 0;
	wallDistances = Array__new(256);
	wallPatterns = Array__new(256);
	playerLocation = Array__new(7);
	Walls__init();
	Player__init(3, 32, 0, 6, 0, Walls__paths());
	Display__init();
	key = 0;
	moved = -1;
	exit = 0;
	targets = 0;
	stepDelta = 1;
	steps = 1000;
	bullet = 0;
	pistolFired = 0;
	sightFired = 0;
	Display__startUp();
	while (-1==(~((((key)==(0))?-1:0)))) {
		key = Keyboard__keyPressed();
	}
	while (-1==((((key)==(0))?-1:0))) {
		key = Keyboard__keyPressed();
	}
	while (-1==(~((((key)==(0))?-1:0)))) {
		key = Keyboard__keyPressed();
	}
	while (-1==(~exit)) {
		if (0!=(((((key)==(32))?-1:0))&((((bullet)==(0))?-1:0)))) {
			bullet = 4;
			moved = -1;
		}

		if (0!=((((key)==(131))?-1:0))) {
			Player__reLocate(stepDelta);
			moved = -1;
		}

		if (0!=((((key)==(133))?-1:0))) {
			Player__reLocate(-stepDelta);
			moved = -1;
		}

		if (0!=((((key)==(130))?-1:0))) {
			Player__reOrient(-stepDelta);
			moved = -1;
		}

		if (0!=((((key)==(132))?-1:0))) {
			Player__reOrient(stepDelta);
			moved = -1;
		}

		if (0!=(moved|((((bullet)>(0))?-1:0)))) {
			if (0!=((((bullet)>(0))?-1:0))) {
				bullet = bullet-1;
			}

			if (0!=(((((bullet)==(2))?-1:0))&(Walls__targetInSight()))) {
				targets = targets+1;
				Walls__untarget();
			}

			if (0!=((((bullet)==(3))?-1:0))) {
				sightFired = -1;
			} else {
				sightFired = 0;
			}
			if (0!=((((bullet)>(0))?-1:0))) {
				pistolFired = -1;
			} else {
				pistolFired = 0;
			}
			if (0!=(((((targets)>(2))?-1:0))&Walls__atExit(Player__roomNum()))) {
				exit = -1;
				win = -1;
			}

			steps = steps-stepDelta;
			if (0!=((((steps)==(0))?-1:0))) {
				exit = -1;
				win = 0;
			}

			Player__getLocation(playerLocation);
			Walls__generate(playerLocation, wallDistances, wallPatterns);
			Display__walls(wallDistances, wallPatterns);
			if (0!=(sightFired)) {
				Display__drawSightFired();
			} else {
				Display__drawSightClear();
			}
			if (0!=(pistolFired)) {
				Display__drawPistolFired();
			} else {
				Display__drawPistolClear();
			}
			Display__scores(targets, steps);
		}

		moved = 0;
		key = Keyboard__keyPressed();
		if (0!=(((((key)==(81))?-1:0))|((((key)==(113))?-1:0)))) {
			exit = -1;
		}

	}
	Screen__clearScreen();
	if (0!=(((((steps)>(0))?-1:0))&((((targets)>(2))?-1:0)))) {
		scoreText = String__new(5);
		String__setInt(scoreText, steps);
		endText = String__new(10);
		String__appendChar(endText, 83);
		String__appendChar(endText, 99);
		String__appendChar(endText, 111);
		String__appendChar(endText, 114);
		String__appendChar(endText, 101);
		String__appendChar(endText, 32);
		i = 0;
		while (-1==((((i)<(String__length(scoreText)))?-1:0))) {
			String__appendChar(endText, String__charAt(scoreText, i));
			i = i+1;
		}
		Display__splash_screen(Memory__getString(Main___str0), endText);
		String__dispose(scoreText);
		String__dispose(endText);
	} else {
		scoreText = String__new(5);
		String__setInt(scoreText, targets);
		endText = String__new(10);
		String__appendChar(endText, 72);
		String__appendChar(endText, 105);
		String__appendChar(endText, 116);
		String__appendChar(endText, 115);
		String__appendChar(endText, 32);
		i = 0;
		while (-1==((((i)<(String__length(scoreText)))?-1:0))) {
			String__appendChar(endText, String__charAt(scoreText, i));
			i = i+1;
		}
		Display__splash_screen(Memory__getString(Main___str1), endText);
		String__dispose(scoreText);
		String__dispose(endText);
	}
	while (-1==(~((((key)==(0))?-1:0)))) {
		key = Keyboard__keyPressed();
	}
	while (-1==((~((((key)==(32))?-1:0)))&(~((((key)==(81))?-1:0)))&(~((((key)==(113))?-1:0))))) {
		key = Keyboard__keyPressed();
	}
	Array__dispose(wallDistances);
	Array__dispose(wallPatterns);
	Array__dispose(playerLocation);
	Walls__cleanup();
	Display__cleanup();
	Player__cleanup();
	return 0;
}
#endif

