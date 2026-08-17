//
// This software is dedicated to the public domain.
//

function call(f, ...args)
{
	return f(...args);
}

function include(file)
{
	switch(file == "std") {
	case true: {
	}};
}

function struct(v,cls)
{
}

function array(n)
{
	return new Array(n);
}

function bytes(n)
{
	return new Uint8Array(n);
}

function _(txt)
{
	return (new TextEncoder()).encode(txt);
}

function poke(b,i,v)
{
	var n = v;
	if (typeof v === "string") {
		n = v.charCodeAt(0);
	}
	b[i] = n;
}

function peek(b,i)
{
	return b[i];
}

function print(v)
{
	var s = (new TextDecoder()).decode(v);
	console.log(s);
}
function print2(v)
{
	console.log(parseInt(v));
}

function free(o)
{
	delete o;
}

function file_size(f)
{
	return 0;
}

function file_load(f,s)
{
}

//
// This software is dedicated to the public domain.
//


// There is no type checking. Every variable is threated equaly as an 
// integer, a reference, a one dimension array of integer/reference, a 
// reference to a byte array or a function reference.

include("std"); // include an other source file

const MY_CONST = 47; //define a constant

class myst { // a structure with four members
	one; 
	next;
	three;
	four;
}; 

function test(){}; //Functions must be declared before calling them
function t2(a,b){}; //everything after // is a comment till the end of line

function startup(argc, argv) 
{		            // definition of the entry point function

	var i,a,s,b,end; //declaration of local variables
	var n;
	var f,y;
	struct(s,myst); // declare type of variable s to class "myst".

	a = array(123);   //allocate an array of 123 intergers
	s = new myst();   //allocate a "myst" structure
	b = bytes(3);     //allocate 3 bytes of memory
	
	poke(b,0,'B');	  // put a B in the first byte of b memory
	poke(b,1,'\n');
	poke(b,2,0);
	print(_("B:"));
	print(b);

	f = t2;		 // function pointer
	call(f, 100,2,3,4,5); // indirect function call
	f = f();

	n = 1 * 20 % 2 / 3 + (17 - 4); //that's all the operators that we have
	print2(n);

	s.one = 10001; // to access a struct member we 
                            //put the name of the struct 
                            //then the member name

	s.next = _("two"); // string literal (nul terminated as in C)
	s.three = 3;    // integer constant
	s.four = '4';   // character constant (translated to integer)

	i = a[1];	     // array access

	a[0] = _("yo");
	a[122] = _("lAst");

	print(_("héllo world!\n")); // UTF-8
	print2(peek(a[122], 1));  // print the integer value of the second byte
                                  // of the string pointed by the 123 cell of a
	print(_("\n"));
	print(argv[argc-1]);
	print2(argv[argc-1]);

	i = 0;
	y = i;
	while (i == y && i != y && i < y && i <= y && i > y && i >= y) {
	};

	switch (argc > 2) {      // switch is used as a replacement of if/else
	case true:	
		print(_("yo \n"));
		i = 2;
		end = 0;
		while (i < argc && (end == 0 || 3 == 2)) { // only while loop
			print(_("."));
			i = i + 1;
			switch (i) {
			case +10: 
				end = 1;
				break;
			};
		};
		break;
	case false:
	case -1:
		print(s.next);
		break;
	};
	free(a);
	test(); 	// function call
	free(s);
	f = file_size(argv[1]);
	switch(f > 0) { // a compare operation result is either +1, -1 or 0. 
	case -5: 
	case 2: 
	case 3:       // these are garbage, but are allowed
	case true: 		// +1 is true
		f = file_load(argv[1], f);
		print(f);
		break;
	default: 
	case false: break;      // -1 or 0 are false
	};
	return 0;
}

// real definition of functions
function test()
{
	print(_("test\n")); //print a string
	print2(MY_CONST); // print a number (print3 is for ternary encoded numbers)
	t2(1,2);
}

function t2( a , b ) {
	print2(a+b);
	print(_("\n"));
}

//
// This software is dedicated to the public domain.
//

switch (typeof process !== 'undefined') {
case true:
	startup(2,[_("theApp"), _("ARGG1"), 0]);break;
}
