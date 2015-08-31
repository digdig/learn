#include <stdio.h>
//copy input to output, eliminate several space to one space.
main()
{
	int b,c;

	b=0;

	while ((c=getchar()) != EOF) {
//whether print c depends on c's value and char before c.
		if (c != ' ') {
			if(b != ' ')
			  	putchar(c);
			if(b == ' ' ) {
			putchar(b);
			putchar(c);
			}
		}
		b = c;
	}
}
