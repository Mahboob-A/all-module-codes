

            /// B - B 37-2 fopen fgets and fputs usages Practice
            // 220622

            // programmer style of copy paste!!

    #include <stdio.h>

    int main () {
        FILE *inputFile;
        inputFile = fopen("input2.txt", "r");
        if (inputFile == NULL)
        {
            printf("No Such File Found\n");
            return 0;
        }

        FILE *outputFile;
        outputFile = fopen("output2.txt", "w");

        while (1)
        {
            char ch = fgetc(inputFile);
            if (ch == EOF)
                break;
            fputc(ch, outputFile);
        }

        fclose(inputFile);
    }

