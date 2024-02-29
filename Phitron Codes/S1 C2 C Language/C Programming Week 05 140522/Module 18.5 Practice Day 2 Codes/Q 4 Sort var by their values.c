

        /// Q 4 - > function to sort variable by their values

    #include <stdio.h>
    void sort (int *a, int *b) // receiving address as pointer
    {
        if (*a < *b) // if a is less than b then do nothing
        {
            return;
        }
        else //  if b is greater then swap
        {
            int temp = *b;
            *b = *a;
            *a = temp;
        }
    }

                    /// 5 2 7 || 2 5 || 5 7
    int main () {
        int x, y, z;
        scanf ("%d %d", &x, &y);
        sort (&x, &y); // pass address of variable



        printf("%d %d", x, y);
    }
