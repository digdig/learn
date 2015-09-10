//scores_in.c -- use loops for array processing
#include <stdio.h>
//#define SIZE 3
#define PAR 72

int main(void)
{
    int SIZE = 3;
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("Enter %d scores:\n",SIZE);
    for(index = 0; index<SIZE;index++)
    {
        scanf("%d", &score[index]);
    }
    
    for(index = 0; index<SIZE;index++)
    {
        printf("%5d", score[index]);
    }
    printf("\n");

    for(index = 0; index<SIZE;index++)
    {
        sum += score[index];
    }
    average = (float)sum/SIZE;

    printf("your score is higher than average about %.2f\n", average-PAR);

    return 0;
}
