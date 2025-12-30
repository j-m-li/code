#if 0
#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Hello World!\n");
	return 0;
}
#endif

#include <windows.h>
int main(int argc, char *argv[])
{
	FreeConsole();
	MessageBox(NULL, "Hello, world!", "Hello, world!", MB_OK);
	return 0;
}
