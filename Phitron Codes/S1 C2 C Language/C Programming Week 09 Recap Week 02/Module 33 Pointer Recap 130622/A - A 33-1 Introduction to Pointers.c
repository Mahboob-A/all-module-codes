

        /// A - A 33-1 Introduction to Pointers
        // 130622

    #include <stdio.h>
    int main () {
       int a = 10;
       printf("Address variable a -> %lld in hexa -> %p and Value -> %d\n\n", &a, &a, a);

       int *p;
       p = &a;
       printf("Address of A by pointer %lld and %p, value of a by pointer dereference %d\n\n", p, p, *p);
       printf("Address of pointer variable p -> %lld and -> %p\n", &p, &p);
    }
