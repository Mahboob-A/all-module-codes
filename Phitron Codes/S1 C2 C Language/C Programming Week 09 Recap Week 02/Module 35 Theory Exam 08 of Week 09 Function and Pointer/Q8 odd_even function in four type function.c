


            /// Q8 odd_even function in four type function
            // 170622 5.30 p.m


    //Answer  i) Has return +  Has parameter:

     #include <stdio.h>
    int odd_even (int x)      // function has return + has parameter
    {

        return (x  &  1);           // returning condition
    }

    int main () {
        int a;
        scanf("%d", &a);

        odd_even(a);   // calling function

        if(a & 1)               // checking condition
            printf("The number is odd.");
        else
            printf("The number is even.");

       }



       //Answer  ii) No return + Has parameter:


    #include <stdio.h>
    void odd_even (int x)      // no return + has parameter
    {
        if(x & 1)                               // as return type is void, hence printing in function
            printf("The number is odd.");
        else
            printf("The number is even.");
    }

    int main () {
        int a;
        scanf("%d", &a);

        odd_even(a);     // calling function with parameter

    }






    //Answer iii) Has return + No parameter:


     #include <stdio.h>
    int odd_even (void)       // function with return but no parameter
    {
        int a;                               // as no parameter, hence, reading in function
        scanf("%d", &a);

         return (a & 1);              // returnig condition

    }

    int main () {

        int x = odd_even();            // calling function and storing ans in variable

        if(x & 1)
            printf("The number is odd.");
        else
            printf("The number is even.");

    }



    //Answer iv) No return + No parameter:

    #include <stdio.h>
    void odd_even (void)         // function has no return data type and parameter
    {
        int a;                           // hence, everything of the program is execution in the udf
        scanf("%d", &a);

        if(a & 1)
            printf("The number is odd.");
        else
            printf("The number is even.");

    }

    int main () {

        odd_even();   // just calling the function with no storing variable or parameter

    }
