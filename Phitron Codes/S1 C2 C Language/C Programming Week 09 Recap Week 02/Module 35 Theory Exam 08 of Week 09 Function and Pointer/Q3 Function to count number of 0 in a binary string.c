


            /// Q3 Function to count number of 0 in a binary string
            // 170622 08.20 am


     /*
    Make a function named count_zero() which will take a
    binary string (Binary string is a string which is consist
    of only 0 and 1) as parameter and count how many 0’s are
    there in that string
    */

    #include <stdio.h>
    int count_zero (char *ch)
    {
        int count = 0;
        for (int i=0; ch[i] != '\0'; i++)
        {
            if (ch[i] == '0')  // matching if the string has any value that has 48 ascii value
                count++;      // if so, then count
        }
        return count;   // return the total value
    }


    int main () {
        char str[100];
        scanf("%s", str);

        int cnt = count_zero(str);  // calling function

        printf("%d", cnt);


    return 0;
    }


