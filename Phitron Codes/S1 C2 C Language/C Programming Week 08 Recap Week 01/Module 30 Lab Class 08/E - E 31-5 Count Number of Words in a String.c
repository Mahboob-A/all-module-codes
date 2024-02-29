

        /// E - E 31-5 Count Number of Words in a String

    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    int main () {
        char str[100];
        fgets(str, 100, stdin);     // str array er last index e null deowa hocche
        str[strlen(str)-1] = '\0';  // jeno fgets er neowa "Enter ba \n " ta na thake

        int count = 0;
        bool word = false;

        for (int i=0; i<strlen(str); i++)
        {
            char val = str[i];
            if (val != ' ')  // val mane char jodi " __ " mane space na hoy
            {
                word = true; //  jodi space na hoy tar mane word ache tai word == true
            }
            if (val == ' ') // jodi value ba character " __ " mane space hoye jai tahole word sesh
            {
                if (word == true)  // jodi age theke word true tahke
                {
                    count++;   // tahole word chilo space asar age tai count increase koro
                    word = false; // jehetu condition e akhn space chole eseche tai word ke false kore dau
                }
            }

        }

        if (word = true)  // akdom seshe jodi word true hoye thake mane setao akta word,
        {
            count++;  // tahole sei last true tahka word takeo count kore nau
        }

        printf("The total number of word in the sentence is %d", count);

        return 0;

       }
