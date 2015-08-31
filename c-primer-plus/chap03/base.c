// base.c -- print 100 in decimal, octal, and hex

# include <stdio.h>
int main(void)
{
    int x = 16;

    printf("dec = %d, octal = %o, hex = %x\n",x, x, x);
    printf("dec = %d, octal = %#o, hex = %#x or %#X\n",x, x, x, x);

    return 0;

}
