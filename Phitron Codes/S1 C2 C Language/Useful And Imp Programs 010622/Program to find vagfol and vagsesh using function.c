


        /// program to find vagfol and vagsesh
        //01.06.22
        // included in module 21 time 6.00 min

    #include <stdio.h>
    void div (int x, int y, int *vagfol, int *vagsesh)
    {
        *vagfol = x/y;
        *vagsesh = x%y;
    }
    int main () {
        int x, y, vagfol, vagsesh;
        scanf ("%d %d", &x, &y);
        div(x, y, &vagfol, &vagsesh);

        printf("Vagfol: %d Vagsesh: %d\n", vagfol, vagsesh);


    }
