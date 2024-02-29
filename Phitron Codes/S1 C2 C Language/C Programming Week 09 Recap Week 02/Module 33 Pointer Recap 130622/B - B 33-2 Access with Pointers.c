

        /// B - B 33-2 Access with Pointers
        // 130622

    #include <stdio.h>
    int main () {
        int a = 100;
        int *p;
        p = &a;

        int **q;
        q = &p;

        int ***r;
        r = &q;

        printf("Value of var a %d and its address using address of operator %lld %p\n\n", a, &a, &a);

        printf("Value of var a by pointer p %d and address of a by pointer p %lld %p\n\n", *p, p, p);

        printf("Value of pointer q pointing to p is %d %p and address of p by pointer q %lld %p\n\n", *q, *q, q, q);

        printf("Value of pointer r pointing to q is %d %p and address of pointer q by pointer r %lld %p\n\n", *r, *r, r, r);

        printf("At last the address of pointer r %lld %p\n\n", &r, &r);

        printf("Value of a directly by pointer r is %d through dereferencing thrice\n\n", ***r);

        ***r = 50;

        printf("Value of a after changing value by pointer ***r is %d\n\n", a);

    }
