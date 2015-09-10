//switch.c -- count num of vowels using switch.
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int a_ct, e_ct, i_ct, o_ct, u_ct;

    a_ct = e_ct = i_ct = o_ct = u_ct = 0;

    printf("Please enter some text, enter # to quit\n");
    while((ch = getchar())!=EOF)
    {
        ch = tolower(ch);
	switch(ch)
	{
	    case 'a': a_ct++;
	              break;
            case 'e': e_ct++;
	              break;
	    case 'o': o_ct++;
	              break;
	    case 'i': i_ct++;
	              break;
	    case 'u': u_ct++;
	              break;
	    default:  break;
	}
    }
    
    printf("num of A\tE\tI\tO\tU\n");
    printf("%8d%8d%8d%8d%8d\n", a_ct, e_ct, i_ct, o_ct, u_ct);

    return 0;
}
