#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
https://homepage.cs.uiowa.edu/~dwjones/ternary/arith.shtml
*/

char neg(char a)
{
	if (a == '+') {
		return '-';
	} else if (a == '-') {
		return '+';
	}
	return '0';
}

char sum(char a, char b)
{
	if (a == b) {
		return neg(a);
	} else if (a == '0') {
		return b;
	} else if (b == '0') {
		return a;
	}
	return '0';
}

char cons(char a, char b)
{
	if (a == b) {
		return a;
	}
	return '0';
}

char any(char a, char b)
{
	if (a == b) {
		return a;
	} else if (a == '0') {
		return b;
	} else if (b == '0') {
		return a;
	}
	return '0';
}

/*
https://www.researchgate.net/publication/271300468_Efficient_CNTFET-based_Ternary_Full_Adder_Cells_for_Nanoelectronics
*/
int sum3(char a, char b, char c)
{
	int r = 0;
	if (a == '1') r++;
	if (a == '2') r+=2;
	if (b == '1') r++;
	if (b == '2') r+=2;
	if (c == '1') r++;
	return r;
}

int sum4(char a0, char b0, char a1, char b1)
{
	int r;
	r = sum3(a0, b0, '0');
	r += sum3(a1, b1, '0') * 3;
	return r;
}

void add(char *in1, char *in2, char *r, int p)
{
	char c = '0';
	char a,b,s;
	char s0, c0;
	char sum_ab;
	char sum_abc;
	char sum_abab;
	// balanced
	p--;
/*
	a = in1[p];
	b = in2[p];

	sum_ab = sum(a, b);
	s0 = sum(sum_ab, c);
	c0 = any(cons(a, b), cons(sum_ab, c));
*/

	sum_abab = sum4(in1[p], in2[p], in1[p-1], in2[p-1]);
	switch (sum_abab) {
	case 0: r[p] = '0'; r[p-1] = '0'; c = '0'; break;
	case 1: r[p] = '1'; r[p-1] = '0'; c = '0'; break;
	case 2: r[p] = '2'; r[p-1] = '0'; c = '0'; break;
	case 3: r[p] = '0'; r[p-1] = '1'; c = '0'; break;
	case 4: r[p] = '1'; r[p-1] = '1'; c = '0'; break;
	case 5: r[p] = '0'; r[p-1] = '0'; c = '1'; break;
	case 6: r[p] = '1'; r[p-1] = '0'; c = '1'; break;
	case 7: r[p] = '2'; r[p-1] = '0'; c = '1'; break;
	case 8: r[p] = '0'; r[p-1] = '1'; c = '1'; break;
	default: exit(-1);
	}
	p--;
	// unbalanced
	while (p > 0) {
		p--;
		a = in1[p];
		b = in2[p];

		sum_abc = sum3(a, b, c);
		switch (sum_abc) {
		case 0: s = '0'; c = '0'; break;
		case 1: s = '1'; c = '0'; break;
		case 2: s = '2'; c = '0'; break;
		case 3: s = '0'; c = '1'; break;
		case 4: s = '1'; c = '1'; break;
		case 5: s = '2'; c = '1'; break;
		default: exit(-1);
		}

		r[p] = s;
	}
}

int toint(char *n, int m) {
	int p = 0;
	int r = 0;
	while (m > 2) {
		m--;
		r = r * 3;
		if (n[p] == '+') {
			r++;
		} else if (n[p] == '-') {
			r--;
		} else if (n[p] == '1') {
			r++;
		} else if (n[p] == '2') {
			r += 2;
		}
		p++;
	}
	r *= 5;
	if (n[p] == '1') {
		r += 3;
	} else if (n[p] == '2') {
		r += 6;
	}
	p++;
	if (n[p] == '1') {
		r += 1;
	} else if (n[p] == '2') {
		r += 2;
	}
	return r;
}

int main(int argc, char *argv[])
{
	char result[32];
	memset(result, 0, sizeof(result));
	printf("5*3*2\n");
	add(argv[1], argv[2], result, 4);
	printf("= %s %d\n", result, toint(result, 4));
	return 0;
}

