#include <stdio.h>
#define MAXSIZE 10
#define CRITICLE 5
//there is getline in stdio.h
int fetchline(char line[], int maxsize);

//print longer than 5 chars lines
main()
{
	int len;
	char line[MAXSIZE];	
	
	//maxsize should greater than 0 indeed.
	while((len=fetchline(line, MAXSIZE)) > 1)
		if(len >= CRITICLE-1)	
			printf("%s", line);
}

int fetchline(char s[], int msize)
{
	int c, i;

	for(i=0; i<msize-1 && (c=getchar()) != EOF && 
		c != '\n'; ++i)	
		s[i]=c;
	if(c == '\n')	{
		s[i]=c;
		++i;
	}
	s[i]='\0';
	//max_i= MAXSIZE-1
	return i;
}

