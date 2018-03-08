#include <stdio.h>

int main()
{
	int c;
/*
	c = getchar();
	while (c != EOF){
		putchar(c);
		c = getchar();
	}
*/

	while ((c = getchar())!= '.')
		putchar(c);


/*	long nc;

	nc = 0;
	while (getchar() != '.')
		++nc;
	printf("%1d\n", nc);
*/
}
