
        /// 18.4 - Pass By Address.

    #include <stdio.h>
    void makeAvgEqual (double *pa, double *pb) // receiving address as pointer
    {
        double avg = (*pa + *pb) / 2;
        *pa = *pb = avg;
    }


    int main () {
        double a, b;
        scanf ("%lld %lld", &a, &b); // passing address

        makeAvgEqual (&a, &b);

        printf ("%.2lld %.2lld", a, b);
    }
