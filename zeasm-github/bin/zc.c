#include "../src/std.zea.h"
var start() {
	var argc = pop();
	var argv = pop();
	push(0);
	return 0;
}
var stack[MAX_STACK + 1];
var sp = 0;
int main(int argc, char *argv[]) {
	push((var)argv);
	push((var)argc);
	start();
	return (int)pop();
}
