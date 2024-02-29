

    /// 20-2 Pointer Revision - Declaring And Dereferencing Pointers, Pointer Arithmetic


    #include <stdio.h>
    int main () {
        double var = 10;
        double *pvar = &var;

        printf ("%p  %lld\n\n", pvar, pvar); // pvar and &var represents same address

        pvar++;   // now pointer pvar is pointing to diff address and doesnot contain var variable value
        printf ("%p  %lld\n\n", pvar, &var);

        pvar--;    // now pointer is decreased by one and it is again pointing to var variable and contains same value as variable var
        printf ("%lf %lf\n\n", *pvar, var); // *pvar and var represents same variable value
    }
