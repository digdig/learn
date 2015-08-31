// fathm_ft.c -- convert 2 fathoms to feet

#include <stdio.h>
int main(void)
{
    int feet, fathoms = 2; //multiple variables in one line.

//    fathoms = 2;
    feet = 6 * fathoms;

    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;
}
