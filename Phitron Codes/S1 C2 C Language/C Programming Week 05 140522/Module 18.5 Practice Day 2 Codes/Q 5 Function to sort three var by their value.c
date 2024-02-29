

        /// Q 5 Function to sort three var by their value

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
        scanf ("%d %d %d", &x, &y, &z);
        sort (&x, &y); // pass address of variable
        sort (&x, &z); /// this is the correct serial to call the function to work properly
        sort (&y, &z);


        printf("%d %d %d", x, y, z);
    }

