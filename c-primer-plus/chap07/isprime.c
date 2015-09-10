//isprime.c -- test if a number is a prime number
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int num, div;
    bool isPrime;

    printf("Please enter a number, q to quit!\n");
    while(scanf("%d", &num) == 1)
    {
        for(div=2, isPrime=true; div*div<=num; div++)
	{
	    if(num%div==0)
	    {
	        isPrime = false;
	        if(div == num/div)
		    printf("%d is the square of %d\n", num, div);
		else
		    printf("%d and %d are divisors of %d\n", div, num/div, num);
	    }
	}

        if(isPrime)
            printf("%d is a prime!\n", num);

	printf("Enter a number, q to quit!\n");
    }

    
    return 0;
}
