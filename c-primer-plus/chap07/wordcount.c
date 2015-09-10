//wordcount.c -- count lines, words, chars and p-lines
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '|'

int main(void)
{
    bool inword = false;
    char ch, prev;
    int n_char, n_word, n_line, p_line = 0;
    
    n_char = n_word = n_line = p_line = 0;
    printf("Please enter words, | to stop!\n");

    while((ch=getchar())!=STOP)
    {
        n_char++;

	if(ch=='\n')
	    n_line++;
	if(!isspace(ch) && !inword)
	{
	    n_word++;
	    inword=true;
	}

	if(isspace(ch) && inword)
	    inword=false;
	prev = ch;
    }

    if(prev!='\n')
        p_line++;
    
    printf("n_char=%d, n_word=%d, n_line=%d, p_line=%d\n",
            n_char, n_word, n_line, p_line);

    return 0;
}
