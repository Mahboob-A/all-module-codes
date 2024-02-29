

        /// Q 1 function to print number of times a function is called
        // no input should be given

    #include <stdio.h>


    void call (void)
    {
        static int counter = 0;
        counter++;
        printf("Function Called %d times\n", counter);
    }

    int main () {
        call();
        call();
        call();
        call();
        call();
        call();

    }
