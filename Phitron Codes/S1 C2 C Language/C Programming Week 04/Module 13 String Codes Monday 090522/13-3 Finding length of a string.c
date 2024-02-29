    #include <stdio.h> // 13-3 Finding length of a string
    #include <string.h>

    int main () {
        char str[100] = "Mahboob Alam";
        int sizeOfArray = sizeof(str) / sizeof(str[0]);
        printf("%d\n", sizeOfArray);


//        /// finding string value using while loop
//        int index = 0;
//        while (str[index] != 0) {
//            index++;
//        }
//        printf("Length of the string is: %d\n", index);

        /// using function
        int length = strlen(str);
        printf("%d", length);

    }
