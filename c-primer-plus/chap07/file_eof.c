#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    FILE* fp;
    char filename[50];

    printf("Enter the name of the file\n");
    scanf("%s", filename);

    fp = fopen(filename, "r"); //must be double quotes

    if(fp == NULL) 
    {
        printf("Fail to open the file!\n");
	exit(1);
    }

    while((ch=getc(fp))!=EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}
