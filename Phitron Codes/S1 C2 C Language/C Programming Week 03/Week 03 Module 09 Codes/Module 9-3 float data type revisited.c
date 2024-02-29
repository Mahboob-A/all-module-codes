    #include <stdio.h>
    #include <limits.h>
    #include <math.h>

    int main () {


        /// float and double data type revisite

        float temp = 1.0 / 0.0;
        //1e20;
        printf("infinity %f\n", temp);

        double temp2 = 1.0 / 0.0;
        //1e20
        printf("infinity %lf\n", temp2);

        // POW Function
        // kono number er power ber korar niyom

        double num = 100.0;
        double cube = pow(num, 3);
        // ai vabe "pow" function likhe
        // j var er power ber korte hocche
        // sei var likhe coma diye koto tomo
        // power ber korte hobe sei ta likhe bracket close
        // only for double/float data type
        printf("power %lf\n\n", cube);


        // square root calculation
        double squareRoot = 100;
        double sr = sqrt(squareRoot);
        printf("sqrt %lf\n\n", sr);


        // floor and ceiling
        double numX = 100.5;
        double fl = floor(numX);
        printf("floor %lf\n\n", fl);

        double cl = ceil(numX);
        printf("ceiling %lf\n\n", cl);

    }
