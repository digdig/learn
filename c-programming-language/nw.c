#include <stdio.h>

#define IN 1
#define OUT 0

//count the word, line, char number of input
main()
{
	int nc, nw, nl, c, state;

	nc = nw = nl = 0;
	state = OUT;

	while ((c = getchar()) != EOF)	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		//enter the first char of a word
		else if (state == OUT)	{
			state = IN;
			++nw;
		}
		printf("nw=%d\tnl=%d\tnc=%d\n", nw, nl, nc);
	}
	printf("nw=%d\tnl=%d\tnc=%d\n", nw, nl, nc);
}
