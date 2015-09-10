//Test the limits of system based constant
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("The max of signed int is:%d\n",INT_MAX);
    printf("The number of significant digits supported for double is:%d\n", DBL_DIG);

    return 0;
}
