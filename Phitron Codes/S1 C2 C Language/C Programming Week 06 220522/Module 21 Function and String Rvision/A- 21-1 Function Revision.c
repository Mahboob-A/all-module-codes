

        /// A- 21-1 Function Revision

    #include <stdio.h>
    int sqr (int x)
    {
        return x * x;  // one value return
    }
    void printSqr (int x)
    {
        printf ("%d %d\n\n", x, sqr(x));  // calling a function within another function
    }

    void sayHello () // no input no output function
    {
        printf("Hello Geek! Welcome into the world of computers! \n");
    }
    int getMax (int a, int b) // returning multiple value from function
    {
        if (a > b) return a;
        else       return b;
    }

    char getCharValue (int x)
    {
        return 'A' + x -1;
    }

    int main () {
        for (int i=1; i<=10; i++)
        {
            //printf ("%d %d\n\n", i, sqr(i));
            printSqr(i); // calling function and i is passing each time the loop iteratates
        }

        sayHello();

        printf ("\n\nMax is %d \n", getMax(10, 15)); // calling the function in another function

        for (int i=1; i<=26; i++)
        {
            printf ("%d %c\n", i, getCharValue(i));
        }

    }
