#include <stdio.h>

int main (void)
{
	int nblanks,ntabs,nlines;
	int c;
	nblanks = ntabs = nlines = 0;
	c = 0;
	while ((c=getchar()) != EOF)
		if (c == ' ')
			++nblanks;
		else if (c == '\t')
			++ntabs;
		else (c == '\n')
			++nlines;
	printf("Number of blanks %d\n\
	    Number of tabs %d\n \
	    Number of new lines %d\n", nblanks, ntabs, nlines);
	return 0;
}
