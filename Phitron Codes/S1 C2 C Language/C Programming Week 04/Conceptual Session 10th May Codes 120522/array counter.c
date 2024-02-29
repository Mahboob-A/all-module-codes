

        /// find out the biggest number of characters in a given string
        // a b a c A H C A -> a / A == 4 times (small and upper ch same in condition)
        /*
          akta string e upper and lower case ch thakbe
          find out korte hobe besi bar kon ch ache irrespectiove
          of their upercase of lowercase
        */


    #include <stdio.h>
    #include <string.h>
    int main () {

        char ch[100];
        scanf("%s", ch); // string input
        strupr(ch); // making string in uppercase

        int count[26] = {0}; // as alphabet is 26
        //printf("%d\n", strlen(ch)); //printing the string length in array
        for (int i=0; i<strlen(ch); i++ ) { // loop string length portjonto
            printf("%c\n", ch[i]); // printing whole array by character wise
            count[ch[i]-'A']++; /*
                              akhane -65 mane
                              count[ch[i]-65 orthaat a[0] ana hocccche
                              count[ch[i]] mane holo a == ch value;
                              count[ch[i]-65] ata kore a er ascii value ana
                              holo fole 0-26 index umber ta pouwa jabe
                              count[ch[i]-65] ata count[ch[i]-'a'] vabeo leka jai
                              a ascii = 65. then 65-65 = 0 so ch[0] = 0 index
                              b ascii = 66. then 66-65 = 1 so ch[1] = 1 index
                              and so on.
                             */
                /// if ch is in uppercase, make uppercase in 'a' places

        }
        char ans1;
        int ans2 = 0;
        for (int i=0; i<26; i++) {

           // printf("Alphabet -> %d Count -> %d\n\n", i+1, count[i]);

            if (count[i]>ans2) {
                ans2 = count[i];
                ans1 = i+'A'; // or " +65 "
             }

        }
        printf("%c -> %d\n", ans1, ans2);

       return 0;
    }
