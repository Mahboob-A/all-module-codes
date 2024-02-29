

        ///Q 5  find vowels and their index in a string 070622


    #include <stdio.h>
    int main () {
        char str[50];
        int out[51] = {0};
        int i, k=0;
        gets(str);

        for (i=0; i<strlen(str); i++)
        {
            if (str[i] == 'a' ||
                str[i] == 'e' ||
                str[i] == 'i' ||
                str[i] == 'o' ||
                str[i] == 'u'  )
                {
                    out[k] = i; // str[i] er index ta out[k] er index e deowa hocche
                    k++; // k index ke increase kore out[k] te i er index neowa hocche
                 }
        }

        for (i=0; i<k; i++)   // k er index porjonto loop cholche
        {   int indx = out[i];  // out[i] index ke indx var e rakha hocche indx akhn out[i] er index mane vowel er index hold korche
            printf("%d %c\n", indx, str[indx]); // original array te vowel er index print kore vowel print kora hocche
        }


    }
