#include <stdio.h>

int main ()
{
	int c;
	while ((c=getchar()) != EOF)
		putchar(c-'0');
	return 0;
}
