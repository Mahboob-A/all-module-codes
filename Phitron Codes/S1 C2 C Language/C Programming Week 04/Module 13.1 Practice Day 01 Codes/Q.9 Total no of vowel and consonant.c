
    ///Q.9 -> Write a C program to find total number of vowels and consonants in a string using loop and if else.
    ///How to find total number of vowels and consonants in a string using switch case in C programming.
    ///Logic to count number of vowels and consonants in a string.

    #include <stdio.h>
    int main  () {
        char a[50];
        int vowel=0, consonant=0;
        printf("Enter a sting: ");
        gets(a);

        for (int i=0; i<strlen(a); i++) {
            if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z') {
                if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U') {
                    vowel++;
                }
                else {
                    consonant++;
                }
            }
        }

        printf("Total vowel -> %d\n Total consonant -> %d ", vowel, consonant);

       return 0;
    }
