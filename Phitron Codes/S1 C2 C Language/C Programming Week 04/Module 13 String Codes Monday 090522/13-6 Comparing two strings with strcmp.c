    #include <stdio.h>    /// 13-6 Comparing two strings with strcmp
    #include <string.h>

    int main () {

         /// comparing using strcmp function

        /**
        char a[100], b[100];
        scanf("%s %s", a, b);

        int val = strcmp(a, b);
        printf("%d", val);
        **/

        /// comparing using while loop

        char a[100], b[100];
        scanf("%s %s", a, b);

        int i = 0;
        while (a[i] == b[i] && a[i] != '\0' && b[i] != '\0') {
            i++;
        }
        if (a[i] == '\0' && b[i] == '\0') {
            printf("Equal String");
        }
        else if (a[i] == '\0' && b[i] != '\0') {
            printf("A is smaller");
        }
        else if (a[i] !='\0' && b[i] == '\0') {
            printf("B is smaller");
        }
        else if (a[i] < b[i]) {
            printf("A is smaller");
        }
        else {
            printf("B is smaller");
        }



    }
