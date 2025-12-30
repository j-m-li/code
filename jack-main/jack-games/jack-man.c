
#ifndef var
#define JACK_HACK
#define var short
#define __poke Memory__poke
#define __peek Memory__peek
#endif

#if 0

#endif

#ifndef JACK_Score_H
#define JACK_Score_H
var Score__new(var p);
var Score__init(var __this);
var Score__next(var __this);
var Score__draw(var __this);
var Score__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Splash_H
#define JACK_Splash_H
var Splash__show();
var Splash__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Game_H
#define JACK_Game_H
var Game__new();
var Game__init(var __this);
var Game__next(var __this);
var Game__handleKey(var __this, var key);
var Game__newGame(var __this);
var Game__createSprites(var __this);
var Game__disposeSprites(var __this);
var Game__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Ghost_H
#define JACK_Ghost_H
var Ghost__new(var xi, var yi, var pm, var w, var p);
var Ghost__endX(var __this);
var Ghost__endY(var __this);
var Ghost__init(var __this);
var Ghost__next(var __this);
var Ghost__advance(var __this);
var Ghost__willCollideWithWalls(var __this, var nextX, var nextY);
var Ghost__setNextDirAI(var __this);
var Ghost__setNextDirRandom(var __this);
var Ghost__getNextX(var __this);
var Ghost__getNextY(var __this);
var Ghost__draw(var __this);
var Ghost__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Label_H
#define JACK_Label_H
var Label__new(var t, var r, var c);
var Label__init(var __this);
var Label__draw(var __this);
var Label__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Walls_H
#define JACK_Walls_H
var Walls__new();
var Walls__init(var __this);
var Walls__createWalls(var __this);
var Walls__draw(var __this);
var Walls__checkOverlapping(var __this, var x1, var y1, var x2, var y2);
var Walls__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Random_H
#define JACK_Random_H
var Random__seed();
var Random__rand();
var Random__randRange(var max);
var Random__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Ghosts_H
#define JACK_Ghosts_H
var Ghosts__new(var pm, var w, var p);
var Ghosts__createGhosts(var __this);
var Ghosts__init(var __this);
var Ghosts__next(var __this);
var Ghosts__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Labels_H
#define JACK_Labels_H
var Labels__new();
var Labels__createLabels(var __this);
var Labels__init(var __this);
var Labels__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Pellet_H
#define JACK_Pellet_H
var Pellet__new(var xi, var yi);
var Pellet__draw(var __this);
var Pellet__setCollected(var __this);
var Pellet__isCollected(var __this);
var Pellet__checkOverlapping(var __this, var x1, var y1, var x2, var y2);
var Pellet__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_PacMan_H
#define JACK_PacMan_H
var PacMan__new(var p, var w);
var PacMan__getX(var __this);
var PacMan__getY(var __this);
var PacMan__endX(var __this);
var PacMan__endY(var __this);
var PacMan__getIsCaptured(var __this);
var PacMan__init(var __this);
var PacMan__next(var __this);
var PacMan__advance(var __this);
var PacMan__capturePellets(var __this);
var PacMan__draw(var __this);
var PacMan__willCollideWithWalls(var __this, var nextX, var nextY);
var PacMan__getNextX(var __this);
var PacMan__getNextY(var __this);
var PacMan__handleKey(var __this, var key);
var PacMan__setDir(var __this, var newDir);
var PacMan__capture(var __this);
var PacMan__checkOverlapping(var __this, var x1, var y1, var x2, var y2);
var PacMan__dispose(var __this);
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

#ifndef JACK_Wall_H
#define JACK_Wall_H
var Wall__new(var x1, var y1, var x2, var y2);
var Wall__draw(var __this);
var Wall__checkOverlapping(var __this, var x1, var y1, var x2, var y2);
var Wall__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Pellets_H
#define JACK_Pellets_H
var Pellets__new();
var Pellets__init(var __this);
var Pellets__createPellets(var __this);
var Pellets__draw(var __this);
var Pellets__getCapturedCount(var __this);
var Pellets__setCollected(var __this, var x1, var y1, var x2, var y2, var collecting);
var Pellets__dispose(var __this);
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
#define score__ (__this+0)
#define high__ (__this+1)
#define pellets__ (__this+2)
var Score__new(var p) {
	var __this;
	__this = Memory__alloc(3);
	__poke(score__, 0);
	__poke(pellets__, p);
	return __this;
}
var Score__init(var __this) {
	Score__draw(__this);
	return 0;
}
var Score__next(var __this) {
	var nextScore = 0;
	nextScore = Pellets__getCapturedCount(__peek(pellets__))*10;
	if (0!=(~((((nextScore)==(__peek(score__)))?-1:0)))) {
		__poke(score__, nextScore);
		if (0!=((((__peek(score__))>(__peek(high__)))?-1:0))) {
			__poke(high__, __peek(score__));
		}

		Score__draw(__this);
	}

	return 0;
}
var Score__draw(var __this) {
	Output__moveCursor(3, 46);
	Output__printInt(__peek(score__));
	Output__moveCursor(7, 46);
	Output__printInt(__peek(high__));
	return 0;
}
var Score__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#undef score__
#undef high__
#undef pellets__
#endif

#ifdef JACK_IMPLEMENTATION
var Splash___str0[] = {74,79,78,65,72,32,76,65,87,82,69,78,67,69,32,65,78,68,32,68,65,78,73,69,76,32,75,76,69,73,78,44,32,50,48,50,48,0};
var Splash___str1[] = {80,82,69,83,83,32,65,78,89,32,75,69,89,32,84,79,32,83,84,65,82,84,0};
var Splash__show() {
	Screen__setColor(-1);
	Screen__drawRectangle(27, 18, 36, 27);
	Screen__drawRectangle(36, 18, 45, 27);
	Screen__drawRectangle(45, 18, 54, 27);
	Screen__drawRectangle(81, 18, 90, 27);
	Screen__drawRectangle(90, 18, 99, 27);
	Screen__drawRectangle(144, 18, 153, 27);
	Screen__drawRectangle(153, 18, 162, 27);
	Screen__drawRectangle(162, 18, 171, 27);
	Screen__drawRectangle(189, 18, 198, 27);
	Screen__drawRectangle(198, 18, 207, 27);
	Screen__drawRectangle(225, 18, 234, 27);
	Screen__drawRectangle(234, 18, 243, 27);
	Screen__drawRectangle(279, 18, 288, 27);
	Screen__drawRectangle(288, 18, 297, 27);
	Screen__drawRectangle(324, 18, 333, 27);
	Screen__drawRectangle(333, 18, 342, 27);
	Screen__drawRectangle(369, 18, 378, 27);
	Screen__drawRectangle(378, 18, 387, 27);
	Screen__drawRectangle(414, 18, 423, 27);
	Screen__drawRectangle(423, 18, 432, 27);
	Screen__drawRectangle(468, 18, 477, 27);
	Screen__drawRectangle(477, 18, 486, 27);
	Screen__drawRectangle(36, 27, 45, 36);
	Screen__drawRectangle(45, 27, 54, 36);
	Screen__drawRectangle(72, 27, 81, 36);
	Screen__drawRectangle(81, 27, 90, 36);
	Screen__drawRectangle(90, 27, 99, 36);
	Screen__drawRectangle(99, 27, 108, 36);
	Screen__drawRectangle(135, 27, 144, 36);
	Screen__drawRectangle(144, 27, 153, 36);
	Screen__drawRectangle(153, 27, 162, 36);
	Screen__drawRectangle(162, 27, 171, 36);
	Screen__drawRectangle(171, 27, 180, 36);
	Screen__drawRectangle(189, 27, 198, 36);
	Screen__drawRectangle(198, 27, 207, 36);
	Screen__drawRectangle(225, 27, 234, 36);
	Screen__drawRectangle(234, 27, 243, 36);
	Screen__drawRectangle(279, 27, 288, 36);
	Screen__drawRectangle(288, 27, 297, 36);
	Screen__drawRectangle(324, 27, 333, 36);
	Screen__drawRectangle(333, 27, 342, 36);
	Screen__drawRectangle(360, 27, 369, 36);
	Screen__drawRectangle(369, 27, 378, 36);
	Screen__drawRectangle(378, 27, 387, 36);
	Screen__drawRectangle(387, 27, 396, 36);
	Screen__drawRectangle(414, 27, 423, 36);
	Screen__drawRectangle(423, 27, 432, 36);
	Screen__drawRectangle(468, 27, 477, 36);
	Screen__drawRectangle(477, 27, 486, 36);
	Screen__drawRectangle(36, 36, 45, 45);
	Screen__drawRectangle(45, 36, 54, 45);
	Screen__drawRectangle(72, 36, 81, 45);
	Screen__drawRectangle(99, 36, 108, 45);
	Screen__drawRectangle(126, 36, 135, 45);
	Screen__drawRectangle(135, 36, 144, 45);
	Screen__drawRectangle(171, 36, 180, 45);
	Screen__drawRectangle(189, 36, 198, 45);
	Screen__drawRectangle(198, 36, 207, 45);
	Screen__drawRectangle(225, 36, 234, 45);
	Screen__drawRectangle(234, 36, 243, 45);
	Screen__drawRectangle(279, 36, 288, 45);
	Screen__drawRectangle(288, 36, 297, 45);
	Screen__drawRectangle(324, 36, 333, 45);
	Screen__drawRectangle(333, 36, 342, 45);
	Screen__drawRectangle(360, 36, 369, 45);
	Screen__drawRectangle(387, 36, 396, 45);
	Screen__drawRectangle(414, 36, 423, 45);
	Screen__drawRectangle(423, 36, 432, 45);
	Screen__drawRectangle(432, 36, 441, 45);
	Screen__drawRectangle(468, 36, 477, 45);
	Screen__drawRectangle(477, 36, 486, 45);
	Screen__drawRectangle(36, 45, 45, 54);
	Screen__drawRectangle(45, 45, 54, 54);
	Screen__drawRectangle(63, 45, 72, 54);
	Screen__drawRectangle(72, 45, 81, 54);
	Screen__drawRectangle(99, 45, 108, 54);
	Screen__drawRectangle(108, 45, 117, 54);
	Screen__drawRectangle(126, 45, 135, 54);
	Screen__drawRectangle(135, 45, 144, 54);
	Screen__drawRectangle(189, 45, 198, 54);
	Screen__drawRectangle(198, 45, 207, 54);
	Screen__drawRectangle(225, 45, 234, 54);
	Screen__drawRectangle(234, 45, 243, 54);
	Screen__drawRectangle(279, 45, 288, 54);
	Screen__drawRectangle(288, 45, 297, 54);
	Screen__drawRectangle(297, 45, 306, 54);
	Screen__drawRectangle(315, 45, 324, 54);
	Screen__drawRectangle(324, 45, 333, 54);
	Screen__drawRectangle(333, 45, 342, 54);
	Screen__drawRectangle(351, 45, 360, 54);
	Screen__drawRectangle(360, 45, 369, 54);
	Screen__drawRectangle(387, 45, 396, 54);
	Screen__drawRectangle(396, 45, 405, 54);
	Screen__drawRectangle(414, 45, 423, 54);
	Screen__drawRectangle(423, 45, 432, 54);
	Screen__drawRectangle(432, 45, 441, 54);
	Screen__drawRectangle(441, 45, 450, 54);
	Screen__drawRectangle(468, 45, 477, 54);
	Screen__drawRectangle(477, 45, 486, 54);
	Screen__drawRectangle(36, 54, 45, 63);
	Screen__drawRectangle(45, 54, 54, 63);
	Screen__drawRectangle(63, 54, 72, 63);
	Screen__drawRectangle(72, 54, 81, 63);
	Screen__drawRectangle(99, 54, 108, 63);
	Screen__drawRectangle(108, 54, 117, 63);
	Screen__drawRectangle(126, 54, 135, 63);
	Screen__drawRectangle(135, 54, 144, 63);
	Screen__drawRectangle(189, 54, 198, 63);
	Screen__drawRectangle(198, 54, 207, 63);
	Screen__drawRectangle(216, 54, 225, 63);
	Screen__drawRectangle(225, 54, 234, 63);
	Screen__drawRectangle(252, 54, 261, 63);
	Screen__drawRectangle(279, 54, 288, 63);
	Screen__drawRectangle(288, 54, 297, 63);
	Screen__drawRectangle(297, 54, 306, 63);
	Screen__drawRectangle(306, 54, 315, 63);
	Screen__drawRectangle(315, 54, 324, 63);
	Screen__drawRectangle(324, 54, 333, 63);
	Screen__drawRectangle(333, 54, 342, 63);
	Screen__drawRectangle(351, 54, 360, 63);
	Screen__drawRectangle(360, 54, 369, 63);
	Screen__drawRectangle(387, 54, 396, 63);
	Screen__drawRectangle(396, 54, 405, 63);
	Screen__drawRectangle(414, 54, 423, 63);
	Screen__drawRectangle(423, 54, 432, 63);
	Screen__drawRectangle(432, 54, 441, 63);
	Screen__drawRectangle(441, 54, 450, 63);
	Screen__drawRectangle(450, 54, 459, 63);
	Screen__drawRectangle(468, 54, 477, 63);
	Screen__drawRectangle(477, 54, 486, 63);
	Screen__drawRectangle(36, 63, 45, 72);
	Screen__drawRectangle(45, 63, 54, 72);
	Screen__drawRectangle(63, 63, 72, 72);
	Screen__drawRectangle(72, 63, 81, 72);
	Screen__drawRectangle(81, 63, 90, 72);
	Screen__drawRectangle(90, 63, 99, 72);
	Screen__drawRectangle(99, 63, 108, 72);
	Screen__drawRectangle(108, 63, 117, 72);
	Screen__drawRectangle(126, 63, 135, 72);
	Screen__drawRectangle(135, 63, 144, 72);
	Screen__drawRectangle(189, 63, 198, 72);
	Screen__drawRectangle(198, 63, 207, 72);
	Screen__drawRectangle(207, 63, 216, 72);
	Screen__drawRectangle(216, 63, 225, 72);
	Screen__drawRectangle(243, 63, 252, 72);
	Screen__drawRectangle(252, 63, 261, 72);
	Screen__drawRectangle(261, 63, 270, 72);
	Screen__drawRectangle(279, 63, 288, 72);
	Screen__drawRectangle(288, 63, 297, 72);
	Screen__drawRectangle(306, 63, 315, 72);
	Screen__drawRectangle(324, 63, 333, 72);
	Screen__drawRectangle(333, 63, 342, 72);
	Screen__drawRectangle(351, 63, 360, 72);
	Screen__drawRectangle(360, 63, 369, 72);
	Screen__drawRectangle(369, 63, 378, 72);
	Screen__drawRectangle(378, 63, 387, 72);
	Screen__drawRectangle(387, 63, 396, 72);
	Screen__drawRectangle(396, 63, 405, 72);
	Screen__drawRectangle(414, 63, 423, 72);
	Screen__drawRectangle(423, 63, 432, 72);
	Screen__drawRectangle(432, 63, 441, 72);
	Screen__drawRectangle(441, 63, 450, 72);
	Screen__drawRectangle(450, 63, 459, 72);
	Screen__drawRectangle(459, 63, 468, 72);
	Screen__drawRectangle(468, 63, 477, 72);
	Screen__drawRectangle(477, 63, 486, 72);
	Screen__drawRectangle(36, 72, 45, 81);
	Screen__drawRectangle(45, 72, 54, 81);
	Screen__drawRectangle(63, 72, 72, 81);
	Screen__drawRectangle(72, 72, 81, 81);
	Screen__drawRectangle(81, 72, 90, 81);
	Screen__drawRectangle(90, 72, 99, 81);
	Screen__drawRectangle(99, 72, 108, 81);
	Screen__drawRectangle(108, 72, 117, 81);
	Screen__drawRectangle(126, 72, 135, 81);
	Screen__drawRectangle(135, 72, 144, 81);
	Screen__drawRectangle(189, 72, 198, 81);
	Screen__drawRectangle(198, 72, 207, 81);
	Screen__drawRectangle(207, 72, 216, 81);
	Screen__drawRectangle(216, 72, 225, 81);
	Screen__drawRectangle(243, 72, 252, 81);
	Screen__drawRectangle(252, 72, 261, 81);
	Screen__drawRectangle(261, 72, 270, 81);
	Screen__drawRectangle(279, 72, 288, 81);
	Screen__drawRectangle(288, 72, 297, 81);
	Screen__drawRectangle(306, 72, 315, 81);
	Screen__drawRectangle(324, 72, 333, 81);
	Screen__drawRectangle(333, 72, 342, 81);
	Screen__drawRectangle(351, 72, 360, 81);
	Screen__drawRectangle(360, 72, 369, 81);
	Screen__drawRectangle(369, 72, 378, 81);
	Screen__drawRectangle(378, 72, 387, 81);
	Screen__drawRectangle(387, 72, 396, 81);
	Screen__drawRectangle(396, 72, 405, 81);
	Screen__drawRectangle(414, 72, 423, 81);
	Screen__drawRectangle(423, 72, 432, 81);
	Screen__drawRectangle(441, 72, 450, 81);
	Screen__drawRectangle(450, 72, 459, 81);
	Screen__drawRectangle(459, 72, 468, 81);
	Screen__drawRectangle(468, 72, 477, 81);
	Screen__drawRectangle(477, 72, 486, 81);
	Screen__drawRectangle(36, 81, 45, 90);
	Screen__drawRectangle(45, 81, 54, 90);
	Screen__drawRectangle(63, 81, 72, 90);
	Screen__drawRectangle(72, 81, 81, 90);
	Screen__drawRectangle(99, 81, 108, 90);
	Screen__drawRectangle(108, 81, 117, 90);
	Screen__drawRectangle(126, 81, 135, 90);
	Screen__drawRectangle(135, 81, 144, 90);
	Screen__drawRectangle(189, 81, 198, 90);
	Screen__drawRectangle(198, 81, 207, 90);
	Screen__drawRectangle(225, 81, 234, 90);
	Screen__drawRectangle(252, 81, 261, 90);
	Screen__drawRectangle(279, 81, 288, 90);
	Screen__drawRectangle(288, 81, 297, 90);
	Screen__drawRectangle(324, 81, 333, 90);
	Screen__drawRectangle(333, 81, 342, 90);
	Screen__drawRectangle(351, 81, 360, 90);
	Screen__drawRectangle(360, 81, 369, 90);
	Screen__drawRectangle(387, 81, 396, 90);
	Screen__drawRectangle(396, 81, 405, 90);
	Screen__drawRectangle(414, 81, 423, 90);
	Screen__drawRectangle(423, 81, 432, 90);
	Screen__drawRectangle(450, 81, 459, 90);
	Screen__drawRectangle(459, 81, 468, 90);
	Screen__drawRectangle(468, 81, 477, 90);
	Screen__drawRectangle(477, 81, 486, 90);
	Screen__drawRectangle(36, 90, 45, 99);
	Screen__drawRectangle(45, 90, 54, 99);
	Screen__drawRectangle(63, 90, 72, 99);
	Screen__drawRectangle(72, 90, 81, 99);
	Screen__drawRectangle(99, 90, 108, 99);
	Screen__drawRectangle(108, 90, 117, 99);
	Screen__drawRectangle(126, 90, 135, 99);
	Screen__drawRectangle(135, 90, 144, 99);
	Screen__drawRectangle(189, 90, 198, 99);
	Screen__drawRectangle(198, 90, 207, 99);
	Screen__drawRectangle(225, 90, 234, 99);
	Screen__drawRectangle(234, 90, 243, 99);
	Screen__drawRectangle(279, 90, 288, 99);
	Screen__drawRectangle(288, 90, 297, 99);
	Screen__drawRectangle(324, 90, 333, 99);
	Screen__drawRectangle(333, 90, 342, 99);
	Screen__drawRectangle(351, 90, 360, 99);
	Screen__drawRectangle(360, 90, 369, 99);
	Screen__drawRectangle(387, 90, 396, 99);
	Screen__drawRectangle(396, 90, 405, 99);
	Screen__drawRectangle(414, 90, 423, 99);
	Screen__drawRectangle(423, 90, 432, 99);
	Screen__drawRectangle(459, 90, 468, 99);
	Screen__drawRectangle(468, 90, 477, 99);
	Screen__drawRectangle(477, 90, 486, 99);
	Screen__drawRectangle(9, 99, 18, 108);
	Screen__drawRectangle(18, 99, 27, 108);
	Screen__drawRectangle(36, 99, 45, 108);
	Screen__drawRectangle(45, 99, 54, 108);
	Screen__drawRectangle(63, 99, 72, 108);
	Screen__drawRectangle(72, 99, 81, 108);
	Screen__drawRectangle(99, 99, 108, 108);
	Screen__drawRectangle(108, 99, 117, 108);
	Screen__drawRectangle(126, 99, 135, 108);
	Screen__drawRectangle(135, 99, 144, 108);
	Screen__drawRectangle(171, 99, 180, 108);
	Screen__drawRectangle(189, 99, 198, 108);
	Screen__drawRectangle(198, 99, 207, 108);
	Screen__drawRectangle(225, 99, 234, 108);
	Screen__drawRectangle(234, 99, 243, 108);
	Screen__drawRectangle(279, 99, 288, 108);
	Screen__drawRectangle(288, 99, 297, 108);
	Screen__drawRectangle(324, 99, 333, 108);
	Screen__drawRectangle(333, 99, 342, 108);
	Screen__drawRectangle(351, 99, 360, 108);
	Screen__drawRectangle(360, 99, 369, 108);
	Screen__drawRectangle(387, 99, 396, 108);
	Screen__drawRectangle(396, 99, 405, 108);
	Screen__drawRectangle(414, 99, 423, 108);
	Screen__drawRectangle(423, 99, 432, 108);
	Screen__drawRectangle(468, 99, 477, 108);
	Screen__drawRectangle(477, 99, 486, 108);
	Screen__drawRectangle(9, 108, 18, 117);
	Screen__drawRectangle(18, 108, 27, 117);
	Screen__drawRectangle(27, 108, 36, 117);
	Screen__drawRectangle(36, 108, 45, 117);
	Screen__drawRectangle(63, 108, 72, 117);
	Screen__drawRectangle(72, 108, 81, 117);
	Screen__drawRectangle(99, 108, 108, 117);
	Screen__drawRectangle(108, 108, 117, 117);
	Screen__drawRectangle(135, 108, 144, 117);
	Screen__drawRectangle(144, 108, 153, 117);
	Screen__drawRectangle(153, 108, 162, 117);
	Screen__drawRectangle(162, 108, 171, 117);
	Screen__drawRectangle(171, 108, 180, 117);
	Screen__drawRectangle(189, 108, 198, 117);
	Screen__drawRectangle(198, 108, 207, 117);
	Screen__drawRectangle(225, 108, 234, 117);
	Screen__drawRectangle(234, 108, 243, 117);
	Screen__drawRectangle(279, 108, 288, 117);
	Screen__drawRectangle(288, 108, 297, 117);
	Screen__drawRectangle(324, 108, 333, 117);
	Screen__drawRectangle(333, 108, 342, 117);
	Screen__drawRectangle(351, 108, 360, 117);
	Screen__drawRectangle(360, 108, 369, 117);
	Screen__drawRectangle(387, 108, 396, 117);
	Screen__drawRectangle(396, 108, 405, 117);
	Screen__drawRectangle(414, 108, 423, 117);
	Screen__drawRectangle(423, 108, 432, 117);
	Screen__drawRectangle(468, 108, 477, 117);
	Screen__drawRectangle(477, 108, 486, 117);
	Screen__drawRectangle(18, 117, 27, 126);
	Screen__drawRectangle(27, 117, 36, 126);
	Screen__drawRectangle(63, 117, 72, 126);
	Screen__drawRectangle(72, 117, 81, 126);
	Screen__drawRectangle(99, 117, 108, 126);
	Screen__drawRectangle(108, 117, 117, 126);
	Screen__drawRectangle(144, 117, 153, 126);
	Screen__drawRectangle(153, 117, 162, 126);
	Screen__drawRectangle(162, 117, 171, 126);
	Screen__drawRectangle(189, 117, 198, 126);
	Screen__drawRectangle(198, 117, 207, 126);
	Screen__drawRectangle(225, 117, 234, 126);
	Screen__drawRectangle(234, 117, 243, 126);
	Screen__drawRectangle(279, 117, 288, 126);
	Screen__drawRectangle(288, 117, 297, 126);
	Screen__drawRectangle(324, 117, 333, 126);
	Screen__drawRectangle(333, 117, 342, 126);
	Screen__drawRectangle(351, 117, 360, 126);
	Screen__drawRectangle(360, 117, 369, 126);
	Screen__drawRectangle(387, 117, 396, 126);
	Screen__drawRectangle(396, 117, 405, 126);
	Screen__drawRectangle(414, 117, 423, 126);
	Screen__drawRectangle(423, 117, 432, 126);
	Screen__drawRectangle(468, 117, 477, 126);
	Screen__drawRectangle(477, 117, 486, 126);
	Output__moveCursor(14, 13);
	Output__printString(Memory__getString(Splash___str0));
	Output__moveCursor(18, 20);
	Output__printString(Memory__getString(Splash___str1));
	return 0;
}
var Splash__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Game___str0[] = {71,65,77,69,32,79,86,69,82,0};
var Game___str1[] = {73,78,83,69,82,84,32,67,79,73,78,0};
var Game___str2[] = {45,32,80,82,69,83,83,32,70,50,0};
#define score__ (__this+0)
#define pacman__ (__this+1)
#define pellets__ (__this+2)
#define walls__ (__this+3)
#define ghosts__ (__this+4)
#define labels__ (__this+5)
var Game__new() {
	var __this;
	__this = Memory__alloc(6);
	Game__createSprites(__this);
	return __this;
}
var Game__init(var __this) {
	PacMan__init(__peek(pacman__));
	Walls__init(__peek(walls__));
	Pellets__init(__peek(pellets__));
	Score__init(__peek(score__));
	Ghosts__init(__peek(ghosts__));
	Labels__init(__peek(labels__));
	return 0;
}
var Game__next(var __this) {
	var key = 0;
	if (0!=(PacMan__getIsCaptured(__peek(pacman__)))) {
		Output__moveCursor(10, 46);
		Output__printString(Memory__getString(Game___str0));
		Output__moveCursor(13, 46);
		Output__printString(Memory__getString(Game___str1));
		Output__moveCursor(14, 46);
		Output__printString(Memory__getString(Game___str2));
		while (-1==(-1)) {
			key = Keyboard__keyPressed();
			if (0!=((((key)==(142))?-1:0))) {
				Game__newGame(__this);
				return 0;
			}

		}
	}

	PacMan__next(__peek(pacman__));
	Ghosts__next(__peek(ghosts__));
	Score__next(__peek(score__));
	return 0;
}
var Game__handleKey(var __this, var key) {
	if (0!=((((key)==(142))?-1:0))) {
		Game__newGame(__this);
		return 0;
	}

	PacMan__handleKey(__peek(pacman__), key);
	return 0;
}
var Game__newGame(var __this) {
	Game__disposeSprites(__this);
	Screen__clearScreen();
	Game__createSprites(__this);
	Game__init(__this);
	return 0;
}
var Game__createSprites(var __this) {
	__poke(walls__, Walls__new());
	__poke(pellets__, Pellets__new());
	__poke(pacman__, PacMan__new(__peek(pellets__), __peek(walls__)));
	__poke(score__, Score__new(__peek(pellets__)));
	__poke(ghosts__, Ghosts__new(__peek(pacman__), __peek(walls__), __peek(pellets__)));
	__poke(labels__, Labels__new());
	return 0;
}
var Game__disposeSprites(var __this) {
	Walls__dispose(__peek(walls__));
	Pellets__dispose(__peek(pellets__));
	PacMan__dispose(__peek(pacman__));
	Score__dispose(__peek(score__));
	Ghosts__dispose(__peek(ghosts__));
	Labels__dispose(__peek(labels__));
	return 0;
}
var Game__dispose(var __this) {
	Game__disposeSprites(__this);
	Memory__deAlloc(__this);
	return 0;
}
#undef score__
#undef pacman__
#undef pellets__
#undef walls__
#undef ghosts__
#undef labels__
#endif

#ifdef JACK_IMPLEMENTATION
#define x__ (__this+0)
#define y__ (__this+1)
#define size__ (__this+2)
#define dir__ (__this+3)
#define speed__ (__this+4)
#define walls__ (__this+5)
#define pacman__ (__this+6)
#define pellets__ (__this+7)
var Ghost__new(var xi, var yi, var pm, var w, var p) {
	var __this;
	__this = Memory__alloc(8);
	__poke(size__, 12);
	__poke(speed__, 3);
	__poke(x__, xi);
	__poke(y__, yi);
	__poke(dir__, 3);
	__poke(pacman__, pm);
	__poke(walls__, w);
	__poke(pellets__, p);
	return __this;
}
var Ghost__endX(var __this) {
	return __peek(x__)+__peek(size__)-1;
}
var Ghost__endY(var __this) {
	return __peek(y__)+__peek(size__)-1;
}
var Ghost__init(var __this) {
	Ghost__draw(__this);
	return 0;
}
var Ghost__next(var __this) {
	var didMove = 0;
	didMove = Ghost__advance(__this);
	if (0!=(didMove)) {
		Ghost__draw(__this);
	}

	if (0!=(PacMan__checkOverlapping(__peek(pacman__), __peek(x__), __peek(y__), Ghost__endX(__this), Ghost__endY(__this)))) {
		PacMan__capture(__peek(pacman__));
	}

	return 0;
}
var Ghost__advance(var __this) {
	var nextX = 0;
	var nextY = 0;
	nextX = Ghost__getNextX(__this);
	nextY = Ghost__getNextY(__this);
	if (0!=(Ghost__willCollideWithWalls(__this, nextX, nextY))) {
		Ghost__setNextDirRandom(__this);
		return 0;
	}

	if (0!=(((((__peek(x__))==(nextX))?-1:0))&((((__peek(y__))==(nextY))?-1:0)))) {
		return 0;
	}

	__poke(x__, nextX);
	__poke(y__, nextY);
	return -1;
}
var Ghost__willCollideWithWalls(var __this, var nextX, var nextY) {
	var nextEndX = 0;
	var nextEndY = 0;
	nextEndX = nextX+__peek(size__)-1;
	nextEndY = nextY+__peek(size__)-1;
	return Walls__checkOverlapping(__peek(walls__), nextX, nextY, nextEndX, nextEndY);
}
var Ghost__setNextDirAI(var __this) {
	var pacmanX = 0;
	var pacmanY = 0;
	var diffX = 0;
	var diffY = 0;
	pacmanX = PacMan__getX(__peek(pacman__));
	pacmanY = PacMan__getY(__peek(pacman__));
	diffX = Math__max(__peek(x__), pacmanX)-Math__min(__peek(x__), pacmanX);
	diffY = Math__max(__peek(y__), pacmanY)-Math__min(__peek(y__), pacmanY);
	if (0!=(~((((diffX)==(0))?-1:0))&((((diffX)>(diffY))?-1:0)))) {
		if (0!=((((pacmanX)<(__peek(x__)))?-1:0))) {
			__poke(dir__, 3);
			return 0;
		}

		__poke(dir__, 4);
		return 0;
	}

	if (0!=((((pacmanY)<(__peek(y__)))?-1:0))) {
		__poke(dir__, 1);
		return 0;
	}

	__poke(dir__, 2);
	return 0;
}
var Ghost__setNextDirRandom(var __this) {
	var i = 0;
	i = Random__randRange(150);
	if (0!=((((i)<(25))?-1:0))) {
		__poke(dir__, 1);
		return 0;
	}

	if (0!=((((i)<(50))?-1:0))) {
		__poke(dir__, 2);
		return 0;
	}

	if (0!=((((i)<(75))?-1:0))) {
		__poke(dir__, 3);
		return 0;
	}

	if (0!=((((i)<(100))?-1:0))) {
		__poke(dir__, 4);
		return 0;
	}

	Ghost__setNextDirAI(__this);
	return 0;
}
var Ghost__getNextX(var __this) {
	var nextX = 0;
	nextX = __peek(x__);
	if (0!=((((__peek(dir__))==(4))?-1:0))) {
		nextX = __peek(x__)+__peek(speed__);
	}

	if (0!=((((__peek(dir__))==(3))?-1:0))) {
		nextX = __peek(x__)-__peek(speed__);
	}

	return nextX;
}
var Ghost__getNextY(var __this) {
	var nextY = 0;
	nextY = __peek(y__);
	if (0!=((((__peek(dir__))==(2))?-1:0))) {
		nextY = __peek(y__)+__peek(speed__);
	}

	if (0!=((((__peek(dir__))==(1))?-1:0))) {
		nextY = __peek(y__)-__peek(speed__);
	}

	if (0!=((((nextY)>(220))?-1:0))) {
		nextY = 12;
		Screen__setColor(0);
		Screen__drawRectangle(__peek(x__), __peek(y__), Ghost__endX(__this), Ghost__endY(__this));
	}

	if (0!=((((nextY)<(12))?-1:0))) {
		nextY = 220;
		Screen__setColor(0);
		Screen__drawRectangle(__peek(x__), __peek(y__), Ghost__endX(__this), Ghost__endY(__this));
	}

	return nextY;
}
var Ghost__draw(var __this) {
	var oldLeftX = 0;
	var oldRightX = 0;
	var oldTopY = 0;
	var oldBottomY = 0;
	Screen__setColor(0);
	if (0!=((((__peek(dir__))==(4))?-1:0))) {
		oldLeftX = __peek(x__)-__peek(speed__);
		oldRightX = Ghost__endX(__this)-__peek(speed__);
		oldTopY = __peek(y__);
		oldBottomY = Ghost__endY(__this);
	}

	if (0!=((((__peek(dir__))==(3))?-1:0))) {
		oldLeftX = __peek(x__)+__peek(speed__);
		oldRightX = Ghost__endX(__this)+__peek(speed__);
		oldTopY = __peek(y__);
		oldBottomY = Ghost__endY(__this);
	}

	if (0!=((((__peek(dir__))==(2))?-1:0))) {
		oldLeftX = __peek(x__);
		oldRightX = Ghost__endX(__this);
		oldTopY = __peek(y__)-__peek(speed__);
		oldBottomY = Ghost__endY(__this)-__peek(speed__);
	}

	if (0!=((((__peek(dir__))==(1))?-1:0))) {
		oldLeftX = __peek(x__);
		oldRightX = Ghost__endX(__this);
		oldTopY = __peek(y__)+__peek(speed__);
		oldBottomY = Ghost__endY(__this)+__peek(speed__);
	}

	Screen__drawRectangle(oldLeftX, oldTopY, oldRightX, oldBottomY);
	Pellets__setCollected(__peek(pellets__), oldLeftX, oldTopY, oldRightX, oldBottomY, 0);
	Screen__setColor(-1);
	Screen__drawRectangle(__peek(x__), __peek(y__), Ghost__endX(__this), Ghost__endY(__this));
	return 0;
}
var Ghost__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#undef x__
#undef y__
#undef size__
#undef dir__
#undef speed__
#undef walls__
#undef pacman__
#undef pellets__
#endif

#ifdef JACK_IMPLEMENTATION
#define text__ (__this+0)
#define row__ (__this+1)
#define col__ (__this+2)
var Label__new(var t, var r, var c) {
	var __this;
	__this = Memory__alloc(3);
	__poke(text__, t);
	__poke(row__, r);
	__poke(col__, c);
	return __this;
}
var Label__init(var __this) {
	Label__draw(__this);
	return 0;
}
var Label__draw(var __this) {
	Output__moveCursor(__peek(row__), __peek(col__));
	Output__printString(__peek(text__));
	return 0;
}
var Label__dispose(var __this) {
	String__dispose(__peek(text__));
	Memory__deAlloc(__this);
	return 0;
}
#undef text__
#undef row__
#undef col__
#endif

#ifdef JACK_IMPLEMENTATION
#define nWalls__ (__this+0)
#define walls__ (__this+1)
var Walls__new() {
	var __this;
	__this = Memory__alloc(2);
	__poke(nWalls__, 283);
	Walls__createWalls(__this);
	return __this;
}
var Walls__init(var __this) {
	Walls__draw(__this);
	return 0;
}
var Walls__createWalls(var __this) {
	var i = 0;
	var bx = 0;
	__poke(walls__, Array__new(__peek(nWalls__)));
	__poke(__peek(walls__)+0, Wall__new(27, 9, 36, 18));
	__poke(__peek(walls__)+1, Wall__new(36, 9, 45, 18));
	__poke(__peek(walls__)+2, Wall__new(45, 9, 54, 18));
	__poke(__peek(walls__)+3, Wall__new(54, 9, 63, 18));
	__poke(__peek(walls__)+4, Wall__new(63, 9, 72, 18));
	__poke(__peek(walls__)+5, Wall__new(72, 9, 81, 18));
	__poke(__peek(walls__)+6, Wall__new(81, 9, 90, 18));
	__poke(__peek(walls__)+7, Wall__new(90, 9, 99, 18));
	__poke(__peek(walls__)+8, Wall__new(99, 9, 108, 18));
	__poke(__peek(walls__)+9, Wall__new(108, 9, 117, 18));
	__poke(__peek(walls__)+10, Wall__new(117, 9, 126, 18));
	__poke(__peek(walls__)+11, Wall__new(126, 9, 135, 18));
	__poke(__peek(walls__)+12, Wall__new(135, 9, 144, 18));
	__poke(__peek(walls__)+13, Wall__new(144, 9, 153, 18));
	__poke(__peek(walls__)+14, Wall__new(153, 9, 162, 18));
	__poke(__peek(walls__)+15, Wall__new(180, 9, 189, 18));
	__poke(__peek(walls__)+16, Wall__new(189, 9, 198, 18));
	__poke(__peek(walls__)+17, Wall__new(198, 9, 207, 18));
	__poke(__peek(walls__)+18, Wall__new(207, 9, 216, 18));
	__poke(__peek(walls__)+19, Wall__new(216, 9, 225, 18));
	__poke(__peek(walls__)+20, Wall__new(225, 9, 234, 18));
	__poke(__peek(walls__)+21, Wall__new(234, 9, 243, 18));
	__poke(__peek(walls__)+22, Wall__new(243, 9, 252, 18));
	__poke(__peek(walls__)+23, Wall__new(252, 9, 261, 18));
	__poke(__peek(walls__)+24, Wall__new(261, 9, 270, 18));
	__poke(__peek(walls__)+25, Wall__new(270, 9, 279, 18));
	__poke(__peek(walls__)+26, Wall__new(279, 9, 288, 18));
	__poke(__peek(walls__)+27, Wall__new(288, 9, 297, 18));
	__poke(__peek(walls__)+28, Wall__new(297, 9, 306, 18));
	__poke(__peek(walls__)+29, Wall__new(306, 9, 315, 18));
	__poke(__peek(walls__)+30, Wall__new(315, 9, 324, 18));
	__poke(__peek(walls__)+31, Wall__new(324, 9, 333, 18));
	__poke(__peek(walls__)+32, Wall__new(333, 9, 342, 18));
	__poke(__peek(walls__)+33, Wall__new(27, 18, 36, 27));
	__poke(__peek(walls__)+34, Wall__new(153, 18, 162, 27));
	__poke(__peek(walls__)+35, Wall__new(180, 18, 189, 27));
	__poke(__peek(walls__)+36, Wall__new(270, 18, 279, 27));
	__poke(__peek(walls__)+37, Wall__new(279, 18, 288, 27));
	__poke(__peek(walls__)+38, Wall__new(333, 18, 342, 27));
	__poke(__peek(walls__)+39, Wall__new(27, 27, 36, 36));
	__poke(__peek(walls__)+40, Wall__new(153, 27, 162, 36));
	__poke(__peek(walls__)+41, Wall__new(180, 27, 189, 36));
	__poke(__peek(walls__)+42, Wall__new(333, 27, 342, 36));
	__poke(__peek(walls__)+43, Wall__new(27, 36, 36, 45));
	__poke(__peek(walls__)+44, Wall__new(54, 36, 63, 45));
	__poke(__peek(walls__)+45, Wall__new(63, 36, 72, 45));
	__poke(__peek(walls__)+46, Wall__new(90, 36, 99, 45));
	__poke(__peek(walls__)+47, Wall__new(99, 36, 108, 45));
	__poke(__peek(walls__)+48, Wall__new(126, 36, 135, 45));
	__poke(__peek(walls__)+49, Wall__new(153, 36, 162, 45));
	__poke(__peek(walls__)+50, Wall__new(180, 36, 189, 45));
	__poke(__peek(walls__)+51, Wall__new(207, 36, 216, 45));
	__poke(__peek(walls__)+52, Wall__new(234, 36, 243, 45));
	__poke(__peek(walls__)+53, Wall__new(306, 36, 315, 45));
	__poke(__peek(walls__)+54, Wall__new(333, 36, 342, 45));
	__poke(__peek(walls__)+55, Wall__new(27, 45, 36, 54));
	__poke(__peek(walls__)+56, Wall__new(54, 45, 63, 54));
	__poke(__peek(walls__)+57, Wall__new(63, 45, 72, 54));
	__poke(__peek(walls__)+58, Wall__new(90, 45, 99, 54));
	__poke(__peek(walls__)+59, Wall__new(99, 45, 108, 54));
	__poke(__peek(walls__)+60, Wall__new(126, 45, 135, 54));
	__poke(__peek(walls__)+61, Wall__new(153, 45, 162, 54));
	__poke(__peek(walls__)+62, Wall__new(180, 45, 189, 54));
	__poke(__peek(walls__)+63, Wall__new(207, 45, 216, 54));
	__poke(__peek(walls__)+64, Wall__new(234, 45, 243, 54));
	__poke(__peek(walls__)+65, Wall__new(243, 45, 252, 54));
	__poke(__peek(walls__)+66, Wall__new(252, 45, 261, 54));
	__poke(__peek(walls__)+67, Wall__new(261, 45, 270, 54));
	__poke(__peek(walls__)+68, Wall__new(270, 45, 279, 54));
	__poke(__peek(walls__)+69, Wall__new(279, 45, 288, 54));
	__poke(__peek(walls__)+70, Wall__new(306, 45, 315, 54));
	__poke(__peek(walls__)+71, Wall__new(333, 45, 342, 54));
	__poke(__peek(walls__)+72, Wall__new(27, 54, 36, 63));
	__poke(__peek(walls__)+73, Wall__new(306, 54, 315, 63));
	__poke(__peek(walls__)+74, Wall__new(333, 54, 342, 63));
	__poke(__peek(walls__)+75, Wall__new(27, 63, 36, 72));
	__poke(__peek(walls__)+76, Wall__new(306, 63, 315, 72));
	__poke(__peek(walls__)+77, Wall__new(333, 63, 342, 72));
	__poke(__peek(walls__)+78, Wall__new(27, 72, 36, 81));
	__poke(__peek(walls__)+79, Wall__new(54, 72, 63, 81));
	__poke(__peek(walls__)+80, Wall__new(63, 72, 72, 81));
	__poke(__peek(walls__)+81, Wall__new(90, 72, 99, 81));
	__poke(__peek(walls__)+82, Wall__new(99, 72, 108, 81));
	__poke(__peek(walls__)+83, Wall__new(108, 72, 117, 81));
	__poke(__peek(walls__)+84, Wall__new(117, 72, 126, 81));
	__poke(__peek(walls__)+85, Wall__new(126, 72, 135, 81));
	__poke(__peek(walls__)+86, Wall__new(135, 72, 144, 81));
	__poke(__peek(walls__)+87, Wall__new(144, 72, 153, 81));
	__poke(__peek(walls__)+88, Wall__new(153, 72, 162, 81));
	__poke(__peek(walls__)+89, Wall__new(180, 72, 189, 81));
	__poke(__peek(walls__)+90, Wall__new(189, 72, 198, 81));
	__poke(__peek(walls__)+91, Wall__new(198, 72, 207, 81));
	__poke(__peek(walls__)+92, Wall__new(207, 72, 216, 81));
	__poke(__peek(walls__)+93, Wall__new(216, 72, 225, 81));
	__poke(__peek(walls__)+94, Wall__new(243, 72, 252, 81));
	__poke(__peek(walls__)+95, Wall__new(270, 72, 279, 81));
	__poke(__peek(walls__)+96, Wall__new(279, 72, 288, 81));
	__poke(__peek(walls__)+97, Wall__new(288, 72, 297, 81));
	__poke(__peek(walls__)+98, Wall__new(297, 72, 306, 81));
	__poke(__peek(walls__)+99, Wall__new(306, 72, 315, 81));
	__poke(__peek(walls__)+100, Wall__new(333, 72, 342, 81));
	__poke(__peek(walls__)+101, Wall__new(27, 81, 36, 90));
	__poke(__peek(walls__)+102, Wall__new(54, 81, 63, 90));
	__poke(__peek(walls__)+103, Wall__new(63, 81, 72, 90));
	__poke(__peek(walls__)+104, Wall__new(117, 81, 126, 90));
	__poke(__peek(walls__)+105, Wall__new(243, 81, 252, 90));
	__poke(__peek(walls__)+106, Wall__new(306, 81, 315, 90));
	__poke(__peek(walls__)+107, Wall__new(333, 81, 342, 90));
	__poke(__peek(walls__)+108, Wall__new(27, 90, 36, 99));
	__poke(__peek(walls__)+109, Wall__new(54, 90, 63, 99));
	__poke(__peek(walls__)+110, Wall__new(63, 90, 72, 99));
	__poke(__peek(walls__)+111, Wall__new(117, 90, 126, 99));
	__poke(__peek(walls__)+112, Wall__new(243, 90, 252, 99));
	__poke(__peek(walls__)+113, Wall__new(306, 90, 315, 99));
	__poke(__peek(walls__)+114, Wall__new(333, 90, 342, 99));
	__poke(__peek(walls__)+115, Wall__new(27, 99, 36, 108));
	__poke(__peek(walls__)+116, Wall__new(90, 99, 99, 108));
	__poke(__peek(walls__)+117, Wall__new(144, 99, 153, 108));
	__poke(__peek(walls__)+118, Wall__new(153, 99, 162, 108));
	__poke(__peek(walls__)+119, Wall__new(162, 99, 171, 108));
	__poke(__peek(walls__)+120, Wall__new(171, 99, 180, 108));
	__poke(__peek(walls__)+121, Wall__new(180, 99, 189, 108));
	__poke(__peek(walls__)+122, Wall__new(207, 99, 216, 108));
	__poke(__peek(walls__)+123, Wall__new(270, 99, 279, 108));
	__poke(__peek(walls__)+124, Wall__new(333, 99, 342, 108));
	__poke(__peek(walls__)+125, Wall__new(27, 108, 36, 117));
	__poke(__peek(walls__)+126, Wall__new(90, 108, 99, 117));
	__poke(__peek(walls__)+127, Wall__new(180, 108, 189, 117));
	__poke(__peek(walls__)+128, Wall__new(207, 108, 216, 117));
	__poke(__peek(walls__)+129, Wall__new(270, 108, 279, 117));
	__poke(__peek(walls__)+130, Wall__new(333, 108, 342, 117));
	__poke(__peek(walls__)+131, Wall__new(27, 117, 36, 126));
	__poke(__peek(walls__)+132, Wall__new(36, 117, 45, 126));
	__poke(__peek(walls__)+133, Wall__new(45, 117, 54, 126));
	__poke(__peek(walls__)+134, Wall__new(54, 117, 63, 126));
	__poke(__peek(walls__)+135, Wall__new(63, 117, 72, 126));
	__poke(__peek(walls__)+136, Wall__new(90, 117, 99, 126));
	__poke(__peek(walls__)+137, Wall__new(99, 117, 108, 126));
	__poke(__peek(walls__)+138, Wall__new(108, 117, 117, 126));
	__poke(__peek(walls__)+139, Wall__new(117, 117, 126, 126));
	__poke(__peek(walls__)+140, Wall__new(180, 117, 189, 126));
	__poke(__peek(walls__)+141, Wall__new(207, 117, 216, 126));
	__poke(__peek(walls__)+142, Wall__new(216, 117, 225, 126));
	__poke(__peek(walls__)+143, Wall__new(225, 117, 234, 126));
	__poke(__peek(walls__)+144, Wall__new(234, 117, 243, 126));
	__poke(__peek(walls__)+145, Wall__new(243, 117, 252, 126));
	__poke(__peek(walls__)+146, Wall__new(270, 117, 279, 126));
	__poke(__peek(walls__)+147, Wall__new(279, 117, 288, 126));
	__poke(__peek(walls__)+148, Wall__new(288, 117, 297, 126));
	__poke(__peek(walls__)+149, Wall__new(297, 117, 306, 126));
	__poke(__peek(walls__)+150, Wall__new(306, 117, 315, 126));
	__poke(__peek(walls__)+151, Wall__new(333, 117, 342, 126));
	__poke(__peek(walls__)+152, Wall__new(27, 126, 36, 135));
	__poke(__peek(walls__)+153, Wall__new(90, 126, 99, 135));
	__poke(__peek(walls__)+154, Wall__new(180, 126, 189, 135));
	__poke(__peek(walls__)+155, Wall__new(207, 126, 216, 135));
	__poke(__peek(walls__)+156, Wall__new(270, 126, 279, 135));
	__poke(__peek(walls__)+157, Wall__new(333, 126, 342, 135));
	__poke(__peek(walls__)+158, Wall__new(27, 135, 36, 144));
	__poke(__peek(walls__)+159, Wall__new(90, 135, 99, 144));
	__poke(__peek(walls__)+160, Wall__new(144, 135, 153, 144));
	__poke(__peek(walls__)+161, Wall__new(153, 135, 162, 144));
	__poke(__peek(walls__)+162, Wall__new(162, 135, 171, 144));
	__poke(__peek(walls__)+163, Wall__new(171, 135, 180, 144));
	__poke(__peek(walls__)+164, Wall__new(180, 135, 189, 144));
	__poke(__peek(walls__)+165, Wall__new(207, 135, 216, 144));
	__poke(__peek(walls__)+166, Wall__new(270, 135, 279, 144));
	__poke(__peek(walls__)+167, Wall__new(333, 135, 342, 144));
	__poke(__peek(walls__)+168, Wall__new(27, 144, 36, 153));
	__poke(__peek(walls__)+169, Wall__new(54, 144, 63, 153));
	__poke(__peek(walls__)+170, Wall__new(63, 144, 72, 153));
	__poke(__peek(walls__)+171, Wall__new(117, 144, 126, 153));
	__poke(__peek(walls__)+172, Wall__new(243, 144, 252, 153));
	__poke(__peek(walls__)+173, Wall__new(306, 144, 315, 153));
	__poke(__peek(walls__)+174, Wall__new(333, 144, 342, 153));
	__poke(__peek(walls__)+175, Wall__new(27, 153, 36, 162));
	__poke(__peek(walls__)+176, Wall__new(54, 153, 63, 162));
	__poke(__peek(walls__)+177, Wall__new(63, 153, 72, 162));
	__poke(__peek(walls__)+178, Wall__new(117, 153, 126, 162));
	__poke(__peek(walls__)+179, Wall__new(243, 153, 252, 162));
	__poke(__peek(walls__)+180, Wall__new(306, 153, 315, 162));
	__poke(__peek(walls__)+181, Wall__new(333, 153, 342, 162));
	__poke(__peek(walls__)+182, Wall__new(27, 162, 36, 171));
	__poke(__peek(walls__)+183, Wall__new(54, 162, 63, 171));
	__poke(__peek(walls__)+184, Wall__new(63, 162, 72, 171));
	__poke(__peek(walls__)+185, Wall__new(90, 162, 99, 171));
	__poke(__peek(walls__)+186, Wall__new(99, 162, 108, 171));
	__poke(__peek(walls__)+187, Wall__new(108, 162, 117, 171));
	__poke(__peek(walls__)+188, Wall__new(117, 162, 126, 171));
	__poke(__peek(walls__)+189, Wall__new(126, 162, 135, 171));
	__poke(__peek(walls__)+190, Wall__new(135, 162, 144, 171));
	__poke(__peek(walls__)+191, Wall__new(144, 162, 153, 171));
	__poke(__peek(walls__)+192, Wall__new(153, 162, 162, 171));
	__poke(__peek(walls__)+193, Wall__new(180, 162, 189, 171));
	__poke(__peek(walls__)+194, Wall__new(189, 162, 198, 171));
	__poke(__peek(walls__)+195, Wall__new(198, 162, 207, 171));
	__poke(__peek(walls__)+196, Wall__new(207, 162, 216, 171));
	__poke(__peek(walls__)+197, Wall__new(216, 162, 225, 171));
	__poke(__peek(walls__)+198, Wall__new(243, 162, 252, 171));
	__poke(__peek(walls__)+199, Wall__new(270, 162, 279, 171));
	__poke(__peek(walls__)+200, Wall__new(279, 162, 288, 171));
	__poke(__peek(walls__)+201, Wall__new(288, 162, 297, 171));
	__poke(__peek(walls__)+202, Wall__new(297, 162, 306, 171));
	__poke(__peek(walls__)+203, Wall__new(306, 162, 315, 171));
	__poke(__peek(walls__)+204, Wall__new(333, 162, 342, 171));
	__poke(__peek(walls__)+205, Wall__new(27, 171, 36, 180));
	__poke(__peek(walls__)+206, Wall__new(306, 171, 315, 180));
	__poke(__peek(walls__)+207, Wall__new(333, 171, 342, 180));
	__poke(__peek(walls__)+208, Wall__new(27, 180, 36, 189));
	__poke(__peek(walls__)+209, Wall__new(306, 180, 315, 189));
	__poke(__peek(walls__)+210, Wall__new(333, 180, 342, 189));
	__poke(__peek(walls__)+211, Wall__new(27, 189, 36, 198));
	__poke(__peek(walls__)+212, Wall__new(54, 189, 63, 198));
	__poke(__peek(walls__)+213, Wall__new(63, 189, 72, 198));
	__poke(__peek(walls__)+214, Wall__new(90, 189, 99, 198));
	__poke(__peek(walls__)+215, Wall__new(99, 189, 108, 198));
	__poke(__peek(walls__)+216, Wall__new(126, 189, 135, 198));
	__poke(__peek(walls__)+217, Wall__new(153, 189, 162, 198));
	__poke(__peek(walls__)+218, Wall__new(180, 189, 189, 198));
	__poke(__peek(walls__)+219, Wall__new(207, 189, 216, 198));
	__poke(__peek(walls__)+220, Wall__new(234, 189, 243, 198));
	__poke(__peek(walls__)+221, Wall__new(243, 189, 252, 198));
	__poke(__peek(walls__)+222, Wall__new(252, 189, 261, 198));
	__poke(__peek(walls__)+223, Wall__new(261, 189, 270, 198));
	__poke(__peek(walls__)+224, Wall__new(270, 189, 279, 198));
	__poke(__peek(walls__)+225, Wall__new(279, 189, 288, 198));
	__poke(__peek(walls__)+226, Wall__new(306, 189, 315, 198));
	__poke(__peek(walls__)+227, Wall__new(333, 189, 342, 198));
	__poke(__peek(walls__)+228, Wall__new(27, 198, 36, 207));
	__poke(__peek(walls__)+229, Wall__new(54, 198, 63, 207));
	__poke(__peek(walls__)+230, Wall__new(63, 198, 72, 207));
	__poke(__peek(walls__)+231, Wall__new(90, 198, 99, 207));
	__poke(__peek(walls__)+232, Wall__new(99, 198, 108, 207));
	__poke(__peek(walls__)+233, Wall__new(126, 198, 135, 207));
	__poke(__peek(walls__)+234, Wall__new(153, 198, 162, 207));
	__poke(__peek(walls__)+235, Wall__new(180, 198, 189, 207));
	__poke(__peek(walls__)+236, Wall__new(207, 198, 216, 207));
	__poke(__peek(walls__)+237, Wall__new(234, 198, 243, 207));
	__poke(__peek(walls__)+238, Wall__new(306, 198, 315, 207));
	__poke(__peek(walls__)+239, Wall__new(333, 198, 342, 207));
	__poke(__peek(walls__)+240, Wall__new(27, 207, 36, 216));
	__poke(__peek(walls__)+241, Wall__new(153, 207, 162, 216));
	__poke(__peek(walls__)+242, Wall__new(180, 207, 189, 216));
	__poke(__peek(walls__)+243, Wall__new(333, 207, 342, 216));
	__poke(__peek(walls__)+244, Wall__new(27, 216, 36, 225));
	__poke(__peek(walls__)+245, Wall__new(153, 216, 162, 225));
	__poke(__peek(walls__)+246, Wall__new(180, 216, 189, 225));
	__poke(__peek(walls__)+247, Wall__new(270, 216, 279, 225));
	__poke(__peek(walls__)+248, Wall__new(279, 216, 288, 225));
	__poke(__peek(walls__)+249, Wall__new(333, 216, 342, 225));
	__poke(__peek(walls__)+250, Wall__new(27, 225, 36, 234));
	__poke(__peek(walls__)+251, Wall__new(36, 225, 45, 234));
	__poke(__peek(walls__)+252, Wall__new(45, 225, 54, 234));
	__poke(__peek(walls__)+253, Wall__new(54, 225, 63, 234));
	__poke(__peek(walls__)+254, Wall__new(63, 225, 72, 234));
	__poke(__peek(walls__)+255, Wall__new(72, 225, 81, 234));
	__poke(__peek(walls__)+256, Wall__new(81, 225, 90, 234));
	__poke(__peek(walls__)+257, Wall__new(90, 225, 99, 234));
	__poke(__peek(walls__)+258, Wall__new(99, 225, 108, 234));
	__poke(__peek(walls__)+259, Wall__new(108, 225, 117, 234));
	__poke(__peek(walls__)+260, Wall__new(117, 225, 126, 234));
	__poke(__peek(walls__)+261, Wall__new(126, 225, 135, 234));
	__poke(__peek(walls__)+262, Wall__new(135, 225, 144, 234));
	__poke(__peek(walls__)+263, Wall__new(144, 225, 153, 234));
	__poke(__peek(walls__)+264, Wall__new(153, 225, 162, 234));
	__poke(__peek(walls__)+265, Wall__new(180, 225, 189, 234));
	__poke(__peek(walls__)+266, Wall__new(189, 225, 198, 234));
	__poke(__peek(walls__)+267, Wall__new(198, 225, 207, 234));
	__poke(__peek(walls__)+268, Wall__new(207, 225, 216, 234));
	__poke(__peek(walls__)+269, Wall__new(216, 225, 225, 234));
	__poke(__peek(walls__)+270, Wall__new(225, 225, 234, 234));
	__poke(__peek(walls__)+271, Wall__new(234, 225, 243, 234));
	__poke(__peek(walls__)+272, Wall__new(243, 225, 252, 234));
	__poke(__peek(walls__)+273, Wall__new(252, 225, 261, 234));
	__poke(__peek(walls__)+274, Wall__new(261, 225, 270, 234));
	__poke(__peek(walls__)+275, Wall__new(270, 225, 279, 234));
	__poke(__peek(walls__)+276, Wall__new(279, 225, 288, 234));
	__poke(__peek(walls__)+277, Wall__new(288, 225, 297, 234));
	__poke(__peek(walls__)+278, Wall__new(297, 225, 306, 234));
	__poke(__peek(walls__)+279, Wall__new(306, 225, 315, 234));
	__poke(__peek(walls__)+280, Wall__new(315, 225, 324, 234));
	__poke(__peek(walls__)+281, Wall__new(324, 225, 333, 234));
	__poke(__peek(walls__)+282, Wall__new(333, 225, 342, 234));
	return 0;
}
var Walls__draw(var __this) {
	var w = 0;
	var i = 0;
	i = 0;
	while (-1==((((i)<(__peek(nWalls__)))?-1:0))) {
		w = __peek(__peek(walls__)+i);
		Wall__draw(w);
		i = i+1;
	}
	return 0;
}
var Walls__checkOverlapping(var __this, var x1, var y1, var x2, var y2) {
	var w = 0;
	var i = 0;
	i = 0;
	while (-1==((((i)<(__peek(nWalls__)))?-1:0))) {
		w = __peek(__peek(walls__)+i);
		if (0!=(Wall__checkOverlapping(w, x1, y1, x2, y2))) {
			return -1;
		}

		i = i+1;
	}
	return 0;
}
var Walls__dispose(var __this) {
	var w = 0;
	var i = 0;
	i = 0;
	while (-1==((((i)<(__peek(nWalls__)))?-1:0))) {
		w = __peek(__peek(walls__)+i);
		Wall__dispose(w);
		i = i+1;
	}
	Array__dispose(__peek(walls__));
	Memory__deAlloc(__this);
	return 0;
}
#undef nWalls__
#undef walls__
#endif

#ifdef JACK_IMPLEMENTATION
var Random___seed_ = 0;
var Random__seed() {
	var key = 0;
	key = 0;
	Random___seed_ = 0;
	while (-1==(~key)) {
		Random___seed_ = Random___seed_+1;
		if (0!=((((Random___seed_)==(32767))?-1:0))) {
			Random___seed_ = 0;
		}

		key = Keyboard__keyPressed();
	}
	return 0;
}
var Random__rand() {
	Random___seed_ = Random___seed_+20251;
	if (0!=((((Random___seed_)<(0))?-1:0))) {
		Random___seed_ = Random___seed_-32767-1;
	}

	return Random___seed_;
}
var Random__randRange(var max) {
	var mask = 0;
	var randValue = 0;
	mask = 1;
	while (-1==((((mask)<(max))?-1:0))) {
		mask = mask*2+1;
	}
	randValue = Random__rand()&mask;
	while (-1==((((randValue)>(max))?-1:0))) {
		randValue = Random__rand()&mask;
	}
	return randValue;
}
var Random__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
#define ghosts__ (__this+0)
#define nGhosts__ (__this+1)
#define pacman__ (__this+2)
#define walls__ (__this+3)
#define pellets__ (__this+4)
var Ghosts__new(var pm, var w, var p) {
	var __this;
	__this = Memory__alloc(5);
	__poke(nGhosts__, 4);
	__poke(walls__, w);
	__poke(pacman__, pm);
	__poke(pellets__, p);
	__poke(ghosts__, Array__new(__peek(nGhosts__)));
	Ghosts__createGhosts(__this);
	return __this;
}
var Ghosts__createGhosts(var __this) {
	__poke(__peek(ghosts__)+0, Ghost__new(162, 117, __peek(pacman__), __peek(walls__), __peek(pellets__)));
	__poke(__peek(ghosts__)+1, Ghost__new(162, 117, __peek(pacman__), __peek(walls__), __peek(pellets__)));
	__poke(__peek(ghosts__)+2, Ghost__new(162, 117, __peek(pacman__), __peek(walls__), __peek(pellets__)));
	__poke(__peek(ghosts__)+3, Ghost__new(162, 117, __peek(pacman__), __peek(walls__), __peek(pellets__)));
	return 0;
}
var Ghosts__init(var __this) {
	var i = 0;
	var cur = 0;
	i = 0;
	while (-1==((((i)<(__peek(nGhosts__)))?-1:0))) {
		cur = __peek(__peek(ghosts__)+i);
		Ghost__init(cur);
		i = i+1;
	}
	return 0;
}
var Ghosts__next(var __this) {
	var i = 0;
	var cur = 0;
	i = 0;
	while (-1==((((i)<(__peek(nGhosts__)))?-1:0))) {
		cur = __peek(__peek(ghosts__)+i);
		Ghost__next(cur);
		i = i+1;
	}
	return 0;
}
var Ghosts__dispose(var __this) {
	var b = 0;
	var i = 0;
	i = 0;
	while (-1==((((i)<(4))?-1:0))) {
		b = __peek(__peek(ghosts__)+i);
		Ghost__dispose(b);
		i = i+1;
	}
	Array__dispose(__peek(ghosts__));
	Memory__deAlloc(__this);
	return 0;
}
#undef ghosts__
#undef nGhosts__
#undef pacman__
#undef walls__
#undef pellets__
#endif

#ifdef JACK_IMPLEMENTATION
var Labels___str0[] = {83,67,79,82,69,0};
var Labels___str1[] = {72,73,71,72,32,83,67,79,82,69,0};
var Labels___str2[] = {74,65,67,75,45,77,65,78,0};
#define nLabels__ (__this+0)
#define labels__ (__this+1)
var Labels__new() {
	var __this;
	__this = Memory__alloc(2);
	__poke(nLabels__, 3);
	__poke(labels__, Array__new(3));
	Labels__createLabels(__this);
	return __this;
}
var Labels__createLabels(var __this) {
	__poke(__peek(labels__)+0, Label__new(Memory__getString(Labels___str0), 2, 46));
	__poke(__peek(labels__)+1, Label__new(Memory__getString(Labels___str1), 6, 46));
	__poke(__peek(labels__)+2, Label__new(Memory__getString(Labels___str2), 20, 46));
	return 0;
}
var Labels__init(var __this) {
	var i = 0;
	var cur = 0;
	i = 0;
	while (-1==((((i)<(__peek(nLabels__)))?-1:0))) {
		cur = __peek(__peek(labels__)+i);
		Label__init(cur);
		i = i+1;
	}
	return 0;
}
var Labels__dispose(var __this) {
	var b = 0;
	var i = 0;
	i = 0;
	while (-1==((((i)<(__peek(nLabels__)))?-1:0))) {
		b = __peek(__peek(labels__)+i);
		Label__dispose(b);
		i = i+1;
	}
	Array__dispose(__peek(labels__));
	Memory__deAlloc(__this);
	return 0;
}
#undef nLabels__
#undef labels__
#endif

#ifdef JACK_IMPLEMENTATION
#define x__ (__this+0)
#define y__ (__this+1)
#define collected__ (__this+2)
#define size__ (__this+3)
var Pellet__new(var xi, var yi) {
	var __this;
	__this = Memory__alloc(4);
	__poke(x__, xi);
	__poke(y__, yi);
	__poke(size__, 2);
	__poke(collected__, 0);
	return __this;
}
var Pellet__draw(var __this) {
	Screen__setColor(~__peek(collected__));
	Screen__drawRectangle(__peek(x__), __peek(y__), __peek(x__)+__peek(size__)-1, __peek(y__)+__peek(size__)-1);
	return 0;
}
var Pellet__setCollected(var __this) {
	__poke(collected__, -1);
	return 0;
}
var Pellet__isCollected(var __this) {
	return __peek(collected__);
}
var Pellet__checkOverlapping(var __this, var x1, var y1, var x2, var y2) {
	return (((((x1)<((__peek(x__)+__peek(size__))))?-1:0))&((((x2)>((__peek(x__)-1)))?-1:0)))&(((((y1)<((__peek(y__)+__peek(size__))))?-1:0))&((((y2)>((__peek(y__)-1)))?-1:0)));
}
var Pellet__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#undef x__
#undef y__
#undef collected__
#undef size__
#endif

#ifdef JACK_IMPLEMENTATION
#define x__ (__this+0)
#define y__ (__this+1)
#define size__ (__this+2)
#define dir__ (__this+3)
#define walls__ (__this+4)
#define pellets__ (__this+5)
#define speed__ (__this+6)
#define isCaptured__ (__this+7)
var PacMan__new(var p, var w) {
	var __this;
	__this = Memory__alloc(8);
	__poke(speed__, 3);
	__poke(x__, 165);
	__poke(y__, 155);
	__poke(size__, 12);
	__poke(dir__, 1);
	__poke(isCaptured__, 0);
	__poke(walls__, w);
	__poke(pellets__, p);
	return __this;
}
var PacMan__getX(var __this) {
	return __peek(x__);
}
var PacMan__getY(var __this) {
	return __peek(y__);
}
var PacMan__endX(var __this) {
	return __peek(x__)+__peek(size__)-1;
}
var PacMan__endY(var __this) {
	return __peek(y__)+__peek(size__)-1;
}
var PacMan__getIsCaptured(var __this) {
	return __peek(isCaptured__);
}
var PacMan__init(var __this) {
	PacMan__draw(__this);
	return 0;
}
var PacMan__next(var __this) {
	var didMove = 0;
	didMove = PacMan__advance(__this);
	if (0!=(didMove)) {
		PacMan__draw(__this);
		PacMan__capturePellets(__this);
	}

	return 0;
}
var PacMan__advance(var __this) {
	var nextX = 0;
	var nextY = 0;
	nextX = PacMan__getNextX(__this);
	nextY = PacMan__getNextY(__this);
	if (0!=(PacMan__willCollideWithWalls(__this, nextX, nextY))) {
		return 0;
	}

	if (0!=(((((__peek(x__))==(nextX))?-1:0))&((((__peek(y__))==(nextY))?-1:0)))) {
		return 0;
	}

	__poke(x__, nextX);
	__poke(y__, nextY);
	return -1;
}
var PacMan__capturePellets(var __this) {
	Pellets__setCollected(__peek(pellets__), __peek(x__), __peek(y__), PacMan__endX(__this), PacMan__endY(__this), -1);
	return 0;
}
var PacMan__draw(var __this) {
	Screen__setColor(0);
	if (0!=((((__peek(dir__))==(4))?-1:0))) {
		Screen__drawRectangle(__peek(x__)-__peek(speed__), __peek(y__), PacMan__endX(__this)-__peek(speed__), PacMan__endY(__this));
	}

	if (0!=((((__peek(dir__))==(3))?-1:0))) {
		Screen__drawRectangle(__peek(x__)+__peek(speed__), __peek(y__), PacMan__endX(__this)+__peek(speed__), PacMan__endY(__this));
	}

	if (0!=((((__peek(dir__))==(2))?-1:0))) {
		Screen__drawRectangle(__peek(x__), __peek(y__)-__peek(speed__), PacMan__endX(__this), PacMan__endY(__this)-__peek(speed__));
	}

	if (0!=((((__peek(dir__))==(1))?-1:0))) {
		Screen__drawRectangle(__peek(x__), __peek(y__)+__peek(speed__), PacMan__endX(__this), PacMan__endY(__this)+__peek(speed__));
	}

	Screen__setColor(-1);
	Screen__drawCircle(__peek(x__)+6, __peek(y__)+6, 5);
	return 0;
}
var PacMan__willCollideWithWalls(var __this, var nextX, var nextY) {
	var nextEndX = 0;
	var nextEndY = 0;
	nextEndX = nextX+__peek(size__)-1;
	nextEndY = nextY+__peek(size__)-1;
	return Walls__checkOverlapping(__peek(walls__), nextX, nextY, nextEndX, nextEndY);
}
var PacMan__getNextX(var __this) {
	var nextX = 0;
	nextX = __peek(x__);
	if (0!=((((__peek(dir__))==(4))?-1:0))) {
		nextX = __peek(x__)+__peek(speed__);
	}

	if (0!=((((__peek(dir__))==(3))?-1:0))) {
		nextX = __peek(x__)-__peek(speed__);
	}

	return nextX;
}
var PacMan__getNextY(var __this) {
	var nextY = 0;
	nextY = __peek(y__);
	if (0!=((((__peek(dir__))==(2))?-1:0))) {
		nextY = __peek(y__)+__peek(speed__);
	}

	if (0!=((((__peek(dir__))==(1))?-1:0))) {
		nextY = __peek(y__)-__peek(speed__);
	}

	if (0!=((((nextY)>(220))?-1:0))) {
		nextY = 12;
		Screen__setColor(0);
		Screen__drawRectangle(__peek(x__), __peek(y__), PacMan__endX(__this), PacMan__endY(__this));
	}

	if (0!=((((nextY)<(10))?-1:0))) {
		nextY = 220;
		Screen__setColor(0);
		Screen__drawRectangle(__peek(x__), __peek(y__), PacMan__endX(__this), PacMan__endY(__this));
	}

	return nextY;
}
var PacMan__handleKey(var __this, var key) {
	if (0!=((((key)==(131))?-1:0))) {
		PacMan__setDir(__this, 1);
	}

	if (0!=((((key)==(133))?-1:0))) {
		PacMan__setDir(__this, 2);
	}

	if (0!=((((key)==(130))?-1:0))) {
		PacMan__setDir(__this, 3);
	}

	if (0!=((((key)==(132))?-1:0))) {
		PacMan__setDir(__this, 4);
	}

	return 0;
}
var PacMan__setDir(var __this, var newDir) {
	__poke(dir__, newDir);
	return 0;
}
var PacMan__capture(var __this) {
	__poke(isCaptured__, -1);
	return 0;
}
var PacMan__checkOverlapping(var __this, var x1, var y1, var x2, var y2) {
	return (((((x1)<((PacMan__endX(__this)+1)))?-1:0))&((((x2)>((__peek(x__)-1)))?-1:0)))&(((((y1)<((PacMan__endY(__this)+1)))?-1:0))&((((y2)>((__peek(y__)-1)))?-1:0)));
}
var PacMan__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#undef x__
#undef y__
#undef size__
#undef dir__
#undef walls__
#undef pellets__
#undef speed__
#undef isCaptured__
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
#define leftX__ (__this+0)
#define topY__ (__this+1)
#define rightX__ (__this+2)
#define bottomY__ (__this+3)
var Wall__new(var x1, var y1, var x2, var y2) {
	var __this;
	__this = Memory__alloc(4);
	__poke(leftX__, x1);
	__poke(topY__, y1);
	__poke(rightX__, x2);
	__poke(bottomY__, y2);
	return __this;
}
var Wall__draw(var __this) {
	Screen__setColor(-1);
	Screen__drawRectangle(__peek(leftX__), __peek(topY__), __peek(rightX__), __peek(bottomY__));
	return 0;
}
var Wall__checkOverlapping(var __this, var x1, var y1, var x2, var y2) {
	return (((((x1)<((__peek(rightX__)+1)))?-1:0))&((((x2)>((__peek(leftX__)-1)))?-1:0)))&(((((y1)<((__peek(bottomY__)+1)))?-1:0))&((((y2)>((__peek(topY__)-1)))?-1:0)));
}
var Wall__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#undef leftX__
#undef topY__
#undef rightX__
#undef bottomY__
#endif

#ifdef JACK_IMPLEMENTATION
#define nPellets__ (__this+0)
#define pellets__ (__this+1)
#define cols__ (__this+2)
#define rows__ (__this+3)
#define spaceSize__ (__this+4)
#define capturedCount__ (__this+5)
var Pellets__new() {
	var __this;
	__this = Memory__alloc(6);
	__poke(cols__, 17);
	__poke(rows__, 12);
	__poke(spaceSize__, 175);
	__poke(nPellets__, __peek(cols__)*__peek(rows__));
	__poke(pellets__, Array__new(__peek(nPellets__)));
	__poke(capturedCount__, 0);
	Pellets__createPellets(__this);
	return __this;
}
var Pellets__init(var __this) {
	Pellets__draw(__this);
	return 0;
}
var Pellets__createPellets(var __this) {
	var x = 0;
	var y = 0;
	var i = 0;
	var row = 0;
	var col = 0;
	i = 0;
	while (-1==((((i)<(__peek(nPellets__)))?-1:0))) {
		row = i/__peek(cols__);
		col = i-(row*__peek(cols__));
		x = (__peek(spaceSize__)*col)/10+44;
		y = (__peek(spaceSize__)*row)/10+26;
		__poke(__peek(pellets__)+i, Pellet__new(x, y));
		i = i+1;
	}
	return 0;
}
var Pellets__draw(var __this) {
	var i = 0;
	var cur = 0;
	i = 0;
	while (-1==((((i)<(__peek(nPellets__)))?-1:0))) {
		cur = __peek(__peek(pellets__)+i);
		Pellet__draw(cur);
		i = i+1;
	}
	return 0;
}
var Pellets__getCapturedCount(var __this) {
	return __peek(capturedCount__);
}
var Pellets__setCollected(var __this, var x1, var y1, var x2, var y2, var collecting) {
	var i = 0;
	var cur = 0;
	i = 0;
	while (-1==((((i)<(__peek(nPellets__)))?-1:0))) {
		cur = __peek(__peek(pellets__)+i);
		if (0!=(Pellet__checkOverlapping(cur, x1, y1, x2, y2))) {
			if (0!=(~(Pellet__isCollected(cur)))) {
				if (0!=(collecting)) {
					Pellet__setCollected(cur);
					__poke(capturedCount__, __peek(capturedCount__)+1);
				}

				Pellet__draw(cur);
			}

			return 0;
		}

		i = i+1;
	}
	return 0;
}
var Pellets__dispose(var __this) {
	var b = 0;
	var i = 0;
	i = 0;
	while (-1==((((i)<(__peek(nPellets__)))?-1:0))) {
		b = __peek(__peek(pellets__)+i);
		Pellet__dispose(b);
		i = i+1;
	}
	Array__dispose(__peek(pellets__));
	Memory__deAlloc(__this);
	return 0;
}
#undef nPellets__
#undef pellets__
#undef cols__
#undef rows__
#undef spaceSize__
#undef capturedCount__
#endif

#ifdef JACK_IMPLEMENTATION
var Main__main() {
	var key = 0;
	var game = 0;
	Splash__show();
	Random__seed();
	Screen__clearScreen();
	game = Game__new();
	Game__init(game);
	while (-1==(-1)) {
		Game__next(game);
		key = Keyboard__keyPressed();
		if (0!=(~((((key)==(0))?-1:0)))) {
			Game__handleKey(game, key);
		}

	}
	return 0;
}
#endif

