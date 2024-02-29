


            /// 37-3 Fscanf() And Fprintf() Functions
            // 220622 12.06 p.m

            // input file: read.txt
            // output file: print.txt

    #include <stdio.h>
    int main () {

        FILE *inputFile;
        inputFile = fopen("read.txt", "r");
        if (inputFile == NULL)
        {
            printf("No Such File Found"); // -> fprintf(outputFile, "No Such File Found"); -> tahole output file e ai print write hobe tar jonno output file pointer ta opore declare korte hobe
            return 0;
        }

        FILE *outputFile;
        outputFile = fopen("print.txt", "w");

        int i, n;
        fscanf(inputFile, "%d", &n);   // taking input from inputFile pointer i.e red.txt file

        int sum = 0;

        for (i=0; i<n; i++)
        {
            int num;
            fscanf(inputFile, "%d", &num);   // taking input from pointer using fscanf function ()
            sum += num;
        }

        fprintf(outputFile, "Sum -> %d", sum); // printing to outputFile i.e in print.txt file using fprintf function()


        return 0;
    }
