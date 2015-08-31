//typesize.c -- prints out type sizes
#include <stdio.h>
#include <complex.h>
int main(void)
{
    float pi = 2.1415926536;
    int cost = 2.99;

    printf("pi is %f\ncost is %d\n",pi, cost);

    printf("Type <char> has a size of %zd bytes.\n",sizeof(char));
    printf("Type <_Bool> has a size of %zd bytes.\n",sizeof(_Bool));
    printf("Type <int> has a size of %zd bytes.\n",sizeof(int));
    printf("Type <long int> has a size of %zd bytes.\n",sizeof(long int));
    printf("Type <float> has a size of %zd bytes.\n",sizeof(float));
    printf("Type <double> has a size of %zd bytes.\n",sizeof(double));
    printf("Type <long double> has a size of %zd bytes.\n",sizeof(long double));
    printf("Type <double complex> has a size of %zd bytes.\n",sizeof(double complex));
    printf("Type <long double complex> has a size of %zd bytes.\n",sizeof(long double complex));
}

