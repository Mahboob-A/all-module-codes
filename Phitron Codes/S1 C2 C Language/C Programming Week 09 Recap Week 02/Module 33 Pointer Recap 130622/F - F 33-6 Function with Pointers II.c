


            /// 33-6 Function with Pointers II
            // 140322

            // returning value from udf to main

    #include <stdio.h>
    void change (char *ar) // or ar[]
    {
        int sz = strlen(ar); // string er size ber kora jabe udf e
        printf("%d", sz);
    }
    int main () {
        char ch[] = "hello";
        change(ch); // sending only array
    }



    #include <stdio.h>
    void change (int *ar) // or ar[]
    {
        int sz = sizeof(ar) / sizeof(ar[0]); // array size ai vabe udf e ber kora jabe na
        printf("%d", sz);
    }
    int main () {
        int ar[] = "hello";
        change(ar); // sending only array, but size o pathano proyojon na hole kaj hobe na
    }
