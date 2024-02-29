


            /// QS 6 Sum of N sized array using Files
            // 220622 08.12 am


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
