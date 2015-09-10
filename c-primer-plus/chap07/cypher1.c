//cypher1.c -- alter input, presering spaces
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter some characters!\n");
    ch = getchar();
    while(ch != '\n')
    {
        if(ch == ' ')
	    putchar(ch);
	else
	    putchar(ch+1);
	
	ch = getchar();
    }

    putchar(ch);

    return 0;
}
