
#include <stdlib.h>
#include <stdio.h>

int add3(int x, int y);

int b2t(int in)
{
	int out = 0;
	int p3;
	int pl;
	int base;
	int n;
	n = in;

	if (in == 0) return 0;

	base = 59049; /* 3^^10 */
	p3 = (base - 1) / 2;
	while (p3 > 0) {
		pl = p3;
		base = base / 3;
		p3 = p3 - base;
		out = out << 2;
		if (in > p3) {
			in = in - base;
			out = out | 0x1;
		} else if (in < -p3) {
			in = in + base;
			out = out | 0x2;
		}
	}
	return out;
}

int t2b(int in)
{
	int out = 0;
	int p3;
	int i = 0;
	p3 = 1;
	while (i < 10) {
		if (in & 0x1) {
			out = out + p3;
		} else if (in & 0x2) {
			out = out - p3;
		}
		in = in >> 2;
		p3 = p3 * 3;
		i++;
	}	
	return out;
}

int shr3(int x)
{
	return x >> 2;
}

int shl3(int x) {
	return x << 2;
}

int cons3(int x, int y)
{
	return x & y;
}

int any3(int x, int y)
{
	int v = 0;
	v |= x & ~(y>>1) & 0x55555;
	v |= y & ~(x>>1) & 0x55555;
	v |= x & ~(y<<1) & 0xAAAAA;
	v |= y & ~(x<<1) & 0xAAAAA;
	return v;
}

int neg3(int x) {
	int i;
	int m1;
	int m2;
	int out = 0;
	i = 10;
	m1 = 0x1;
	m2 = 0x2;
	while (i > 0) {
		if (cons3(x, m1) != 0) {
			out = add3(out, m2);
		} else if (cons3(x, m2) != 0) {
			out = add3(out, m1);
		}
		m1 = shl3(m1);
		m2 = shl3(m2);
		i--;
	}
	return out;
}

/* is less than zero */
int lz3(int x)
{
	int m1;
	int m2;
	m1 = 0x1 << 18;
	m2 = 0x2 << 18;
	while (m1 != 0) {
		if (cons3(x, m1) != 0) return 0;
		if (cons3(x, m2) != 0) return 1;
		m1 = shr3(m1);
		m2 = shr3(m2);
	}
	return 0;
}

int add3(int x, int y)
{
	int i;
	int out = 0;
	int carry = 0;
	int n;
	i  = 10;
	while (i > 0) {
		out = shr3(out);
		n = 0;
		if (carry == 0x1) n++;	
		if (carry == 0x2) n--;	
		if (cons3(x, 0x1) != 0) n++;
		if (cons3(x, 0x2) != 0) n--;
		if (cons3(y, 0x1) != 0) n++;
		if (cons3(y, 0x2) != 0) n--;
		carry = 0;
		if (n > 0) {
			if (n > 1) {
				carry = 0x1;
				if (n < 3) {
					out = out | (0x2 << 18);
				}
			} else {
				out = out | (0x1 << 18);
			}	
		} else if (n < 0) {
			if (n < -1) {
				carry = 0x2;
				if (n > -3) {
					out = out | (0x1 << 18);
				}
			} else {
				out = out | (0x2 << 18);
			}
		}
		y = shr3(y);
		x = shr3(x);
		i--;	
	}
	return out;
}

int mul3(int x, int y) {
	int res = 0;
	int m1;
	int m2;
	m1 = 0x1 << 18;
	m2 = 0x2 << 18;
	while (m1) {
		res = shl3(res);
		if (cons3(x, m1) != 0) {
			res = add3(res, y);
		} else if (cons3(x, m2) != 0) {
			res = add3(res, neg3(y));
		}
		m1 = shr3(m1);
		m2 = shr3(m2);
	}
	return res;
}

int remainder3 = 0;

int div3(int dividend, int divisor)
{
	int quotient;
	int neg_div;
	int remainder = 0;
	int one;
	int low;
	int high;
	int tmp;
	int i;
	if (divisor == 0) {
		remainder3 = 0;
		return 0;
	}
	if (lz3(divisor)) {
		one = 0x2;
		divisor = neg3(divisor);
	} else {
		one = 0x1;
	}
	quotient = dividend;
	neg_div = neg3(divisor);
	i = 10;
	while (i > 0) {
		remainder = shl3(remainder);
		if (quotient & (0x1 << 18)) {
			remainder = remainder | 0x1;
		}
		if (quotient & (0x2 << 18)) {
			remainder = remainder | 0x2;
		}
		quotient = shl3(quotient);
		if (lz3(remainder)) {
			high = add3(remainder, divisor);
			tmp = add3(remainder, high);
			if (lz3(tmp) || (tmp == 0 && lz3(quotient))) {
				quotient = add3(quotient, neg3(one));
				remainder = high;
			}
		} else if (remainder != 0) {
			low = add3(remainder, neg_div);
			tmp = add3(remainder, low);
			if ((!lz3(tmp) && tmp != 0) || 
				(tmp == 0 && !lz3(quotient) && quotient != 0))
			{
				quotient = add3(quotient, one);
				remainder = low;
			}
		}
		i--;
	}
	if (lz3(one)) {
		if (lz3(dividend)) { 
			if (remainder != 0 && !lz3(remainder)) {
				quotient = add3(quotient, 0x2);
				remainder = add3(remainder, neg_div);
			}
		} else {
			if (lz3(remainder)) {
				quotient = add3(quotient, 0x1);
				remainder = add3(remainder, divisor);
			}
		}
	} else {
		if (lz3(dividend)) { 
			if (remainder != 0 && !lz3(remainder)) {
				quotient = add3(quotient, 0x1);
				remainder = add3(remainder, neg_div);
			}
		} else {
			if (lz3(remainder)) {
				quotient = add3(quotient, 0x2);
				remainder = add3(remainder, divisor);
			}
		}
	}
	remainder3 = remainder;
	return quotient;
}

int main(int argc, char *argv[])
{
	if (argc > 2) {
		printf("%d - %d = %d\n", atoi(argv[1]), atoi(argv[2]), 
			t2b(add3(b2t(atoi(argv[1])), neg3(b2t(atoi(argv[2]))))));
		printf("%d * %d = %d\n", atoi(argv[1]), atoi(argv[2]), 
			t2b(mul3(b2t(atoi(argv[1])), b2t(atoi(argv[2])))));
		printf("%d / %d = %d", atoi(argv[1]), atoi(argv[2]), 
			t2b(div3(b2t(atoi(argv[1])), b2t(atoi(argv[2])))));
		printf(" R=%d\n", t2b(remainder3));
		printf("%d = any(%d, %d)\n", 
			t2b(any3(b2t(atoi(argv[1])), b2t(atoi(argv[2])))), 
			atoi(argv[1]), atoi(argv[2]));
	}
	return 0;
}

