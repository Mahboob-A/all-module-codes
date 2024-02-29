      /*
      Write a C program to input principle, time and rate (P, T, R) from the user and find Simple Interest and principal plus interest.
      Example

      Input

      Enter principle: 1200

      Enter time: 2

      Enter rate: 5.4

      Output

      Simple Interest = 129.600006

      Principal + Interest = 1329.6
      */

          #include <stdio.h>

           int main() {

           float principal, time, rate;
           scanf("%f %f %f", &principal, &time, &rate);
           float si = principal * time * rate / 100;

           printf("The Simple Interest is: %.2f\n", si);
           printf("Principal and Interest combined is: %.2f", principal + si);


           return 0;
           }
