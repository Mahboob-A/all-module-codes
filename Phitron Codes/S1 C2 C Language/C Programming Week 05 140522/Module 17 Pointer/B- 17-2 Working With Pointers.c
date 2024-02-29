
        /// 17-2 Working With Pointers

    #include <stdio.h>
    int main () {


    int price = 100;
    int *prs = &price;

        printf("Var value: %d\n", price);
        printf("Pointer address in hexa: %p\n", &price); // or only (prs)
        printf("Value by pointer: %d\n\n", *prs);

        price = 200; // changing the var value

        printf("Var value: %d\n", price);
        printf("Pointer address in hexa: %p\n", &price);
        printf("Value by pointer: %d\n\n", *prs);

        *prs = 300; // changing the value by pointer {both are same thing}
        printf("Var value: %d\n", price);
        printf("Pointer address in hexa: %p\n", &price);
        printf("Value by pointer: %d\n\n", *prs);

        int price2 = 100;
        prs = &price2; // changing the address of pointer

        printf("Var value: %d\n", price);
        printf("Var value: %d\n", price2);
        printf("Pointer address in hexa: %p\n", &price);
        printf("Pointer address in hexa: %p\n", &price2);
        printf("Value by pointer: %d\n\n", *prs);

        printf("Var value: %d\n", price);
        printf("Pointer address in hexa: %p\n", &price);
        printf("Value by pointer: %d\n\n", *prs);





    }
