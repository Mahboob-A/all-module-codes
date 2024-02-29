    #include <stdio.h>

/// practice day 5.5 Question 9.

///  আমরা for লুপ ব্যাবহার করে ১ থেকে ১০ এর যোগফল বের করেছি।
/// নিচের ধারা গুলোর যোগফল বের করার প্রোগ্রাম লিখ।
// 9 a) 1+2+3+.....100

/*
    int main() {
        int n;
        scanf("%d", &n);
        int sum;
        for (int i=1; i<=n; i++) {
            sum += i;
            printf("Add:\t %d\t New sum\t =\t %d\n", i, sum);
        }
        printf("%d", sum);
    }

*/

/*
// 9 b) 1+3+5+...+29

    int main() {
        int n;
        scanf("%d", &n);
        int sum = 0;

        for (int i=1; i<=n; i+=2) {
            sum += i;
            printf("Add: %d New sum = %d\n", i, sum);

        }
        printf("%d", sum);

    }

    */
/*
    // 9 - c ) 50 + 49 + 48 + 47 + …… ( প্রথম ২০টি পদ = 31/- n = 31)
    int main() {
        int n;
        scanf("%d", &n);

        int sum;
        for (int i=50; i>=n; i--) {
            sum += i;
            printf("Add: %d New sum = %d\n", i, sum);
        }
        printf("%d", sum);

    }
    */

    /**

    for (int i=50, j=1; j<=20; i--, j++) {

        ai khane j var nirdesh korche j
        koto number line e i ache. i suru
        hocche 50 theke, and i-- mane 1 kore niche
        namche. And j suru hocche 1 theke o j
        er man bola ache <=20 karon Question e
        ai rokom bola ache and j 1 kore barche.
        tahole i 1 kore kombe 50 theke o j 1 kore
        1 theke o 20 te giye thambe. Fole ata hiseb na
        kore hocche.

    **/

    // 9 d) 2 + 5 + 8 + 11 + 14 + …..   (প্রথম ১০টি পদ)

   /*
    int main() {
        int sum = 0;

        for (int i=2, j=1; j<=10; i+=3, j++) {
            sum += i;
            printf("J = %d Add: %d New sum = %d\n", j, i, sum);
        }
        printf("%d", sum);

    }
*/


/*
    // 9 e) 100 + 97 + 94 + 91 + ….  (0 এর চেয়ে বড় পর্যন্ত)

    int main() {
        int sum = 0;
        for (int i=100, j=1; i>0; i-=3, j++) {
            sum += i;
            printf("J = %d Add: %d New sum = %d\n", j, i, sum);
        }
        printf("%d", sum);

    }

*/


/// find sum of square number 1+4+9+16 uptoo ten

    int main() {
        int sum = 0;
        for (int i=1; i<=10; i++) {
            sum += i*i;
            printf("Add: %d New sum = %d\n", i*i, sum);
        }
        printf("%d", sum);

    }
