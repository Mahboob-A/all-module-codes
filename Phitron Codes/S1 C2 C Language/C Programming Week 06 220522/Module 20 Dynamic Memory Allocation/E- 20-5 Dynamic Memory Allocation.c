

        /// 20-5 Dynamic Memory Allocation

    #include <stdio.h>
    int main () {
        int n;
        printf ("Enter number of students: ");
        scanf ("%d", &n);

        int *a = (int*)malloc(n*sizeof(int));  // allocating memory dynamically
                                            // here a is acting as a variable length
                                            // array with has size n

        for (int i=0; i<n; i++)
        {
            scanf ("%d", &a[i]); // that a is acting as an array
        }

        int sum = 0;
        for (int i=0; i<n; i++)
        {
            sum += a[i];
        }

        printf("Sum: %d", sum);

    }
