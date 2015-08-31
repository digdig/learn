#include <stdio.h>
#define MAXSIZE 100

void reverse(char s[]);
int fetchline(char line[], int maxsize);
main()
{
	int len;
	char s[MAXSIZE];

	while((len=fetchline(s, MAXSIZE)) >1)	{
		reverse(s);
		printf("the reversed: %s\n", s);
	}
}

int fetchline(char s[], int maxsize)
{
	int i, c;

	for(i=0; i<maxsize-1 && (c=getchar()) != EOF && c!= '\n'; ++i)
		s[i]=c;
	if(c=='\n')	{
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
		
}

void reverse(char s[])
{
	char tmp_s[MAXSIZE];
	int i, j;

	for(i=0; s[i] != '\0'; ++i)
		;
	j=0;
	while(i>0) {
		tmp_s[j]=s[--i];
		++j;
	}
	tmp_s[j] = '\0';
	for(i=0; (s[i]=tmp_s[i]) != '\0'; ++i)
		;
}
