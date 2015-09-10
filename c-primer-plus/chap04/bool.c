//bool.c -- try the bool type
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool is_true, is_false;
    _Bool IsTrue, IsFalse;

    is_true = true;
    is_false = false;

    IsTrue = 1;
    IsFalse = 0;

    printf("%d, %d, %d, %d\n",is_true, is_false, IsTrue, IsFalse);
    return 0;
}
