

        /// program to find product of n numbers in function using DMA and returning pointer

        // program not yet debugged
/*
    #include <stdio.h>
    #include <stdlib.h>
    double* findProd ()
    {
        int i, n;
        scanf ("%d", &n);
        double *ar = (double *)malloc(n*sizeof(double));
        for (i=0; i<n; i++)
        {
            scanf ("%lf", ar+i);
        }
        double *prod = 1.0;
        for (i=0; i<n; i++)
        {
            prod *= *(ar+i);
        }
        free(ar);
        return *prod;
    }
    int main () {

        int *prod = findProd ();
        printf ("%.2lf", prod);
    }


    */


#include <stdio.h>
#include <stdlib.h>
void findProd(double *a)
{
    int i, n;
    scanf ("%d", &n);
    double *ar = (double *)malloc(n*sizeof(double));
    for (i=0; i<n; i++)
    {
        scanf ("%lf", ar+i);
    }

     //double temp=*a;



    for(i=0; i<n; i++)
    {
        *a*=ar[i];
       // *prod*= *(ar+i);
    }
    free(ar);

}
int main ()
{
    double a=1.0;
    findProd(&a);
    printf("%.2lf",a);
}

