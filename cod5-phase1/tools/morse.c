
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MBUF 20

struct tree {
	struct tree *left;
	struct tree *right;
	int val;
};

struct tree items[300];
int nb_items = 0;
struct tree *morsetree = NULL;

void ascii2morse(int c, int *n, char *b);

void e(int *n, char *b)
{
	b[(*n) / 6] |= 0x2 << ((*n) % 6);
	*n = *n + 2;
	if (((*n) % 6) == 0) b[(*n) / 6] = 0;
}

void t(int *n, char *b)
{
	b[(*n) / 6] |= 0x1 << ((*n) % 6);
	*n = *n + 2;
	if (((*n) % 6) == 0) b[(*n) / 6] = 0;
}

void space(int *n, char *b)
{
	*n = *n + 2;
	if (((*n) % 6) == 0) b[(*n) / 6] = 0;
}

void a2m(char *s, int *n, char *b)
{
	while (*s) {
		ascii2morse(*s, n, b);
		s++;
	}
}

void ascii2morse(int c, int *n, char *b)
{
	switch (c) {
	case 'a': a2m("et",n,b);break; 
	case 'b': a2m("ts",n,b);break; 
	case 'c': a2m("tr",n,b);break; 
	case 'd': a2m("ti",n,b);break; 
	case 'e': e(n,b);break; // short 
	case 'f': a2m("er",n,b);break; 
	case 'g': a2m("tn",n,b);break; 
	case 'h': a2m("es",n,b);break; 
	case 'i': a2m("ee",n,b);break; 
	case 'j': a2m("eo",n,b);break; 
	case 'k': a2m("ta",n,b);break; 
	case 'l': a2m("ed",n,b);break; 
	case 'm': a2m("tt",n,b);break; 
	case 'n': a2m("te",n,b);break; 
	case 'o': a2m("tm",n,b);break; 
	case 'p': a2m("eg",n,b);break; 
	case 'q': a2m("tk",n,b);break; 
	case 'r': a2m("en",n,b);break; 
	case 's': a2m("ie",n,b);break; 
	case 't': t(n,b);break; // long 
	case 'u': a2m("it",n,b);break; 
	case 'v': a2m("eu",n,b);break; 
	case 'w': a2m("em",n,b);break; 
	case 'x': a2m("tu",n,b);break; 
	case 'y': a2m("tw",n,b);break; 
	case 'z': a2m("td",n,b);break;  
	case '0': a2m("mo",n,b);break; 
	case '1': a2m("ao",n,b);break; 
	case '2': a2m("io",n,b);break; 
	case '3': a2m("sm",n,b);break; 
	case '4': a2m("ht",n,b);break; 
	case '5': a2m("he",n,b);break; 
	case '6': a2m("th",n,b);break; 
	case '7': a2m("ms",n,b);break; 
	case '8': a2m("oi",n,b);break; 
	case '9': a2m("on",n,b);break; 
	case '.': a2m("rk",n,b);break; 
	case ',': a2m("gw",n,b);break; 
	case '?': a2m("ud",n,b);break; 
	case '\'': a2m("wg",n,b);break; 
	case '!': a2m("cm",n,b);break; 
	case '/': a2m("xe",n,b);break; 
	case '(': a2m("kn",n,b);break; 
	case ')': a2m("kk",n,b);break; 
	case '&': a2m("as",n,b);break; 
	case ':': a2m("os",n,b);break;  
	case ';': a2m("kr",n,b);break; 
	case '=': a2m("bt",n,b);break; 
	case '+': a2m("ar",n,b);break; 
	case '-': a2m("du",n,b);break; 
	case '_': a2m("uk",n,b);break; 
	case '"': a2m("rr",n,b);break; 
	case '$': a2m("sx",n,b);break; 
	case '@': a2m("pn",n,b);break; 
	case 0: a2m("sk",n,b);break; /* end of work */
	case '\b': a2m("hh",n,b);break;  /* error */
	case '\n': a2m("ct",n,b);break; /* starting signal */
	case ' ': break; 

	case '*': a2m("zt",n,b);break; /* non standard extension */
	case '%': a2m("pt",n,b);break; 
	case '<': a2m("ot",n,b);break; 
	case '>': a2m("oe",n,b);break; 
	case '[': a2m("rt",n,b);break; 
	case ']': a2m("lt",n,b);break; 
	case '{': a2m("ut",n,b);break; 
	case '}': a2m("ute",n,b);break; 
	case '\\': a2m("ve",n,b);break; 
	case '|': a2m("vee",n,b);break; 
	case '^': a2m("5e",n,b);break; 
	case '~': a2m("5ee",n,b);break; 


	case 127: a2m("8t",n,b);break; 
	case 1: a2m("0e",n,b);break; 
	case 2: a2m("9t",n,b);break; 
	case 3: a2m("9e",n,b);break; 
	case 4: a2m("8t",n,b);break; 
	case 5: a2m("Tt",n,b);break; 
	case 6: a2m("Me",n,b);break; 
	case 7: a2m("Mt",n,b);break; 
	case 11: a2m("*e",n,b);break; 
	case 12: a2m("Yt",n,b);break; 
	case 13: a2m("Ye",n,b);break; 
	case 14: a2m("(e",n,b);break; 
	case 15: a2m(">t",n,b);break; 
	case 16: a2m("1t",n,b);break; 
	case 17: a2m("%t",n,b);break; 
	case 18: a2m("+e",n,b);break; 
	case 19: a2m("]t",n,b);break; 
	case 20: a2m("2e",n,b);break; 
	case 21: a2m("Ie",n,b);break; 
	case 22: a2m("3t",n,b);break; 
	case 23: a2m("|e",n,b);break; 
	case 24: a2m("^t",n,b);break; 
	case 25: a2m("5t",n,b);break; 
	case 26: a2m("5e",n,b);break; 
	case 27: a2m("Ct",n,b);break; 
	case 28: a2m("Ce",n,b);break; 
	case 29: a2m("Xt",n,b);break; 
	case 30: a2m("Xe",n,b);break; 
	case 31: a2m("~t",n,b);break; 


	case 'A': a2m("[t",n,b);break; 
	case 'B': a2m("=e",n,b);break; 
	case 'C': a2m("ce",n,b);break; 
	case 'D': a2m("6e",n,b);break; 
	case 'E': a2m("fe",n,b);break; 
	case 'F': a2m("ftt",n,b);break; 
	case 'G': a2m("7e",n,b);break; 
	case 'H': a2m("4e",n,b);break; 
	case 'I': a2m("ft",n,b);break; 
	case 'J': a2m("1e",n,b);break; 
	case 'K': a2m("ct",n,b);break; 
	case 'L': a2m("&e",n,b);break; 
	case 'M': a2m("qe",n,b);break; 
	case 'N': a2m("=t",n,b);break; 
	case 'O': a2m("0t",n,b);break; 
	case 'P': a2m("pe",n,b);break; 
	case 'Q': a2m("qte",n,b);break; 
	case 'R': a2m("&t",n,b);break; 
	case 'S': a2m("4t",n,b);break; 
	case 'T': a2m("qt",n,b);break; 
	case 'U': a2m("2t",n,b);break; 
	case 'V': a2m("3e",n,b);break; 
	case 'W': a2m("je",n,b);break; 
	case 'X': a2m("xt",n,b);break; 
	case 'Y': a2m("yt",n,b);break; 
	case 'Z': a2m("7t",n,b);break; 

	default:
		a2m("?",n,b);
	}
}

void morse2ascii(int c, int *n, char *b, struct tree **ptr)
{
	int i = 0;
//	fprintf(stderr, "(%c) ", c);
	while (i < 3) {
		if (c & 1) {
		//	fprintf(stderr, "-%c", (*ptr)->val);
			*ptr = (*ptr)->left;
		} else if (c & 2) {
		//	fprintf(stderr, ".%c", (*ptr)->val);
			*ptr = (*ptr)->right;
		} else {
		//	fprintf(stderr, "=");
			if ((*ptr)->val >= 0) {
				b[(*n) / 8] = (*ptr)->val;
			//	fprintf(stderr, " OK %d '%c'\n",  (*ptr)->val, (*ptr)->val);
				*n = (*n) + 8;
			} else {
				b[(*n) / 8] = -1;
			}
			*ptr = morsetree;
		}
		if (!(*ptr)) {
			fprintf(stderr, "PANIC '%c' %d %x\n", c, c, c);
			exit(-1);
		}
		c = c >> 2;
		i++;
	}
//	fprintf(stderr, " ");
	
}

void dumptree(struct tree *ptr, int level, char *buffer)
{
	int p = 0;
	if (ptr->val >= 0 && ptr->val < 127 && 
			ptr->val != '\b' && ptr->val != '\n') 
	{
		buffer[level] = ptr->val;
	} else {
		if (ptr->val == -1) {
			buffer[level] = 'E';
		} else if (ptr->val == '\b') {
			buffer[level] = 'B';
		} else if (ptr->val == '\n') {
			buffer[level] = 'N';
		} else if (ptr->val == ' ') {
			buffer[level] = 'S';
		} else {
			buffer[level] = 'U';
		}
//		buffer[level] = ' ';
	
	}
	level++;
	buffer[level] = 0;
	if (ptr->left) {
		dumptree(ptr->left, level, buffer);
		p++;
	}
	if (ptr->right) {
		dumptree(ptr->right, level, buffer);
		p++;
	}
	if (p == 0) {
		fprintf(stderr, "\"%s\"\n", buffer);
	} else if (p == 1) {
		fprintf(stderr, "\"%s\" !!! %d\n", buffer, level);
	}
}

int main(int argc, char *argv[])
{
	int c;
	char buf[MBUF];
	int n = 0;
	int i;
	int a;
	int maxn = 0;
	struct tree *ptr;
	memset(items, 0, sizeof(items));
	morsetree = items;
	morsetree->val = -1;
	nb_items = 1;
	for (i = 0; i <= 127; i++) {
		n = 0;
		memset(buf, 0, sizeof(buf));
		ascii2morse(i, &n, buf);
		if (n > maxn) {
			maxn = n;
		}
		ptr = morsetree;
		a = 0;
		while (n > 0) {
			if (buf[0] & 1) {
				if (!ptr->left) {
					ptr->left = items + nb_items;
					ptr->left->val = -1;
					nb_items++;
				}
				fprintf(stderr, "-");
				ptr = ptr->left;
			} else if (buf[0] & 2) {
				if (!ptr->right) {
					ptr->right = items + nb_items;
					ptr->right->val = -1;
					nb_items++;
				}
				ptr = ptr->right;
				fprintf(stderr, ".");
			} else {
				fprintf(stderr, " ");
			//	fprintf(stderr, "%c %d err\n");
			//	exit(-1);
			}
			buf[0] = buf[0] >> 2;
			n -= 2;
			a++;
			if (a == 3) {
				a = 0;
				buf[0] = buf[1];
				buf[1] = buf[2];
				buf[2] = buf[3];
				buf[3] = buf[4];
				buf[4] = 0;
			}	
		}
		fprintf(stderr, "\t'%c'\n", i);
	//	fprintf(stderr, " '%c' %p %d %d %d\n", i, ptr, nb_items, ptr->val, i);
		if (i == 255) {
			ptr->val = '?';
		} else {
			ptr->val = i;
		}
	}
	dumptree(morsetree, 0, buf);
	fprintf(stderr, "nb_items = %d\n", nb_items);
	c = fgetc(stdin);
	memset(buf, 0, sizeof(buf));
	n = 0;
	ptr = morsetree;
	while (c != EOF) {
		if (argc > 1) {
			morse2ascii(c, &n, buf, &ptr);
			while (n >= 8) {
			//fprintf(stderr, "JJJ %x %d '%c'\n", c, n, buf[0]);
				fputc(buf[0], stdout);
				buf[0] = 0;
				n -= 8;
				for (i = 0; i <= (n/8); i++) {
					buf[i] = buf[i + 1];
					buf[i + 1] = 0;
				}
			}	
		} else {
			ascii2morse(c, &n, buf);
			space(&n, buf);
			while (n >= 6) {
				fputc(buf[0] | 0x40, stdout);
				buf[0] = 0;
				n -= 6;
				for (i = 0; i <= (n/6); i++) {
					buf[i] = buf[i + 1];
					buf[i + 1] = 0;
				}
			}	
		}
		c = fgetc(stdin);
	}
	if (n > 0) {
		if (argc > 1) {
			fputc(buf[0], stdout);
		} else {
			fputc(buf[0] | 0x40, stdout);
		}
	}
	return 0;
}

