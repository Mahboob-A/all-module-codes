
        /// 18.3 - Implementing The Truncate Function



    #include <stdio.h>
    void trun_cate (char s[], int k)
    {
        int len = strlen(s);
        if (k < 0 || k > len ) return; // k jodi 0 er choto ba k jodi length er theke boro hoy
                                        // then return. k holo koto tomo char porjonto truncate hobe
        s[k] = '\0';
    }

    int main () {
        char s[250];
        fgets (s, 250, stdin);
        s[250] = '\0';

        int k;
        scanf ("%d", &k);

        trun_cate(s, k); // passing string and koto tomo char e truncate hobe
        printf ("%s", s);
    }
