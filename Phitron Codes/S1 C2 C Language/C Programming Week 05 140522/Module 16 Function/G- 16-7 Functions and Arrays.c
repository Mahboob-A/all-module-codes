
        /// 16-7 Functions and Arrays


        /// find min of an aray using two user-defined function

    #include <stdio.h>
        int getMIn (int x, int y)
        {
            if (x < y)  return x;
            else        return y;
        }

        int getArrayMin (int sz, int ar[])  // receiving array size as az and array
        {

            int min = ar[0];

                for (int i=0; i<sz; i++)
                {
                    min = getMIn (min, ar[i]);
                }
                return min;
        }

        void makeDouble (int m, int ar[])
        {
            for (int i=0; i<m; i++)
            {
                ar[i] *=2;
            }

        }

    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }
        int min = getArrayMin (n, ar); // passing array size and array both and calling
        printf ("The minimum element in the array is: %d\n\n", min); // call korar somoy (bracket er moddhe array te [] bracket lagbe na)

        printf ("\n-----below program---------------making array----------double-----\n\n");

        makeDouble (n, ar);
        for (i=0; i<n; i++)
        {
           printf ("The double value of the array using function is: %d \n", ar[i]);
        }


    }
