include("std");
function startup(argc, argv)
{
    print(_("Hello world!\n"));
}
//
// This software is dedicated to the public domain.
//

switch (typeof process !== 'undefined') {
case true:
	startup(2,[_("theApp"), _("ARGG1"), 0]);break;
}
