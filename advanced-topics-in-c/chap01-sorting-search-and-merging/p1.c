#include <stdio.h>
#include <stdlib.h> 
long int load_data(double ** ar);

int main(void)
{
    long int n,i;
    double * ar=NULL; 
    FILE * fp; 
    double number;

    n=load_data(&ar);

    fp = fopen("data-copy.txt","w");
    //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    for(i=0; i<n; i++)
        fprintf(fp,"%lf\n", ar[i]); //problem here! I can't access!
    //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    fclose(fp);

    printf("The number of elements in the file is:%ld\n",n);
}

long int load_data(double ** ar) 
{
   FILE * fp; 
   double temp;
   long int n=0,i;

   fp = fopen("data.txt","r");
   while(fscanf(fp,"%lf",&temp)==1)
       n++;
   fclose(fp);
   //load memory
   *ar = (double*)malloc(sizeof(double)*n);

   fp = fopen("data.txt","r");
   for(i=0; i<n; i++)
   {
       fscanf(fp,"%lf",*ar+i);
   //    printf("%lf\n",ar[i]);//This print well!
   }
   fclose(fp);

   return n;
}
