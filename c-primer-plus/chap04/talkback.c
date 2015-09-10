// talkback.c -- string and preprocessor introduction
#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main(void)
{
    float weight, volumn;
    int size, letters;
    char name[40];

    printf("Hi! what's your first name?\n");
    scanf("%s", name);
    printf("%s, What's your weight in pounds?\n",name);
    scanf("%f", &weight);
    size = sizeof(name);
    letters = strlen(name);
    volumn = weight/DENSITY;
    printf("Well, %s, your volumn is %2.2f cubic feet.\n", name , volumn);
    printf("Also, your first name is %d letters, \nand we use %d bytes to store it\n", letters, size);

    return 0;
}
