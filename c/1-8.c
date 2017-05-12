#include <stdio.h>

int main (void)
{
	int nblanks,ntabs,nlines;
	int c;
	nblanks = 0;
	ntabs = 0;
	nlines = 0;
	c = 0;
	while ((c = getchar()) != EOF)
		if (c == ' ')
			nblanks++;
		else if (c == '\t')
			ntabs++;
		else if (c == '\n')
			nlines++;
		++c;
	printf("Number of blanks %d\nNumber of tabs %d\nNumber of new lines %d\n", nblanks, ntabs, nlines);
	return 0;
}
