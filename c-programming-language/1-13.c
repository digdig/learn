#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXLEN 10

/*print histogram of word lenth, existing problem:
histogram can't display to many words*/
main()
{
	int c, state, i, j, len;
	int length[MAXLEN];

	state=OUT;
	for (i=0; i<MAXLEN; ++i)
		length[i]=0;
	while ((c=getchar()) != '\n')	{
		if (c<='9' && c>='0' || c>='a' && c<='z'
			|| c>='A' && c<='Z')	{
			state=IN;
			++len;
		}
		else if (c==' ' || c=='\n' || c=='\t'
			&& state==IN)	{
			state==OUT;
			++length[len-1];
			len=0;
		}
		
	}
	//the last word is not count for using '\n'
	++length[len-1];
	for(i=0; i<MAXLEN; ++i)	{
		printf("%2d[", i+1);
		for(j=0; j<length[i]; ++j)	{
			printf("=");
		}
		printf("]\n");
	}			
}
