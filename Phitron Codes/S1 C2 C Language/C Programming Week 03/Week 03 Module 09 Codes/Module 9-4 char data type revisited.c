    #include <stdio.h>
    #include <ctype.h>

    int main () {

    /**
        // printing ASCII codes

        char ch = 'A';
        printf("int value = %d. character value = %c.\n", ch, ch);

        for (int i=32; i<=126; i++) {
            printf("%d\t%c\n", i, i);
        }
    }

    **/

    /**

    // upper, lower, digit finder

    char ch;
    scanf("%ch", &ch);

    if ('A'<=ch && ch<='Z') {
        printf("UpperCase");
    }
    else if ('a'<=ch && ch<='z') {
        printf("LowerCase");
    }
    else if ('0'<=ch && ch<='9') {
        printf("Digit");
    }
    else {
        printf("Other");
    }
  }

  **/

  // lower to upper and upper to lower using if else

   /**
     char ch;
     scanf("%ch", &ch);

     if ('A'<=ch && ch<='Z') {
        //int position = ch - 'A';
        //char lowerCase = 'a' + position;
        char lowerCase = ch - 'A' + 'a';
        printf("Lower = %c", lowerCase);
     }
     else if ('a'<=ch && ch<='z') {
         char upperCase = ch - 'a' + 'A';
         printf("Upper = %c", upperCase);
     }

     **/

     // lower to upper and upper to lower using ctype function

     char ch;
     scanf("%ch", &ch);

     if (isupper(ch)) {
        printf("Lower = %c", tolower(ch));
     }
     else if (islower(ch)) {
        printf("Upper = %c", toupper(ch));

     }


   }


