//complex.c -- explain how complex number is used in c
#include <stdio.h>      /* Standard Library of Input and Output */
#include <complex.h>    /* Standard Library of Complex Numbers */
#include <math.h>
int main() {

    double complex z1 = 1.0 + 3.0 * I;
    double complex z2 = 1.0 - 4.0 * I;

    printf("Working with complex numbers:\n\v");

    printf("Starting values: Z1 = %.2f + %.2fi\tZ2 = %.2f %+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));

    double complex sum = z1 + z2;
    printf("The sum: Z1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));

    double complex difference = z1 - z2;
    printf("The difference: Z1 - Z2 = %.2f %+.2fi\n", creal(difference), cimag(difference));

    double complex product = z1 * z2;
    printf("The product: Z1 x Z2 = %.2f %+.2fi\n", creal(product), cimag(product));

    double complex quotient = z1 / z2;
    printf("The quotient: Z1 / Z2 = %.2f %+.2fi\n", creal(quotient), cimag(quotient));

    double complex conjugate = conj(z1);
    printf("The conjugate of Z1 = %.2f %+.2fi\n", creal(conjugate), cimag(conjugate));

    double complex sqr = csqrt(z1); //don't forget to use -lm to compile
    printf("The sin of Z1 is sin(Z1)=%.2f + %.2fi\n",creal(sqr), cimag(sqr));

    return 0;
}

/*
creal(z1): get the real part (for float crealf(z1), for long double creall(z1))

cimag(z1): get the imaginary part (for float cimagf(z1), for long double cimagl(z1))

Another important point to remember when working with complex numbers is that functions 
like cos(), exp() and sqrt() must be replaced with their complex forms, e.g. ccos(), 
cexp(), csqrt().
*/
