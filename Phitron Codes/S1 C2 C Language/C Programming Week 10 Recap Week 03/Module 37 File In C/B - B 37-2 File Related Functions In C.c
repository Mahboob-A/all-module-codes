



            /// B - B 37-2 File Related Functions In C
            // 220622 6.30 am
            // auto file input and output

    #include <stdio.h>
    int main () {

        FILE *inputFile;  // at first making a FILE type pointer
        inputFile = fopen("input.txt", "r");  // connecting the pointer to the file to read it using fopen () function

        if (inputFile == NULL)   // if no such file in rom, fopen() returns a NULL pointer
        {
            printf("No such file found\n");
            return 0;
        }

        FILE *outputFile;     // again making a FILE type pointer to connect the output file
        outputFile = fopen("output.txt", "w"); // connecting the output .txt file to the pointer using fopen() function and mode is write as it is output

        while (1)   // a infinite loop
        {
            char ch = fgetc(inputFile); // taking one by one all character of inputfile using fgetc() function and as it gives value character so storing it in char type var ch
            if (ch == EOF)         // EOF means End Of File checking if ch variable reached EOF as fgetc() function returns EOF
            {
                break;          // if EOF reached then breaking the infinite loop
            }

            fputc(ch, outputFile);   // writing the characters in outputFile pointer using fputc() function

        }
        fclose(inputFile);


        return 0;
    }

