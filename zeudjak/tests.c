
#ifndef var
#ifdef _WIN64
#include <windows.h>
#define var __int64
#else
#define var long
#endif
#define __poke(a, v) __peek((a)) = v
//#define __peek(a) (((var*)(a))[0])
#define __peek(a) (((var*)((a)*sizeof(var)))[0])
#endif

#if 0

#endif

#ifndef JACK_UnitScreen_H
#define JACK_UnitScreen_H
var UnitScreen__isOk(var l);
#endif


#if 0

#endif

#ifndef JACK_UnitString_H
#define JACK_UnitString_H
var UnitString__isOk(var l);
var UnitString__isOk1(var l);
#endif


#if 0

#endif

#ifndef JACK_UnitBytes_H
#define JACK_UnitBytes_H
var UnitBytes__isOk(var l);
#endif


#if 0

#endif

#ifndef JACK_UnitFile_H
#define JACK_UnitFile_H
var UnitFile__getJackFiles(var lst, var dir);
var UnitFile__testRec(var l);
var UnitFile__t2();
var UnitFile__isOk(var l);
#endif


#if 0

#endif

#ifndef JACK_Unit_H
#define JACK_Unit_H
var Unit__setLevel(var l);
var Unit__clear();
var Unit__run(var level, var txt, var state);
var Unit__log(var level, var txt, var state);
var Unit__isOk();
#endif


#if 0

#endif

#ifndef JACK_UnitMath_H
#define JACK_UnitMath_H
#define DEF__UnitMath__CONSTA Memory__getString(UnitMath___str0)
#define DEF__UnitMath__CONST25 25
var UnitMath__isOk(var l);
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

#ifndef JACK_Font_H
#define JACK_Font_H
var Font__new();
var Font__get(var __this, var c);
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

#ifndef JACK_Bytes_H
#define JACK_Bytes_H
var Bytes__new(var size_in_byte);
var Bytes__dispose(var __this);
var Bytes__alloc(var __this, var s);
var Bytes__getBuffer(var __this);
var Bytes__length(var __this);
var Bytes__getByte(var __this, var address);
var Bytes__setByte(var __this, var address, var b);
var Bytes__appendByte(var __this, var b);
var Bytes__append16bit(var __this, var b);
var Bytes__append32bit(var __this, var b);
var Bytes__append64bit(var __this, var b);
var Bytes__append16bitBig(var __this, var b);
var Bytes__append32bitBig(var __this, var b);
var Bytes__append64bitBig(var __this, var b);
var Bytes__appendInt(var __this, var b);
var Bytes__appendUtf8(var __this, var codepoint);
var Bytes__appendUtf16(var __this, var codepoint);
var Bytes__appendNativeChar(var __this, var codepoint);
var Bytes__getStringNativePointer(var __this);
var Bytes__setStringToNative(var __this, var name);
#endif


#if 0

#endif

#ifndef JACK_File_H
#define JACK_File_H
var File__new(var path, var writing);
var File__dispose(var __this);
var File__getName(var __this);
var File__isdir(var __this);
var File__open(var __this);
var File__readByte(var __this);
var File__seek(var __this, var position);
var File__writeByte(var __this, var data);
var File__writeString(var __this, var s);
var File__readLine(var __this, var buff);
var File__readUtf8(var __this);
var File__writeUtf8(var __this, var data);
var File__writeInt16(var __this, var d);
var File__writeInt32(var __this, var d);
var File__writeInt64(var __this, var d);
var File__readInt16(var __this);
var File__readInt32(var __this);
var File__readInt64(var __this);
var File__remove(var __this);
var File__mkdir(var __this);
var File__list(var __this);
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
var Sys__args();
#endif


#if 0

#endif

#ifndef JACK_Hash_H
#define JACK_Hash_H
var Hash__new(var size);
var Hash__dispose(var __this);
var Hash__stats(var __this);
var Hash__hash(var __this, var k);
var Hash__add(var __this, var k, var val);
var Hash__get(var __this, var k);
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

#ifndef JACK_Buffer_H
#define JACK_Buffer_H
var Buffer__new(var initial);
var Buffer__dispose(var __this);
var Buffer__getAt(var __this, var p);
var Buffer__setAt(var __this, var p, var data);
var Buffer__append(var __this, var data);
var Buffer__insertSortedStr(var __this, var q);
var Buffer__remove(var __this, var q);
var Buffer__indexOfStr(var __this, var q);
var Buffer__checkSize(var __this, var idx);
var Buffer__getArray(var __this);
var Buffer__getSize(var __this);
#endif


#if 0

#endif

#ifndef JACK_Dispose_H
#define JACK_Dispose_H
var Dispose__dispose(var obj);
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
var UnitScreen___str0[] = {83,99,114,101,101,110,46,100,114,97,119,67,105,114,99,108,101,46,46,46,0};
var UnitScreen__isOk(var l) {
	var i;
	var ok;
	var s;
	ok = 0;
	Screen__clearScreen();
	Screen__setColor(-1);
	Screen__drawRectangle(40, 40, 50, 60);
	i = 32;
	s = String__new(256);
	while (((i)<(34))) {
		s = String__appendChar(s, i);
		Output__moveCursor(0, 0);
		Screen__clearScreen();
		Sys__wait(10);
		String__setCharAt(s, 0, 0);
		i = i+1;
	}
	Screen__clearScreen();
	String__dispose(s);
	Sys__wait(10);
	Sys__wait(10);
	Sys__wait(10);
	Sys__wait(1000);
	Unit__log(l+1, Memory__getString(UnitScreen___str0), ok);
	return Memory__checkEmpty();
}
#endif

#ifdef JACK_IMPLEMENTATION
var UnitString___str0[] = {83,116,114,105,110,103,46,97,112,112,101,110,100,46,46,46,0};
var UnitString___str1[] = {72,101,108,108,111,32,87,111,114,108,100,0};
var UnitString___str2[] = {33,33,33,0};
var UnitString___str3[] = {83,116,114,105,110,103,46,99,111,112,121,46,46,46,0};
var UnitString___str4[] = {65,65,0};
var UnitString___str5[] = {66,65,0};
var UnitString___str6[] = {83,116,114,105,110,103,46,99,111,109,112,97,114,101,32,60,32,111,107,46,46,46,0};
var UnitString___str7[] = {83,116,114,105,110,103,46,99,111,109,112,97,114,101,32,60,32,102,97,105,108,46,46,46,0};
var UnitString___str8[] = {66,65,0};
var UnitString___str9[] = {65,65,0};
var UnitString___str10[] = {83,116,114,105,110,103,46,99,111,109,112,97,114,101,32,62,32,111,107,46,46,46,0};
var UnitString___str11[] = {83,116,114,105,110,103,46,99,111,109,112,97,114,101,32,62,32,102,97,105,108,46,46,46,0};
var UnitString___str12[] = {65,65,0};
var UnitString___str13[] = {65,65,0};
var UnitString___str14[] = {83,116,114,105,110,103,46,99,111,109,112,97,114,101,32,61,32,111,107,46,46,46,0};
var UnitString___str15[] = {83,116,114,105,110,103,46,99,111,109,112,97,114,101,32,61,32,102,97,105,108,46,46,46,0};
var UnitString___str16[] = {65,65,65,0};
var UnitString___str17[] = {65,65,0};
var UnitString___str18[] = {83,116,114,105,110,103,46,99,111,109,112,97,114,101,32,108,101,110,32,111,107,46,46,46,0};
var UnitString___str19[] = {83,116,114,105,110,103,46,99,111,109,112,97,114,101,32,108,101,110,32,102,97,105,108,46,46,46,0};
var UnitString__isOk(var l) {
	var s;
	var i;
	i = 0;
	s = String__new(1);
	while (((i)<(512))) {
		s = String__appendChar(s, 65);
		i = i+1;
	}
	String__dispose(s);
	Unit__log(l+1, Memory__getString(UnitString___str0), -1);
	UnitString__isOk1(l);
	return Memory__checkEmpty();
}
var UnitString__isOk1(var l) {
	var s;
	var i;
	l = l+1;
	s = Memory__getString(UnitString___str1);
	s = String__copy(s);
	s = String__appendString(s, Memory__getString(UnitString___str2));
	String__dispose(s);
	Unit__log(l+1, Memory__getString(UnitString___str3), -1);
	s = Memory__getString(UnitString___str4);
	if (((String__compare(s, Memory__getString(UnitString___str5)))<(0))) {
		Unit__log(l, Memory__getString(UnitString___str6), -1);
	} else {
		Unit__log(l, Memory__getString(UnitString___str7), 0);
	}
	s = Memory__getString(UnitString___str8);
	if (((String__compare(s, Memory__getString(UnitString___str9)))>(0))) {
		Unit__log(l, Memory__getString(UnitString___str10), -1);
	} else {
		Unit__log(l, Memory__getString(UnitString___str11), 0);
	}
	s = Memory__getString(UnitString___str12);
	if (((String__compare(s, Memory__getString(UnitString___str13)))==(0))) {
		Unit__log(l, Memory__getString(UnitString___str14), -1);
	} else {
		Unit__log(l, Memory__getString(UnitString___str15), 0);
	}
	s = Memory__getString(UnitString___str16);
	if (((String__compare(s, Memory__getString(UnitString___str17)))>(0))) {
		Unit__log(l, Memory__getString(UnitString___str18), -1);
	} else {
		Unit__log(l, Memory__getString(UnitString___str19), 0);
	}
	return Memory__checkEmpty();
}
#endif

#ifdef JACK_IMPLEMENTATION
var UnitBytes___str0[] = {66,121,116,101,115,46,97,112,112,101,110,100,66,121,116,101,46,46,46,0};
var UnitBytes__isOk(var l) {
	var s;
	var b;
	var i;
	i = 0;
	s = Bytes__new(1);
	while (((i)<(512))) {
		Bytes__appendByte(s, 65);
		i = i+1;
	}
	Bytes__dispose(s);
	Unit__log(l+1, Memory__getString(UnitBytes___str0), -1);
	return Memory__checkEmpty();
}
#endif

#ifdef JACK_IMPLEMENTATION
var UnitFile___str0[] = {32,68,73,82,32,0};
var UnitFile___str1[] = {46,106,97,99,107,0};
var UnitFile___str2[] = {46,47,116,101,115,116,115,47,0};
var UnitFile___str3[] = {116,101,115,116,115,47,77,97,105,110,46,106,97,99,107,0};
var UnitFile___str4[] = {116,101,115,116,111,46,120,109,108,0};
var UnitFile___str5[] = {70,105,108,101,46,46,46,0};
var UnitFile___str6[] = {70,105,108,101,46,46,46,0};
var UnitFile__getJackFiles(var lst, var dir) {
	var f;
	var p;
	var i;
	var l;
	var j;
	var c;
	var d;
	i = 0;
	f = File__new(dir, 0);
	if (f) {
		d = File__list(f);
		if (((d)==(0))) {
			File__dispose(f);
			return 0;
		}

	}

	while (((i)<(Buffer__getSize(d)))) {
		p = Buffer__getAt(d, i);
		l = String__length(p);
		if ((((l)>(0)))&&(((String__charAt(p, l-1))==(47)))) {
			Output__printString(p);
			Output__printString(Memory__getString(UnitFile___str0));
			Output__println();
			String__dispose(p);
			l = l;
		} else {
			if (((l)>(5))) {
				c = Memory__getString(UnitFile___str1);
				j = 5;
				while (((j)>(0))) {
					j = j-1;
					l = l-1;
					if (!(((String__charAt(p, l))==(String__charAt(c, j))))) {
						j = -1;
					}

				}
				if (((j)==(0))) {
					Buffer__append(lst, p);
				} else {
					String__dispose(p);
				}
			} else {
				String__dispose(p);
			}
		}
		i = i+1;
	}
	Buffer__dispose(d);
	File__dispose(f);
	return 0;
}
var UnitFile__testRec(var l) {
	var files;
	var f;
	var s;
	var i;
	l = l+1;
	files = Buffer__new(1);
	UnitFile__getJackFiles(files, Memory__getString(UnitFile___str2));
	i = 0;
	while (((i)<(Buffer__getSize(files)))) {
		s = Buffer__getAt(files, i);
		Unit__log(l, s, -1);
		i = i+1;
	}
	Buffer__dispose(files);
	return -1;
}
var UnitFile__t2() {
	var src;
	var dst;
	src = File__new(Memory__getString(UnitFile___str3), 0);
	dst = File__new(Memory__getString(UnitFile___str4), -1);
	File__seek(dst, 1000);
	File__writeByte(dst, 65);
	File__dispose(dst);
	File__dispose(src);
	return -1;
}
var UnitFile__isOk(var l) {
	var r;
	l = l+1;
	r = UnitFile__testRec(l);
	r = Memory__checkEmpty();
	r = UnitFile__t2();
	Unit__log(l, Memory__getString(UnitFile___str5), r);
	r = UnitFile__testRec(l);
	Unit__log(l, Memory__getString(UnitFile___str6), r);
	return Memory__checkEmpty();
}
#endif

#ifdef JACK_IMPLEMENTATION
var Unit___str0[] = {46,46,46,32,0};
var Unit___str1[] = {9,112,97,115,115,0};
var Unit___str2[] = {80,65,78,73,67,33,33,33,0};
var Unit___str3[] = {9,102,97,105,108,0};
var Unit___str4[] = {80,65,78,73,67,50,33,33,33,0};
var Unit___str5[] = {32,80,65,83,83,0};
var Unit___str6[] = {70,65,73,76,32,0};
var Unit___str7[] = {47,0};
var Unit___str8[] = {10,10,46,46,46,0};
var Unit___maxlevel;
var Unit___failure;
var Unit___over;
var Unit___count;
var Unit__setLevel(var l) {
	Unit___maxlevel = l;
	Unit__clear();
	Unit___over = 0;
	Unit___count = 0;
	return 0;
}
var Unit__clear() {
	Unit___failure = 0;
}
var Unit__run(var level, var txt, var state) {
	if (((Unit___failure)>(0))) {
		state = 0;
	}

	Unit__log(level, txt, state);
	Unit__clear();
}
var Unit__log(var level, var txt, var state) {
	if (((level)>(Unit___maxlevel))) {
		return 0;
	}

	Unit___count = Unit___count+1;
	Output__printString(txt);
	Output__printString(Memory__getString(Unit___str0));
	if (state) {
		Output__printString(Memory__getString(Unit___str1));
	} else {
		if (((20)>=(100))) {
			Output__printString(Memory__getString(Unit___str2));
		} else {
			if (((0)==(0))) {
				Output__printString(Memory__getString(Unit___str3));
				Unit___failure = Unit___failure+1;
				Unit___over = Unit___over+1;
			} else {
				Output__printString(Memory__getString(Unit___str4));
			}
		}
	}
	Output__println();
	return 0;
}
var Unit__isOk() {
	if (((Unit___over)==(0))) {
		Output__printInt(Unit___count);
		Output__printString(Memory__getString(Unit___str5));
	} else {
		Output__printString(Memory__getString(Unit___str6));
		Output__printInt(Unit___over);
		Output__printString(Memory__getString(Unit___str7));
		Output__printInt(Unit___count);
	}
	Output__printString(Memory__getString(Unit___str8));
}
#endif

#ifdef JACK_IMPLEMENTATION
var UnitMath___str0[] = {65,32,77,97,116,104,46,115,113,114,116,46,46,46,0};
var UnitMath___str1[] = {77,97,116,104,46,100,105,118,105,100,101,46,46,46,0};
var UnitMath___str2[] = {77,97,116,104,46,109,117,108,116,105,112,108,121,46,46,46,0};
var UnitMath___str3[] = {50,32,43,32,51,32,42,32,53,46,46,46,0};
var UnitMath___str4[] = {50,32,42,32,51,32,43,32,53,46,46,46,0};
var UnitMath__isOk(var l) {
	var i;
	var ok;
	ok = 0;
	i = Math__sqrt(25);
	if (((i)==(5))) {
		ok = -1;
	}

	Unit__log(l+1, DEF__UnitMath__CONSTA, ok);
	ok = 0;
	i = Math__divide(DEF__UnitMath__CONST25, 2);
	if (((i)==(12))) {
		ok = -1;
	}

	Unit__log(l+1, Memory__getString(UnitMath___str1), ok);
	ok = 0;
	i = Math__multiply(5, 5);
	if (((i)==(25))) {
		ok = -1;
	}

	Unit__log(l+1, Memory__getString(UnitMath___str2), ok);
	ok = 0;
	i = 2+3*5;
	if (((i)==(30))) {
		ok = -1;
	}

	Unit__log(l+1, Memory__getString(UnitMath___str3), ok);
	ok = 0;
	i = 2*3+5;
	if (((i)==(11))) {
		ok = -1;
	}

	Unit__log(l+1, Memory__getString(UnitMath___str4), ok);
	return Memory__checkEmpty();
}
#endif

#ifdef JACK_IMPLEMENTATION
var Array__new(var size) {
	var a;
	a = Memory__alloc(size);
	return a;
}
var Array__dispose(var __this) {
	Memory__deAlloc(__this);
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
	var i;
	i = (c-32)*6;
	return __peek(fnt__)+i;
}
#undef fnt__
#endif

#ifdef JACK_IMPLEMENTATION
var Screen___color;
var Screen__init() {
	Screen___color = -1;
	return 0;
}
var Screen__deInit() {
	return 0;
}
var Screen__clearScreen() {
	var i;
	i = 16384;
	while (((i)<(24576))) {
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
	var b;
	var i;
	var r;
	var p;
	i = (x/16)+(y*(512/16))+16384;
	b = Memory__peek(i);
	r = x-((x/16)*16);
	p = 1;
	while (((r)>(0))) {
		p = p*2;
		r = r-1;
	}
	if (Screen___color) {
		b = b|p;
	} else {
		b = b&~p;
	}
	Memory__poke(i, b);
	return 0;
}
var Screen__drawLine(var x, var y, var x2, var y2) {
	var a;
	var b;
	var dx;
	var dy;
	var ax;
	var ay;
	var adyMinusbdx;
	dx = x2-x;
	dy = y2-y;
	if (((dx)==(0))) {
		if (((y)>(y2))) {
			a = y2;
			y2 = y;
			y = a;
		}

		b = y;
		y2 = y2+1;
		Screen__drawPixel(x, b);
		while (((b)<(y2))) {
			b = b+1;
			Screen__drawPixel(x, b);
		}
		return 0;
	}

	if (((dy)==(0))) {
		if (((x)>(x2))) {
			a = x2;
			x2 = x;
			x = a;
		}

		a = x;
		x2 = x2+1;
		Screen__drawPixel(a, y);
		while (((a)<(x2))) {
			a = a+1;
			Screen__drawPixel(a, y);
		}
		return 0;
	}

	ax = 0;
	ay = 0;
	if ((((dx)<(0)))&&(((dy)<(0)))) {
		dx = -dx;
		dy = -dy;
		x = x2;
		y = y2;
	} else {
		if ((((dx)>(0)))&&(((dy)<(0)))) {
			dy = -dy;
			ay = dy;
		} else {
			if ((((dx)<(0)))&&(((dy)>(0)))) {
				dx = -dx;
				ax = dx;
			}

		}
	}
	a = 0;
	b = 0;
	adyMinusbdx = 0;
	Screen__drawPixel(x, y);
	while ((((dx)>(a)))&&(((dy)>(b)))) {
		if (((adyMinusbdx)<(0))) {
			a = a+1;
			adyMinusbdx = adyMinusbdx+dy;
		} else {
			b = b+1;
			adyMinusbdx = adyMinusbdx-dx;
		}
		if (ay) {
			Screen__drawPixel(x+a, y-b);
		} else {
			if (ax) {
				Screen__drawPixel(x-a, y+b);
			} else {
				Screen__drawPixel(x+a, y+b);
			}
		}
	}
	return 0;
}
var Screen__drawRectangle(var x, var y, var x2, var y2) {
	var i;
	i = y;
	Screen__drawLine(x, i, x2, i);
	while (((i)<(y2))) {
		i = i+1;
		Screen__drawLine(x, i, x2, i);
	}
	return 0;
}
var Screen__drawCircle(var x, var y, var r) {
	var dy;
	var s;
	var r2;
	var x0;
	var x1;
	var y0;
	dy = -r;
	if ((((r)>(181)))||(((r)<(0)))) {
		return 0;
	}

	r2 = r*r;
	while (((r)>(dy))) {
		s = Math__sqrt(r2-(dy*dy));
		x0 = x-s;
		y0 = y+dy;
		x1 = x+s;
		if (((x0)<(0))) {
			x0 = 0;
		}

		if (((x0)>(511))) {
			x0 = 511;
		}

		if (((x1)<(0))) {
			x1 = 0;
		}

		if (((x1)>(511))) {
			x1 = 511;
		}

		if (((y0)<(0))) {
			y0 = 0;
		}

		if (((y0)>(255))) {
			y0 = 255;
		}

		Screen__drawLine(x0, y0, x1, y0);
		dy = dy+1;
	}
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
	var c;
	c = Keyboard__getKey();
	if (c) {
		Memory__poke(24576, c);
	}

	return Memory__peek(24576);
}
var Keyboard__getKey() {
	var x;
	x = Keyboard__getChar();
	if (((x)==(10))) {
		return 128;
	}

	if (((x)==(127))) {
		return 129;
	}

	if (((x)==(27))) {
		x = Keyboard__getChar();
		if (((x)==(0))) {
			return 140;
		}

		if (((x)==(91))) {
			x = Keyboard__getChar();
			if (((x)==(65))) {
				x = 131;
			}

			if (((x)==(66))) {
				x = 133;
			}

			if (((x)==(67))) {
				x = 132;
			}

			if (((x)==(68))) {
				x = 130;
			}

			if (((x)==(53))) {
				x = Keyboard__getChar();
				if (((x)==(126))) {
					x = 136;
				}

			}

			if (((x)==(54))) {
				x = Keyboard__getChar();
				if (((x)==(126))) {
					x = 137;
				}

			}

			if (((x)==(50))) {
				x = Keyboard__getChar();
				if (((x)==(126))) {
					x = 138;
				}

				if (((x)==(52))) {
					x = Keyboard__getChar();
					x = (x-125)+150;
				}

			}

			if (((x)==(51))) {
				x = Keyboard__getChar();
				if (((x)==(126))) {
					x = 139;
				}

			}

			if (((x)==(91))) {
				x = Keyboard__getChar();
				if (((x)==(70))) {
					x = 135;
				}

			}

			if (((x)==(91))) {
				x = Keyboard__getChar();
				if (((x)==(72))) {
					x = 134;
				}

			}

		} else {
			if (((x)==(79))) {
				x = Keyboard__getChar();
				x = (x-80)+141;
			}

		}
	}

	return x;
}
var Keyboard__getChar() {
	var x;
 
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
	var k;
	k = Keyboard__keyPressed();
	while (((k)==(0))) {
		Sys__wait(50);
		k = Keyboard__keyPressed();
	}
	Memory__poke(24576, 0);
	while (Keyboard__keyPressed()) {
		Sys__wait(50);
	}
	Memory__poke(24576, 0);
	return k;
}
var Keyboard__readLine(var message) {
	var s;
	var k;
	s = String__new(256);
	Output__printString(message);
	k = Keyboard__readChar();
	while ((((((k)==(10))))==(0))) {
		s = String__appendChar(s, k);
		k = Keyboard__readChar();
	}
	return s;
}
var Keyboard__readInt(var message) {
	var k;
	var i;
	Output__printString(message);
	i = 0;
	k = Keyboard__readChar();
	while ((((k)>(47)))&&(((k)<(58)))) {
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
var Memory___arena;
var Memory___asize;
var Memory___freep;
var Memory___mem;
var Memory___keyread;
var Memory__init() {
	var i;
	Memory___mem = 0;
	Memory___keyread = 0;
 #ifndef JACK_HACK
 	return 0;
 #endif
	i = 0;
	while (((i)<(24576))) {
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
	if (((addr)<(0))) {
		Sys__error(27);
	}

	if (((addr)>(24576))) {
		Sys__error(28);
	}

	if (((addr)==(24576))) {
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
	if (((addr)<(0))) {
		Sys__error(29);
	}

	if (((addr)>(24576))) {
		Sys__error(30);
	}

	if ((((addr)>(16383)))&&(((addr)<(24576)))) {
		if (Memory___keyread) {
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
	var p;
	var q;
	var end;
	end = Memory___arena+Memory___asize;
	p = Memory___arena;
	while (((p)<(end))) {
		if (((__peek(p+0))>(0))) {
			q = p+__peek(p+0);
			while ((((q)<(end)))&&(((__peek(q+0))>(0)))) {
				__poke(p+0, q-p);
				q = q+__peek(q+0);
			}
		} else {
			if (((__peek(p+0))==(0))) {
				return 0;
			}

		}
		p = p+Math__abs(__peek(p+0));
	}
	return 0;
}
var Memory__checkEmpty() {
	var ok;
	var p;
	var end;
 	return -1;
	end = Memory___arena+Memory___asize;
	p = Memory___arena;
	ok = -1;
	while (((p)<(end))) {
		if (((__peek(p+0))<(0))) {
			Output__printString(Memory__getString(Memory___str0));
			Output__printInt(p);
			Output__printString(Memory__getString(Memory___str1));
			Output__printInt(__peek(p+0));
			Output__println();
			ok = 0;
		} else {
			if (((__peek(p+0))==(0))) {
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
	var p;
	var end;
	var k;
	var tries;
	var i;
	var j;
	var doit;
 #ifndef JACK_HACK
 	p = (var) malloc(sizeof(var)* (size+1));
 	((var*)p)[0] = -(size+1);
 	return ((var)(((var*)p+1))) / sizeof(var);
 #endif
	tries = 0;
	i = 0;
	j = 0;
	if (((size)<(1))) {
		Output__printString(Memory__getString(Memory___str3));
		Output__printInt(size);
		Output__println();
		Sys__error(24);
		return 0;
	}

	while (((tries)<(3))) {
		end = Memory___arena+Memory___asize;
		p = Memory___freep;
		doit = -1;
		while (doit||((((((p)==(Memory___freep))))==(0)))) {
			doit = 0;
			if (((__peek(p+0))>(size))) {
				if ((((size+1))==(__peek(p+0)))) {
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
			if (((p)==(end))) {
				p = Memory___arena;
			}

			if ((((p)<(Memory___arena)))||(((p)>((end-1))))||(((__peek(p+0))==(0)))) {
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
		if (((tries)==(0))) {
			Memory__defrag();
		} else {
			k = Memory___asize;
			Memory___asize = Memory___asize+(size*8)+64;
			i = 0;
			j = Memory___arena+k;
			while (((i)<(j))) {
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
	var pi;
 #ifndef JACK_HACK
 	free(((var*)(p* sizeof(var)))-1);
 	return 0;
 #endif
	if (((p)<(Memory___arena))) {
		Output__printString(Memory__getString(Memory___str13));
		Output__printInt(Memory___arena);
		Output__printString(Memory__getString(Memory___str14));
		Output__printInt(p);
		Output__println();
		Sys__error(25);
		return 0;
	}

	pi = p;
	if ((((pi)<(Memory___arena)))||((((Memory___arena+Memory___asize))<(pi)))||(((__peek(Memory___mem+pi-1))>((-1))))) {
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
	var s;
	var l;
	l = 0;
	s = __peek(str__);
	if (((s)==(0))) {
		return 0;
	}

	while (((0)==((((__peek(s+l))==(0)))))) {
		l = l+1;
	}
	return l;
}
var String__charAt(var __this, var a) {
	var ret;
	ret = __peek(__peek(str__)+a);
	return ret;
}
var String__setCharAt(var __this, var j, var c) {
	var s;
	s = __peek(str__);
	__poke(s+j, c);
	return 0;
}
var String__getArray(var __this) {
	return __peek(str__);
}
var String__appendChar(var __this, var c) {
	var l;
	var i;
	var nl;
	var max;
	var b;
	var d;
	d = __peek(str__);
	if (((__peek(size__))<(1))) {
		Sys__error(12);
	}

	max = __peek(size__);
	l = String__length(__this);
	if (((l)<((max-1)))) {
		__poke(__peek(str__)+l, c);
		__poke(__peek(str__)+l+1, 0);
		return __this;
	}

	nl = (l*2)+4;
	b = Array__new(nl+1);
	i = 0;
	while (((i)<(l))) {
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
	var l;
	var s;
	s = __peek(str__);
	l = String__length(__this);
	if (((l)>(0))) {
		__poke(s+l-1, 0);
	}

	return 0;
}
var String__intValue(var __this) {
	var v;
	var s;
	var d;
	var i;
	var o;
	o = __peek(str__);
	v = 0;
	s = 1;
	d = __peek(o+0);
	i = 1;
	if (((d)==(45))) {
		s = -1;
		d = __peek(o+i);
		i = i+1;
	}

	while ((((d)>(47)))&&(((d)<(58)))) {
		v = v*10;
		v = v+d-48;
		d = __peek(o+i);
		i = i+1;
	}
	return v*s;
}
var String__setInt(var __this, var j) {
	var n;
	var k;
	var s;
	var p;
	p = 0;
	s = __this;
	String__setCharAt(s, 0, 0);
	if (((j)<(0))) {
		j = -j;
		s = String__appendString(s, Memory__getString(String___str0));
	}

	n = 10000;

 	if (sizeof(var) == 8) {
 		n = n * n * n * n * 100;
 	} else if (sizeof(var) == 4) {
 		n = n * n * 10; 
 	} 

	while (((n)>(0))) {
		k = j/n;
		if (((k)>(0))) {
			p = -1;
		}

		if (p) {
			s = String__appendChar(s, k+48);
		}

		j = Math__rem(j, n);
		n = n/10;
	}
	if (((p)==(0))) {
		s = String__appendChar(s, 48);
	}

	return __this;
}
var String__appendFromNative(var __this, var native) {
	var l;
	var i;
	var c;
	var n;
	var s;
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

	while (((i)<(l))) {
 
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
	var s;
	var j;
	var l;
	j = 0;
	l = String__length(__this);
	s = String__new(l+1);
	while (((j)<(l))) {
		s = String__appendChar(s, String__charAt(__this, j));
		j = j+1;
	}
	return s;
}
var String__appendString(var __this, var p) {
	var j;
	var l;
	var s;
	s = __this;
	j = 0;
	l = String__length(p);
	while (((j)<(l))) {
		s = String__appendChar(s, String__charAt(p, j));
		j = j+1;
	}
	return __this;
}
var String__compare(var __this, var s) {
	var p;
	var j;
	var lp;
	var ls;
	var r;
	p = __this;
	lp = String__length(p);
	ls = String__length(s);
	j = 0;
	while ((((j)<(lp)))&&(((j)<(ls)))) {
		r = String__charAt(p, j)-String__charAt(s, j);
		if (r) {
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
var Bytes___addressmask;
var Bytes___bytesize;
var Bytes___isbig;
var Bytes___iswin;
var Bytes___log2;
#define buf__ (__this+0)
#define size__ (__this+1)
#define pos__ (__this+2)
#define string__ (__this+3)
var Bytes__new(var size_in_byte) {
	var __this;
	var i;
	var s;
	__this = Memory__alloc(4);
	Bytes___isbig = Math__isBigEndian();
	Bytes___iswin = Math__isWindows();
	__poke(pos__, 0);
	Bytes___bytesize = Math__sizeOfInt();
	Bytes___addressmask = Bytes___bytesize-1;
	Bytes___log2 = Math__log2(Bytes___bytesize);
	if (((Bytes___log2)<(0))) {
		Bytes___log2 = 0;
	}

	__poke(size__, Math__shiftRight((size_in_byte+Bytes___addressmask), Bytes___log2)+1);
	__poke(buf__, Array__new(__peek(size__)));
	i = 0;
	while (((i)<(__peek(size__)))) {
		__poke(__peek(buf__)+i, 0);
		i = i+1;
	}
	s = 0;
	__poke(string__, s);
	return __this;
}
var Bytes__dispose(var __this) {
	var s;
	s = 0;
	__poke(string__, s);
	Array__dispose(__peek(buf__));
	Memory__deAlloc(__this);
	return 0;
}
var Bytes__alloc(var __this, var s) {
	var nsize;
	var i;
	var l;
	var nbuf;
	var b;
	nsize = Math__shiftRight(s+Bytes___bytesize, Bytes___log2)+1;
	nbuf = Array__new(nsize);
	l = __peek(size__);
	i = 0;
	b = __peek(buf__);
	if (((nsize)<(__peek(size__)))) {
		return 0;
	}

	while (((i)<(l))) {
		__poke(nbuf+i, __peek(b+i));
		i = i+1;
	}
	l = nsize;
	while (((i)<(l))) {
		__poke(nbuf+i, 0);
		i = i+1;
	}
	Array__dispose(__peek(buf__));
	__poke(buf__, nbuf);
	__poke(size__, nsize);
	return 0;
}
var Bytes__getBuffer(var __this) {
	return __peek(buf__);
}
var Bytes__length(var __this) {
	return __peek(pos__);
}
var Bytes__getByte(var __this, var address) {
	var s;
	var a;
	var v;
	s = Math__shiftLeft(address&Bytes___addressmask, 3);
	a = Math__shiftRight(address, Bytes___log2);
	v = __peek(__peek(buf__)+a);
	v = Math__shiftRight(v, s)&255;
	return v;
}
var Bytes__setByte(var __this, var address, var b) {
	var s;
	var a;
	var v;
	var m;
	s = Math__shiftLeft(address&Bytes___addressmask, 3);
	a = Math__shiftRight(address, Bytes___log2);
	m = Math__shiftLeft(255, s);
	v = Math__shiftLeft(b&255, s);
	__poke(__peek(buf__)+a, (__peek(__peek(buf__)+a)&(~m))|v);
	return 0;
}
var Bytes__appendByte(var __this, var b) {
	if (((__peek(size__))<((Math__shiftRight(__peek(pos__)+Bytes___bytesize, Bytes___log2)+1)))) {
		Bytes__alloc(__this, __peek(pos__)+256);
	}

	Bytes__setByte(__this, __peek(pos__), b);
	__poke(pos__, __peek(pos__)+1);
	return 0;
}
var Bytes__append16bit(var __this, var b) {
	Bytes__appendByte(__this, b);
	Bytes__appendByte(__this, Math__shiftRight(b, 8));
	return 0;
}
var Bytes__append32bit(var __this, var b) {
	Bytes__append16bit(__this, b);
	Bytes__append16bit(__this, Math__shiftRight(b, 16));
	return 0;
}
var Bytes__append64bit(var __this, var b) {
	Bytes__append32bit(__this, b);
	Bytes__append32bit(__this, Math__shiftRight(b, 32));
	return 0;
}
var Bytes__append16bitBig(var __this, var b) {
	Bytes__appendByte(__this, Math__shiftRight(b, 8));
	Bytes__appendByte(__this, b);
	return 0;
}
var Bytes__append32bitBig(var __this, var b) {
	Bytes__append16bit(__this, Math__shiftRight(b, 16));
	Bytes__append16bit(__this, b);
	return 0;
}
var Bytes__append64bitBig(var __this, var b) {
	Bytes__append32bit(__this, Math__shiftRight(b, 32));
	Bytes__append32bit(__this, b);
	return 0;
}
var Bytes__appendInt(var __this, var b) {
	if (((Bytes___bytesize)==(8))) {
		if (Bytes___isbig) {
			Bytes__append64bitBig(__this, b);
		} else {
			Bytes__append64bit(__this, b);
		}
		return 0;
	}

	if (((Bytes___bytesize)==(4))) {
		if (Bytes___isbig) {
			Bytes__append32bitBig(__this, b);
		} else {
			Bytes__append32bit(__this, b);
		}
		return 0;
	}

	if (Bytes___isbig) {
		Bytes__append16bitBig(__this, b);
	} else {
		Bytes__append16bit(__this, b);
	}
	return 0;
}
var Bytes__appendUtf8(var __this, var codepoint) {
	if (((codepoint)<(128))) {
		Bytes__appendByte(__this, codepoint);
		return 0;
	}

	return 0;
}
var Bytes__appendUtf16(var __this, var codepoint) {
	if (((codepoint)<(65536))) {
		Bytes__append16bit(__this, codepoint);
		return 0;
	}

	return 0;
}
var Bytes__appendNativeChar(var __this, var codepoint) {
	if (Bytes___iswin) {
		Bytes__appendUtf16(__this, codepoint);
	} else {
		Bytes__appendUtf8(__this, codepoint);
	}
	return 0;
}
var Bytes__getStringNativePointer(var __this) {
	var b;
	var c;
	b = __peek(buf__);
	c = __peek(string__);
 	b = b * sizeof(var) + c - c;
	return b;
}
var Bytes__setStringToNative(var __this, var name) {
	var i;
	var l;
	var c;
	var p;
	var n;
	var b;
	b = __this;
	__poke(pos__, 0);
	n = __peek(string__);
	l = String__length(name);
	if (((l)<(0))) {
		return 0;
	}

	i = 0;
	while (((i)<(l))) {
		c = String__charAt(name, i);
		Bytes__appendNativeChar(b, c);
		i = i+1;
	}
	__poke(string__, n);
	p = __peek(pos__);
	Bytes__appendNativeChar(b, 0);
	__poke(pos__, p);
	return 0;
}
#undef buf__
#undef size__
#undef pos__
#undef string__
#endif

#ifdef JACK_IMPLEMENTATION
var File___str0[] = {78,101,103,97,116,105,118,101,32,83,116,114,105,110,103,32,108,101,110,103,116,104,46,0};
#define fd__ (__this+0)
#define is_write__ (__this+1)
#define buffer__ (__this+2)
#define name__ (__this+3)
var File__new(var path, var writing) {
	var __this;
	var l;
	__this = Memory__alloc(4);
	__poke(fd__, -1);
	__poke(is_write__, writing);
	l = String__length(path);
	if (((l)<(0))) {
		Output__printString(Memory__getString(File___str0));
		Sys__error(-1);
		return __this;
	}

	__poke(name__, String__copy(path));
	return __this;
}
var File__dispose(var __this) {
	var f;
	f = __peek(fd__);
	if (__peek(name__)) {
		String__dispose(__peek(name__));
	}

	if (((__peek(fd__))<(0))) {
		Memory__deAlloc(__this);
		return 0;
	}

 	fclose((FILE*)f);
	Memory__deAlloc(__this);
	return 0;
}
var File__getName(var __this) {
	return __peek(name__);
}
var File__isdir(var __this) {
	var l;
	var s;
	var f;
	var b;
	l = String__length(__peek(name__));
	if (((l)<(1))) {
		return 0;
	}

	b = Bytes__new(256);
	Bytes__setStringToNative(b, __peek(name__));
	s = Bytes__getStringNativePointer(b);
	f = 0;
 #ifdef _WIN32
 	if (_waccess((wchar_t*)s, 0)) {
 		_wstat64((wchar_t*)s, &File__status);
 		if ((File__status.st_mode & S_IFDIR) != 0) {
 			f =  -1;
 		}
 	}
 #else
 	if (access((char*)s, 0)) {
 		stat((char*)s, &File__status);
 		if ((File__status.st_mode & S_IFDIR) != 0) {
 			f = -1;
 		}
 	}
 #endif
	Bytes__dispose(b);
	return f;
}
var File__open(var __this) {
	var l;
	var m;
	var s;
	var f;
	var writing;
	var b;
	if (((__peek(fd__))>(-1))) {
		return 0;
	}

	writing = __peek(is_write__);
	l = String__length(__peek(name__));
	if (((l)<(1))) {
		return 0;
	}

	if (File__isdir(__this)) {
		return 0;
	}

	b = Bytes__new(256);
	Bytes__setStringToNative(b, __peek(name__));
	s = Bytes__getStringNativePointer(b);
	f = -1;
 #ifdef _WIN32
 	m = (var)L"rb";
 	if (writing) {m = (var)L"w+b";}
 	f = 0;
 	_wfopen_s((FILE**)&f, (wchar_t*)s, (wchar_t*)m);
 	if(((var*)f)==NULL) f = -1;
 #else
 	m = (var)"rb";
 	if (writing) {m = (var)"w+b";}
 	f = (var)fopen((char*)s, (char*)m);
 	if(((var*)f)==NULL) f = -1;
 #endif
	__poke(fd__, f);
	Bytes__dispose(b);
	return -1;
}
var File__readByte(var __this) {
	var b;
	var f;
	f = __peek(fd__);
	if (((f)<(0))) {
		File__open(__this);
		f = __peek(fd__);
		if (((f)<(0))) {
			return -1;
		}

	}

	b = 0;
 	if (fread(&b, 1, 1, (FILE*)f) < 1) { return -1;};
 	b = b & 255;
	return b;
}
var File__seek(var __this, var position) {
	var b;
	var f;
	var p;
	f = __peek(fd__);
	p = position;
	if (((f)<(0))) {
		File__open(__this);
		f = __peek(fd__);
		if (((f)<(0))) {
			return -1;
		}

	}

 	b = fseek((FILE*)f, (long int)p, SEEK_SET);
	return b;
}
var File__writeByte(var __this, var data) {
	var r;
	var f;
	var b;
	b = data;
	if (((__peek(fd__))<(0))) {
		File__open(__this);
		if (((__peek(fd__))<(0))) {
			return -1;
		}

	}

	f = __peek(fd__);
 	r = fwrite(&b, 1, 1, (FILE*)f);
	return r;
}
var File__writeString(var __this, var s) {
	var i;
	var l;
	var c;
	i = 0;
	l = String__length(s);
	while (((i)<(l))) {
		c = String__charAt(s, i);
		File__writeUtf8(__this, c);
		i = i+1;
	}
	return i;
}
var File__readLine(var __this, var buff) {
	var c;
	c = File__readUtf8(__this);
	if (((c)==(0))) {
		return 0;
	}

	String__setCharAt(buff, 0, 0);
	while ((((c)>(0)))) {
		buff = String__appendChar(buff, c);
		if (((c)==(10))) {
			c = 0;
		} else {
			c = File__readUtf8(__this);
		}
	}
	return buff;
}
var File__readUtf8(var __this) {
	var c;
	var b;
	c = File__readByte(__this);
	if ((((c)<(1)))||(((c)>(255)))) {
		return 0;
	}

	if (((c)<(128))) {
		return c;
	} else {
		if (((c)<(192))) {
			return c;
		} else {
			if (((c)<(224))) {
				c = c&31;
				b = File__readByte(__this)&63;
				c = b+(c*64);
				return c;
			} else {
				if (((c)<(240))) {
					c = c&15;
					b = File__readByte(__this)&63;
					c = (b*64)+(c*4096);
					b = File__readByte(__this)&63;
					c = c+b;
					return c;
				} else {
					if (((c)<(248))) {
						c = c&7;
						b = File__readByte(__this)&63;
						c = (b*4096)+(c*262144);
						b = File__readByte(__this)&63;
						c = (b*64)+c;
						b = File__readByte(__this)&63;
						c = c+b;
						return c;
					} else {
						if (((c)<(252))) {
							c = c&3;
							b = File__readByte(__this)&63;
							c = (b*262144)+(c*16777216);
							b = File__readByte(__this)&63;
							c = (b*4096)+c;
							b = File__readByte(__this)&63;
							c = (b*64)+c;
							b = File__readByte(__this)&63;
							c = c+b;
							return c;
						} else {
							c = c&3;
							b = File__readByte(__this)&63;
							c = (b*16777216)|(c*1073741824);
							b = File__readByte(__this)&63;
							c = (b*262144)|c;
							b = File__readByte(__this)&63;
							c = (b*4096)|c;
							b = File__readByte(__this)&63;
							c = (b*64)|c;
							b = File__readByte(__this)&63;
							c = c|b;
							return c;
						}
					}
				}
			}
		}
	}
	return c;
}
var File__writeUtf8(var __this, var data) {
	if (data&3221225472) {
		File__writeByte(__this, ((data/1073741824)&3)|252);
		File__writeByte(__this, ((data/16777216)&63)|128);
		File__writeByte(__this, ((data/262144)&63)|128);
		File__writeByte(__this, ((data/4096)&63)|128);
		File__writeByte(__this, ((data/64)&63)|128);
		File__writeByte(__this, ((data)&63)|128);
	} else {
		if (((data)>(2097152))) {
			File__writeByte(__this, ((data/16777216)&3)|248);
			File__writeByte(__this, ((data/262144)&63)|128);
			File__writeByte(__this, ((data/4096)&63)|128);
			File__writeByte(__this, ((data/64)&63)|128);
			File__writeByte(__this, ((data)&63)|128);
		} else {
			if (((data)>(65535))) {
				File__writeByte(__this, ((data/262144)&7)|240);
				File__writeByte(__this, ((data/4096)&63)|128);
				File__writeByte(__this, ((data/64)&63)|128);
				File__writeByte(__this, ((data)&63)|128);
			} else {
				if (((data)>(2047))) {
					File__writeByte(__this, ((data/4096)&15)|224);
					File__writeByte(__this, ((data/64)&63)|128);
					File__writeByte(__this, ((data)&63)|128);
				} else {
					if (((data)>(127))) {
						File__writeByte(__this, ((data/64)&31)|192);
						File__writeByte(__this, ((data)&63)|128);
					} else {
						File__writeByte(__this, ((data)&127));
					}
				}
			}
		}
	}
	return 0;
}
var File__writeInt16(var __this, var d) {
	File__writeByte(__this, d&255);
	return File__writeByte(__this, (d/256)&255);
}
var File__writeInt32(var __this, var d) {
	File__writeInt16(__this, d);
	return File__writeInt16(__this, d/65536);
}
var File__writeInt64(var __this, var d) {
	File__writeInt32(__this, d);
	return File__writeInt32(__this, (d/2147483648)/2);
}
var File__readInt16(var __this) {
	var d;
	d = File__readByte(__this);
	d = d+(File__readByte(__this)*256);
	return d;
}
var File__readInt32(var __this) {
	var d;
	d = File__readInt16(__this);
	d = d+(File__readInt16(__this)*65536);
	return d;
}
var File__readInt64(var __this) {
	var d;
	d = File__readInt32(__this);
	d = d+((File__readInt32(__this)*2147483648)*2);
	return d;
}
var File__remove(var __this) {
	var l;
	var m;
	var b;
	var s;
	if (((__peek(name__))==(0))) {
		return 0;
	}

	l = String__length(__peek(name__));
	if (((l)<(1))) {
		return 0;
	}

	b = Bytes__new(256);
	Bytes__setStringToNative(b, __peek(name__));
	s = Bytes__getStringNativePointer(b);
	if (((File__isdir(__this))==(0))) {
 #ifdef _WIN32
 	m = (var)_wremove((wchar_t*)s);
 #else
 	m = (var)remove((char*)s);
 #endif
	} else {
 #ifdef _WIN32
 	m = (var)_wrmdir((wchar_t*)s);
 #else
 	m = (var)rmdir((char*)s);
 #endif
	}
	Bytes__dispose(b);
	return (((m)==(0)));
}
var File__mkdir(var __this) {
	var l;
	var m;
	var s;
	var b;
	if (((__peek(name__))==(0))) {
		return 0;
	}

	l = String__length(__peek(name__));
	if (((l)<(1))) {
		return 0;
	}

	b = Bytes__new(256);
	Bytes__setStringToNative(b, __peek(name__));
	s = Bytes__getStringNativePointer(b);
 #ifdef _WIN32
 	m = (var)_wmkdir((wchar_t*)s);
 #else
 	m = (var)mkdir((char*)s, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
 #endif
	return (((m)==(0)));
}
var File__list(var __this) {
	var i;
	var l;
	var b;
	var s;
	var na;
	var n;
	var a;
	var str;
	if (((__peek(name__))==(0))) {
		return 0;
	}

	l = String__length(__peek(name__));
	if (((l)<(1))) {
		return 0;
	}

	na = String__copy(__peek(name__));
	if ((((((String__charAt(na, l-1))==(47))))==(0))) {
		na = String__appendChar(na, 47);
	}

	str = Bytes__new(256);
	Bytes__setStringToNative(str, na);
	n = Bytes__getStringNativePointer(str);
	b = Buffer__new(10);
	i = 0;
 // C code
 	i = i + 1;
#ifdef _WIN32
	l = wcslen((wchar_t*)n);
	if (((wchar_t*)n)[l - 1] != L'*') {
		Bytes__appendNativeChar(str, L'*');
 		n = Bytes__getStringNativePointer(str);
 	}
	for (i = 0; i < l; i++) {
		if (((wchar_t*)n)[i] == '/') {
			((wchar_t*)n)[i] = '\\';
 		}
 	}
 		
 	if((File__hFind = FindFirstFileW((LPCWSTR)n, &File__FindFileData))
 	 	!= INVALID_HANDLE_VALUE)
 	{
 		do {
         		a = (var)File__FindFileData.cFileName;
			if (((wchar_t*)a)[0] == L'.' && 
 			 	(((((wchar_t*)a)[1] == L'.') && 
 					(((wchar_t*)a)[2] == 0))
 					|| (((wchar_t*)a)[1] == 0)))
 			{} else {
 				s=String__copy(na);
 				s=String__appendFromNative(s, a);
 				if (File__FindFileData.dwFileAttributes & 
 					FILE_ATTRIBUTE_DIRECTORY) { 
 					s=String__appendChar(s, 47); 
 				}
 				Buffer__append(b, s);
			}
 			i = i + 1;
		} while(FindNextFileW(File__hFind, &File__FindFileData));
 		FindClose(File__hFind);
	}
#else
 	//n = n * sizeof(var);
 	//printf("OPNE %s\n", n);
 	if((File__dir = opendir((char*)n)) != 0){
    		while((File__dp = readdir(File__dir)) != 0){
 			a = (var)File__dp->d_name;
 			if (((char*)a)[0] == '.' && 
 			 	(((((char*)a)[1] == '.') && (((char*)a)[2] == 0))
 					|| (((char*)a)[1] == 0)))
 			{} else {
 				s=String__copy(na);
 				s=String__appendFromNative(s, a);
 				
 				if (File__dp->d_type == DT_DIR) {
 					s=String__appendChar(s, 47); 
 				}
 				Buffer__append(b, s);
 			}
 			i = i + 1;
     		}
     		closedir(File__dir);
 	}
#endif

	Bytes__dispose(str);
	String__dispose(na);
	return b;
}
#undef fd__
#undef is_write__
#undef buffer__
#undef name__
#endif

#ifdef JACK_IMPLEMENTATION
var Sys___str0[] = {69,114,114,111,114,40,0};
var Sys___str1[] = {41,0};
var Sys___in_error;
var Sys___args_;
var Sys__init() {
	Sys___in_error = 0;
	Memory__init();
 
#ifndef JACK_HACK
#endif

	Math__init();
	Output__init();
	Screen__init();
	Keyboard__init();
	Main__main();
	return 0;
}
var Sys__deInit() {
	var b;
	if (Sys___args_) {
		b = Sys___args_;
		Buffer__dispose(b);
		Sys___args_ = 0;
	}

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
	if (Sys___in_error) {
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
var Sys__args() {
	var a;
	var s;
	var i;
	var isq;
	var b;
	if (Sys___args_) {
		return Sys___args_;
	}

	Sys___args_ = Buffer__new(1);
	i = 0;
 	isq = Sys__argc__;
	while (((i)<(isq))) {
 		a = (var)Sys__argv__[i];
		s = String__new(255);
		s = String__appendFromNative(s, a);
		b = Sys___args_;
		Buffer__append(b, s);
		i = i+1;
	}
	return Sys___args_;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Hash___str0[] = {64,0};
var Hash___str1[] = {32,0};
var Hash___str2[] = {72,65,83,72,32,100,101,112,116,104,58,61,0};
var Hash___str3[] = {32,115,105,122,101,58,61,0};
var Hash___str4[] = {59,0};
#define size___ (__this+0)
#define mask__ (__this+1)
#define table__ (__this+2)
var Hash__new(var size) {
	var __this;
	var i;
	__this = Memory__alloc(3);
	__poke(size___, Math__shiftLeft(1, Math__log2(size)));
	__poke(mask__, __peek(size___)-1);
	__poke(table__, Array__new(__peek(size___)));
	i = 0;
	while (((i)<(__peek(size___)))) {
		__poke(__peek(table__)+i, 0);
		i = i+1;
	}
	return __this;
}
var Hash__dispose(var __this) {
	var s;
	var n;
	var next;
	var i;
	i = 0;
	while (((i)<(__peek(size___)))) {
		n = __peek(__peek(table__)+i);
		while (n) {
			next = __peek(n+0);
			s = __peek(n+2);
			String__dispose(s);
			Array__dispose(n);
			n = next;
		}
		i = i+1;
	}
	Array__dispose(__peek(table__));
	Memory__deAlloc(__this);
	return 0;
}
var Hash__stats(var __this) {
	var s;
	var n;
	var next;
	var i;
	var max;
	var depth;
	i = 0;
	max = 0;
	while (((i)<(__peek(size___)))) {
		n = __peek(__peek(table__)+i);
		depth = 0;
		while (((0)==((((n)==(0)))))) {
			depth = depth+1;
			next = __peek(n+0);
			s = __peek(n+2);
			Output__printString(Memory__getString(Hash___str0));
			Output__printInt(i);
			Output__printString(Memory__getString(Hash___str1));
			Output__printString(s);
			Output__printInt(depth);
			Output__println();
			n = next;
		}
		if (((depth)>(max))) {
			max = depth;
		}

		i = i+1;
	}
	Output__printString(Memory__getString(Hash___str2));
	Output__printInt(max);
	Output__printString(Memory__getString(Hash___str3));
	Output__printInt(__peek(size___));
	Output__printString(Memory__getString(Hash___str4));
	Output__println();
	return 0;
}
var Hash__hash(var __this, var k) {
	var h;
	var l;
	var i;
	var t;
	i = 1;
	h = 0;
	l = String__length(k);
	if (((l)>(0))) {
		h = String__charAt(k, 0);
	}

	while (((i)<(l))) {
		i = i+1;
		t = String__charAt(k, i);
		h = Math__xor(Math__shiftLeft(h, 3), t);
	}
	return h;
}
var Hash__add(var __this, var k, var val) {
	var p;
	var hhh;
	var cmp;
	var a;
	var n;
	var r;
	var prev;
	hhh = Hash__hash(__this, k);
	p = hhh&__peek(mask__);
	a = __peek(__peek(table__)+p);
	r = 0;
	if (((a)==(0))) {
		r = Array__new(4);
		__poke(r+0, 0);
		__poke(__peek(table__)+p, r);
	} else {
		n = a;
		prev = 0;
		while ((((r)==(0)))&&((((((n)==(0))))==(0)))) {
			if (((__peek(n+1))==(hhh))) {
				cmp = String__compare(k, __peek(n+2));
				if (((cmp)>(0))) {
					r = Array__new(4);
					__poke(r+0, n);
					if (((prev)==(0))) {
						__poke(__peek(table__)+p, r);
					} else {
						__poke(prev+0, r);
					}
				} else {
					if (((cmp)==(0))) {
						if (__peek(n+3)) {
							Dispose__dispose(__peek(n+3));
						}

						__poke(n+3, val);
						return 0;
					}

				}
			} else {
				if (((hhh)>(__peek(n+1)))) {
					r = Array__new(4);
					__poke(r+0, n);
					if (((prev)==(0))) {
						__poke(__peek(table__)+p, r);
					} else {
						__poke(prev+0, r);
					}
				}

			}
			prev = n;
			if ((((r)==(0)))&&(((__peek(n+0))==(0)))) {
				r = Array__new(4);
				__poke(r+0, 0);
				__poke(n+0, r);
				n = 0;
			} else {
				n = __peek(n+0);
			}
		}
	}
	if (r) {
		__poke(r+1, hhh);
		__poke(r+2, String__copy(k));
		__poke(r+3, val);
	}

	return 0;
}
var Hash__get(var __this, var k) {
	var p;
	var h;
	var cmp;
	var a;
	var n;
	h = Hash__hash(__this, k);
	p = h&__peek(mask__);
	a = __peek(table__)+p;
	a = __peek(__peek(table__)+p);
	if (((a)==(0))) {
		return -1;
	} else {
		n = a;
		while (((0)==((((n)==(0)))))) {
			if (((__peek(n+1))==(h))) {
				cmp = String__compare(k, __peek(n+2));
				if (((cmp)>(0))) {
					return -1;
				} else {
					if (((cmp)==(0))) {
						return __peek(n+3);
					}

				}
			} else {
				if (((h)>(__peek(n+1)))) {
					return -1;
				}

			}
			n = __peek(n+0);
		}
	}
	return -1;
}
#undef size___
#undef mask__
#undef table__
#endif

#ifdef JACK_IMPLEMENTATION
var Output___x;
var Output___y;
var Output___f;
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
	var xx;
	var yy;
	Output___x = col;
	Output___y = row;
	if (((Output___x)<(0))) {
		Output___x = 0;
	}

	if (((Output___x)>(63))) {
		Output___x = 63;
	}

	if (((Output___y)<(0))) {
		Output___y = 0;
	}

	if (((Output___y)>(22))) {
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
	var i;
	var l;
	var c;
	i = 0;
	l = String__length(s);
	while (((i)<(l))) {
		c = String__charAt(s, i);
		Output__printChar(c);
		i = i+1;
	}
	return 0;
}
var Output__println() {
	Output___y = Output___y+1;
	if (((Output___y)>(22))) {
		Output___y = 22;
	}

	Output___x = 0;
 	putc('\n', stdout);
	return 0;
}
var Output__printChar(var c) {
	var xx;
	var yy;
	var i;
	var j;
	var l;
	var p;
	var chr;
	var m;
	var d;
	if ((((c)>(1114111)))||(((c)<(0)))) {
		return 0;
	}

	d = c;
	if ((((c)<(32)))||(((c)>(126)))) {
		c = 32;
	}

	xx = Output___x;
	yy = Output___y;
	chr = Font__get(Output___f, c);
	if (xx&1) {
		m = 255;
	} else {
		m = 255*256;
	}
	i = 0;
	j = 0;
	while (((i)<(11))) {
		l = ((yy*11)+i)*32;
		l = l+(xx/2);
		l = l+16384;
		p = Memory__peek(l);
		if ((xx&1)) {
			p = (p&m)|(__peek(chr+j)*256);
		} else {
			p = (p&m)|(__peek(chr+j)&255);
		}
		Memory__poke(l, p);
		l = l+32;
		if (((i)<(10))) {
			p = Memory__peek(l);
			if (xx&1) {
				p = (p&m)|(__peek(chr+j)&~m);
			} else {
				p = (p&m)|((__peek(chr+j)/256)&255);
			}
			Memory__poke(l, p);
		}

		i = i+2;
		j = j+1;
	}
 	printf("%c", (char)d);
 	fflush(stdout);
	Output___x = Output___x+1;
	if (((Output___x)>(63))) {
		Output___x = 0;
		Output___y = Output___y+1;
		if (((Output___y)>(22))) {
			Output___y = 22;
		}

	}

	return 0;
}
var Output__printInt(var c) {
	var s;
	s = String__new(8);
	s = String__setInt(s, c);
	Output__printString(s);
	String__dispose(s);
	return 0;
}
var Output__backSpace() {
	var xx;
	var yy;
	Output___x = Output___x-1;
	if (((Output___x)<(0))) {
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
#define buffer__ (__this+0)
#define size__ (__this+1)
#define pos__ (__this+2)
var Buffer__new(var initial) {
	var __this;
	var i;
	__this = Memory__alloc(3);
	__poke(buffer__, Array__new(initial));
	__poke(size__, initial);
	__poke(pos__, 0);
	i = 0;
	while (((i)<(initial))) {
		__poke(__peek(buffer__)+i, 0);
		i = i+1;
	}
	return __this;
}
var Buffer__dispose(var __this) {
	var i;
	i = 0;
	while (((i)<(__peek(size__)))) {
		Dispose__dispose(__peek(__peek(buffer__)+i));
		i = i+1;
	}
	Array__dispose(__peek(buffer__));
	Memory__deAlloc(__this);
	return 0;
}
var Buffer__getAt(var __this, var p) {
	return __peek(__peek(buffer__)+p);
}
var Buffer__setAt(var __this, var p, var data) {
	var r;
	Buffer__checkSize(__this, p);
	r = __peek(__peek(buffer__)+p);
	__poke(__peek(buffer__)+p, data);
	return r;
}
var Buffer__append(var __this, var data) {
	var i;
	i = __peek(pos__);
	Buffer__checkSize(__this, __peek(pos__));
	__poke(__peek(buffer__)+__peek(pos__), data);
	__poke(pos__, __peek(pos__)+1);
	return i;
}
var Buffer__insertSortedStr(var __this, var q) {
	var i;
	i = Buffer__append(__this, q);
	return i;
}
var Buffer__remove(var __this, var q) {
	var s;
	var i;
	var j;
	i = 0;
	j = 0;
	while (((i)<(__peek(pos__)))) {
		s = __peek(__peek(buffer__)+i);
		if (((s)==(q))) {
			j = j-1;
		}

		__poke(__peek(buffer__)+i, __peek(__peek(buffer__)+j));
		i = i+1;
		j = j+1;
	}
	__poke(pos__, i);
	if (((i)==(j))) {
		return 0;
	}

	return q;
}
var Buffer__indexOfStr(var __this, var q) {
	var s;
	var i;
	i = 0;
	while (((i)<(__peek(pos__)))) {
		s = __peek(__peek(buffer__)+i);
		if (((String__compare(s, q))==(0))) {
			return i;
		}

		i = i+1;
	}
	return -1;
}
var Buffer__checkSize(var __this, var idx) {
	var b;
	var i;
	var ns;
	if (((idx)>((__peek(size__)-1)))) {
		ns = __peek(size__)+idx+32;
		b = Array__new(ns);
		i = 0;
		while (((i)<(__peek(pos__)))) {
			__poke(b+i, __peek(__peek(buffer__)+i));
			i = i+1;
		}
		while (((i)<(ns))) {
			__poke(b+i, 0);
			i = i+1;
		}
		__poke(size__, ns);
		Array__dispose(__peek(buffer__));
		__poke(buffer__, b);
	}

	return 0;
}
var Buffer__getArray(var __this) {
	return __peek(buffer__);
}
var Buffer__getSize(var __this) {
	return __peek(pos__);
}
#undef buffer__
#undef size__
#undef pos__
#endif

#ifdef JACK_IMPLEMENTATION
var Dispose__dispose(var obj) {
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
	if (((a)<(0))) {
		return -a;
	}

	return a;
}
var Math__multiply(var x, var y) {
	var sum;
	var j;
	var b;
	var shiftedX;
	sum = 0;
	shiftedX = x;
	if ((((x)<(1)))||(((y)<(1)))) {
		return 0;
	}

	j = 0;
	b = 1;
	while (((j)<(16))) {
		if (y&b) {
			sum = sum+shiftedX;
		}

		b = b+b;
		shiftedX = shiftedX+shiftedX;
		j = j+1;
	}
	return sum;
}
var Math__divide(var x, var y) {
	var q;
	if ((((x)<(0)))||(((y)<(1)))) {
		return 0;
	}

	if (((y)>(x))) {
		return 0;
	}

	q = Math__divide(x, y+y);
	if ((((x-((q+q)*y)))<(y))) {
		return q+q;
	}

	return (q+q)+1;
}
var Math__min(var x, var y) {
	if (((x)<(y))) {
		return x;
	}

	return y;
}
var Math__max(var x, var y) {
	if (((x)>(y))) {
		return x;
	}

	return y;
}
var Math__sqrt(var x) {
	var y;
	var j;
	var y2j;
	var n2;
	var xp;
	if (((x)<(1))) {
		return 0;
	}

	xp = x+1;
	y = 0;
	n2 = 128;
	j = 7;
	while (((j)>(-1))) {
		y2j = y+n2;
		y2j = y2j*y2j;
		if (((y2j)<(xp))) {
			y = y+n2;
		}

		n2 = n2/2;
		j = j-1;
	}
	return y;
}
var Math__shiftLeft(var value, var shift) {
	while (((shift)>(0))) {
		value = value*2;
		shift = shift-1;
	}
	return value;
}
var Math__shiftRight(var value, var shift) {
	while (((shift)>(0))) {
		value = value/2;
		shift = shift-1;
	}
	return value;
}
var Math__rem(var a, var b) {
	var c;
	if (((b)==(0))) {
		return 0;
	}

	c = a/b;
	c = c*b;
	return a-c;
}
var Math__xor(var a, var b) {
	var c;
	c = a|b;
	c = c&(~((a)&(b)));
	return c;
}
var Math__log2(var n) {
	var r;
	r = 0;
	if (((n)==(0))) {
		return -1;
	}

	while (((n)>(1))) {
		n = Math__shiftRight(n, 1);
		r = r+1;
	}
	return r;
}
var Math__sizeOfInt() {
	var s;
 	s = sizeof(var);
	return s;
}
var Math__isBigEndian() {
	var s;
 	int x = 1;
 	char *y = (char*)&x;
 	s = 0;
 	if (!y[0]) { s = -1;}
	return s;
}
var Math__isWindows() {
	var s;
	s = 0;
 #ifdef _WIN32
 	s = -1;
 #endif
	return s;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Main___str0[] = {83,116,97,114,116,46,0};
var Main___str1[] = {83,121,115,0};
var Main___str2[] = {83,116,114,105,110,103,0};
var Main___str3[] = {70,105,108,101,0};
var Main___str4[] = {77,97,116,104,0};
var Main___str5[] = {66,121,116,101,115,0};
var Main__main() {
	Output__printString(Memory__getString(Main___str0));
	Output__println();
	Sys__args();
	Sys__wait(10);
	Sys__deInit();
	Unit__setLevel(2);
	Unit__clear(2);
	Unit__run(0, Memory__getString(Main___str1), Memory__checkEmpty());
	Unit__run(0, Memory__getString(Main___str2), UnitString__isOk(0));
	Unit__run(0, Memory__getString(Main___str3), UnitFile__isOk(0));
	Unit__run(0, Memory__getString(Main___str4), UnitMath__isOk(0));
	Unit__run(0, Memory__getString(Main___str5), UnitBytes__isOk(0));
	Unit__isOk();
	Output__println();
}
#endif

