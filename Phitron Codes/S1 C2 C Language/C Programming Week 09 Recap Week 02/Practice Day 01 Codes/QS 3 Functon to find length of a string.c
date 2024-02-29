


        /// QS 3 Function to find length of a string
        // 150622

    #include <stdio.h>
    int get_length (char ch[])
    {
        int indx = 0;
        while (ch[indx] != '\0') // run ch through the number of indx until null
        {
            indx++;
        }
        return indx;
    }
    int main () {
        char str[100];
        gets(str);

        int len = get_length(str);
        int lenz = strlen(str);
        printf("The length of the string is: %d %d\n", len, lenz);
    }

