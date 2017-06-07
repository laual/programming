#include <stdio.h>

int main (void) {
	int c;
	int nb;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while (c == ' ') {
				c=getchar();
			}
			putchar(' ');
		}
		putchar(c);
	}
	return(0);
}
