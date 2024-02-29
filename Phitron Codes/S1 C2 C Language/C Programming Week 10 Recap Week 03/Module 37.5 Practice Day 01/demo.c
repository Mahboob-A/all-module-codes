




    // QS 6 array sum using files

    #include <stdio.h>
    int main () {
        FILE *logFile = fopen("log.txt", "a");

        FILE *inputFile = fopen ("arraySum.txt", "r");
        if (inputFile == NULL)
        {
            fprintf(logFile, "No Such File Found at 4.30 pm \n");
            return 0;
        }
        FILE *outputFile = fopen ("arraySumOutput.txt", "w");

        int i, n;
        fscanf(inputFile, "%d", &n);

        int ar[n];
        int sum = 0;
        for (i=0; i<n; i++)
        {
            fscanf(inputFile, "%d", &ar[i]);
            sum += ar[i];
        }

        fprintf(outputFile, "Sum -> %d", sum);

        fclose(inputFile);
        fclose(outputFile);
    }






    // QS 6 for terminal

    /*
    #include <stdio.h>
    int main () {

        int i, n;
        scanf("%d", &n);

        int ar[n];
        int sum = 0;
        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
            sum += ar[i];
        }

        printf("\nSum -> %d", sum);


    }

    */


    /*

    // QS 5


    #include <stdio.h>
    int main () {
        char str[100];
        gets(str);

        int idx = 0;
        while (str[idx] != '\0')
        {
            idx++;
        }

        printf("Total character -> %d", idx);



    }

    */

    // QS 2,3 , 4
    /*

        #include <stdio.h>
    int main () {

        int a, b;
        scanf("%d %d", &a, &b);

        int sum = a+b;

        printf("Sum -> %d", sum);
    }
    */

    // n number of input

        /*

     #include <stdio.h>
    int main () {
        int n;
        scanf("%d", &n);
        int sum = 0;
        for (int i=0; i<n; i++)
        {
            int a;
            scanf("%d", &a);
            sum += a;
        }

        printf("Sum -> %d", sum);

        return 0;
    }

    */




