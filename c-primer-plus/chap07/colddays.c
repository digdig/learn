//colddays.c -- count the number of cold days
#include <stdio.h>

int main(void)
{
    int cold_days = 0, all_days =0;
    const int FREEZE = 0;
    double temperature;

    printf("Please enter data:\n");
    //Must have, otherwise scanf is waiting next input!
    printf("Enter q to quit!\n");
    while(scanf("%lf", &temperature)==1)
    {
        all_days++;
	if(temperature<FREEZE)
	    cold_days++;
    }

    if (all_days>0)
        printf("cold day is %.2lf%%\n", (double)cold_days *100/all_days);
    else
        printf("No data entered!\n");
    
    return 0;
}
