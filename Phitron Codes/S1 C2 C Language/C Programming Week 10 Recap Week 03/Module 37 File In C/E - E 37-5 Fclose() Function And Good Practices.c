


            /// E - E 37-5 Fclose() Function And Good Practices
            // 220622 0356 pm


    #include <stdio.h>
    int main () {

        FILE *inputFile = fopen("goodPractice.txt", "r");
        if (inputFile == NULL)   // j file link kora hocche seta rom e ache kina check kora good practice
        {
            printf("File Not Found\n");
            return 0;
        }
        FILE *outputFile = fopen("output3.txt", "w");

        int num;
        fscanf(inputFile, "%d", &num);

        fprintf(outputFile, "%d", num);

        fclose(inputFile);  // another good practice is to close all opened file using fclose() function
        fclose(outputFile);

        //fcloseall() -> ask if this function could be used instead of using fclose() again and again



    }
