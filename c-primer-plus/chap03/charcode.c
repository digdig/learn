// charcode.c -- display code number for a character
#include <stdio.h>
int main(void)
{
    char ch;

    printf("Please enter a character:\n");
    scanf("%c",&ch);
    printf("The code for %c is \\%#o\n", ch, ch);

    return 0;
}
