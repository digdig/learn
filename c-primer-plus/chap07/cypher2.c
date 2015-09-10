//cypher2.c -- dont change non-letter char
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    
    printf("please enter the letters you want to cypher:\n");

    while((ch=getchar())!= '\n')
    {
        if(isalpha(ch))
	    putchar(ch+1);
	else
	    putchar(ch);
    }

    putchar(ch);
    
    return 0;
}
