    #include <stdio.h>   // quiz, 09.45 a.m Monday, 090522, 07.30 a.m
    int main () {
//         int a[10];
//         a[0]+=10;
//         a[0] = a[0]*2;

//     int a = {0, 2, 1, 4, 3};



    int fib[5];
	fib[0] = fib[1] = 1;
    for (int i=2; i<5; i++) {
    fib[i] = fib[i-1]+fib[i-2];
    }
    printf("%d", fib[4]);



    }


