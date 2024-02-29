



            /// QS 5 Input in Function Print in Main

            // Write a function named take_input() which will take an array and
            // its size. This function will take input of that array.
            // After that print those values in the main() function.





    #include <stdio.h>
    int n;
    take_input(int *ar, int n)
    {
        scanf("%d", &n);
        for (int i=0; i<n; i++)
        {
            scanf("%d", ar[i]);
        }
    }

    int main () {
        int ar[100];
        take_input(ar, n);

        for (int i=0; i<n; i++)
        {
            printf("%d ", ar[i]);
        }

    }

