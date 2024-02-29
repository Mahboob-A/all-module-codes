    #include <stdio.h>

   /* int main () {
          int n;
          scanf("%d", &n);
               /// ai same vabe gun kora jai, tokhn gun er initial maan dhorte hobe 1, not 0.
	 int sum = 0;

	 for (int i = 1; i<=n; i++) {
		sum += i;
		printf("i = %d,  sum = %d\n", i, sum);
	 }
	 printf("Final Sum = %d", sum);
    }*/







    /*int main () {
          int n;
          scanf("%d", &n);

          int sum = 0;
          printf("i\t\tsum\n");
          for (int i = 1; i <=n; i++) {
                sum += 2*i;
                printf("%d\t\t%d\n", i, sum);

          }
          printf("Final Sum = %d", sum);

}
*/


/**
    **************
    *                          *
    *                          *
    *                          *
    *                          *
    *                          *
    *                          *
    *                          *
    *                          *
    **************




**/                  
/**
    int main () {
         int n;
         scanf("%d", &n);
         
         printf("**************\n");
         
         for (int i = 0; i<=n-2; i++) {
		printf("*               *\n");
         }
         printf("**************\n");
    }
    
    **/
    // n value ke ak ak kore komano
    
    int main () {
          int n;
          scanf("%d", &n);
          
          for (int i = n; i >= 0; i--) {
		printf ("%d\n", i);
          }
    }