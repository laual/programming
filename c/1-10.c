#include <stdio.h>

int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\\t");
			c = getchar();
		}
		else if (c == '\b') {
			printf("\\b");
			c = getchar();
		}
		else if (c == '\\') {
			printf("\\");
			c = getchar();
			}
		putchar(c);
	}
	return 0;
}
