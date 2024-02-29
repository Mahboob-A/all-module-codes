    #include <stdio.h>
    /**
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

    **/


    /// checking divisibility of input number
    int main () {
          int n;
          scanf("%d", &n);

          int count = 0; // divisors number count

          for (int i = 1 ; i<=n; i++) {
		      if (i %2 == 0) {      // divisors formula
			    printf("%d ", i);
			    count ++;           // counting divisors number
	      	}
		         printf("\n");      // printing new lines
            }
          printf("Number of divisors = %d\n",  count);
    }
