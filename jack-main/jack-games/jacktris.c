
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

#ifndef JACK_Block_H
#define JACK_Block_H
var Block__new(var block_type);
var Block__spawn(var t);
var Block__setPlayer(var p);
var Block__setWorld(var instance);
var Block__chargeTime(var __this, var isUserMove);
var Block__dispose(var __this);
var Block__isMovable(var __this, var dx, var dy);
var Block__isRotatableFrom(var __this, var rot0);
var Block__land(var __this);
var Block__draw(var __this);
var Block__drawNext(var __this);
var Block__erase(var __this);
var Block__moveLeft(var __this);
var Block__moveRight(var __this);
var Block__rotateRight(var __this);
var Block__rotateLeft(var __this);
var Block__softDrop(var __this);
var Block__hardDrop(var __this);
var Block__makeFall(var __this);
var Block__dropByOne(var __this);
var Block__rotateCurrentShapeTo(var __this, var r);
var Block__isGameOver(var __this);
var Block__checkTSpinCondition(var __this);
var Block__checkTSpinMiniCondition(var __this);
var Block__setPatterns(var __this);
var Block__setI(var __this);
var Block__setJ(var __this);
var Block__setL(var __this);
var Block__setO(var __this);
var Block__setS(var __this);
var Block__setT(var __this);
var Block__setZ(var __this);
var Block__setArea(var __this, var r, var a10, var a11, var a12, var a13, var a20, var a21, var a22, var a23, var a30, var a31, var a32, var a33, var a40, var a41, var a42, var a43);
#endif


#if 0

#endif

#ifndef JACK_Clock_H
#define JACK_Clock_H
var Clock__new();
var Clock__dispose(var __this);
var Clock__setLandingTime(var t);
var Clock__setUnitTime(var t);
var Clock__chargeTime(var __this, var isLanded);
var Clock__tick(var __this, var isMovable);
#endif


#if 0

#endif

#ifndef JACK_MainWindow_H
#define JACK_MainWindow_H
var MainWindow__init();
var MainWindow__drawFrame();
var MainWindow__clear();
var MainWindow__drawCell(var i, var j);
var MainWindow__eraseCell(var i, var j);
var MainWindow__waitStart();
var MainWindow__gameOver();
#endif


#if 0

#endif

#ifndef JACK_ScoreBoard_H
#define JACK_ScoreBoard_H
var ScoreBoard__init();
var ScoreBoard__printScore(var score);
var ScoreBoard__printLevel(var level);
var ScoreBoard__printLineClear(var line_count, var tSpin, var tSpinMini, var b2b);
var ScoreBoard__clear();
#endif


#if 0

#endif

#ifndef JACK_TetrisGame_H
#define JACK_TetrisGame_H
var TetrisGame__new();
var TetrisGame__dispose(var __this);
var TetrisGame__newInstance();
var TetrisGame__getInstance();
var TetrisGame__run(var __this);
#endif


#if 0

#endif

#ifndef JACK_World_H
#define JACK_World_H
var World__new();
var World__dispose(var __this);
var World__newInstance();
var World__getInstance();
var World__checkBoarder(var __this, var msg);
var World__destroyLines(var __this);
var World__redraw(var __this);
var World__registerCell(var __this, var i, var j);
var World__isEmpty(var __this, var i, var j);
#endif


#if 0

#endif

#ifndef JACK_Rand_H
#define JACK_Rand_H
var Rand__init(var v);
var Rand__take();
var Rand__loadBag();
var Rand__setSeed(var v);
var Rand__getValue();
var Rand__makePermutation(var arr);
#endif


#if 0

#endif

#ifndef JACK_NextWindow_H
#define JACK_NextWindow_H
var NextWindow__init();
var NextWindow__drawCell(var i, var j, var three_column);
var NextWindow__clear();
#endif


#if 0

#endif

#ifndef JACK_Player_H
#define JACK_Player_H
var Player__new();
var Player__dispose(var __this);
var Player__updateLevel(var __this);
var Player__getLevel(var __this);
var Player__addScoreForLineClear(var __this, var line_count, var tSpin, var tSpinMini);
var Player__addScoreForSoftDrop(var __this);
var Player__addScoreForHardDrop(var __this, var lines);
var Player__addScore(var __this, var diff);
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
var Block___player = 0;
var Block___world = 0;
#define x__ (__this+0)
#define y__ (__this+1)
#define rot__ (__this+2)
#define type__ (__this+3)
#define didRotate__ (__this+4)
#define currentShape__ (__this+5)
#define patterns__ (__this+6)
#define clock__ (__this+7)
#define userMoveCount__ (__this+8)
var Block__new(var block_type) {
	var __this;
	var i = 0;
	__this = Memory__alloc(9);
	__poke(type__, block_type);
	__poke(clock__, Clock__new());
	__poke(x__, 4);
	__poke(y__, 0);
	__poke(patterns__, Array__new(4));
	i = 0;
	while (-1==((((i)<(4))?-1:0))) {
		__poke(__peek(patterns__)+i, Array__new(4*4));
		i = i+1;
	}
	Block__setPatterns(__this);
	Block__rotateCurrentShapeTo(__this, 0);
	__poke(didRotate__, 0);
	__poke(userMoveCount__, 0);
	return __this;
}
var Block__spawn(var t) {
	var blk = 0;
	blk = Block__new(t);
	Block__chargeTime(blk, 0);
	Block__draw(blk);
	return blk;
}
var Block__setPlayer(var p) {
	Block___player = p;
	return 0;
}
var Block__setWorld(var instance) {
	Block___world = instance;
	return 0;
}
var Block__chargeTime(var __this, var isUserMove) {
	var isLanded = 0;
	if (0!=(isUserMove)) {
		__poke(userMoveCount__, __peek(userMoveCount__)+1);
	} else {
		__poke(userMoveCount__, 0);
	}
	if (0!=(~isUserMove|((((__peek(userMoveCount__))<(7))?-1:0)))) {
		isLanded = ~Block__isMovable(__this, 0, 1);
		Clock__chargeTime(__peek(clock__), isLanded);
	}

	return 0;
}
var Block__dispose(var __this) {
	var i = 0;
	i = 0;
	while (-1==((((i)<(4))?-1:0))) {
		__poke(currentShape__, __peek(__peek(patterns__)+i));
		Array__dispose(__peek(currentShape__));
		i = i+1;
	}
	Clock__dispose(__peek(clock__));
	Array__dispose(__peek(patterns__));
	Memory__deAlloc(__this);
	return 0;
}
var Block__isMovable(var __this, var dx, var dy) {
	var i = 0;
	var j = 0;
	var idx = 0;
	idx = 0;
	j = __peek(y__)+dy;
	while (-1==((((j)<((__peek(y__)+dy+4)))?-1:0))) {
		i = __peek(x__)+dx;
		while (-1==((((i)<((__peek(x__)+dx+4)))?-1:0))) {
			if (0!=(~((((__peek(__peek(currentShape__)+idx))==(0))?-1:0))&~World__isEmpty(Block___world, i, j))) {
				return 0;
			}

			idx = idx+1;
			i = i+1;
		}
		j = j+1;
	}
	return -1;
}
var Block__isRotatableFrom(var __this, var rot0) {
	var i = 0;
	var j = 0;
	var dx = 0;
	var dy = 0;
	if (0!=((((__peek(type__))==(3))?-1:0))) {
		return -1;
	}

	if (0!=((((__peek(type__))==(0))?-1:0))) {
		if (0!=(Block__isMovable(__this, 0, 0))) {
			return -1;
		}

		if (0!=((((((rot0)==(0))?-1:0))&((((__peek(rot__))==(1))?-1:0)))|(((((rot0)==(3))?-1:0))&((((__peek(rot__))==(2))?-1:0))))) {
			if (0!=(Block__isMovable(__this, -2, 0))) {
				__poke(x__, __peek(x__)-2);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 1, 0))) {
				__poke(x__, __peek(x__)+1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, -2, 1))) {
				__poke(x__, __peek(x__)-2);
				__poke(y__, __peek(y__)+1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 1, -2))) {
				__poke(x__, __peek(x__)+1);
				__poke(y__, __peek(y__)-2);
				return -1;
			}

			return 0;
		}

		if (0!=((((((rot0)==(1))?-1:0))&((((__peek(rot__))==(0))?-1:0)))|(((((rot0)==(2))?-1:0))&((((__peek(rot__))==(3))?-1:0))))) {
			if (0!=(Block__isMovable(__this, 2, 0))) {
				__poke(x__, __peek(x__)+2);
				return -1;
			}

			if (0!=(Block__isMovable(__this, -1, 0))) {
				__poke(x__, __peek(x__)-1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 2, -1))) {
				__poke(x__, __peek(x__)+2);
				__poke(y__, __peek(y__)-1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, -1, 2))) {
				__poke(x__, __peek(x__)-1);
				__poke(y__, __peek(y__)+2);
				return -1;
			}

			return 0;
		}

		if (0!=((((((rot0)==(1))?-1:0))&((((__peek(rot__))==(2))?-1:0)))|(((((rot0)==(0))?-1:0))&((((__peek(rot__))==(3))?-1:0))))) {
			if (0!=(Block__isMovable(__this, -1, 0))) {
				__poke(x__, __peek(x__)-1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 2, 0))) {
				__poke(x__, __peek(x__)+2);
				return -1;
			}

			if (0!=(Block__isMovable(__this, -1, -2))) {
				__poke(x__, __peek(x__)-1);
				__poke(y__, __peek(y__)-2);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 2, 1))) {
				__poke(x__, __peek(x__)+2);
				__poke(y__, __peek(y__)+1);
				return -1;
			}

			return 0;
		}

		if (0!=((((((rot0)==(2))?-1:0))&((((__peek(rot__))==(1))?-1:0)))|(((((rot0)==(3))?-1:0))&((((__peek(rot__))==(0))?-1:0))))) {
			if (0!=(Block__isMovable(__this, 1, 0))) {
				__poke(x__, __peek(x__)+1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, -2, 0))) {
				__poke(x__, __peek(x__)-2);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 1, 2))) {
				__poke(x__, __peek(x__)+1);
				__poke(y__, __peek(y__)+2);
				return -1;
			}

			if (0!=(Block__isMovable(__this, -2, -1))) {
				__poke(x__, __peek(x__)-2);
				__poke(y__, __peek(y__)-1);
				return -1;
			}

			return 0;
		}

	} else {
		if (0!=(Block__isMovable(__this, 0, 0))) {
			return -1;
		}

		if (0!=((((rot0)==(1))?-1:0))) {
			if (0!=(Block__isMovable(__this, 1, 0))) {
				__poke(x__, __peek(x__)+1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 1, 1))) {
				__poke(x__, __peek(x__)+1);
				__poke(y__, __peek(y__)+1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 0, -2))) {
				__poke(y__, __peek(y__)-2);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 1, -2))) {
				__poke(x__, __peek(x__)+1);
				__poke(y__, __peek(y__)-2);
				return -1;
			}

			return 0;
		}

		if (0!=((((__peek(rot__))==(3))?-1:0))) {
			if (0!=(Block__isMovable(__this, 1, 0))) {
				__poke(x__, __peek(x__)+1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 1, -1))) {
				__poke(x__, __peek(x__)+1);
				__poke(y__, __peek(y__)-1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 0, 2))) {
				__poke(y__, __peek(y__)+2);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 1, 2))) {
				__poke(x__, __peek(x__)+1);
				__poke(y__, __peek(y__)+2);
				return -1;
			}

			return 0;
		}

		if (0!=((((__peek(rot__))==(1))?-1:0))) {
			if (0!=(Block__isMovable(__this, -1, 0))) {
				__poke(x__, __peek(x__)-1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, -1, -1))) {
				__poke(x__, __peek(x__)-1);
				__poke(y__, __peek(y__)-1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 0, 2))) {
				__poke(y__, __peek(y__)+2);
				return -1;
			}

			if (0!=(Block__isMovable(__this, -1, 2))) {
				__poke(x__, __peek(x__)-1);
				__poke(y__, __peek(y__)+2);
				return -1;
			}

			return 0;
		}

		if (0!=((((rot0)==(3))?-1:0))) {
			if (0!=(Block__isMovable(__this, -1, 0))) {
				__poke(x__, __peek(x__)-1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, -1, 1))) {
				__poke(x__, __peek(x__)-1);
				__poke(y__, __peek(y__)+1);
				return -1;
			}

			if (0!=(Block__isMovable(__this, 0, -2))) {
				__poke(y__, __peek(y__)-2);
				return -1;
			}

			if (0!=(Block__isMovable(__this, -1, -2))) {
				__poke(x__, __peek(x__)-1);
				__poke(y__, __peek(y__)-2);
				return -1;
			}

			return 0;
		}

	}
}
var Block__land(var __this) {
	var i = 0;
	var j = 0;
	var idx = 0;
	var count = 0;
	var tSpin = 0;
	var tSpinMini = 0;
	idx = 0;
	j = __peek(y__);
	while (-1==((((j)<((__peek(y__)+4)))?-1:0))) {
		i = __peek(x__);
		while (-1==((((i)<((__peek(x__)+4)))?-1:0))) {
			if (0!=(~((((__peek(__peek(currentShape__)+idx))==(0))?-1:0)))) {
				World__registerCell(Block___world, i, j);
			}

			idx = idx+1;
			i = i+1;
		}
		j = j+1;
	}
	if (0!=(__peek(didRotate__)&((((__peek(type__))==(5))?-1:0)))) {
		tSpin = Block__checkTSpinCondition(__this);
		tSpinMini = Block__checkTSpinMiniCondition(__this);
	} else {
		tSpin = 0;
		tSpinMini = 0;
	}
	count = World__destroyLines(Block___world);
	Player__addScoreForLineClear(Block___player, count, tSpin, tSpinMini);
	Block__dispose(__this);
	return 0;
}
var Block__draw(var __this) {
	var i = 0;
	var j = 0;
	var idx = 0;
	idx = 0;
	j = __peek(y__);
	while (-1==((((j)<((__peek(y__)+4)))?-1:0))) {
		if (0!=(~((((j)<(2))?-1:0))&~((((j)>(21))?-1:0)))) {
			i = __peek(x__);
			while (-1==((((i)<((__peek(x__)+4)))?-1:0))) {
				if (0!=(~((((i)<(1))?-1:0))&~((((i)>(10))?-1:0))&(~((((__peek(__peek(currentShape__)+idx))==(0))?-1:0))))) {
					MainWindow__drawCell(i, j);
				}

				idx = idx+1;
				i = i+1;
			}
		} else {
			idx = idx+4;
		}
		j = j+1;
	}
	return 0;
}
var Block__drawNext(var __this) {
	var i = 0;
	var j = 0;
	var idx = 0;
	var three_column = 0;
	NextWindow__clear();
	if (0!=(((((__peek(type__))==(0))?-1:0))|((((__peek(type__))==(3))?-1:0)))) {
		three_column = 0;
	} else {
		three_column = -1;
	}
	idx = 0;
	j = 0;
	while (-1==((((j)<(4))?-1:0))) {
		i = 0;
		while (-1==((((i)<(4))?-1:0))) {
			if (0!=(~((((__peek(__peek(currentShape__)+idx))==(0))?-1:0)))) {
				NextWindow__drawCell(i, j, three_column);
			}

			idx = idx+1;
			i = i+1;
		}
		j = j+1;
	}
	return 0;
}
var Block__erase(var __this) {
	var i = 0;
	var j = 0;
	var idx = 0;
	idx = 0;
	j = __peek(y__);
	while (-1==((((j)<((__peek(y__)+4)))?-1:0))) {
		if (0!=(~((((j)<(2))?-1:0))&~((((j)>(21))?-1:0)))) {
			i = __peek(x__);
			while (-1==((((i)<((__peek(x__)+4)))?-1:0))) {
				if (0!=(~((((i)<(1))?-1:0))&~((((i)>(10))?-1:0))&(~((((__peek(__peek(currentShape__)+idx))==(0))?-1:0))))) {
					MainWindow__eraseCell(i, j);
				}

				idx = idx+1;
				i = i+1;
			}
		} else {
			idx = idx+4;
		}
		j = j+1;
	}
	return 0;
}
var Block__moveLeft(var __this) {
	if (0!=(Block__isMovable(__this, -1, 0))) {
		Block__erase(__this);
		__poke(x__, __peek(x__)-1);
		__poke(didRotate__, 0);
		Block__draw(__this);
		Block__chargeTime(__this, -1);
	}

	return 0;
}
var Block__moveRight(var __this) {
	if (0!=(Block__isMovable(__this, 1, 0))) {
		Block__erase(__this);
		__poke(x__, __peek(x__)+1);
		__poke(didRotate__, 0);
		Block__draw(__this);
		Block__chargeTime(__this, -1);
	}

	return 0;
}
var Block__rotateRight(var __this) {
	var rot0 = 0;
	var rot1 = 0;
	rot0 = __peek(rot__);
	Block__erase(__this);
	if (0!=((((__peek(rot__))==(3))?-1:0))) {
		rot1 = 0;
	} else {
		rot1 = __peek(rot__)+1;
	}
	Block__rotateCurrentShapeTo(__this, rot1);
	if (0!=(Block__isRotatableFrom(__this, rot0))) {
		__poke(didRotate__, -1);
		Block__draw(__this);
		Block__chargeTime(__this, -1);
	} else {
		Block__rotateCurrentShapeTo(__this, rot0);
		Block__draw(__this);
	}
	return 0;
}
var Block__rotateLeft(var __this) {
	var rot0 = 0;
	var rot1 = 0;
	rot0 = __peek(rot__);
	Block__erase(__this);
	if (0!=((((__peek(rot__))==(0))?-1:0))) {
		rot1 = 3;
	} else {
		rot1 = __peek(rot__)-1;
	}
	Block__rotateCurrentShapeTo(__this, rot1);
	if (0!=(Block__isRotatableFrom(__this, rot0))) {
		__poke(didRotate__, -1);
		Block__draw(__this);
		Block__chargeTime(__this, -1);
	} else {
		Block__rotateCurrentShapeTo(__this, rot0);
		Block__draw(__this);
	}
	return 0;
}
var Block__softDrop(var __this) {
	Player__addScoreForSoftDrop(Block___player);
	__poke(didRotate__, 0);
	return Block__dropByOne(__this);
}
var Block__hardDrop(var __this) {
	var y0 = 0;
	Block__erase(__this);
	y0 = __peek(y__);
	while (-1==(Block__isMovable(__this, 0, 1))) {
		__poke(y__, __peek(y__)+1);
	}
	Player__addScoreForHardDrop(Block___player, __peek(y__)-y0);
	__poke(didRotate__, 0);
	Block__draw(__this);
	Block__land(__this);
	return 0;
}
var Block__makeFall(var __this) {
	var didTick = 0;
	didTick = Clock__tick(__peek(clock__), Block__isMovable(__this, 0, 1));
	if (0!=(didTick)) {
		return Block__dropByOne(__this);
	} else {
		return __this;
	}
}
var Block__dropByOne(var __this) {
	if (0!=(Block__isMovable(__this, 0, 1))) {
		Block__erase(__this);
		__poke(y__, __peek(y__)+1);
		__poke(didRotate__, 0);
		Block__draw(__this);
		Block__chargeTime(__this, 0);
		return __this;
	} else {
		Block__land(__this);
		return 0;
	}
}
var Block__rotateCurrentShapeTo(var __this, var r) {
	__poke(rot__, r);
	__poke(currentShape__, __peek(__peek(patterns__)+r));
	return 0;
}
var Block__isGameOver(var __this) {
	return ~Block__isMovable(__this, 0, 0);
}
var Block__checkTSpinCondition(var __this) {
	var x0 = 0;
	var y0 = 0;
	var count = 0;
	count = 0;
	x0 = __peek(x__)+1;
	y0 = __peek(y__)+1;
	if (0!=(~World__isEmpty(Block___world, x0-1, y0-1))) {
		count = count+1;
	}

	if (0!=(~World__isEmpty(Block___world, x0-1, y0+1))) {
		count = count+1;
	}

	if (0!=(~World__isEmpty(Block___world, x0+1, y0-1))) {
		count = count+1;
	}

	if (0!=(~World__isEmpty(Block___world, x0+1, y0+1))) {
		count = count+1;
	}

	Output__moveCursor(17, 56);
	return ((((count)>(2))?-1:0));
}
var Block__checkTSpinMiniCondition(var __this) {
	var xb = 0;
	var yb = 0;
	if (0!=((((__peek(rot__))==(0))?-1:0))) {
		xb = 1;
		yb = 2;
	}

	if (0!=((((__peek(rot__))==(1))?-1:0))) {
		xb = 0;
		yb = 1;
	}

	if (0!=((((__peek(rot__))==(2))?-1:0))) {
		xb = 1;
		yb = 0;
	}

	if (0!=((((__peek(rot__))==(3))?-1:0))) {
		xb = 2;
		yb = 1;
	}

	return ~World__isEmpty(Block___world, __peek(x__)+xb, __peek(y__)+yb);
}
var Block__setPatterns(var __this) {
	if (0!=((((__peek(type__))==(0))?-1:0))) {
		Block__setI(__this);
		return 0;
	}

	if (0!=((((__peek(type__))==(1))?-1:0))) {
		Block__setJ(__this);
		return 0;
	}

	if (0!=((((__peek(type__))==(2))?-1:0))) {
		Block__setL(__this);
		return 0;
	}

	if (0!=((((__peek(type__))==(3))?-1:0))) {
		Block__setO(__this);
		return 0;
	}

	if (0!=((((__peek(type__))==(4))?-1:0))) {
		Block__setS(__this);
		return 0;
	}

	if (0!=((((__peek(type__))==(5))?-1:0))) {
		Block__setT(__this);
		return 0;
	}

	if (0!=((((__peek(type__))==(6))?-1:0))) {
		Block__setZ(__this);
		return 0;
	}

}
var Block__setI(var __this) {
	Block__setArea(__this, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0);
	Block__setArea(__this, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0);
	Block__setArea(__this, 3, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0);
	return 0;
}
var Block__setJ(var __this) {
	Block__setArea(__this, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 2, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0);
	Block__setArea(__this, 3, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0);
	return 0;
}
var Block__setL(var __this) {
	Block__setArea(__this, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0);
	Block__setArea(__this, 2, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 3, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0);
	return 0;
}
var Block__setO(var __this) {
	Block__setArea(__this, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 2, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 3, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return 0;
}
var Block__setS(var __this) {
	Block__setArea(__this, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0);
	Block__setArea(__this, 2, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 3, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0);
	return 0;
}
var Block__setT(var __this) {
	Block__setArea(__this, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 2, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 3, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0);
	return 0;
}
var Block__setZ(var __this) {
	Block__setArea(__this, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0);
	Block__setArea(__this, 2, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0);
	Block__setArea(__this, 3, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0);
	return 0;
}
var Block__setArea(var __this, var r, var a10, var a11, var a12, var a13, var a20, var a21, var a22, var a23, var a30, var a31, var a32, var a33, var a40, var a41, var a42, var a43) {
	var ptn = 0;
	ptn = __peek(__peek(patterns__)+r);
	__poke(ptn+0, a10);
	__poke(ptn+1, a11);
	__poke(ptn+2, a12);
	__poke(ptn+3, a13);
	__poke(ptn+4, a20);
	__poke(ptn+5, a21);
	__poke(ptn+6, a22);
	__poke(ptn+7, a23);
	__poke(ptn+8, a30);
	__poke(ptn+9, a31);
	__poke(ptn+10, a32);
	__poke(ptn+11, a33);
	__poke(ptn+12, a40);
	__poke(ptn+13, a41);
	__poke(ptn+14, a42);
	__poke(ptn+15, a43);
	return 0;
}
#undef x__
#undef y__
#undef rot__
#undef type__
#undef didRotate__
#undef currentShape__
#undef patterns__
#undef clock__
#undef userMoveCount__
#endif

#ifdef JACK_IMPLEMENTATION
var Clock___unitTime = 0;
var Clock___landingTime = 0;
#define time__ (__this+0)
var Clock__new() {
	var __this;
	__this = Memory__alloc(1);
	return __this;
}
var Clock__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
var Clock__setLandingTime(var t) {
	Clock___landingTime = t;
	return 0;
}
var Clock__setUnitTime(var t) {
	Clock___unitTime = t;
	return 0;
}
var Clock__chargeTime(var __this, var isLanded) {
	if (0!=(isLanded)) {
		__poke(time__, Clock___landingTime);
	} else {
		__poke(time__, Clock___unitTime);
	}
	return 0;
}
var Clock__tick(var __this, var isMovable) {
	Sys__wait(2);
	if (0!=(~((((__peek(time__))<(0))?-1:0)))) {
		__poke(time__, __peek(time__)-10);
		return 0;
	} else {
		Clock__chargeTime(__this, ~isMovable);
		return -1;
	}
}
#undef time__
#endif

#ifdef JACK_IMPLEMENTATION
var MainWindow___str0[] = {74,65,67,75,116,114,105,115,0};
var MainWindow___str1[] = {98,121,32,102,117,114,115,105,99,104,0};
var MainWindow___str2[] = {80,82,69,83,83,0};
var MainWindow___str3[] = {69,78,84,69,82,0};
var MainWindow___str4[] = {71,65,77,69,0};
var MainWindow___str5[] = {79,86,69,82,0};
var MainWindow___x0 = 0;
var MainWindow___y0 = 0;
var MainWindow___x1 = 0;
var MainWindow___y1 = 0;
var MainWindow___block_size = 0;
var MainWindow___block_space = 0;
var MainWindow___win_x0 = 0;
var MainWindow___win_y0 = 0;
var MainWindow___win_x1 = 0;
var MainWindow___win_y1 = 0;
var MainWindow__init() {
	var i = 0;
	var j = 0;
	var i0 = 0;
	var j0 = 0;
	var i1 = 0;
	var j1 = 0;
	MainWindow___block_size = 12;
	MainWindow___block_space = 3;
	MainWindow___win_x0 = 256+4;
	MainWindow___win_y0 = 10;
	MainWindow___win_x1 = MainWindow___win_x0+(12*10);
	MainWindow___win_y1 = MainWindow___win_y0+(12*20);
	MainWindow___x0 = MainWindow___win_x0-MainWindow___block_size;
	MainWindow___y0 = MainWindow___win_y0-(2*MainWindow___block_size);
	MainWindow__drawFrame();
	Output__moveCursor(12, 12);
	Output__printString(Memory__getString(MainWindow___str0));
	i0 = ((12*8)-14)-8;
	i1 = (12*8)+(8*8)+10;
	j0 = ((12*11)-13)-11;
	j1 = (12*11)+11+13;
	i = i0;
	while (-1==(~((((i)>(i1))?-1:0)))) {
		Screen__drawRectangle(i, j0, i+MainWindow___block_size-MainWindow___block_space, j0+MainWindow___block_size-MainWindow___block_space);
		Screen__drawRectangle(i, j1, i+MainWindow___block_size-MainWindow___block_space, j1+MainWindow___block_size-MainWindow___block_space);
		i = i+MainWindow___block_size;
	}
	Output__moveCursor(21, 2);
	Output__printString(Memory__getString(MainWindow___str1));
	return 0;
}
var MainWindow__drawFrame() {
	Screen__drawRectangle(MainWindow___win_x0-4, MainWindow___win_y0-4, MainWindow___win_x1+4-MainWindow___block_space, MainWindow___win_y1+4-MainWindow___block_space);
	MainWindow__clear();
	return 0;
}
var MainWindow__clear() {
	Screen__setColor(0);
	Screen__drawRectangle(MainWindow___win_x0-2, MainWindow___win_y0-2, MainWindow___win_x1+2-MainWindow___block_space, MainWindow___win_y1+2-MainWindow___block_space);
	Screen__setColor(-1);
	return 0;
}
var MainWindow__drawCell(var i, var j) {
	var x = 0;
	var y = 0;
	x = MainWindow___x0+(i*MainWindow___block_size);
	y = MainWindow___y0+(j*MainWindow___block_size);
	Screen__drawRectangle(x, y, x+MainWindow___block_size-MainWindow___block_space, y+MainWindow___block_size-MainWindow___block_space);
	return 0;
}
var MainWindow__eraseCell(var i, var j) {
	var x = 0;
	var y = 0;
	x = MainWindow___x0+(i*MainWindow___block_size);
	y = MainWindow___y0+(j*MainWindow___block_size);
	Screen__setColor(0);
	Screen__drawRectangle(x, y, x+MainWindow___block_size-MainWindow___block_space, y+MainWindow___block_size-MainWindow___block_space);
	Screen__setColor(-1);
	return 0;
}
var MainWindow__waitStart() {
	var i = 0;
	var key = 0;
	Screen__drawRectangle(304-18, 111-12, 304+40+18-2, 111+22+11);
	Screen__setColor(0);
	Screen__drawRectangle(304-16, 111-10, 304+40+16-2, 111+22+9);
	Output__moveCursor(10, 38);
	Output__printString(Memory__getString(MainWindow___str2));
	Output__moveCursor(11, 38);
	Output__printString(Memory__getString(MainWindow___str3));
	i = 1;
	key = 0;
	while (-1==(~((((key)==(128))?-1:0)))) {
		key = Keyboard__keyPressed();
		if (0!=((((i)==(16383))?-1:0))) {
			i = 1;
		} else {
			i = i+1;
		}
	}
	while (-1==(~((((key)==(0))?-1:0)))) {
		key = Keyboard__keyPressed();
		if (0!=((((i)==(16383))?-1:0))) {
			i = 1;
		} else {
			i = i+1;
		}
	}
	MainWindow__clear();
	return i;
}
var MainWindow__gameOver() {
	Screen__drawRectangle(304-18, 111-12, 304+32+18-2, 111+22+11);
	Screen__setColor(0);
	Screen__drawRectangle(304-16, 111-10, 304+32+16-2, 111+22+9);
	Output__moveCursor(10, 38);
	Output__printString(Memory__getString(MainWindow___str4));
	Output__moveCursor(11, 38);
	Output__printString(Memory__getString(MainWindow___str5));
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var ScoreBoard___str0[] = {83,99,111,114,101,58,0};
var ScoreBoard___str1[] = {76,101,118,101,108,58,0};
var ScoreBoard___str2[] = {78,101,120,116,58,0};
var ScoreBoard___str3[] = {32,32,32,32,32,0};
var ScoreBoard___str4[] = {32,32,32,32,32,0};
var ScoreBoard___str5[] = {66,97,99,107,45,116,111,45,66,97,99,107,0};
var ScoreBoard___str6[] = {84,45,83,112,105,110,32,77,105,110,105,0};
var ScoreBoard___str7[] = {84,83,112,105,110,0};
var ScoreBoard___str8[] = {83,105,110,103,108,101,0};
var ScoreBoard___str9[] = {68,111,117,98,108,101,0};
var ScoreBoard___str10[] = {84,114,105,112,108,101,0};
var ScoreBoard___str11[] = {84,69,84,82,73,83,0};
var ScoreBoard__init() {
	Output__moveCursor(1, 49);
	Output__printString(Memory__getString(ScoreBoard___str0));
	Output__moveCursor(3, 49);
	Output__printString(Memory__getString(ScoreBoard___str1));
	Output__moveCursor(6, 49);
	Output__printString(Memory__getString(ScoreBoard___str2));
	ScoreBoard__printScore(0);
	ScoreBoard__printLevel(1);
	return 0;
}
var ScoreBoard__printScore(var score) {
	Output__moveCursor(1, 56);
	Output__printString(Memory__getString(ScoreBoard___str3));
	Output__moveCursor(1, 56);
	Output__printInt(score);
	return 0;
}
var ScoreBoard__printLevel(var level) {
	Output__moveCursor(3, 56);
	Output__printString(Memory__getString(ScoreBoard___str4));
	Output__moveCursor(3, 56);
	Output__printInt(level);
	return 0;
}
var ScoreBoard__printLineClear(var line_count, var tSpin, var tSpinMini, var b2b) {
	ScoreBoard__clear();
	if (0!=(b2b)) {
		Output__moveCursor(19, 49);
		Output__printString(Memory__getString(ScoreBoard___str5));
	}

	if (0!=(tSpin)) {
		Output__moveCursor(20, 49);
		if (0!=(tSpinMini)) {
			Output__printString(Memory__getString(ScoreBoard___str6));
		} else {
			Output__printString(Memory__getString(ScoreBoard___str7));
		}
	}

	Output__moveCursor(21, 49);
	if (0!=((((line_count)==(1))?-1:0))) {
		Output__printString(Memory__getString(ScoreBoard___str8));
	}

	if (0!=((((line_count)==(2))?-1:0))) {
		Output__printString(Memory__getString(ScoreBoard___str9));
	}

	if (0!=((((line_count)==(3))?-1:0))) {
		Output__printString(Memory__getString(ScoreBoard___str10));
	}

	if (0!=((((line_count)==(4))?-1:0))) {
		Output__printString(Memory__getString(ScoreBoard___str11));
	}

	return 0;
}
var ScoreBoard__clear() {
	Screen__setColor(0);
	Screen__drawRectangle(392, 220, 511, 242);
	Screen__setColor(-1);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var TetrisGame___instance = 0;
var TetrisGame___world = 0;
#define exit__ (__this+0)
var TetrisGame__new() {
	var __this;
	var v = 0;
	__this = Memory__alloc(1);
	Screen__clearScreen();
	MainWindow__init();
	ScoreBoard__init();
	NextWindow__init();
	World__newInstance();
	TetrisGame___world = World__getInstance();
	Block__setWorld(TetrisGame___world);
	__poke(exit__, 0);
	v = MainWindow__waitStart();
	Rand__init(v);
	return __this;
}
var TetrisGame__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
var TetrisGame__newInstance() {
	TetrisGame___instance = TetrisGame__new();
	return 0;
}
var TetrisGame__getInstance() {
	return TetrisGame___instance;
}
var TetrisGame__run(var __this) {
	var player = 0;
	var block = 0;
	var nextBlock = 0;
	var key = 0;
	var last_key = 0;
	var interval = 0;
	var interval_timer = 0;
	var i = 0;
	player = Player__new();
	interval = 0;
	last_key = 0;
	Block__setPlayer(player);
	Clock__setLandingTime(2000);
	Clock__setUnitTime(1000);
	nextBlock = Block__spawn(Rand__take());
	while (-1==(~__peek(exit__))) {
		if (0!=((((block)==(0))?-1:0))) {
			block = nextBlock;
			i = Rand__take();
			nextBlock = Block__spawn(i);
			Block__drawNext(nextBlock);
			if (0!=(Block__isGameOver(block))) {
				__poke(exit__, -1);
			}

		}

		key = Keyboard__keyPressed();
		if (0!=((((key)==(140))?-1:0))) {
			__poke(exit__, -1);
		}

		if (0!=(~__peek(exit__))) {
			if (0!=(~((((key)==(0))?-1:0)))) {
				if (0!=((((key)==(last_key))?-1:0))) {
					if (0!=(interval)) {
						interval_timer = interval_timer-1;
						if (0!=((((interval_timer)<(0))?-1:0))) {
							interval = 0;
						}

					} else {
						interval = -1;
						interval_timer = 100;
					}
				} else {
					interval = 0;
				}
			} else {
				interval = 0;
			}
			if (0!=(~interval)) {
				if (0!=((((key)==(130))?-1:0))) {
					if (0!=((((block)>(0))?-1:0))) {
						Block__moveLeft(block);
					}

				}

				if (0!=((((key)==(132))?-1:0))) {
					if (0!=((((block)>(0))?-1:0))) {
						Block__moveRight(block);
					}

				}

				if (0!=((((key)==(133))?-1:0))) {
					if (0!=((((block)>(0))?-1:0))) {
						block = Block__softDrop(block);
					}

				}

				if (0!=((((key)==(32))?-1:0))) {
					if (0!=((((block)>(0))?-1:0))) {
						block = Block__hardDrop(block);
					}

				}

				if (0!=((((key)==(90))?-1:0))) {
					if (0!=((((block)>(0))?-1:0))) {
						Block__rotateLeft(block);
					}

				}

				if (0!=((((key)==(131))?-1:0))) {
					if (0!=((((block)>(0))?-1:0))) {
						Block__rotateRight(block);
					}

				}

			}

			if (0!=((((block)>(0))?-1:0))) {
				block = Block__makeFall(block);
			}

		}

		last_key = key;
		key = 0;
	}
	if (0!=(__peek(exit__))) {
		MainWindow__gameOver();
	}

	return 0;
}
#undef exit__
#endif

#ifdef JACK_IMPLEMENTATION
var World___str0[] = {33,33,33,33,32,73,110,116,101,114,110,97,108,32,69,114,114,111,114,58,32,87,97,108,108,32,100,101,115,116,114,117,99,116,101,100,33,33,33,32,0};
var World___str1[] = {120,44,32,121,32,61,32,0};
var World___str2[] = {44,32,0};
var World___str3[] = {33,33,33,33,32,73,110,116,101,114,110,97,108,32,69,114,114,111,114,58,32,87,97,108,108,32,100,101,115,116,114,117,99,116,101,100,33,33,33,32,0};
var World___str4[] = {120,44,32,121,32,61,32,0};
var World___str5[] = {44,32,0};
var World___str6[] = {33,33,33,33,32,73,110,116,101,114,110,97,108,32,69,114,114,111,114,58,32,88,32,111,117,116,32,111,102,32,114,97,110,103,101,33,33,33,33,0};
var World___str7[] = {44,32,0};
var World___instance = 0;
#define map__ (__this+0)
var World__new() {
	var __this;
	var i = 0;
	var j = 0;
	__this = Memory__alloc(1);
	__poke(map__, Array__new(12*23));
	i = 0;
	while (-1==((((i)<(12))?-1:0))) {
		__poke(__peek(map__)+(12*22)+i, 1);
		i = i+1;
	}
	j = 0;
	while (-1==((((j)<(23))?-1:0))) {
		__poke(__peek(map__)+(12*j)+0, 1);
		__poke(__peek(map__)+(12*j)+11, 1);
		j = j+1;
	}
	return __this;
}
var World__dispose(var __this) {
	Array__dispose(__peek(map__));
	return 0;
}
var World__newInstance() {
	World___instance = World__new();
	return 0;
}
var World__getInstance() {
	return World___instance;
}
var World__checkBoarder(var __this, var msg) {
	var j = 0;
	j = 0;
	while (-1==((((j)<(23))?-1:0))) {
		if (0!=((((__peek(__peek(map__)+(12*j)+0))==(0))?-1:0))) {
			Output__printString(Memory__getString(World___str0));
			Output__printInt(msg);
			Output__printString(Memory__getString(World___str1));
			Output__printInt(0);
			Output__printString(Memory__getString(World___str2));
			Output__printInt(j);
			while (-1==(-1)) {
			}
		}

		if (0!=((((__peek(__peek(map__)+(12*j)+11))==(0))?-1:0))) {
			Output__printString(Memory__getString(World___str3));
			Output__printInt(msg);
			Output__printString(Memory__getString(World___str4));
			Output__printInt(11);
			Output__printString(Memory__getString(World___str5));
			Output__printInt(j);
			while (-1==(-1)) {
			}
		}

		j = j+1;
	}
	return 0;
}
var World__destroyLines(var __this) {
	var i = 0;
	var j = 0;
	var idx = 0;
	var offset = 0;
	var destroyable = 0;
	var isDestroyed = 0;
	var stopper = 0;
	var destoyedCount = 0;
	destroyable = Array__new(22);
	isDestroyed = 0;
	destoyedCount = 0;
	idx = (21*12)+10;
	j = 21;
	while (-1==((((j)>(1))?-1:0))) {
		i = 10;
		__poke(destroyable+j, -1);
		while (-1==((((i)>(0))?-1:0))) {
			if (0!=((((__peek(__peek(map__)+idx))==(0))?-1:0))) {
				__poke(destroyable+j, 0);
			}

			idx = idx-1;
			i = i-1;
		}
		if (0!=(__peek(destroyable+j))) {
			isDestroyed = -1;
			destoyedCount = destoyedCount+1;
		}

		idx = idx-2;
		j = j-1;
	}
	if (0!=(~isDestroyed)) {
		Array__dispose(destroyable);
		return 0;
	}

	World__redraw(__this);
	Sys__wait(100);
	idx = (21*12)+10;
	j = 21;
	while (-1==((((j)>(1))?-1:0))) {
		if (0!=(__peek(destroyable+j))) {
			i = 10;
			while (-1==((((i)>(0))?-1:0))) {
				__poke(__peek(map__)+idx, 0);
				idx = idx-1;
				i = i-1;
			}
			idx = idx-2;
		} else {
			idx = idx-12;
		}
		j = j-1;
	}
	World__redraw(__this);
	Sys__wait(100);
	__poke(destroyable+0, 0);
	__poke(destroyable+1, 0);
	idx = (21*12)+10;
	j = 21;
	offset = 0;
	while (-1==((~((((j)<(0))?-1:0))))) {
		stopper = 0;
		while (-1==(~stopper)) {
			if (0!=(((((j-offset))<(0))?-1:0))) {
				stopper = -1;
			} else {
				if (0!=(~(__peek(destroyable+j-offset)))) {
					stopper = -1;
				} else {
					offset = offset+1;
				}
			}
		}
		if (0!=(~(((((j-offset))<(0))?-1:0)))) {
			i = 10;
			while (-1==((((i)>(0))?-1:0))) {
				__poke(__peek(map__)+idx, __peek(__peek(map__)+idx-(offset*12)));
				idx = idx-1;
				i = i-1;
			}
			idx = idx-2;
		} else {
			i = 10;
			while (-1==((((i)>(0))?-1:0))) {
				__poke(__peek(map__)+idx, 0);
				idx = idx-1;
				i = i-1;
			}
			idx = idx-2;
		}
		j = j-1;
	}
	World__redraw(__this);
	Array__dispose(destroyable);
	return destoyedCount;
}
var World__redraw(var __this) {
	var i = 0;
	var j = 0;
	var idx = 0;
	MainWindow__clear();
	idx = (2*12)+1;
	j = 2;
	while (-1==((((j)<(22))?-1:0))) {
		i = 1;
		while (-1==((((i)<(11))?-1:0))) {
			if (0!=(~((((__peek(__peek(map__)+idx))==(0))?-1:0)))) {
				MainWindow__drawCell(i, j);
			}

			idx = idx+1;
			i = i+1;
		}
		idx = idx+2;
		j = j+1;
	}
	return 0;
}
var World__registerCell(var __this, var i, var j) {
	if (0!=(((((i)<(1))?-1:0))|((((i)>(10))?-1:0)))) {
		Output__printString(Memory__getString(World___str6));
		Output__printInt(i);
		Output__printString(Memory__getString(World___str7));
		Output__printInt(j);
		Sys__halt();
	}

	__poke(__peek(map__)+(12*j)+i, 1);
	return 0;
}
var World__isEmpty(var __this, var i, var j) {
	return (((__peek(__peek(map__)+(12*j)+i))==(0))?-1:0);
}
#undef map__
#endif

#ifdef JACK_IMPLEMENTATION
var Rand___bag = 0;
var Rand___nextBag = 0;
var Rand___index = 0;
var Rand___currentValue = 0;
var Rand__init(var v) {
	var i = 0;
	Rand__setSeed(v);
	Rand___bag = Array__new(7);
	Rand___nextBag = Array__new(7);
	i = 0;
	while (-1==((((i)<(7))?-1:0))) {
		__poke(Rand___nextBag+i, i);
		i = i+1;
	}
	Rand__loadBag();
	Rand__loadBag();
	Rand___index = 0;
	return 0;
}
var Rand__take() {
	var v = 0;
	v = __peek(Rand___bag+Rand___index);
	Rand___index = Rand___index+1;
	if (0!=((((Rand___index)==(7))?-1:0))) {
		Rand___index = 0;
		Rand__loadBag();
	}

	return v;
}
var Rand__loadBag() {
	var i = 0;
	i = 0;
	while (-1==((((i)<(7))?-1:0))) {
		__poke(Rand___bag+i, __peek(Rand___nextBag+i));
		i = i+1;
	}
	Rand__makePermutation(Rand___nextBag);
	return 0;
}
var Rand__setSeed(var v) {
	Rand___currentValue = v;
	return 0;
}
var Rand__getValue() {
	var v = 0;
	v = (Rand___currentValue*253)+1;
	Rand___currentValue = v&16383;
	return Rand___currentValue;
}
var Rand__makePermutation(var arr) {
	var i = 0;
	var j = 0;
	var t = 0;
	i = 0;
	while (-1==((((i)<(6))?-1:0))) {
		t = Rand__getValue();
		j = i+t-((t/(7-i))*(7-i));
		t = __peek(arr+i);
		__poke(arr+i, __peek(arr+j));
		__poke(arr+j, t);
		i = i+1;
	}
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var NextWindow___disp_x0 = 0;
var NextWindow___disp_y0 = 0;
var NextWindow___disp_x1 = 0;
var NextWindow___disp_y1 = 0;
var NextWindow___block_size = 0;
var NextWindow___block_space = 0;
var NextWindow__init() {
	NextWindow___block_size = 12;
	NextWindow___block_space = 3;
	NextWindow___disp_x0 = 392;
	NextWindow___disp_y0 = 82;
	NextWindow___disp_x1 = NextWindow___disp_x0+(12*4)+(4*2)-NextWindow___block_space;
	NextWindow___disp_y1 = NextWindow___disp_y0+(12*2)+(16*2)-NextWindow___block_space;
	Screen__drawRectangle(NextWindow___disp_x0, NextWindow___disp_y0, NextWindow___disp_x1, NextWindow___disp_y1);
	Screen__setColor(0);
	Screen__drawRectangle(NextWindow___disp_x0+2, NextWindow___disp_y0+2, NextWindow___disp_x1-2, NextWindow___disp_y1-2);
	Screen__setColor(-1);
	return 0;
}
var NextWindow__drawCell(var i, var j, var three_column) {
	var x = 0;
	var y = 0;
	var offset_x = 0;
	var offset_y = 0;
	if (0!=(three_column)) {
		offset_x = 4+(NextWindow___block_size/2);
	} else {
		offset_x = 4;
	}
	offset_y = 16;
	x = NextWindow___disp_x0+(i*NextWindow___block_size)+offset_x;
	y = NextWindow___disp_y0+(j*NextWindow___block_size)+offset_y;
	Screen__drawRectangle(x, y, x+NextWindow___block_size-NextWindow___block_space, y+NextWindow___block_size-NextWindow___block_space);
	return 0;
}
var NextWindow__clear() {
	Screen__setColor(0);
	Screen__drawRectangle(NextWindow___disp_x0+2, NextWindow___disp_y0+2, NextWindow___disp_x1-2, NextWindow___disp_y1-2);
	Screen__setColor(-1);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
#define back_to_back__ (__this+0)
#define score__ (__this+1)
#define next_score__ (__this+2)
#define level__ (__this+3)
var Player__new() {
	var __this;
	__this = Memory__alloc(4);
	__poke(score__, 0);
	__poke(next_score__, 4800);
	__poke(level__, 1);
	__poke(back_to_back__, 0);
	return __this;
}
var Player__dispose(var __this) {
	Memory__deAlloc(__this);
}
var Player__updateLevel(var __this) {
	if (0!=((((__peek(score__))<(__peek(next_score__)))?-1:0))) {
		return 0;
	}

	while (-1==(~((((__peek(score__))<(__peek(next_score__)))?-1:0)))) {
		__poke(next_score__, __peek(next_score__)+4800);
		__poke(level__, __peek(level__)+1);
	}
	ScoreBoard__printLevel(__peek(level__));
	return 0;
}
var Player__getLevel(var __this) {
	return __peek(level__);
}
var Player__addScoreForLineClear(var __this, var line_count, var tSpin, var tSpinMini) {
	var base = 0;
	var last_b2b = 0;
	if (0!=(~((((line_count)>(0))?-1:0))&~tSpin)) {
		return 0;
	}

	last_b2b = __peek(back_to_back__);
	if (0!=(tSpin)) {
		if (0!=(tSpinMini)) {
			if (0!=((((line_count)==(0))?-1:0))) {
				base = 100;
				__poke(back_to_back__, 0);
			}

			if (0!=((((line_count)==(1))?-1:0))) {
				if (0!=(__peek(back_to_back__))) {
					base = 300;
				} else {
					base = 200;
				}
				__poke(back_to_back__, -1);
			}

			if (0!=((((line_count)==(2))?-1:0))) {
				if (0!=(__peek(back_to_back__))) {
					base = 600;
				} else {
					base = 400;
				}
				__poke(back_to_back__, -1);
			}

		} else {
			if (0!=((((line_count)==(0))?-1:0))) {
				base = 400;
				__poke(back_to_back__, 0);
			}

			if (0!=((((line_count)==(1))?-1:0))) {
				if (0!=(__peek(back_to_back__))) {
					base = 1200;
				} else {
					base = 800;
				}
				__poke(back_to_back__, -1);
			}

			if (0!=((((line_count)==(2))?-1:0))) {
				if (0!=(__peek(back_to_back__))) {
					base = 1800;
				} else {
					base = 1200;
				}
				__poke(back_to_back__, -1);
			}

			if (0!=((((line_count)==(3))?-1:0))) {
				if (0!=(__peek(back_to_back__))) {
					base = 2400;
				} else {
					base = 1600;
				}
				__poke(back_to_back__, -1);
			}

		}
	} else {
		if (0!=((((line_count)==(1))?-1:0))) {
			base = 100;
			__poke(back_to_back__, 0);
		}

		if (0!=((((line_count)==(2))?-1:0))) {
			base = 300;
			__poke(back_to_back__, 0);
		}

		if (0!=((((line_count)==(3))?-1:0))) {
			base = 500;
			__poke(back_to_back__, 0);
		}

		if (0!=((((line_count)==(4))?-1:0))) {
			if (0!=(__peek(back_to_back__))) {
				base = 1200;
			} else {
				base = 800;
			}
			__poke(back_to_back__, -1);
		}

	}
	Player__addScore(__this, base*__peek(level__));
	ScoreBoard__printLineClear(line_count, tSpin, tSpinMini, last_b2b&__peek(back_to_back__));
	return 0;
}
var Player__addScoreForSoftDrop(var __this) {
	Player__addScore(__this, 1);
	return 0;
}
var Player__addScoreForHardDrop(var __this, var lines) {
	if (0!=((((lines)>(0))?-1:0))) {
		Player__addScore(__this, 2*lines);
	}

	return 0;
}
var Player__addScore(var __this, var diff) {
	__poke(score__, __peek(score__)+diff);
	ScoreBoard__printScore(__peek(score__));
	Player__updateLevel(__this);
	return 0;
}
#undef back_to_back__
#undef score__
#undef next_score__
#undef level__
#endif

#ifdef JACK_IMPLEMENTATION
var Main__main() {
	var game = 0;
	TetrisGame__newInstance();
	game = TetrisGame__getInstance();
	TetrisGame__run(game);
	TetrisGame__dispose(game);
	return 0;
}
#endif

