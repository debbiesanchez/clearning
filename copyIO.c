#include <stdio.h>

/* int main()
{ */

/* copy input to output; 1st version */

	/* int c;
	c = getchar();
	while(c != '.'){
		putchar(c);
		c = getchar();
	}*/

/* copy input to output; 2nd version */
	/* int c;

	while((c = getchar()) != '.')
		putchar(c);
		*/

/* count characters in input; 1st version */
	/*long nc;

	nc = 0;
	while(getchar() != '\n')
		++nc;
	printf("%1ld\n", nc);*/

/* count characters in input; 2nd version */
	/*double nc;

	for (nc = 0; getchar() != '.'; ++nc)
			;
		printf("%.0f\n", nc);*/

/* count lines in input */

	/* int c, n1;

	n1 = 0;
	while((c = getchar()) != '.')
		if(c == '\n')
			++n1;
		else if(c == '.')
			++n1;
	printf("%d\n", n1 + 1); */

#define IN 1	/* inside a word */
#define OUT 0	/* outside a word */

/* count lines, words, and characters in input */

int main()
{
	int c, n1, nw, nc, state;

	state = OUT;
	n1 = nw = nc = 0;
	while((c = getchar()) != '.') {
		++nc;
		if(c == '\n')
			++n1;
		if(c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if(state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("No. of Line: %d\nNo. of Words: %d\nNo. of Letters: %d\n", n1 + 1, nw, nc);
}