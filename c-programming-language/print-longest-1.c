#include <stdio.h>

#define MAXSIZE 10

int max;
char line[MAXSIZE];
char longest[MAXSIZE];

int fetchline(void);
void copy(void);

main()
{
	int len;
//  extern int max;
//	extern char longest[];

	max=0;
	while((len=fetchline())  > 1)
		if (len>max) {
			max=len;
			copy();
		}
	printf("%s",longest);
	return 0;
}

int fetchline(void)
{
	int c, i;
//	extern char line[];

	for(i=0; i<MAXSIZE-1 && (c=getchar()) != EOF && c!='\n'; ++i)
		line[i]=c;
	if(c=='\n') {
		line[i]=c;
		++i;
	}
	line[i]='\0';
	return i;
}

void copy(void)
{
	int i;
//	extern char line[], longest[];

	i=0;
	for(i=0; (longest[i]=line[i]) != '\0'; ++i)
		;
}
