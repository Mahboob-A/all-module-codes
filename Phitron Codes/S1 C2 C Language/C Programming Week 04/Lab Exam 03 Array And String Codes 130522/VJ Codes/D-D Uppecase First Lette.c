
        /// https://vjudge.net/contest/495277#problem/D

        /*
        Amr speaks to someone on chat and notices that the first
        character he writes does not start with a capital letter.
        Help Amr gets the same word with an upper character.
        */


#include <stdio.h>
 #include <string.h>
 int main()
 {
     char str[1001];
     int i, length;
     gets(str);
     length = strlen(str);


     for (i = 0; i < length; i++) {

         if (str[i] >= 'a' && str[i] <= 'z') {

            str[0] = toupper(str[0]);
         }
     }
     printf("%s", str);
     return 0;
 }
