//integer.c -- print in octacal and hexadecimal
#include <stdio.h>
int main(void)
{
    int a = 32; //%o and %x need unsigned int
    printf("%%d:%d, %%o:%o, %%x:%x\n%%#o:%#o, %%#x:%#x\n",a, a, a, a, a);

    return 0;
}
