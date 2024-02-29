    #include <stdio.h>  //13-1 Introduction to strings, Monday, 090522, 04.30 p.m
    int main () {
        char st[] = "This is a string.";

        int size = sizeof(st) / sizeof(st[0]);
        printf("%d\n", size);

        for (int i=0; i<size; i++) {
            printf("%d -> %c (ASCII CODE %d)\n", i, st[i], st[i]);
            st[6] = 'o';
        }
        //st[6] = 'o'; // changing value of index

        printf("%s", st);  // printing string




    return 0;
    }
