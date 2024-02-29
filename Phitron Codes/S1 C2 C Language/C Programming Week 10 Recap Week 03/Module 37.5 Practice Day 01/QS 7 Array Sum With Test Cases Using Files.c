


            /// QS 7 Array Sum With Test Cases Using Files
            // 230622 0845 am


    #include <stdio.h>
    int main () {
        FILE *logFile = fopen ("log.txt", "a");

        FILE *inputFile = fopen("arraySum.txt", "r");
        if (inputFile == NULL)
        {
            fprintf(logFile, "No Such File Found\n");
            return 0;
        }

        FILE *outputFile = fopen("arraySumTestCases.txt", "w");

        int t;
        fscanf(inputFile, "%d", &t);

        while (t--)
        {
            int i, n;
            fscanf(inputFile, "%d", &n);

            int ar[n];
            int sum = 0;

            for (i=0; i<n; i++)
            {
                fscanf(inputFile, "%d", &ar[i]);
                sum += ar[i];
            }

            fprintf(outputFile, "Sum: %d\n", sum);

        }

        fclose(logFile);
        fclose(inputFile);
        fclose(outputFile);


    }
