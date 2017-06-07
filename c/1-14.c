#include <stdio.h>

int main()
{
	int c, i;
	int array_ascii[128];

	for(i=0; i<128; ++i) {
		array_ascii[i]=0;
	}
	
	while (((c=getchar()) != EOF) && (c != '\n')) {
		++array_ascii[c];
      	}
	
      	for(i=0; i<128; ++i) {
		if (array_ascii[i] > 0) {
			printf("%c\t%d\n",i , array_ascii[i]);
		}
	}
	return 0;
}
