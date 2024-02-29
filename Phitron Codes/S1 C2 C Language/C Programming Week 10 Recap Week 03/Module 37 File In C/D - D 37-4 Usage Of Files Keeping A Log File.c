


            /// 37-4 Usage Of Files Keeping A Log File
            // 220622 12.39 p.m


    #include <stdio.h>
    int main () {

        FILE *logFile = fopen("log.txt", "a");  // a FILE type pointer and file name log and mode is "a" so that it keeps its history

        FILE *inputFile = fopen("demo45.txt", "r");  // inputFile pointer and no such file named demo exists and it cant automatically create such file as mode is "r"
        if (inputFile == NULL)  // so as no such demo file exists, a null is returned
        {
            fprintf(logFile, "No Such File Found at 12.59 PM\n");  // and fprintf prints this message in logFile pointer thus in log.txt file
            return 0;
        }

        return 0;
    }
