

        /// J - J Computer Keyboard Upper case or Lower case Letter
        // code not done check tomorrow

        /*[
    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    int main () {
        int i;
        char str[101];
        gets(str);
        bool lower = true;

        for (i=1; str[i] != '\0'; i++)
        {
            if (str[i]>='A' && str[i]<='Z')
            lower = false;
        }

        if (lower = true)
        {
            for (i=0; str[i] != '\0'; i++) // traversing whole string
            {
                if (str[i]>='A' && str[i]<='Z') // if all upper case
                {
                    str[i] = 'a' + str[i] - 'A'; // (s[i] - A) i.e (A - A) = 0 + 'a' i.e 0 + 65 ==  making all small case
                }
                else if (str[i]>='a' && str[i]<= 'z') // if all lower case
                {
                    str[i] = 'A' + str[i] - 'a'; // (s[i] - a) i.e (a - a) = 0 + 'A' i.e 0 + 97 == then making all upper case
                }
            }
        }
        printf("%s", str);
        return 0;
    }

*/





     /// J - J Computer Keyboard Upper case or Lower case Letter
        // code bug recheck
        // fix bug here -> find the first letter and find if it's small and rest upper




   #include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    gets(str);
    int cnt = 0, freq[26] = {0};
    int len = strlen(str);

    for(int i=1; str[i] != '\0'; i++)
    {
       if (str[i]>='A' && str[i]<='Z')
       {
           freq[str[i]-'A'] += 1; // as or all letters except for the first one are uppercase.
       }
    }

    for(int i=0; i<26; i++)
    {
        cnt += freq[i];
    }

    for(int i=0; str[i] != '\0'; i++){
        if(cnt == len - 1) // if the first char
        {
            if (str[i]>='a' && str[i]<= 'z') // if small case
            {
                str[i] -= 32; // making upper case a=97-32 = 65 == capital A
            }
            else
            {
                str[i] += 32; // if the rest not lower, the rest of upper case char make lower case. A=65, a=97-> if A = A+32 = 97 so a comes
            }
        }

    }
    printf("%s", str);
}






















    /*

        /// J - J Caps Lock is a button



    #include <stdio.h>
    #include <string.h>
    #include <stdbool.h>
    int main () {
        int i;
        char s[101];
        gets(s);



    bool is_upper = true;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] > 'Z')
        {
            is_upper = false;
            break;
        }
    }

    if (is_upper == true)
    {
        for (i=0; i<s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                int val = s[i-'A'];
                s[i] = 'a' + val; // making all letters small-case
            }
        }
    }
    else
    {

       if (s[0] == 'A' && s[i] >='a' && s[i] <= 'z')
       {
           int val = s[0-'a'];
            s[0] = 'A' + val; // making a[0] letter upper-case
       }


        // if first letter lowercase and others are in uppercase
	  //then the first one has to convert into uppercase and others have
	//to convert in lowercase
    }

    puts(s);
        /*

         if (a[i] >= 'A' && a[i] <= 'Z')
         {
            for (i=0; i<a[i] != '\0'; i++)
            {
                if (a[i] >= 'A' && a[i] <= 'Z') continue;
            }
         }




         for (i=0; i<a[i] != '\0'; i++)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
            {
                int val = a[i-'A'];
                a[i] = 'a' + val; // making all letters small-case
            }
        }

        if (a[0] >= 'a' && a[0] <= 'z')
            {
                int val = a[0-'a'];
                a[0] = 'A' + val; // making a[0] letter upper-case
            }

//        for (i=1; i<a[i] != '\0'; i++)
//        {
//            if (a[i] >= 'A' && a[i] <= 'Z')
//            {
//                int val = a[i-'A'];
//                a[i] = 'a' + val;
//            }
//        }
        puts(a);
    }

  */


