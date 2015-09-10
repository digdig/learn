/*
sorting a list of numbers in a file in acending ording, using 
selection sort. i.e. every time put the smallest number in the
left most of the array.
*/

#include <stdio.h>
#include <stdlib.h> //for the sake of malloc to work
long int count(FILE *fp);
void selection_sort(double * ar, long int n);

int main(void)
{
    long int n,i;
    double * ar;
    FILE * fp;

    fp = fopen("data.txt","r");
    n=count(fp);

    ar = (double*)malloc(sizeof(double)*n);

    for(i=0; i<n; i++)
    {
        fscanf(fp,"%lf",ar+i);
    }

    fclose(fp);
    
    fp = fopen("data-sorted.txt","w");
    selection_sort(ar, n);
    for(i=0; i<n; i++)
    {
        fprintf(fp,"%lf\n",*(ar+i));
    }
    fclose(fp);
 
//    printf("The number of elements in the file is:%ld\n",elem_num);
}

long int count(FILE * fp)
{
   double temp;
   long int n=0,i;

   while(fscanf(fp,"%lf",&temp)==1)
       n++;

   rewind(fp);//back to the begining for second read
   return n;
}

void selection_sort(double * ar, long int n)
{
    long int i,j;
    double temp;
    //i is the position to put smallest number 
    //from i to the end
    for(i=0; i<n-1; i++) 
        for(j=i+1;j<n;j++)
	    if(ar[i]>ar[j]) 
	    {
	        temp  = ar[i];
		ar[i] = ar[j];
		ar[j] = ar[i];
	    }
}
