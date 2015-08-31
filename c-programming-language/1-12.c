#include <stdio.h>

#define IN 1
#define OUT 0

//write the input one word per line.
main()
{
	int c, state;

	state = OUT;

	while ((c = getchar()) != EOF)	{
		if (c != ' ' && c != '\t' && c != '\n')	{
			state = IN;
			putchar(c);
		}
		//enter the first char of a word
		else if (state == IN)	{
			state = OUT;
			printf("\n");
		}
	}
}
