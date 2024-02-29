

                /// https://vjudge.net/contest/495277#problem/F
                /// F-F Good Numbers

    #include <stdio.h>
    int main () {
        long long num;
        int count=0;
        scanf("%lld", &num);

        while (num != 0)
        {
            if (num%10 == 7 || num%10 == 4) /*  protita number er vagsesh
                                                4 ba 7 hole count ++
                                                vagsesh ber korar por tar ager
                                                num e jabar jonno vag kora hocche num/10

                                             */
            {
                count++;
            }
            num = num/10;
        }
        if (count == 4 || count == 7) // jodi total count 4 ba 7 hoy
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }

    return 0;
    }
