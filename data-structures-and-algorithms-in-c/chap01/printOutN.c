//printOutN.c -- print an integer digit by digit using recursion.
#include <stdio.h>
void PrintOut(int N);
void PrintDigit(int N);
int main(void)
{
    int N;
    printf("Please enter an integer:\n");
    scanf("%d",&N);
    
    printf("The number you just entered is:\n");
    PrintOut(N);
    printf("\n");
}

void PrintOut(int N)
{
    if(N>=10) 
        PrintOut(N/10);
    
    PrintDigit(N%10);
}

void PrintDigit(int N)
{
    printf("%d", N);
}
