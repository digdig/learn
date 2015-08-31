#include <stdio.h>
#define NTAB 8

void detab(int n);

main()
{
	int c;
	
	while((c=getchar()) != '\n') {
		if(c!='\t')
			putchar(c);
		else
			detab(NTAB);
	}
	putchar(c);
}

void detab(int n)
{
	int i;

	for(i=0; i<n; ++i)
		printf(" ");
}
