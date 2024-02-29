


            /// Q1 Function to make sum of two float variable
            // 170622 07.30 a.m


     /*
    Make a function named make_sum() which will take two floating
    values as parameters and return their sum
    */

    #include <stdio.h>
    float make_sum (float a, float b)
    {
        float sum = a + b;
        return sum;
    }

    int main () {
        float x, y;
        scanf("%f, %f", &x, &y);



        float f_sum = make_sum(x, y);

        printf("%f\n", f_sum);

    }


