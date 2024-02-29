
    /*
    Taro has to study for TT hours for an exam.

    Fortunately, he can jump to World B where time passes
    X times as fast as it does in our world (World A).

    In other words, While (X x t) hours pass in World B, t hours pass in World A.
    How many hours will pass in World A while Taro studies for TT hours in World B?
    */
        #include <stdio.h>


         int main() {

         int timePassed, timeSpeed;
         scanf("%d %d", &timePassed, &timeSpeed);

         printf("%lf", (double)timePassed/(double)timeSpeed);

         return 0;
         }
