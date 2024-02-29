


        /// QS 7 Function to set min max using pointer
        // 150622

        // aki songe 1 er besi updated value pete gele pointer use korte hoy

    #include <stdio.h>
    void set_min_max (int *a, int *b)
    {
        scanf("%d %d", a, b); // value reading. As both variable are pointer so no need to use & before them as they already have their address

        // calculation using if - else method
        /*
        int min = 0, max = 0;
        if (*a<*b)
            min = *a;
        else
            min = *b;

        if (*a>*b)
            max = *a;
        else
            max = *b;

        *a = min;
        *b = max;
        */
        // calculation using ternary operator

        int min = *a<*b ? *a : *b;
        int max = *a>*b ? *a : *b;

        *a = min; // setting min value to 1st variable
        *b = max; // setting max value to 2nd variable

    }
    int main () {
        int x, y;
        //scanf("%d %d", &x, &y); // if value inputed from here then do not read value in function

        set_min_max(&x, &y);

        printf("Min is :%d\n \nMax is: %d\n", x, y);



    }

