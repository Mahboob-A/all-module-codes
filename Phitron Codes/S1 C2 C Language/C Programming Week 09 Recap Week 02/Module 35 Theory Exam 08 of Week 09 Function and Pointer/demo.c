



    #include <stdio.h>
    float make_sum (float a, float b)
    {
        return a+b;
    }

    int main () {
        float x, y;
        scanf("%f %f", &x, &y);

        float f_sum = make_sum(x, y);

        printf("%.2f\n", f_sum);

    }

