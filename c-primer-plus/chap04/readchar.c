//readchar.c -- test the %c
#include <stdio.h>

int main(void)
{
    char ch1,ch2;

    scanf("%c",&ch1);
    printf("ch1=*%c*\n", ch1);
    scanf(" %c",&ch2);
    printf("ch2=*%c*\n", ch2);

    return 0;
}
