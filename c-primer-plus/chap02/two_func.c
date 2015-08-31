//two_func.c -- use two functions in the program
#include <stdio.h>
void butler(void);

int main(void)
{
    printf("Butler!\n");
    butler();
    printf("Bring me my phone!\n");

 return 0;
}

void butler(void)
{
    printf("You call, sir?\n");
}
