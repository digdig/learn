//copy.c -- copy the word typed!

#include <stdio.h>
int main(void)
{
    char ch;

    while((ch=getchar())!=EOF)
    {
        putchar(ch);
    }
}
