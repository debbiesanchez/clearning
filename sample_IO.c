#include <stdio.h>

/* counts the characters */

int main()
{
	long nc;

	nc = 0;
	printf("What is your name?\n");
	while (getchar() != '\n')
		++nc;
	printf("That is a beautiful name ");
	printf("and it has %1d characters \n", nc);
}
