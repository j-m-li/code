typedef long var;
var echo();
var int();
var escape();
var begin_document();
var end_document();
var title();
var page_break();
var head();
var par();
var txt();
var nl();
var doc();
var startup();
var (*wrapper(struct trip *st, char *clas, char *id, int *argc))() {
		if (!id_cmp("echo", id)) {
			*argc = 1;
			return &echo;
		}
		if (!id_cmp("int", id)) {
			*argc = 1;
			return &int;
		}
		if (!id_cmp("escape", id)) {
			*argc = 1;
			return &escape;
		}
		if (!id_cmp("begin_document", id)) {
			*argc = 0;
			return &begin_document;
		}
		if (!id_cmp("end_document", id)) {
			*argc = 0;
			return &end_document;
		}
		if (!id_cmp("title", id)) {
			*argc = 1;
			return &title;
		}
		if (!id_cmp("page_break", id)) {
			*argc = 0;
			return &page_break;
		}
		if (!id_cmp("head", id)) {
			*argc = 2;
			return &head;
		}
		if (!id_cmp("par", id)) {
			*argc = 1;
			return &par;
		}
		if (!id_cmp("txt", id)) {
			*argc = 1;
			return &txt;
		}
		if (!id_cmp("nl", id)) {
			*argc = 1;
			return &nl;
		}
		if (!id_cmp("doc", id)) {
			*argc = 0;
			return &doc;
		}
		if (!id_cmp("startup", id)) {
			*argc = 2;
			return &startup;
		}
	return (void*)0;
}
var echo(var to)
{
((var(*)())print)(to);
	return 0;
}
var int(var n)
{
((var(*)())print10)(n);
	return 0;
}
var escape(var txt)
{
((var(*)())echo)(txt);
	return 0;
}
var begin_document()
{
((var(*)())echo)((var)"<!DOCTYPE html>
<html lang=\"en\">
<head>
<meta charset=\"UTF-8\">
<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">
");
	return 0;
}
var end_document()
{
((var(*)())echo)((var)"</body>");
((var(*)())echo)((var)"</html>\n");
	return 0;
}
var title(var tt)
{
((var(*)())echo)((var)"<title>");
((var(*)())escape)(tt);
((var(*)())echo)((var)"</title>\n");
((var(*)())echo)((var)"</head>");
((var(*)())echo)((var)"<body>\n");
	return 0;
}
var page_break()
{
((var(*)())echo)((var)"\n<hr/>\n");
	return 0;
}
var head(var n, var t)
{
((var(*)())echo)((var)"<h");
((var(*)())int)(n);
((var(*)())echo)((var)">");
((var(*)())escape)(t);
((var(*)())echo)((var)"</h");
((var(*)())int)(n);
((var(*)())echo)((var)">\n");
	return 0;
}
var par(var t)
{
((var(*)())echo)((var)"<p>");
((var(*)())escape)(t);
((var(*)())echo)((var)"</p>\n");
	return 0;
}
var txt(var t)
{
((var(*)())escape)(t);
((var(*)())echo)((var)"\n");
	return 0;
}
var nl(var t)
{
((var(*)())echo)((var)"<br>");
((var(*)())txt)(t);
	return 0;
}
var doc()
{
((var(*)())begin_document)();
((var(*)())title)((var)"= The trip \"Document\" Format =");
((var(*)())page_break)();
((var(*)())head)(1, (var)(var)"MEGA\nMIX");
((var(*)())par)((var)"This is techno !!");
((var(*)())txt)((var)"Follow text sentences....
line 1
line 2
line 3
");
((var(*)())nl)((var)"Yo Man.");
((var(*)())head)(2, (var)(var)"TODO commands:");
((var(*)())nl)((var)"path stroke_color stroke_width fill_color bg_color font anchor link gif input");
((var(*)())nl)((var)"");
((var(*)())end_document)();
	return 0;
}
var startup(var argc, var argv)
{
((var(*)())doc)();
	return 0;
}
int main(int argc, char *argv[]) {
	return startup((var)argc,(var)argv);
}
