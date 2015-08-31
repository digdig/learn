#include <stdio.h>

//count number of digits white space and other char
main()
{
	int c, nwhite, nother;
	int ndigit[10];
	int i;

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((c = getchar()) != '\n')	{
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == '\n' || c == '\t' || c == ' ')
			++nwhite;
		else
			++nother;
	}
	printf("nwhite=%d\tnohter=%d\n", nwhite, nother);
	for (i = 0; i < 10; ++i)
		printf("ndigit[%d] = %d\n", i, ndigit[i]);
}
