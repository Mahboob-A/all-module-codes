       /// D - D 33-4 Constant Pointers
        // 130622

    #include <stdio.h>
    int main () {
        int a = 10;
        const int *p = &a; // const pointer of value
        //*p = 20; // value cant be changed
        int b = 50;
        p = &b; // but pointing variable can be changed

        printf("%d", b);

        // ************ //

        int x = 10;
        int *const p1 = &x; // const pointer of address
        *p1 = 20; // address cant be changed

        int y = 100;
        p1 = &y;
        printf("%d", x);


        // *********// both const

        int z = 100;
        const int *const p = &z; // both value and address const


    }
