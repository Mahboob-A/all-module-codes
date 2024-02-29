    #include <stdio.h>

    /// finding odd and even number

    /**
    here I have firstly used a for loop.
    Then I have implemented the logic i.e condition by if else
    statement. Odd even logic is %2 == 0.
    **/


    int main () {
          int n;
          scanf ("%d", &n);

          int number = 0;

          for (int i = 1; i <= n; i++) {
            if (i%2 == 0) {
	      	printf("%d\t is\t even\t number\n", i);
            }
           else {
	    	printf("%d\t is\t odd\t number\n", i);
            }
            number ++;
      }
           printf("Total\t number\t %d\n", number);


   }

   /*


    int main () {  /// combining for and if

    	   /// making even and odd finder

    	 int n;
    	 scanf("%d", &n);

    	 for (int i = 0; i<n; i++) {
		      if (i%2 == 0) {
			     printf("%d is even\n", i);
	        	}
		      else {
			     printf("%d is odd\n", i);
		       }
    	 }

    }

*/
