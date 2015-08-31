#include <stdio.h>
#define MAXSIZE 10
//there is getline in stdio.h
int fetchline(char line[], int maxsize);
void copy(char to[], char from[]);

//copy the longest line
main()
{
	int len, max;
	char line[MAXSIZE];	
	char longest[MAXSIZE];
	
	max=0;
	//maxsize should greater than 0 indeed.
	while((len=fetchline(line, MAXSIZE)) > 1)
		if(len > max)	{
			max=len;
			copy(longest,line);
		}
	if(max < MAXSIZE-1) 
		printf("%d%s", max, longest);
	else if(longest[MAXSIZE-2] != '\n')
		printf("array overflow\n");
	else
		printf("%d%s", max, longest);
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

void copy(char to[], char from[])
{
	int i;
	for(i=0; (to[i]=from[i]) != '\0'; ++i)
		;
	//i=0;
	//while((to[i]=from[i]) != '\0')
	//	++i;
}
