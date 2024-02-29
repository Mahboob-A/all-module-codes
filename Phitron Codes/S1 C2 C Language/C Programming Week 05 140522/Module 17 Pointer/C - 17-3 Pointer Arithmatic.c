
        /// 17-3 Pointer Arithmatic

    #include <stdio.h>
    int main () {

    char ch = 'a';

    char *pch = &ch;

    printf ("%p\n\n", pch); // address in hexa (or &ch because &ch == pch )
    printf ("pch addresses to %lld which contains %c\n\n", pch, *pch); // address in int

    pch++; // incrementing the pointer it will increase 1 byte as dt is char

    printf("%lld\n", pch);
    printf("%p\n", pch);
    printf("%d\n", *pch);
    printf("%c\n\n", ch);


    printf("--------------------------------");

    int num = 20;

    char *pnum = &num;

    printf ("\n%p\n\n", pnum); // address in hexa (or &num because &num == pnum )
    printf ("pnum addresses to %lld which contains %d\n\n", pnum, *pnum); // address in int

    pnum++; // incresing the pointer and it will increase by 4 byte as int takes 4 bytes
    // we can increase or decrease like this way

    printf("%lld\n", pnum); // printing in int address
    printf("%p\n", pnum); // printing in hexa address
    printf("%d\n", *pnum); // printing the ambiguous int number after incresing pnum++
    printf("%d\n", pnum); // same as %lld printing in int address



    printf("--------------------------------");



    int val1 = 1000, val2 = 10000;

    int *pa = &val1;
    int *pb = &val2;

    printf("\npa = %lld, pb = %lld\n", pa, pb);

    printf("Difference = %d\n", pa-pb); // ai diff memory er byte er diff na
    printf("Difference = %d\n", pb-pa); // ata holo pointer er difference


    }
