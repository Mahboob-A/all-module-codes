
    #include <stdio.h>
    int main () {
        int x, y, n;
        scanf("%d %d %d", &x, &y, &n);



    for (int i=1; i<=n; i++) {


        if (i%x == 0 && i%y == 0) {  // i ke x diye vag kora hocche
            printf("FizzBuzz\n");    // and i ke y diye vag kora hocche
        }
        else if (i%x == 0) {
            printf("Fizz\n");
        }
        else if (i%y ==0) {
            printf("Buzz\n");
        }
        else {
           printf("%d\n",i); // i mane n er number gulo print hocche
        }

    }

    }


/*



#include <stdio.h>
    int main () {
        int x, y, n;
        scanf("%d %d %d", &x, &y, &n);

     for (int i=1; i<=n; i++) {

            if (i%x==0 && i%y==0)
            {
            printf("fizzbuzz\n");
            }
            else if (i%y==0)
            {
             printf("buzz\n");
             }
             else if (i%x==0)
             {
              printf("Fizz\n");
              }
              else {
              printf("%d\n",i);
              }
    }
    }
*/




