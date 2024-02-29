

        /// Q3 Function For Rotating An Array


    #include <stdio.h>

    void rotateArray (int n, int ar[])
    {
        int first = ar[0];
        for (int i=0; i<n; i++)
        {
            ar[i] = ar[i+1]; // current value holo age j value ak ghor dan e chilo ar[i+1] holo dan er value
        }
        ar[n-1] = first; // array er first value ke last value kora holo
    }

    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        rotateArray (n, ar); // passing array size and array first index number

        for (i=0; i<n; i++)
        {
            printf("%d ", ar[i]);
        }


    }
