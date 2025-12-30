
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

#ifndef JACK_MathsToo_H
#define JACK_MathsToo_H
var MathsToo__mod(var a, var b);
#endif


#if 0

#endif

#ifndef JACK_Square_H
#define JACK_Square_H
var Square__new(var id);
var Square__getId(var __this);
var Square__isFlag(var __this);
var Square__setBomb(var __this, var bomb);
var Square__setFlag(var __this, var flag);
var Square__isBomb(var __this);
var Square__isHidden(var __this);
var Square__setHidden(var __this, var hidden);
var Square__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_View_H
#define JACK_View_H
var View__init();
var View__showMessage(var message);
var View__moveCursor();
var View__eraseMessage(var length);
var View__showLocatedBombsMessage(var located, var total);
var View__getSquarePosition(var i, var j);
var View__drawFrame();
var View__showHelp();
var View__drawFail(var location);
var View__drawHidden(var location);
var View__drawBlank(var location);
var View__drawMine(var location);
var View__drawExplosion(var location);
var View__drawSelected(var location);
var View__drawFlag(var location);
var View__drawFlagSelected(var location);
var View__draw1(var location);
var View__draw2(var location);
var View__draw3(var location);
var View__draw4(var location);
var View__draw5(var location);
var View__draw6(var location);
var View__draw7(var location);
var View__draw8(var location);
#endif


#if 0

#endif

#ifndef JACK_Model_H
#define JACK_Model_H
var Model__init();
var Model__new();
var Model__getColumns();
var Model__getRows();
var Model__getId(var i, var j);
var Model__getColumn(var id);
var Model__getRow(var id);
var Model__setBombs(var __this, var bombs, var randomSeed);
var Model__getBombs(var __this);
var Model__getSquareById(var __this, var id);
var Model__getSquare(var __this, var i, var j);
var Model__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Random_H
#define JACK_Random_H
var Random__new(var seed, var range);
var Random__mod(var a, var b);
var Random__next(var __this);
var Random__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_Image_H
#define JACK_Image_H
var Image__newBitmap(var width, var height);
var Image__newDelta(var size, var xOffset, var yOffset, var width, var height);
var Image__newRender(var x, var y, var width, var height);
var Image__newCompressed(var width, var height, var length);
var Image__dispose(var __this);
var Image__disposeCompressed(var __this);
var Image__getBitmap(var __this);
var Image__getLength(var __this);
var Image__getWidth(var __this);
var Image__getHeight(var __this);
var Image__getData(var __this);
var Image__getDataLength(var __this);
var Image__isRender(var __this);
var Image__resetRender(var __this, var x, var y);
var Image__push(var __this, var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p);
var Image__draw(var __this, var x, var y);
var Image__drawVScale(var __this, var x, var y, var height);
var Image__drawColVScale(var __this, var x, var y, var col, var height);
var Image__drawDelta(var __this, var x, var y);
var Image__pushRender(var __this);
#endif


#if 0

#endif

#ifndef JACK_NandMines_H
#define JACK_NandMines_H
var NandMines__init();
var NandMines__new();
var NandMines__run();
var NandMines__restart(var __this);
var NandMines__randomizeBombs(var __this, var randomSeed);
var NandMines__showHelpDialog(var __this);
var NandMines__paintGameBoard(var __this);
var NandMines__moveHorizontal(var __this, var right);
var NandMines__moveHorizontalStartingIn(var __this, var i, var j, var right);
var NandMines__moveVertical(var __this, var down);
var NandMines__moveVerticalStartingIn(var __this, var i, var j, var down);
var NandMines__toggleFlag(var __this);
var NandMines__clearSquare(var __this);
var NandMines__checkComplete(var __this);
var NandMines__clearBlanks(var __this);
var NandMines__getMines(var __this, var i, var j);
var NandMines__paintSelected(var __this);
var NandMines__paintSquares(var __this);
var NandMines__paintSquare(var __this, var i, var j);
var NandMines__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_ListNode_H
#define JACK_ListNode_H
var ListNode__new(var value);
var ListNode__setValue(var __this, var value);
var ListNode__setNext(var __this, var next);
var ListNode__setPrevious(var __this, var previous);
var ListNode__getPrevious(var __this);
var ListNode__getValue(var __this);
var ListNode__getNext(var __this);
var ListNode__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_TitleImage_H
#define JACK_TitleImage_H
var TitleImage__newImage();
#endif


#if 0

#endif

#ifndef JACK_LinkedList_H
#define JACK_LinkedList_H
var LinkedList__new();
var LinkedList__addFirst(var __this, var value);
var LinkedList__addLast(var __this, var value);
var LinkedList__removeFirst(var __this);
var LinkedList__removeLast(var __this);
var LinkedList__getSize(var __this);
var LinkedList__dispose(var __this);
#endif


#if 0

#endif

#ifndef JACK_HelpImage_H
#define JACK_HelpImage_H
var HelpImage__newImage();
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
var MathsToo__mod(var a, var b) {
	var i = 0;
	i = a/b;
	return a-(i*b);
}
#endif

#ifdef JACK_IMPLEMENTATION
#define _id__ (__this+0)
#define _bomb__ (__this+1)
#define _hidden__ (__this+2)
#define _flag__ (__this+3)
var Square__new(var id) {
	var __this;
	__this = Memory__alloc(4);
	__poke(_id__, id);
	__poke(_bomb__, 0);
	__poke(_flag__, 0);
	__poke(_hidden__, -1);
	return __this;
}
var Square__getId(var __this) {
	return __peek(_id__);
}
var Square__isFlag(var __this) {
	return __peek(_flag__);
}
var Square__setBomb(var __this, var bomb) {
	__poke(_bomb__, bomb);
	return 0;
}
var Square__setFlag(var __this, var flag) {
	__poke(_flag__, flag);
	return 0;
}
var Square__isBomb(var __this) {
	return __peek(_bomb__);
}
var Square__isHidden(var __this) {
	return __peek(_hidden__);
}
var Square__setHidden(var __this, var hidden) {
	__poke(_hidden__, hidden);
	return 0;
}
var Square__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#undef _id__
#undef _bomb__
#undef _hidden__
#undef _flag__
#endif

#ifdef JACK_IMPLEMENTATION
var View___str0[] = {76,111,99,97,116,101,100,32,98,111,109,98,115,58,32,0};
var View___str1[] = {47,0};
var View___str2[] = {32,0};
var View___MAX_LENGTH = 0;
var View___FLAGS_MESSAGE = 0;
var View___EMPTY = 0;
var View___SLASH = 0;
var View___TITLE_IMAGE = 0;
var View___HELP_IMAGE = 0;
var View__init() {
	View___MAX_LENGTH = 30;
	View___FLAGS_MESSAGE = Memory__getString(View___str0);
	View___SLASH = Memory__getString(View___str1);
	View___EMPTY = Memory__getString(View___str2);
	View___TITLE_IMAGE = TitleImage__newImage();
	View___HELP_IMAGE = HelpImage__newImage();
	return 0;
}
var View__showMessage(var message) {
	if (0!=((((String__length(message))>(View___MAX_LENGTH))?-1:0))) {
		return 0;
	}

	View__eraseMessage(View___MAX_LENGTH);
	View__moveCursor();
	Output__printString(message);
	return 0;
}
var View__moveCursor() {
	Output__moveCursor(2, 3);
	return 0;
}
var View__eraseMessage(var length) {
	var i = 0;
	i = 0;
	View__moveCursor();
	while (-1==((((i)<(length))?-1:0))) {
		Output__printString(View___EMPTY);
		i = i+1;
	}
	return 0;
}
var View__showLocatedBombsMessage(var located, var total) {
	View__showMessage(View___FLAGS_MESSAGE);
	Output__printInt(located);
	Output__printString(View___SLASH);
	Output__printInt(total);
	return 0;
}
var View__getSquarePosition(var i, var j) {
	var marginX = 0;
	var marginY = 0;
	marginX = 1;
	marginY = 4*16;
	return ((marginY+(j*16))*32)+marginX+i;
}
var View__drawFrame() {
	Screen__drawLine(14, 14, 497, 14);
	Screen__drawLine(15, 15, 496, 15);
	Screen__drawLine(14, 14, 14, 48);
	Screen__drawLine(15, 15, 15, 46);
	Screen__drawLine(15, 47, 496, 47);
	Screen__drawLine(496, 47, 496, 14);
	Screen__drawLine(14, 62, 497, 62);
	Screen__drawLine(15, 63, 496, 63);
	Screen__drawLine(14, 62, 14, 241);
	Screen__drawLine(15, 62, 15, 240);
	Screen__drawLine(15, 240, 496, 240);
	Screen__drawLine(496, 62, 496, 240);
	Image__draw(View___TITLE_IMAGE, 18, 2);
	return 0;
}
var View__showHelp() {
	Image__draw(View___HELP_IMAGE, 0, 60);
	return 0;
}
var View__drawFail(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, -32765);
	Memory__poke(memAddress+64, 16389);
	Memory__poke(memAddress+96, 8457);
	Memory__poke(memAddress+128, 4113);
	Memory__poke(memAddress+160, 2977);
	Memory__poke(memAddress+192, 1857);
	Memory__poke(memAddress+224, 3873);
	Memory__poke(memAddress+256, 12265);
	Memory__poke(memAddress+288, 4065);
	Memory__poke(memAddress+320, 1985);
	Memory__poke(memAddress+352, 2977);
	Memory__poke(memAddress+384, 4113);
	Memory__poke(memAddress+416, 8457);
	Memory__poke(memAddress+448, 16389);
	Memory__poke(memAddress+480, -32765);
	return 0;
}
var View__drawHidden(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -27307);
	Memory__poke(memAddress+32, -13654);
	Memory__poke(memAddress+64, -6819);
	Memory__poke(memAddress+96, -5458);
	Memory__poke(memAddress+128, -6827);
	Memory__poke(memAddress+160, -5462);
	Memory__poke(memAddress+192, -6827);
	Memory__poke(memAddress+224, -5462);
	Memory__poke(memAddress+256, -6827);
	Memory__poke(memAddress+288, -5462);
	Memory__poke(memAddress+320, -6827);
	Memory__poke(memAddress+352, -5462);
	Memory__poke(memAddress+384, -8191);
	Memory__poke(memAddress+416, -4);
	Memory__poke(memAddress+448, -2);
	Memory__poke(memAddress+480, -1);
	return 0;
}
var View__drawBlank(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, 1);
	Memory__poke(memAddress+64, 1);
	Memory__poke(memAddress+96, 1);
	Memory__poke(memAddress+128, 1);
	Memory__poke(memAddress+160, 1);
	Memory__poke(memAddress+192, 1);
	Memory__poke(memAddress+224, 1);
	Memory__poke(memAddress+256, 1);
	Memory__poke(memAddress+288, 1);
	Memory__poke(memAddress+320, 1);
	Memory__poke(memAddress+352, 1);
	Memory__poke(memAddress+384, 1);
	Memory__poke(memAddress+416, 1);
	Memory__poke(memAddress+448, 1);
	Memory__poke(memAddress+480, 1);
	return 0;
}
var View__drawMine(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, 1);
	Memory__poke(memAddress+64, 257);
	Memory__poke(memAddress+96, 257);
	Memory__poke(memAddress+128, 6097);
	Memory__poke(memAddress+160, 4065);
	Memory__poke(memAddress+192, 7985);
	Memory__poke(memAddress+224, 7985);
	Memory__poke(memAddress+256, 32765);
	Memory__poke(memAddress+288, 8177);
	Memory__poke(memAddress+320, 8177);
	Memory__poke(memAddress+352, 4065);
	Memory__poke(memAddress+384, 6097);
	Memory__poke(memAddress+416, 257);
	Memory__poke(memAddress+448, 257);
	Memory__poke(memAddress+480, 1);
	return 0;
}
var View__drawExplosion(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, -28397);
	Memory__poke(memAddress+64, 18725);
	Memory__poke(memAddress+96, 9545);
	Memory__poke(memAddress+128, -26669);
	Memory__poke(memAddress+160, 20453);
	Memory__poke(memAddress+192, 15481);
	Memory__poke(memAddress+224, 7089);
	Memory__poke(memAddress+256, -1345);
	Memory__poke(memAddress+288, 7089);
	Memory__poke(memAddress+320, 15481);
	Memory__poke(memAddress+352, 20453);
	Memory__poke(memAddress+384, -26669);
	Memory__poke(memAddress+416, 9545);
	Memory__poke(memAddress+448, 18725);
	Memory__poke(memAddress+480, -28397);
	return 0;
}
var View__drawSelected(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -32767-1);
	Memory__poke(memAddress+32, -16384);
	Memory__poke(memAddress+64, -8180);
	Memory__poke(memAddress+96, -8180);
	Memory__poke(memAddress+128, -8192);
	Memory__poke(memAddress+160, -8192);
	Memory__poke(memAddress+192, -8192);
	Memory__poke(memAddress+224, -8192);
	Memory__poke(memAddress+256, -8192);
	Memory__poke(memAddress+288, -8192);
	Memory__poke(memAddress+320, -8192);
	Memory__poke(memAddress+352, -8192);
	Memory__poke(memAddress+384, -8192);
	Memory__poke(memAddress+416, -4);
	Memory__poke(memAddress+448, -2);
	Memory__poke(memAddress+480, -1);
	return 0;
}
var View__drawFlag(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -27307);
	Memory__poke(memAddress+32, -14326);
	Memory__poke(memAddress+64, -6715);
	Memory__poke(memAddress+96, -5662);
	Memory__poke(memAddress+128, -6859);
	Memory__poke(memAddress+160, -5662);
	Memory__poke(memAddress+192, -6715);
	Memory__poke(memAddress+224, -5878);
	Memory__poke(memAddress+256, -7915);
	Memory__poke(memAddress+288, -7230);
	Memory__poke(memAddress+320, -4107);
	Memory__poke(memAddress+352, -4110);
	Memory__poke(memAddress+384, -8191);
	Memory__poke(memAddress+416, -4);
	Memory__poke(memAddress+448, -2);
	Memory__poke(memAddress+480, -1);
	return 0;
}
var View__drawFlagSelected(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -32767-1);
	Memory__poke(memAddress+32, -16384);
	Memory__poke(memAddress+64, -7808);
	Memory__poke(memAddress+96, -7712);
	Memory__poke(memAddress+128, -7888);
	Memory__poke(memAddress+160, -7712);
	Memory__poke(memAddress+192, -7808);
	Memory__poke(memAddress+224, -7936);
	Memory__poke(memAddress+256, -7936);
	Memory__poke(memAddress+288, -7232);
	Memory__poke(memAddress+320, -4112);
	Memory__poke(memAddress+352, -4112);
	Memory__poke(memAddress+384, -8192);
	Memory__poke(memAddress+416, -4);
	Memory__poke(memAddress+448, -2);
	Memory__poke(memAddress+480, -1);
	return 0;
}
var View__draw1(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, 1);
	Memory__poke(memAddress+64, 1);
	Memory__poke(memAddress+96, 769);
	Memory__poke(memAddress+128, 897);
	Memory__poke(memAddress+160, 961);
	Memory__poke(memAddress+192, 993);
	Memory__poke(memAddress+224, 897);
	Memory__poke(memAddress+256, 897);
	Memory__poke(memAddress+288, 897);
	Memory__poke(memAddress+320, 897);
	Memory__poke(memAddress+352, 897);
	Memory__poke(memAddress+384, 4065);
	Memory__poke(memAddress+416, 4065);
	Memory__poke(memAddress+448, 1);
	Memory__poke(memAddress+480, 1);
	return 0;
}
var View__draw2(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, 1);
	Memory__poke(memAddress+64, 1);
	Memory__poke(memAddress+96, 4081);
	Memory__poke(memAddress+128, 8185);
	Memory__poke(memAddress+160, 7225);
	Memory__poke(memAddress+192, 7169);
	Memory__poke(memAddress+224, 3841);
	Memory__poke(memAddress+256, 1985);
	Memory__poke(memAddress+288, 497);
	Memory__poke(memAddress+320, 121);
	Memory__poke(memAddress+352, 8185);
	Memory__poke(memAddress+384, 8185);
	Memory__poke(memAddress+416, 1);
	Memory__poke(memAddress+448, 1);
	Memory__poke(memAddress+480, 1);
	return 0;
}
var View__draw3(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, 1);
	Memory__poke(memAddress+64, 1);
	Memory__poke(memAddress+96, 4089);
	Memory__poke(memAddress+128, 8185);
	Memory__poke(memAddress+160, 7169);
	Memory__poke(memAddress+192, 7169);
	Memory__poke(memAddress+224, 4033);
	Memory__poke(memAddress+256, 4033);
	Memory__poke(memAddress+288, 7169);
	Memory__poke(memAddress+320, 7169);
	Memory__poke(memAddress+352, 8185);
	Memory__poke(memAddress+384, 4089);
	Memory__poke(memAddress+416, 1);
	Memory__poke(memAddress+448, 1);
	Memory__poke(memAddress+480, 1);
	return 0;
}
var View__draw4(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, 1);
	Memory__poke(memAddress+64, 1);
	Memory__poke(memAddress+96, 3809);
	Memory__poke(memAddress+128, 3809);
	Memory__poke(memAddress+160, 3697);
	Memory__poke(memAddress+192, 3697);
	Memory__poke(memAddress+224, 8185);
	Memory__poke(memAddress+256, 8185);
	Memory__poke(memAddress+288, 3585);
	Memory__poke(memAddress+320, 3585);
	Memory__poke(memAddress+352, 3585);
	Memory__poke(memAddress+384, 3585);
	Memory__poke(memAddress+416, 1);
	Memory__poke(memAddress+448, 1);
	Memory__poke(memAddress+480, 1);
	return 0;
}
var View__draw5(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, 1);
	Memory__poke(memAddress+64, 1);
	Memory__poke(memAddress+96, 8185);
	Memory__poke(memAddress+128, 8185);
	Memory__poke(memAddress+160, 57);
	Memory__poke(memAddress+192, 57);
	Memory__poke(memAddress+224, 4089);
	Memory__poke(memAddress+256, 8185);
	Memory__poke(memAddress+288, 7169);
	Memory__poke(memAddress+320, 7169);
	Memory__poke(memAddress+352, 8185);
	Memory__poke(memAddress+384, 4089);
	Memory__poke(memAddress+416, 1);
	Memory__poke(memAddress+448, 1);
	Memory__poke(memAddress+480, 1);
	return 0;
}
var View__draw6(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, 1);
	Memory__poke(memAddress+64, 1);
	Memory__poke(memAddress+96, 4081);
	Memory__poke(memAddress+128, 4089);
	Memory__poke(memAddress+160, 57);
	Memory__poke(memAddress+192, 57);
	Memory__poke(memAddress+224, 4089);
	Memory__poke(memAddress+256, 8185);
	Memory__poke(memAddress+288, 7225);
	Memory__poke(memAddress+320, 7225);
	Memory__poke(memAddress+352, 8185);
	Memory__poke(memAddress+384, 4081);
	Memory__poke(memAddress+416, 1);
	Memory__poke(memAddress+448, 1);
	Memory__poke(memAddress+480, 1);
	return 0;
}
var View__draw7(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, 1);
	Memory__poke(memAddress+64, 1);
	Memory__poke(memAddress+96, 8185);
	Memory__poke(memAddress+128, 8185);
	Memory__poke(memAddress+160, 7169);
	Memory__poke(memAddress+192, 7169);
	Memory__poke(memAddress+224, 3585);
	Memory__poke(memAddress+256, 3585);
	Memory__poke(memAddress+288, 1793);
	Memory__poke(memAddress+320, 1793);
	Memory__poke(memAddress+352, 897);
	Memory__poke(memAddress+384, 897);
	Memory__poke(memAddress+416, 1);
	Memory__poke(memAddress+448, 1);
	Memory__poke(memAddress+480, 1);
	return 0;
}
var View__draw8(var location) {
	var memAddress = 0;
	memAddress = 16384+location;
	Memory__poke(memAddress+0, -1);
	Memory__poke(memAddress+32, 1);
	Memory__poke(memAddress+64, 1);
	Memory__poke(memAddress+96, 4081);
	Memory__poke(memAddress+128, 8185);
	Memory__poke(memAddress+160, 7225);
	Memory__poke(memAddress+192, 7225);
	Memory__poke(memAddress+224, 4081);
	Memory__poke(memAddress+256, 4081);
	Memory__poke(memAddress+288, 7225);
	Memory__poke(memAddress+320, 7225);
	Memory__poke(memAddress+352, 8185);
	Memory__poke(memAddress+384, 4081);
	Memory__poke(memAddress+416, 1);
	Memory__poke(memAddress+448, 1);
	Memory__poke(memAddress+480, 1);
	return 0;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Model___SIZE = 0;
var Model___COLUMNS = 0;
var Model___ROWS = 0;
#define grid__ (__this+0)
#define _bombs__ (__this+1)
var Model__init() {
	Model___COLUMNS = 30;
	Model___ROWS = 11;
	Model___SIZE = Model___COLUMNS*Model___ROWS;
	return 0;
}
var Model__new() {
	var __this;
	var i = 0;
	__this = Memory__alloc(2);
	__poke(grid__, Array__new(Model___SIZE));
	i = 0;
	while (-1==((((i)<(Model___SIZE))?-1:0))) {
		__poke(__peek(grid__)+i, Square__new(i));
		i = i+1;
	}
	return __this;
}
var Model__getColumns() {
	return Model___COLUMNS;
}
var Model__getRows() {
	return Model___ROWS;
}
var Model__getId(var i, var j) {
	if (0!=((((i)<(0))?-1:0))) {
		return -1;
	}

	if (0!=((((j)<(0))?-1:0))) {
		return -1;
	}

	if (0!=((((i)>((Model___COLUMNS-1)))?-1:0))) {
		return -1;
	}

	if (0!=((((j)>((Model___ROWS-1)))?-1:0))) {
		return -1;
	}

	return (j*Model___COLUMNS)+i;
}
var Model__getColumn(var id) {
	return id-(Model___COLUMNS*Model__getRow(id));
}
var Model__getRow(var id) {
	return id/Model___COLUMNS;
}
var Model__setBombs(var __this, var bombs, var randomSeed) {
	var i = 0;
	var r = 0;
	var rand = 0;
	var s = 0;
	__poke(_bombs__, bombs);
	i = 0;
	rand = Random__new(randomSeed, Model___SIZE-1);
	while (-1==((((i)<(bombs))?-1:0))) {
		r = Random__next(rand);
		s = __peek(__peek(grid__)+r);
		if (0!=(~Square__isBomb(s))) {
			Square__setBomb(s, -1);
			i = i+1;
		} else {
			Random__dispose(rand);
			rand = Random__new(r+757, Model___SIZE-1);
		}
	}
	Random__dispose(rand);
	return 0;
}
var Model__getBombs(var __this) {
	return __peek(_bombs__);
}
var Model__getSquareById(var __this, var id) {
	if (0!=((((id)<(0))?-1:0))) {
		return 0;
	}

	if (0!=((((id)>(Model___SIZE))?-1:0))) {
		return 0;
	}

	return __peek(__peek(grid__)+id);
}
var Model__getSquare(var __this, var i, var j) {
	if (0!=((((i)<(0))?-1:0))) {
		return 0;
	}

	if (0!=((((j)<(0))?-1:0))) {
		return 0;
	}

	if (0!=((((i)>((Model___COLUMNS-1)))?-1:0))) {
		return 0;
	}

	if (0!=((((j)>((Model___ROWS-1)))?-1:0))) {
		return 0;
	}

	return __peek(__peek(grid__)+Model__getId(i, j));
}
var Model__dispose(var __this) {
	var i = 0;
	var s = 0;
	i = 0;
	while (-1==((((i)<(Model___SIZE))?-1:0))) {
		s = __peek(__peek(grid__)+i);
		Square__dispose(s);
		i = i+1;
	}
	Array__dispose(__peek(grid__));
	Memory__deAlloc(__this);
	return 0;
}
#undef grid__
#undef _bombs__
#endif

#ifdef JACK_IMPLEMENTATION
#define _seed__ (__this+0)
#define _range__ (__this+1)
var Random__new(var seed, var range) {
	var __this;
	__this = Memory__alloc(2);
	__poke(_seed__, seed);
	__poke(_range__, range);
	Random__next(__this);
	return __this;
}
var Random__mod(var a, var b) {
	return a-(b*(a/b));
}
var Random__next(var __this) {
	__poke(_seed__, Random__mod(__peek(_seed__)*8017, __peek(_range__)));
	if (0!=((((__peek(_seed__))<(0))?-1:0))) {
		__poke(_seed__, Random__mod(-__peek(_seed__), __peek(_range__)));
	}

	return __peek(_seed__);
}
var Random__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#undef _seed__
#undef _range__
#endif

#ifdef JACK_IMPLEMENTATION
#define bitmapWidth__ (__this+0)
#define bitmapHeight__ (__this+1)
#define bitmapLength__ (__this+2)
#define bitmap__ (__this+3)
#define uncompressed__ (__this+4)
#define dataLength__ (__this+5)
#define data__ (__this+6)
#define pushIndex__ (__this+7)
#define deltaXOffset__ (__this+8)
#define deltaYOffset__ (__this+9)
#define render__ (__this+10)
#define renderX__ (__this+11)
#define renderY__ (__this+12)
#define renderI__ (__this+13)
#define renderJ__ (__this+14)
#define renderPtr__ (__this+15)
var Image__newBitmap(var width, var height) {
	var __this;
	__this = Memory__alloc(16);
	__poke(bitmapWidth__, width);
	__poke(bitmapHeight__, height);
	__poke(bitmapLength__, width*height);
	__poke(bitmap__, Array__new(__peek(bitmapLength__)));
	__poke(render__, 0);
	return __this;
}
var Image__newDelta(var size, var xOffset, var yOffset, var width, var height) {
	var __this;
	__this = Memory__alloc(16);
	__poke(deltaXOffset__, xOffset);
	__poke(deltaYOffset__, yOffset);
	__poke(bitmapWidth__, width);
	__poke(bitmapHeight__, height);
	__poke(bitmapLength__, size);
	__poke(bitmap__, Array__new(__peek(bitmapLength__)));
	__poke(render__, 0);
	return __this;
}
var Image__newRender(var x, var y, var width, var height) {
	var __this;
	__this = Memory__alloc(16);
	__poke(render__, -1);
	Image__resetRender(__this, x, y);
	__poke(bitmapWidth__, width);
	__poke(bitmapHeight__, height);
	__poke(bitmapLength__, 16);
	__poke(bitmap__, Array__new(__peek(bitmapLength__)));
	return __this;
}
var Image__newCompressed(var width, var height, var length) {
	var __this;
	__this = Memory__alloc(16);
	__poke(bitmapWidth__, width);
	__poke(bitmapHeight__, height);
	__poke(bitmapLength__, width*height);
	__poke(bitmap__, Array__new(__peek(bitmapLength__)));
	__poke(dataLength__, length);
	__poke(data__, Array__new(length));
	__poke(render__, 0);
	return __this;
}
var Image__dispose(var __this) {
	Image__disposeCompressed(__this);
	Array__dispose(__peek(bitmap__));
	return 0;
}
var Image__disposeCompressed(var __this) {
	if (0!=((((__peek(dataLength__))>(0))?-1:0))) {
		Array__dispose(__peek(data__));
	}

	__poke(dataLength__, 0);
	return 0;
}
var Image__getBitmap(var __this) {
	return __peek(bitmap__);
}
var Image__getLength(var __this) {
	return __peek(bitmapLength__);
}
var Image__getWidth(var __this) {
	return __peek(bitmapWidth__);
}
var Image__getHeight(var __this) {
	return __peek(bitmapHeight__);
}
var Image__getData(var __this) {
	return __peek(data__);
}
var Image__getDataLength(var __this) {
	return __peek(dataLength__);
}
var Image__isRender(var __this) {
	return __peek(render__);
}
var Image__resetRender(var __this, var x, var y) {
	__poke(renderX__, x);
	__poke(renderY__, y);
	__poke(renderI__, 0);
	__poke(renderJ__, 0);
	__poke(renderPtr__, 16384+__peek(renderX__)+(__peek(renderY__)*32));
	return 0;
}
var Image__push(var __this, var a, var b, var c, var d, var e, var f, var g, var h, var i, var j, var k, var l, var m, var n, var o, var p) {
	var remain = 0;
	remain = __peek(bitmapLength__)-__peek(pushIndex__);
	if (0!=((((remain)==(0))?-1:0))) {
		return 0;
	}

	if (0!=((((remain)>(15))?-1:0))) {
		__poke(__peek(bitmap__)+__peek(pushIndex__), a);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+1, b);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+2, c);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+3, d);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+4, e);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+5, f);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+6, g);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+7, h);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+8, i);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+9, j);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+10, k);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+11, l);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+12, m);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+13, n);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+14, o);
		__poke(__peek(bitmap__)+__peek(pushIndex__)+15, p);
		__poke(pushIndex__, __peek(pushIndex__)+16);
	} else {
		__poke(__peek(bitmap__)+__peek(pushIndex__), a);
		if (0!=((((remain)>(1))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+1, b);
		}

		if (0!=((((remain)>(2))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+2, c);
		}

		if (0!=((((remain)>(3))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+3, d);
		}

		if (0!=((((remain)>(4))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+4, e);
		}

		if (0!=((((remain)>(5))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+5, f);
		}

		if (0!=((((remain)>(6))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+6, g);
		}

		if (0!=((((remain)>(7))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+7, h);
		}

		if (0!=((((remain)>(8))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+8, i);
		}

		if (0!=((((remain)>(9))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+9, j);
		}

		if (0!=((((remain)>(10))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+10, k);
		}

		if (0!=((((remain)>(11))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+11, l);
		}

		if (0!=((((remain)>(12))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+12, m);
		}

		if (0!=((((remain)>(13))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+13, n);
		}

		if (0!=((((remain)>(14))?-1:0))) {
			__poke(__peek(bitmap__)+__peek(pushIndex__)+14, o);
		}

		__poke(pushIndex__, __peek(bitmapLength__));
	}
	if (0!=(__peek(render__))) {
		Image__pushRender(__this);
		__poke(pushIndex__, 0);
	}

	return 0;
}
var Image__draw(var __this, var x, var y) {
	var i = 0;
	var j = 0;
	var RAM = 0;
	var bitmapOffset = 0;
	RAM = 16384+x+(y*32);
	while (-1==((((j)<(__peek(bitmapHeight__)))?-1:0))) {
		i = 0;
		while (-1==((((i)<(__peek(bitmapWidth__)))?-1:0))) {
			__poke(RAM+i, __peek(__peek(bitmap__)+bitmapOffset+i));
			i = i+1;
		}
		RAM = RAM+32;
		bitmapOffset = bitmapOffset+__peek(bitmapWidth__);
		j = j+1;
	}
	return 0;
}
var Image__drawVScale(var __this, var x, var y, var height) {
	var i = 0;
	var j = 0;
	var RAM = 0;
	var bitmapOffset = 0;
	var err = 0;
	var intPart = 0;
	var fractPart = 0;
	var offsetStep = 0;
	if (0!=((((height)==(0))?-1:0))) {
		return 0;
	}

	RAM = 16384+x+(y*32);
	intPart = (__peek(bitmapHeight__)/height)*__peek(bitmapWidth__);
	fractPart = MathsToo__mod(__peek(bitmapHeight__), height);
	offsetStep = __peek(bitmapWidth__);
	if (0!=((((height)<(0))?-1:0))) {
		height = -height;
		bitmapOffset = (__peek(bitmapHeight__)-1)*__peek(bitmapWidth__);
		offsetStep = -offsetStep;
	}

	err = 0;
	while (-1==((((j)<(height))?-1:0))) {
		i = 0;
		while (-1==((((i)<(__peek(bitmapWidth__)))?-1:0))) {
			__poke(RAM+i, __peek(__peek(bitmap__)+bitmapOffset+i));
			i = i+1;
		}
		bitmapOffset = bitmapOffset+intPart;
		err = err+fractPart;
		if (0!=((((err)>(height))?-1:0))) {
			err = err-height;
			bitmapOffset = bitmapOffset+offsetStep;
		}

		RAM = RAM+32;
		j = j+1;
	}
	return 0;
}
var Image__drawColVScale(var __this, var x, var y, var col, var height) {
	var j = 0;
	var RAM = 0;
	var bitmapOffset = 0;
	var err = 0;
	var intPart = 0;
	var fractPart = 0;
	var offsetStep = 0;
	if (0!=((((height)==(0))?-1:0))) {
		return 0;
	}

	RAM = 16384+x+(y*32);
	intPart = (__peek(bitmapHeight__)/height)*__peek(bitmapWidth__);
	fractPart = MathsToo__mod(__peek(bitmapHeight__), height);
	offsetStep = __peek(bitmapWidth__);
	if (0!=((((height)<(0))?-1:0))) {
		height = -height;
		bitmapOffset = (__peek(bitmapHeight__)-1)*__peek(bitmapWidth__);
		offsetStep = -offsetStep;
	}

	bitmapOffset = bitmapOffset+col;
	err = 0;
	while (-1==((((j)<(height))?-1:0))) {
		__poke(RAM+0, __peek(__peek(bitmap__)+bitmapOffset));
		bitmapOffset = bitmapOffset+intPart;
		err = err+fractPart;
		if (0!=((((err)>(height))?-1:0))) {
			err = err-height;
			bitmapOffset = bitmapOffset+offsetStep;
		}

		RAM = RAM+32;
		j = j+1;
	}
	return 0;
}
var Image__drawDelta(var __this, var x, var y) {
	var i = 0;
	var j = 0;
	var RAM = 0;
	var bitmapOffset = 0;
	var wordMask = 0;
	var maskMask = 0;
	var maxMask = 0;
	x = x+__peek(deltaXOffset__);
	y = y+__peek(deltaYOffset__);
	RAM = 16384+x+(y*32);
	wordMask = __peek(__peek(bitmap__)+0);
	maskMask = 1;
	maxMask = -32767-1;
	bitmapOffset = 1;
	while (-1==((((j)<(__peek(bitmapHeight__)))?-1:0))) {
		i = 0;
		while (-1==((((i)<(__peek(bitmapWidth__)))?-1:0))) {
			if (0!=(wordMask&maskMask)) {
				__poke(RAM+i, __peek(__peek(bitmap__)+bitmapOffset));
				bitmapOffset = bitmapOffset+1;
			}

			if (0!=((((maskMask)==(maxMask))?-1:0))) {
				wordMask = __peek(__peek(bitmap__)+bitmapOffset);
				maskMask = 1;
				bitmapOffset = bitmapOffset+1;
			} else {
				maskMask = maskMask+maskMask;
			}
			i = i+1;
		}
		RAM = RAM+32;
		j = j+1;
	}
	return 0;
}
var Image__pushRender(var __this) {
	var bitmapOffset = 0;
	while (-1==((((__peek(renderJ__))<(__peek(bitmapHeight__)))?-1:0))) {
		while (-1==((((__peek(renderI__))<(__peek(bitmapWidth__)))?-1:0))) {
			__poke(__peek(renderPtr__)+__peek(renderI__), __peek(__peek(bitmap__)+bitmapOffset));
			bitmapOffset = bitmapOffset+1;
			__poke(renderI__, __peek(renderI__)+1);
			if (0!=((((bitmapOffset)>(15))?-1:0))) {
				return 0;
			}

		}
		__poke(renderPtr__, __peek(renderPtr__)+32);
		__poke(renderI__, 0);
		__poke(renderJ__, __peek(renderJ__)+1);
	}
	return 0;
}
#undef bitmapWidth__
#undef bitmapHeight__
#undef bitmapLength__
#undef bitmap__
#undef uncompressed__
#undef dataLength__
#undef data__
#undef pushIndex__
#undef deltaXOffset__
#undef deltaYOffset__
#undef render__
#undef renderX__
#undef renderY__
#undef renderI__
#undef renderJ__
#undef renderPtr__
#endif

#ifdef JACK_IMPLEMENTATION
var NandMines___str0[] = {80,114,101,115,115,32,39,104,39,32,102,111,114,32,104,101,108,112,0};
var NandMines___str1[] = {80,114,101,115,115,32,39,69,83,67,39,32,116,111,32,114,101,116,117,114,110,32,116,111,32,103,97,109,101,0};
var NandMines___str2[] = {66,79,79,79,77,33,32,32,40,112,114,101,115,115,32,39,114,39,32,116,111,32,114,101,115,116,97,114,116,41,0};
var NandMines___str3[] = {67,111,110,103,114,97,116,117,108,97,116,105,111,110,115,33,0};
var NandMines___BOMBS_NUMBER = 0;
var NandMines___HELP_MESSAGE = 0;
var NandMines___HELP_BACK_MESSAGE = 0;
var NandMines___BOOM_MESSAGE = 0;
var NandMines___CONGRATS_MESSAGE = 0;
#define model__ (__this+0)
#define ended__ (__this+1)
#define ci__ (__this+2)
#define cj__ (__this+3)
#define flags__ (__this+4)
#define hidden__ (__this+5)
var NandMines__init() {
	NandMines___BOMBS_NUMBER = 50;
	NandMines___HELP_MESSAGE = Memory__getString(NandMines___str0);
	NandMines___HELP_BACK_MESSAGE = Memory__getString(NandMines___str1);
	NandMines___BOOM_MESSAGE = Memory__getString(NandMines___str2);
	NandMines___CONGRATS_MESSAGE = Memory__getString(NandMines___str3);
	Model__init();
	View__init();
	return 0;
}
var NandMines__new() {
	var __this;
	__this = Memory__alloc(6);
	NandMines__restart(__this);
	return __this;
}
var NandMines__run() {
	var key = 0;
	var exit = 0;
	var randomize = 0;
	var help = 0;
	var nandMines = 0;
	var counter = 0;
	NandMines__init();
	exit = 0;
	randomize = -1;
	nandMines = NandMines__new();
	help = 0;
	while (-1==(~exit)) {
		while (-1==((((key)==(0))?-1:0))) {
			counter = counter+1;
			key = Keyboard__keyPressed();
		}
		while (-1==(~((((Keyboard__keyPressed())==(0))?-1:0)))) {
		}
		if (0!=(help)) {
			if (0!=((((key)==(140))?-1:0))) {
				NandMines__paintGameBoard(nandMines);
				help = 0;
			}

		} else {
			if (0!=(randomize)) {
				NandMines__randomizeBombs(nandMines, counter);
				randomize = 0;
			}

			if (0!=(((((key)==(81))?-1:0))|((((key)==(113))?-1:0)))) {
				exit = -1;
			}

			if (0!=(((((key)==(82))?-1:0))|((((key)==(114))?-1:0)))) {
				NandMines__restart(nandMines);
				randomize = -1;
			}

			if (0!=(((((key)==(72))?-1:0))|((((key)==(104))?-1:0)))) {
				NandMines__showHelpDialog(nandMines);
				help = -1;
			}

			if (0!=((((key)==(130))?-1:0))) {
				NandMines__moveHorizontal(nandMines, 0);
			}

			if (0!=((((key)==(131))?-1:0))) {
				NandMines__moveVertical(nandMines, 0);
			}

			if (0!=((((key)==(132))?-1:0))) {
				NandMines__moveHorizontal(nandMines, -1);
			}

			if (0!=((((key)==(133))?-1:0))) {
				NandMines__moveVertical(nandMines, -1);
			}

			if (0!=(((((key)==(129))?-1:0))|((((key)==(139))?-1:0)))) {
				NandMines__clearSquare(nandMines);
			}

			if (0!=(((((key)==(128))?-1:0))|((((key)==(138))?-1:0)))) {
				NandMines__toggleFlag(nandMines);
			}

		}
		key = 0;
	}
	NandMines__dispose(nandMines);
	return 0;
}
var NandMines__restart(var __this) {
	if (0!=(~((((__peek(model__))==(0))?-1:0)))) {
		Model__dispose(__peek(model__));
	}

	__poke(model__, Model__new());
	__poke(ended__, 0);
	__poke(ci__, 0);
	__poke(cj__, 0);
	__poke(flags__, 0);
	__poke(hidden__, Model__getRows()*Model__getColumns());
	View__drawFrame();
	NandMines__paintGameBoard(__this);
	return 0;
}
var NandMines__randomizeBombs(var __this, var randomSeed) {
	Model__setBombs(__peek(model__), NandMines___BOMBS_NUMBER, randomSeed);
	return 0;
}
var NandMines__showHelpDialog(var __this) {
	View__showHelp();
	View__showMessage(NandMines___HELP_BACK_MESSAGE);
	return 0;
}
var NandMines__paintGameBoard(var __this) {
	NandMines__paintSquares(__this);
	NandMines__paintSelected(__this);
	View__showMessage(NandMines___HELP_MESSAGE);
	return 0;
}
var NandMines__moveHorizontal(var __this, var right) {
	NandMines__moveHorizontalStartingIn(__this, __peek(ci__), __peek(cj__), right);
	return 0;
}
var NandMines__moveHorizontalStartingIn(var __this, var i, var j, var right) {
	var s = 0;
	var k = 0;
	if (0!=(__peek(ended__))) {
		return 0;
	}

	if (0!=(right)) {
		k = i+1;
	} else {
		k = i-1;
	}
	while (-1==(((((k)<(Model__getColumns()))?-1:0))&((((k)>(-1))?-1:0)))) {
		s = Model__getSquare(__peek(model__), k, j);
		if (0!=(Square__isHidden(s))) {
			NandMines__paintSquare(__this, __peek(ci__), __peek(cj__));
			__poke(ci__, k);
			__poke(cj__, j);
			NandMines__paintSelected(__this);
			return 0;
		}

		if (0!=(right)) {
			k = k+1;
		} else {
			k = k-1;
		}
	}
	if (0!=(right)) {
		if (0!=((((j)==((Model__getRows()-1)))?-1:0))) {
			j = 0;
		} else {
			j = j+1;
		}
		NandMines__moveHorizontalStartingIn(__this, -1, j, right);
	} else {
		if (0!=((((j)==(0))?-1:0))) {
			j = Model__getRows()-1;
		} else {
			j = j-1;
		}
		NandMines__moveHorizontalStartingIn(__this, Model__getColumns(), j, right);
	}
	return 0;
}
var NandMines__moveVertical(var __this, var down) {
	NandMines__moveVerticalStartingIn(__this, __peek(ci__), __peek(cj__), down);
	return 0;
}
var NandMines__moveVerticalStartingIn(var __this, var i, var j, var down) {
	var s = 0;
	var k = 0;
	if (0!=(__peek(ended__))) {
		return 0;
	}

	if (0!=(down)) {
		k = j+1;
	} else {
		k = j-1;
	}
	while (-1==(((((k)<(Model__getRows()))?-1:0))&((((k)>(-1))?-1:0)))) {
		s = Model__getSquare(__peek(model__), i, k);
		if (0!=(Square__isHidden(s))) {
			NandMines__paintSquare(__this, __peek(ci__), __peek(cj__));
			__poke(ci__, i);
			__poke(cj__, k);
			NandMines__paintSelected(__this);
			return 0;
		}

		if (0!=(down)) {
			k = k+1;
		} else {
			k = k-1;
		}
	}
	if (0!=(down)) {
		if (0!=((((i)==((Model__getColumns()-1)))?-1:0))) {
			i = 0;
		} else {
			i = i+1;
		}
		NandMines__moveVerticalStartingIn(__this, i, -1, down);
	} else {
		if (0!=((((i)==(0))?-1:0))) {
			i = Model__getColumns()-1;
		} else {
			i = i-1;
		}
		NandMines__moveVerticalStartingIn(__this, i, Model__getRows(), down);
	}
	return 0;
}
var NandMines__toggleFlag(var __this) {
	var s = 0;
	if (0!=(__peek(ended__))) {
		return 0;
	}

	s = Model__getSquare(__peek(model__), __peek(ci__), __peek(cj__));
	Square__setFlag(s, ~Square__isFlag(s));
	if (0!=(Square__isFlag(s))) {
		__poke(flags__, __peek(flags__)+1);
	} else {
		__poke(flags__, __peek(flags__)-1);
	}
	View__showLocatedBombsMessage(__peek(flags__), Model__getBombs(__peek(model__)));
	NandMines__paintSelected(__this);
	NandMines__checkComplete(__this);
	return 0;
}
var NandMines__clearSquare(var __this) {
	var i = 0;
	var s = 0;
	if (0!=(__peek(ended__))) {
		return 0;
	}

	s = Model__getSquare(__peek(model__), __peek(ci__), __peek(cj__));
	if (0!=((((s)==(0))?-1:0))) {
		return 0;
	}

	Square__setHidden(s, 0);
	__poke(hidden__, __peek(hidden__)-1);
	if (0!=(Square__isFlag(s))) {
		__poke(flags__, __peek(flags__)-1);
	}

	if (0!=(Square__isBomb(s))) {
		__poke(ended__, -1);
		View__showMessage(NandMines___BOOM_MESSAGE);
		NandMines__paintSquares(__this);
	} else {
		NandMines__paintSquare(__this, __peek(ci__), __peek(cj__));
		NandMines__clearBlanks(__this);
		NandMines__checkComplete(__this);
	}
	return 0;
}
var NandMines__checkComplete(var __this) {
	if (0!=(((((__peek(hidden__))==(__peek(flags__)))?-1:0))&((((__peek(hidden__))==(Model__getBombs(__peek(model__))))?-1:0)))) {
		__poke(ended__, -1);
		View__showMessage(NandMines___CONGRATS_MESSAGE);
	}

	return 0;
}
var NandMines__clearBlanks(var __this) {
	var i = 0;
	var j = 0;
	var s = 0;
	var queue = 0;
	var visited = 0;
	visited = Array__new(Model__getRows()*Model__getColumns());
	i = 0;
	while (-1==((((i)<((Model__getRows()*Model__getColumns())))?-1:0))) {
		__poke(visited+i, 0);
		i = i+1;
	}
	i = __peek(ci__);
	j = __peek(cj__);
	s = Model__getSquare(__peek(model__), i, j);
	queue = LinkedList__new();
	LinkedList__addLast(queue, Square__getId(s));
	while (-1==((((LinkedList__getSize(queue))>(0))?-1:0))) {
		s = Model__getSquareById(__peek(model__), LinkedList__removeFirst(queue));
		if (0!=(~((((s)==(0))?-1:0)))) {
			if (0!=(~Square__isFlag(s))) {
				if (0!=(~__peek(visited+Square__getId(s)))) {
					__poke(visited+Square__getId(s), -1);
					if (0!=(~Square__isBomb(s))) {
						i = Model__getColumn(Square__getId(s));
						j = Model__getRow(Square__getId(s));
						if (0!=(Square__isHidden(s))) {
							Square__setHidden(s, 0);
							__poke(hidden__, __peek(hidden__)-1);
						}

						NandMines__paintSquare(__this, i, j);
						if (0!=((((NandMines__getMines(__this, i, j))==(0))?-1:0))) {
							LinkedList__addLast(queue, Model__getId(i-1, j-1));
							LinkedList__addLast(queue, Model__getId(i-1, j));
							LinkedList__addLast(queue, Model__getId(i-1, j+1));
							LinkedList__addLast(queue, Model__getId(i, j-1));
							LinkedList__addLast(queue, Model__getId(i, j+1));
							LinkedList__addLast(queue, Model__getId(i+1, j-1));
							LinkedList__addLast(queue, Model__getId(i+1, j));
							LinkedList__addLast(queue, Model__getId(i+1, j+1));
						}

					}

				}

			}

		}

	}
	LinkedList__dispose(queue);
	Array__dispose(visited);
	return 0;
}
var NandMines__getMines(var __this, var i, var j) {
	var s = 0;
	var sum = 0;
	sum = 0;
	s = Model__getSquare(__peek(model__), i-1, j-1);
	if (0!=(~((((s)==(0))?-1:0)))) {
		if (0!=(Square__isBomb(s))) {
			sum = sum+1;
		}

	}

	s = Model__getSquare(__peek(model__), i-1, j);
	if (0!=(~((((s)==(0))?-1:0)))) {
		if (0!=(Square__isBomb(s))) {
			sum = sum+1;
		}

	}

	s = Model__getSquare(__peek(model__), i-1, j+1);
	if (0!=(~((((s)==(0))?-1:0)))) {
		if (0!=(Square__isBomb(s))) {
			sum = sum+1;
		}

	}

	s = Model__getSquare(__peek(model__), i, j-1);
	if (0!=(~((((s)==(0))?-1:0)))) {
		if (0!=(Square__isBomb(s))) {
			sum = sum+1;
		}

	}

	s = Model__getSquare(__peek(model__), i, j+1);
	if (0!=(~((((s)==(0))?-1:0)))) {
		if (0!=(Square__isBomb(s))) {
			sum = sum+1;
		}

	}

	s = Model__getSquare(__peek(model__), i+1, j-1);
	if (0!=(~((((s)==(0))?-1:0)))) {
		if (0!=(Square__isBomb(s))) {
			sum = sum+1;
		}

	}

	s = Model__getSquare(__peek(model__), i+1, j);
	if (0!=(~((((s)==(0))?-1:0)))) {
		if (0!=(Square__isBomb(s))) {
			sum = sum+1;
		}

	}

	s = Model__getSquare(__peek(model__), i+1, j+1);
	if (0!=(~((((s)==(0))?-1:0)))) {
		if (0!=(Square__isBomb(s))) {
			sum = sum+1;
		}

	}

	return sum;
}
var NandMines__paintSelected(var __this) {
	var s = 0;
	if (0!=(__peek(ended__))) {
		return 0;
	}

	s = Model__getSquare(__peek(model__), __peek(ci__), __peek(cj__));
	if (0!=(Square__isFlag(s))) {
		View__drawFlagSelected(View__getSquarePosition(__peek(ci__), __peek(cj__)));
	} else {
		View__drawSelected(View__getSquarePosition(__peek(ci__), __peek(cj__)));
	}
	return 0;
}
var NandMines__paintSquares(var __this) {
	var i = 0;
	var j = 0;
	i = 0;
	while (-1==((((i)<(Model__getColumns()))?-1:0))) {
		j = 0;
		while (-1==((((j)<(Model__getRows()))?-1:0))) {
			NandMines__paintSquare(__this, i, j);
			j = j+1;
		}
		i = i+1;
	}
	return 0;
}
var NandMines__paintSquare(var __this, var i, var j) {
	var mines = 0;
	var s = 0;
	if (0!=((((__peek(model__))==(0))?-1:0))) {
		return 0;
	}

	s = Model__getSquare(__peek(model__), i, j);
	if (0!=((((s)==(0))?-1:0))) {
		return 0;
	}

	if (0!=(Square__isHidden(s))) {
		if (0!=(__peek(ended__))) {
			if (0!=(Square__isFlag(s))) {
				if (0!=(Square__isBomb(s))) {
					View__drawFlag(View__getSquarePosition(i, j));
					return 0;
				} else {
					View__drawFail(View__getSquarePosition(i, j));
					return 0;
				}
			} else {
				if (0!=(Square__isBomb(s))) {
					View__drawMine(View__getSquarePosition(i, j));
					return 0;
				} else {
					View__drawHidden(View__getSquarePosition(i, j));
					return 0;
				}
			}
		} else {
			if (0!=(Square__isFlag(s))) {
				View__drawFlag(View__getSquarePosition(i, j));
				return 0;
			} else {
				View__drawHidden(View__getSquarePosition(i, j));
				return 0;
			}
		}
	} else {
		if (0!=(Square__isBomb(s))) {
			View__drawExplosion(View__getSquarePosition(i, j));
			return 0;
		}

		mines = NandMines__getMines(__this, i, j);
		if (0!=((((mines)==(0))?-1:0))) {
			View__drawBlank(View__getSquarePosition(i, j));
			return 0;
		}

		if (0!=((((mines)==(1))?-1:0))) {
			View__draw1(View__getSquarePosition(i, j));
			return 0;
		}

		if (0!=((((mines)==(2))?-1:0))) {
			View__draw2(View__getSquarePosition(i, j));
			return 0;
		}

		if (0!=((((mines)==(3))?-1:0))) {
			View__draw3(View__getSquarePosition(i, j));
			return 0;
		}

		if (0!=((((mines)==(4))?-1:0))) {
			View__draw4(View__getSquarePosition(i, j));
			return 0;
		}

		if (0!=((((mines)==(5))?-1:0))) {
			View__draw5(View__getSquarePosition(i, j));
			return 0;
		}

		if (0!=((((mines)==(6))?-1:0))) {
			View__draw6(View__getSquarePosition(i, j));
			return 0;
		}

		if (0!=((((mines)==(7))?-1:0))) {
			View__draw7(View__getSquarePosition(i, j));
			return 0;
		}

		if (0!=((((mines)==(8))?-1:0))) {
			View__draw8(View__getSquarePosition(i, j));
			return 0;
		}

	}
	return 0;
}
var NandMines__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#undef model__
#undef ended__
#undef ci__
#undef cj__
#undef flags__
#undef hidden__
#endif

#ifdef JACK_IMPLEMENTATION
#define _value__ (__this+0)
#define _previous__ (__this+1)
#define _next__ (__this+2)
var ListNode__new(var value) {
	var __this;
	__this = Memory__alloc(3);
	__poke(_value__, value);
	__poke(_next__, 0);
	__poke(_previous__, 0);
	return __this;
}
var ListNode__setValue(var __this, var value) {
	__poke(_value__, value);
	return 0;
}
var ListNode__setNext(var __this, var next) {
	__poke(_next__, next);
	return 0;
}
var ListNode__setPrevious(var __this, var previous) {
	__poke(_previous__, previous);
	return 0;
}
var ListNode__getPrevious(var __this) {
	return __peek(_previous__);
}
var ListNode__getValue(var __this) {
	return __peek(_value__);
}
var ListNode__getNext(var __this) {
	return __peek(_next__);
}
var ListNode__dispose(var __this) {
	Memory__deAlloc(__this);
	return 0;
}
#undef _value__
#undef _previous__
#undef _next__
#endif

#ifdef JACK_IMPLEMENTATION
var TitleImage__newImage() {
	var i = 0;
	var width = 0;
	var height = 0;
	width = 11;
	height = 43;
	i = Image__newBitmap(width, height);
	Image__push(i, 63, 24576, 32512, -32767-1, 255, 0, 0, 0, 0, 0, 0, 127, -8132, -256, -2048, 1023);
	Image__push(i, 0, 0, 504, 0, 0, 0, -16257, -3969, -511, -128, 4095, -2048, 3, 1020, 0, 0);
	Image__push(i, 0, -16136, -3969, -4095, -127, 7943, -2048, 3, 2556, 0, 0, 0, 248, -4082, -4095, 7169);
	Image__push(i, 15367, -4096, 7, 7198, 0, 0, 0, 504, -18418, -4093, 7171, 14343, -32767-1, 7, 7199, 0);
	Image__push(i, 0, 0, 504, -18418, -4093, 7171, 28679, -32767-1, 15, 6175, 0, 0, 0, 952, 14342, 28679);
	Image__push(i, 3079, 28679, -32767-1, -32753, 31, 124, 1920, 1984, 952, 7175, 28679, 3591, -8185, -32767-1, -16353, 31);
	Image__push(i, 126, 16320, 32752, 1848, 7175, 28678, 3598, -8185, -32767-1, -16353, 7709, 2174, 16352, 32760, 1848, 3079);
	Image__push(i, 28686, 3598, -8185, -32767-1, -8161, 7709, 16152, 28784, 30776, 3640, 3591, 28702, 3612, -8185, -32767-1, -8133);
	Image__push(i, 6172, 32760, 28784, 7224, 7736, 3591, 28700, 3644, -16377, -32767, 28731, 6172, -3080, 25016, 2072, 7224);
	Image__push(i, -505, 28703, 3640, -8185, -32767, 30835, 6172, -7944, -8, 120, 15416, -249, 28735, 3704, -8185, -32767-1);
	Image__push(i, 14449, 6172, -8136, 32760, 2032, 14392, -249, 28735, 3696, -8185, -32767-1, 7281, 6172, -8136, 12344, 8160);
	Image__push(i, 28696, 1799, 12400, 3808, -4089, -16384, 7393, 6172, -16328, 56, 16128, -4072, 903, 12400, 4064, 30734);
	Image__push(i, -16384, 3809, 14364, -16328, -16327, 14360, -8168, 899, 12512, 1984, 15374, -16384, 4033, 14364, -16328, -8079);
	Image__push(i, 12348, -8164, 387, 14560, 1984, 7950, -16384, 1985, 14428, -15876, 32241, 14398, -16200, 451, 29152, -30847);
	Image__push(i, 4078, -16384, -15477, -769, -3586, 16359, 16382, -15873, 451, -64, -14461, 1023, -4096, -15457, 32255, -3970);
	Image__push(i, 4039, 8182, -32257, 4091, -8, -30973, 255, -2048, -16353, 31, -4096, 0, 1984, -32737, 4093, 16376);
	Image__push(i, 768, 7, 12288, 1, 0, 0, 0, 0, 0, 2040, 48, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0);
	Image__push(i, 4344, 112, 56, -8192, -32740, -961, -7421, 127, 0, 56, 0, 6606, 64, 56, -8192, -16356);
	Image__push(i, 3632, 25478, 48, 0, 16, 0, 4403, 96, 48, -16192, 24600, 1584, 25030, 48, 0, 976);
	Image__push(i, -32767-1, 889, -1924, 16, 16880, 8200, 784, 268, 24, 0, 2040, -16264, 8044, -9089, -2160, 17179);
	Image__push(i, 8, 408, 396, 12, 0, -2504, -16263, 6438, -31135, -14376, 25540, 12, 396, 396, 12, 0);
	Image__push(i, -7144, 16432, -26189, -416, 25369, 25584, 12, 391, 396, 6, 0, 17928, 16400, -14081, -480, 8968);
	Image__push(i, 8472, -32764, 387, 134, 3, 0, 17928, -16360, -14170, 560, 13832, 8580, -8188, 408, -32570, 1);
	Image__push(i, 0, -15588, -16360, -14112, -15816, 7692, 12742, 24582, 408, -32573, 1, 0, -15874, -32737, -25537, 32511);
	Image__push(i, 3086, 15358, 12295, -14568, -16191, 0, 0, 102, 27, 7686, 7266, 3086, 14744, -2041, -481, 16864);
	Image__push(i, 0, 0, 8192, 12, 0, 0, 0, 0, 2048, 6144, 24576, 0, 0, 24576, 12, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 24576, 6, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, -8192, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return i;
}
#endif

#ifdef JACK_IMPLEMENTATION
#define first__ (__this+0)
#define last__ (__this+1)
#define size__ (__this+2)
var LinkedList__new() {
	var __this;
	__this = Memory__alloc(3);
	__poke(first__, 0);
	__poke(size__, 0);
	return __this;
}
var LinkedList__addFirst(var __this, var value) {
	var node = 0;
	node = ListNode__new(value);
	if (0!=((((__peek(size__))==(0))?-1:0))) {
		__poke(last__, node);
	} else {
		ListNode__setNext(node, __peek(first__));
	}
	__poke(first__, node);
	__poke(size__, __peek(size__)+1);
	return 0;
}
var LinkedList__addLast(var __this, var value) {
	var node = 0;
	node = ListNode__new(value);
	if (0!=((((__peek(size__))==(0))?-1:0))) {
		__poke(first__, node);
	} else {
		ListNode__setNext(__peek(last__), node);
	}
	__poke(last__, node);
	__poke(size__, __peek(size__)+1);
	return 0;
}
var LinkedList__removeFirst(var __this) {
	var temp = 0;
	var ret = 0;
	if (0!=((((__peek(first__))==(0))?-1:0))) {
		ret = -1;
	} else {
		ret = ListNode__getValue(__peek(first__));
		temp = __peek(first__);
		__poke(first__, ListNode__getNext(__peek(first__)));
		ListNode__dispose(temp);
		__poke(size__, __peek(size__)-1);
		if (0!=((((__peek(size__))==(0))?-1:0))) {
			__poke(last__, 0);
		}

	}
	return ret;
}
var LinkedList__removeLast(var __this) {
	var temp = 0;
	var ret = 0;
	if (0!=((((__peek(last__))==(0))?-1:0))) {
		ret = -1;
	} else {
		ret = ListNode__getValue(__peek(last__));
		temp = __peek(last__);
		__poke(last__, ListNode__getPrevious(__peek(last__)));
		ListNode__dispose(temp);
		__poke(size__, __peek(size__)-1);
		if (0!=((((__peek(size__))==(0))?-1:0))) {
			__poke(first__, 0);
		}

	}
	return ret;
}
var LinkedList__getSize(var __this) {
	return __peek(size__);
}
var LinkedList__dispose(var __this) {
	var node = 0;
	var temp = 0;
	node = __peek(first__);
	if (0!=(~((((node)==(0))?-1:0)))) {
		temp = node;
		node = ListNode__getNext(node);
		ListNode__dispose(temp);
	}

	Memory__deAlloc(__this);
	return 0;
}
#undef first__
#undef last__
#undef size__
#endif

#ifdef JACK_IMPLEMENTATION
var HelpImage__newImage() {
	var i = 0;
	var width = 0;
	var height = 0;
	width = 32;
	height = 192;
	i = Image__newBitmap(width, height);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 16128, -1024, -64, -253, 1023, -64, -1, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 16128, -1024, -64, -253, 1023, -64, -1, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 16128, -1024, -64, -253, 1023, -64, -1, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 16128, -1024, -64, -253, 1023, -64, -1, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 16128, -1024, -64, -253, 1023, -64, -1, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 16128, -1024, -64, -253, 1023, -64, -1, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, -16384, -1, -1, -253, -1, 4032, 0, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, -16384, -1, -1, -253, -1, 4032, 0, -1024, 0);
	Image__push(i, 0, 7936, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, -16384, -1, -1, -253, -1, 4032, 0, -1024, 0);
	Image__push(i, 0, 13248, 0, 192, -8192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, -16384, -1, -1, -253, -1, 4032, 0, -1024, 0);
	Image__push(i, 0, -3872, 0, 192, -8192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, -16384, -1, -1, -253, -1, 4032, 0, -1024, 0);
	Image__push(i, 0, 30816, 0, 504, -16384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, -16384, -1, -1, -253, -1, 4032, 0, -1024, 0);
	Image__push(i, 0, 2096, 7680, 504, 16384, 1016, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, -4096, -16381, 15, 4032, -4, -1009, 0);
	Image__push(i, 0, 24, -13186, -9119, 17393, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, -4096, -16381, 15, 4032, -4, -1009, 0);
	Image__push(i, 0, 24, -925, -989, 25371, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, -4096, -16381, 15, 4032, -4, -1009, 0);
	Image__push(i, 0, -32760, 7233, 6179, 25101, 3086, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, -4096, -16381, 15, 4032, -4, -1009, 0);
	Image__push(i, 0, -32756, 3136, 2099, 8708, 3196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, -4096, -16381, 15, 4032, -4, -1009, 0);
	Image__push(i, 0, -16372, 1120, 3123, 8966, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, -4096, -16381, 15, 4032, -4, -1009, 0);
	Image__push(i, 0, -4084, 1120, 3123, 13062, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, -16384, 1023, 4032, -4, -1009, 0);
	Image__push(i, 0, -26600, 7999, 7923, 14844, 1639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, -16384, 1023, 4032, -4, -1009, 0);
	Image__push(i, 0, 3832, -12529, 3783, -18312, 1598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, -16384, 1023, 4032, -4, -1009, 0);
	Image__push(i, 0, 2016, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, -16384, 1023, 4032, -4, -1009, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, -16384, 1023, 4032, -4, -1009, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, -16384, 1023, 4032, -4, -1009, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -16384, 15, -4096, 3, 1008, 4032, -4, -1009, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -16384, 15, -4096, 3, 1008, 4032, -4, -1009, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -16384, 15, -4096, 3, 1008, 4032, -4, -1009, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -16384, 15, -4096, 3, 1008, 4032, -4, -1009, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -16384, 15, -4096, 3, 1008, 4032, -4, -1009, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -16384, 15, -4096, 3, 1008, 4032, -4, -1009, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, 16128, 0, -4096, -16129, 1023, 4032, 0, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, 16128, 0, -4096, -16129, 1023, 4032, 0, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, 16128, 0, -4096, -16129, 1023, 4032, 0, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, 16128, 0, -4096, -16129, 1023, 4032, 0, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, 16128, 0, -4096, -16129, 1023, 4032, 0, -1024, 0);
	Image__push(i, 0, 0, 8, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, 4032, 16128, 0, -4096, -16129, 1023, 4032, 0, -1024, 0);
	Image__push(i, 0, 0, 8, 192, 0, 0, 15360, 224, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, -16132, -1009, 4032, -16132, -1009, -64, -1, -1, 0);
	Image__push(i, 0, -32767-1, 190, 192, 0, 0, 12288, 48, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, -16132, -1009, 4032, -16132, -1009, -64, -1, -1, 0);
	Image__push(i, 0, 0, 127, 416, 0, -16384, 12288, 56, 1536, 0, 6144, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, -16132, -1009, 4032, -16132, -1009, -64, -1, -1, 0);
	Image__push(i, 0, -32767-1, 249, -28384, -8603, -18559, 12291, 7708, 3965, -28944, 30411, 3230, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, -16132, -1009, 4032, -16132, -1009, -64, -1, -1, 0);
	Image__push(i, 0, -32767-1, 249, -3824, -19587, -26820, 30721, -3308, 2195, -31288, 13049, 4019, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, -16132, -1009, 4032, -16132, -1009, -64, -1, -1, 0);
	Image__push(i, 0, -8192, 1023, 12792, -20019, 29464, 26636, -20078, 4041, -31732, -29031, 2481, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, -16132, -1009, 4032, -16132, -1009, -64, -1, -1, 0);
	Image__push(i, 0, -32767-1, 255, 4872, -20348, -16104, 18441, 12433, 77, -31740, -18423, 176, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, -4, -1009, -1, 16131, -16, 0, 0, 0, 0);
	Image__push(i, 0, -32767-1, 255, 6668, -12154, -26216, -14335, 4249, 3271, -31100, -19700, 208, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, -4, -1009, -1, 16131, -16, 0, 0, 0, 0);
	Image__push(i, 0, 0, 127, 15876, -28913, -777, -9212, 3902, 1923, -900, 8095, 495, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, -4, -1009, -1, 16131, -16, 0, 0, 0, 0);
	Image__push(i, 0, -32767-1, 190, 3983, 0, 8195, 7680, 0, 0, -32752, 1025, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, -4, -1009, -1, 16131, -16, 0, 0, 0, 0);
	Image__push(i, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, -4, -1009, -1, 16131, -16, 0, 0, 0, 0);
	Image__push(i, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, -4, -1009, -1, 16131, -16, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1009, -1, -16129, 1023, -64, 16383, -1024, 4095, -16384, 15, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1009, -1, -16129, 1023, -64, 16383, -1024, 4095, -16384, 15, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1009, -1, -16129, 1023, -64, 16383, -1024, 4095, -16384, 15, 0);
	Image__push(i, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1009, -1, -16129, 1023, -64, 16383, -1024, 4095, -16384, 15, 0);
	Image__push(i, 0, 0, 8, 30, -8192, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1009, -1, -16129, 1023, -64, 16383, -1024, 4095, -16384, 15, 0);
	Image__push(i, 0, -32767-1, 190, 10, 28672, 110, 0, 1984, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1009, -1, -16129, 1023, -64, 16383, -1024, 4095, -16384, 15, 0);
	Image__push(i, 0, 0, 127, 12, 8192, 104, 0, 1824, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 0, -16132, 1023, 0, 16380, -1024, 4032, 16128, -1024, 0);
	Image__push(i, 0, -32767-1, 249, -32532, 8193, 15432, 1536, -15088, 1667, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 0, -16132, 1023, 0, 16380, -1024, 4032, 16128, -1024, 0);
	Image__push(i, 0, -32767-1, 249, 25188, 8199, 9800, 3870, 25712, 498, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 0, -16132, 1023, 0, 16380, -1024, 4032, 16128, -1024, 0);
	Image__push(i, 0, -8192, 1023, 10212, 12291, 14956, 2233, -22916, 275, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 0, -16132, 1023, 0, 16380, -1024, 4032, 16128, -1024, 0);
	Image__push(i, 0, -32767-1, 255, -7068, -4072, -23001, 4033, 25112, 282, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 0, -16132, 1023, 0, 16380, -1024, 4032, 16128, -1024, 0);
	Image__push(i, 0, -32767-1, 255, -31706, -4077, -23776, 64, 12808, 266, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 0, -16132, 1023, 0, 16380, -1024, 4032, 16128, -1024, 0);
	Image__push(i, 0, 0, 127, 13350, 4099, -18144, 3280, -28152, 499, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, 1023, -1, 16383, 0, 63, -16384, 15, 4095, -16132, -1, 0);
	Image__push(i, 0, -32767-1, 190, -142, 4105, -2256, 1935, 29468, 135, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, 1023, -1, 16383, 0, 63, -16384, 15, 4095, -16132, -1, 0);
	Image__push(i, 0, 0, 8, 16391, 15360, 0, 2, 0, 136, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, 1023, -1, 16383, 0, 63, -16384, 15, 4095, -16132, -1, 0);
	Image__push(i, 0, 0, 8, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, 1023, -1, 16383, 0, 63, -16384, 15, 4095, -16132, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, 1023, -1, 16383, 0, 63, -16384, 15, 4095, -16132, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, 1023, -1, 16383, 0, 63, -16384, 15, 4095, -16132, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, -16, 0, 252, 1008, -4096, -1, 1023, -4096, 255, 1008, 0);
	Image__push(i, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, -16, 0, 252, 1008, -4096, -1, 1023, -4096, 255, 1008, 0);
	Image__push(i, 0, 0, 8, 62, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, -16, 0, 252, 1008, -4096, -1, 1023, -4096, 255, 1008, 0);
	Image__push(i, 0, -32767-1, 190, 230, -32762, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, -16, 0, 252, 1008, -4096, -1, 1023, -4096, 255, 1008, 0);
	Image__push(i, 0, 0, 127, 196, -16378, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, -16, 0, 252, 1008, -4096, -1, 1023, -4096, 255, 1008, 0);
	Image__push(i, 0, -32767-1, 249, 12422, 24580, 12428, 60, -32672, -4093, 3072, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, -16, 0, 252, 1008, -4096, -1, 1023, -4096, 255, 1008, 0);
	Image__push(i, 0, -32767-1, 249, 31110, 8196, 30848, 6438, -1576, -25714, 7780, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 1008, 4095, 252, -1024, -4096, 16383, -16, 4095, 16128, -16, 0);
	Image__push(i, 0, -8192, 1023, 17794, 12294, 17600, 7994, -13112, -5756, 4476, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 1008, 4095, 252, -1024, -4096, 16383, -16, 4095, 16128, -16, 0);
	Image__push(i, 0, -32767-1, 255, 32386, 4146, 32320, 4902, 17976, -26236, 8140, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 1008, 4095, 252, -1024, -4096, 16383, -16, 4095, 16128, -16, 0);
	Image__push(i, 0, -32767-1, 255, 706, 4130, 576, 291, 17120, -29308, 132, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 1008, 4095, 252, -1024, -4096, 16383, -16, 4095, 16128, -16, 0);
	Image__push(i, 0, 0, 127, 26210, 12290, 26184, 441, 26316, -7034, 6534, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 1008, 4095, 252, -1024, -4096, 16383, -16, 4095, 16128, -16, 0);
	Image__push(i, 0, -32767-1, 190, 15391, 12307, 15468, 1015, 31870, -8196, 3855, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 1008, 4095, 252, -1024, -4096, 16383, -16, 4095, 16128, -16, 0);
	Image__push(i, 0, 0, -32760, 7, -8192, 7, 0, 8208, 384, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -16, 0, 16128, -16, 63, 252, -1024, 4095, 16128, -1024, 0);
	Image__push(i, 0, 0, 8, 0, 0, 0, 0, 8192, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -16, 0, 16128, -16, 63, 252, -1024, 4095, 16128, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 28672, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -16, 0, 16128, -16, 63, 252, -1024, 4095, 16128, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 12288, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -16, 0, 16128, -16, 63, 252, -1024, 4095, 16128, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -16, 0, 16128, -16, 63, 252, -1024, 4095, 16128, -1024, 0);
	Image__push(i, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -16, 0, 16128, -16, 63, 252, -1024, 4095, 16128, -1024, 0);
	Image__push(i, 0, 0, 8, 508, 12032, 2, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 4095, 16380, -16, 4032, 0, 0, 4032, 16380, -16, 0);
	Image__push(i, 0, -32767-1, 190, 2827, 14528, 3, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 4095, 16380, -16, 4032, 0, 0, 4032, 16380, -16, 0);
	Image__push(i, 0, 0, 127, 3597, 4192, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 4095, 16380, -16, 4032, 0, 0, 4032, 16380, -16, 0);
	Image__push(i, 0, -32767-1, 249, 2573, -12256, -32521, 3599, 24, -24576, 829, 192, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 4095, 16380, -16, 4032, 0, 0, 4032, 16380, -16, 0);
	Image__push(i, 0, -32767-1, 249, 2565, -32672, 25753, 9731, 956, 31759, -25690, 481, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 4095, 16380, -16, 4032, 0, 0, 4032, 16380, -16, 0);
	Image__push(i, 0, -8192, 1023, 260, -30848, 31976, 32257, 31010, 17422, 32570, 275, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, 0, 4095, 16380, -16, 4032, 0, 0, 4032, 16380, -16, 0);
	Image__push(i, 0, -32767-1, 255, 12540, -29696, 19608, 17921, 12607, 17926, 13094, 506, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, -1024, -4096, 3, -1024, -1, 16383, -1024, 4095, 16128, 1008, 0);
	Image__push(i, 0, -32767-1, 255, 8404, -26576, 1164, 16897, 12545, 16898, 4387, 10, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, -1024, -4096, 3, -1024, -1, 16383, -1024, 4095, 16128, 1008, 0);
	Image__push(i, 0, 0, 127, 390, -30704, 1764, 16897, 12723, 31747, 4409, 410, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, -1024, -4096, 3, -1024, -1, 16383, -1024, 4095, 16128, 1008, 0);
	Image__push(i, 0, -32767-1, 190, 4482, -29072, 4063, -2297, -4322, 8193, -27657, 243, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, -1024, -4096, 3, -1024, -1, 16383, -1024, 4095, 16128, 1008, 0);
	Image__push(i, 0, 0, 8, 975, 984, 0, 0, 1536, 8704, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, -1024, -4096, 3, -1024, -1, 16383, -1024, 4095, 16128, 1008, 0);
	Image__push(i, 0, 0, 8, 0, 0, 0, 0, 0, 7680, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, -1024, -4096, 3, -1024, -1, 16383, -1024, 4095, 16128, 1008, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 3072, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -1024, 4032, 252, 1008, -64, 16383, -16, -64, 16131, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -1024, 4032, 252, 1008, -64, 16383, -16, -64, 16131, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -1024, 4032, 252, 1008, -64, 16383, -16, -64, 16131, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -1024, 4032, 252, 1008, -64, 16383, -16, -64, 16131, -16, 0);
	Image__push(i, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -1024, 4032, 252, 1008, -64, 16383, -16, -64, 16131, -16, 0);
	Image__push(i, 0, 0, 8, 224, 32640, -32767-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16380, -1024, 4032, 252, 1008, -64, 16383, -16, -64, 16131, -16, 0);
	Image__push(i, 0, -32767-1, -32578, 9144, 25344, -16384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16128, -1024, -4096, 3, 1008, 4032, 0, 0, 4095, -256, -1009, 0);
	Image__push(i, 0, 0, -32641, 9740, 8448, 17920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16128, -1024, -4096, 3, 1008, 4032, 0, 0, 4095, -256, -1009, 0);
	Image__push(i, 0, -32767-1, -32519, 9222, 10496, -4096, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16128, -1024, -4096, 3, 1008, 4032, 0, 0, 4095, -256, -1009, 0);
	Image__push(i, 0, -32767-1, -32519, 9218, 2304, 26615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16128, -1024, -4096, 3, 1008, 4032, 0, 0, 4095, -256, -1009, 0);
	Image__push(i, 0, -8192, 1023, 1027, 3968, 9826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16128, -1024, -4096, 3, 1008, 4032, 0, 0, 4095, -256, -1009, 0);
	Image__push(i, 0, -32767-1, 255, -15357, 11648, 8734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 16128, -1024, -4096, 3, 1008, 4032, 0, 0, 4095, -256, -1009, 0);
	Image__push(i, 0, -32767-1, 255, -31175, 13440, 8716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, -1, 16131, 0, 63, 252, 0, -4033, 255, -16, 0);
	Image__push(i, 0, 0, 127, 879, 12416, 8731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, -1, 16131, 0, 63, 252, 0, -4033, 255, -16, 0);
	Image__push(i, 0, -32767-1, 190, 16838, -8224, -6279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, -1, 16131, 0, 63, 252, 0, -4033, 255, -16, 0);
	Image__push(i, 0, 0, 8, 124, -16384, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, -1, 16131, 0, 63, 252, 0, -4033, 255, -16, 0);
	Image__push(i, 0, 0, 8, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, -1, 16131, 0, 63, 252, 0, -4033, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 252, 0, -1, 16131, 0, 63, 252, 0, -4033, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, -1009, 63, 252, 1008, -4096, 16383, -16, -1, 16383, 1008, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, -1009, 63, 252, 1008, -4096, 16383, -16, -1, 16383, 1008, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, -1009, 63, 252, 1008, -4096, 16383, -16, -1, 16383, 1008, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, -1009, 63, 252, 1008, -4096, 16383, -16, -1, 16383, 1008, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, -1009, 63, 252, 1008, -4096, 16383, -16, -1, 16383, 1008, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -256, -1009, 63, 252, 1008, -4096, 16383, -16, -1, 16383, 1008, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, 0, -4, -1, -1, 255, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, 0, -4, -1, -1, 255, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, 0, -4, -1, -1, 255, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, 0, -4, -1, -1, 255, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, 0, -4, -1, -1, 255, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -4, -1009, 0, -4, -1, -1, 255, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 16380, -16, 63, 252, -16, 0, -16132, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 16380, -16, 63, 252, -16, 0, -16132, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 16380, -16, 63, 252, -16, 0, -16132, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 16380, -16, 63, 252, -16, 0, -16132, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 16380, -16, 63, 252, -16, 0, -16132, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 16380, -16, 63, 252, -16, 0, -16132, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 252, -16, 4032, 16380, -16, 4032, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 252, -16, 4032, 16380, -16, 4032, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 252, -16, 4032, 16380, -16, 4032, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 252, -16, 4032, 16380, -16, 4032, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 252, -16, 4032, 16380, -16, 4032, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, 252, -16, 4032, 16380, -16, 4032, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3072, 0, 0, 0, 0, 0, 0);
	Image__push(i, 16384, 0, 0, 0, 252, 0, 4032, 16380, -1024, 4095, -4, -1009, 0, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, -8192, 3, 4096, 3584, 24, 1792, 0, 0, 0, 14, 30960, 0);
	Image__push(i, 16384, 0, 0, 0, 252, 0, 4032, 16380, -1024, 4095, -4, -1009, 0, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, 4096, 10, 2048, 2048, 16, 1024, 0, 0, 0, -8184, 4128, 7616);
	Image__push(i, -24576, 1904, 0, 0, 252, 0, 4032, 16380, -1024, 4095, -4, -1009, 0, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, 2048, 7, 15872, 2048, 16, 1024, 8, 16384, 0, 16392, 4160, 2176);
	Image__push(i, -24576, 544, 0, 0, 252, 0, 4032, 16380, -1024, 4095, -4, -1009, 0, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, 1024, -4096, 2168, 2831, 464, -15360, -32521, 775, 16, 18315, -30656, -30585);
	Image__push(i, -28665, -7648, 497, 0, 252, 0, 4032, 16380, -1024, 4095, -4, -1009, 0, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, 1024, -29712, -31676, 3208, -17624, 8711, 18246, 27780, -32660, 17484, 18496, 18564);
	Image__push(i, -28668, 4640, 137, 0, 252, 0, 4032, 16380, -1024, 4095, -4, -1009, 0, 16380, -16, 0);
	Image__push(i, 0, 0, 0, 0, 512, 2864, -31623, 2128, 3608, 8705, -29500, 17479, 16450, 18504, -31680, 18567);
	Image__push(i, 2056, 4641, 10, 0, -16132, -1, 4032, 252, 1008, -64, 16383, -1024, -1, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 512, -1008, -15292, 1071, 2568, 4609, 18466, 8228, 8257, 10212, 17024, -7100);
	Image__push(i, -2041, -1775, 57, 0, -16132, -1, 4032, 252, 1008, -64, 16383, -1024, -1, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 512, 1040, 17474, 1056, 2568, 4609, 10274, 8228, 8257, 8228, 8832, 9284);
	Image__push(i, 1024, 2321, 192, 0, -16132, -1, 4032, 252, 1008, -64, 16383, -1024, -1, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 512, -31726, 17506, 1576, -28392, -7679, 9251, 9254, 8289, 9254, 9088, 9286);
	Image__push(i, 516, 2321, 141, 0, -16132, -1, 4032, 252, 1008, -64, 16383, -1024, -1, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 1536, 30781, -25378, 7623, 28910, 257, -4486, 29677, -16354, 15325, -7808, -14467);
	Image__push(i, 515, -3618, 126, 0, -16132, -1, 4032, 252, 1008, -64, 16383, -1024, -1, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, -2048, 0, 0, 0, -32767-1, 4992, 1, 0, 0, 0, 0, 0);
	Image__push(i, -30848, 7, 0, 0, -16132, -1, 4032, 252, 1008, -64, 16383, -1024, -1, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, -31744, -28672, 1, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, 252, -1024, -4096, -16129, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 18432, 24576, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, 252, -1024, -4096, -16129, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 12288, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, 252, -1024, -4096, -16129, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, 252, -1024, -4096, -16129, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, 252, -1024, -4096, -16129, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, -256, 1023, 4032, 252, -1024, -4096, -16129, -1, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, 252, 0, 63, 16128, 1008, -4096, 16383, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -16132, -1, 4032, 252, 0, 63, 16128, 1008, -4096, 16383, -1024, 0);
	Image__push(i, 0, 0, 0, 0, -8192, 0, 30816, 0, 16412, -8192, -32705, 0, 0, 0, 0, 0);
	Image__push(i, -1986, -224, 0, 0, -16132, -1, 4032, 252, 0, 63, 16128, 1008, -4096, 16383, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 12288, 1, 4192, 0, 8208, 4096, 16418, 0, 0, 0, 0, 0);
	Image__push(i, 1059, -32463, 0, 0, -16132, -1, 4032, 252, 0, 63, 16128, 1008, -4096, 16383, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 4096, 1, 4192, 0, -2032, 4096, -4062, 1025, 0, 0, 0, 0);
	Image__push(i, 545, 16681, 0, 0, -16132, -1, 4032, 252, 0, 63, 16128, 1008, -4096, 16383, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 10240, 8, -30560, 455, 8214, 16, 18305, -16384, 6151, 8, 31744, 30);
	Image__push(i, 288, 8226, 0, 0, -16132, -1, 4032, 252, 0, 63, 16128, 1008, -4096, 16383, -1024, 0);
	Image__push(i, 0, 0, 0, 0, 15872, 16182, 18576, 3716, 4121, 108, 9281, 9980, 25602, -7242, 8956, 17);
	Image__push(i, 272, 8226, 0, 0, 252, 0, 4032, -4, 1023, -4096, 16131, -16, 63, 252, 1008, 0);
	Image__push(i, 0, 0, 0, 0, 10240, 13089, -30576, -26233, 4112, 66, 10305, 9420, 8704, 16673, 716, 33);
	Image__push(i, 264, 4114, 0, 0, 252, 0, 4032, -4, 1023, -4096, 16131, -16, 63, 252, 1008, 0);
	Image__push(i, 0, 0, 0, 0, -31744, 288, 17680, 20548, 4104, 65, 10209, -7676, -32512, 16672, -29180, 31);
	Image__push(i, 134, 2065, 0, 0, 252, 0, 4032, -4, 1023, -4096, 16131, -16, 63, 252, 1008, 0);
	Image__push(i, 0, 0, 0, 0, -31744, 288, 9488, 20548, 4104, 65, 8225, 516, -32509, 16672, -20476, 0);
	Image__push(i, 289, 2065, 0, 0, 252, 0, 4032, -4, 1023, -4096, 16131, -16, 63, 252, 1008, 0);
	Image__push(i, 0, 0, 0, 0, -31744, 304, 9736, 18502, 4108, -32671, 9248, 12804, -24318, 24880, -23804, -32752);
	Image__push(i, -32496, 1040, 0, 0, 252, 0, 4032, -4, 1023, -4096, 16131, -16, 63, 252, 1008, 0);
	Image__push(i, 0, 0, 0, 0, 3584, 975, -7672, -25347, 28731, -32738, -7232, -241, 7937, 32527, 8079, 16463);
	Image__push(i, 26140, 536, 0, 0, 252, 0, 4032, -4, 1023, -4096, 16131, -16, 63, 252, 1008, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 574, 0, 0, -16384, 3, 0, 0, -16384, 0, -16320);
	Image__push(i, 6163, 520, 0, 0, -4, -1, 4095, -16132, -1009, 0, 16380, -16, -4033, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, -16132, -1009, 0, 16380, -16, -4033, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, -16132, -1009, 0, 16380, -16, -4033, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, -16132, -1009, 0, 16380, -16, -4033, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, -16132, -1009, 0, 16380, -16, -4033, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, -4, -1, 4095, -16132, -1009, 0, 16380, -16, -4033, 255, -16, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	Image__push(i, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return i;
}
#endif

#ifdef JACK_IMPLEMENTATION
var Main__main() {
	NandMines__run();
	return 0;
}
#endif

