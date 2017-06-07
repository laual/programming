#include <stdio.h>

int main ()
{
	int c;

	while ((c=getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			putchar('-');
			putchar('\n');
		}
		else putchar(' ');
	}
	return 0;
}
