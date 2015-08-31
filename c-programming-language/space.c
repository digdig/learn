#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int state, c;
	
	state = IN;

	while ((c = getchar()) != EOF)	{
		if (c == ' ')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			printf (" %c", c);
		}
		else  
			putchar(c);
	}
}
