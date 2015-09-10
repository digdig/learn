#include <stdio.h>

double power (double base, int p);
int main(void)
{
    int p;
    double x, xpow;

    printf("Enter a double and an int, press q to quit!\n");

    while(scanf("%lf%d",&x, &p)==2)
    {
	xpow = power(x,p);
        printf("The %f^%d is %f\n", x, p, xpow);
	printf("Enter next number pair, q to quit!\n");
    }

    return 0;
}

double power (double base, int p)
{
    int index;
    double pow=1.;

    for(index=1; index<=p; index++)
    {
        pow *= base;
    }

    return pow;
}
