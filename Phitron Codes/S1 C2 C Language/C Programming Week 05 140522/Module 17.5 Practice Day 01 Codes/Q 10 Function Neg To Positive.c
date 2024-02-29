
        /// Function Negative To Positive


    #include <stdio.h>
    int makePositive(int a) // program using pass by value
    {
        if (a < 0)
        {
            a = -a;
        }
        return a;
	}





    int main () {
        int n;
        scanf ("%d", &n);
        int x = makePositive(n);
        printf("%d", x);

    }


/*
    #include <stdio.h>
    void makePositive(int *pa)   // program using pass by address
    {
        if (*pa < 0)
        {
            *pa = -*pa;
        }

	}





    int main () {
        int n;
        scanf ("%d", &n);
        makePositive(&n);
        printf("%d", n);

    }

    */
