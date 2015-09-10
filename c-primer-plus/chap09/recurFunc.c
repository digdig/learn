#include <stdio.h>

void up_and_down(int n)
{
    printf("level %d: n location %p\n", n, &n);
    if (n<4)
        up_and_down(n+1);
    printf("BIG CHANGE HERE, RECOMPILE AND SEE.LEVEL %d: n location %p\n", n, &n);
}
