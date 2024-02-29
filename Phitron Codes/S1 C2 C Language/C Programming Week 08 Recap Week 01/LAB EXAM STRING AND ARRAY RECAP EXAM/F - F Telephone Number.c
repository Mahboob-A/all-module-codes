

        /// F - F Ideal Telephone Number



        ///  MAIN DEMO PRACTICE PAGE PRACTICE HERE
        ///  reverse an array using [n-1-i] index
        // 080622


        /*

            #include <stdio.h>
    int main () {
        int i, n, t;

        scanf("%d", &t); // test case

        while (t--)
        {
            scanf("%d", &n); // array length
            char str[n+1];    // as it's char, array length should be n+1
            scanf("%s", str);  // string reasding
            int sz = strlen(str);
            int c = 0;   // for condition
            for(i=0; i<n; i++)
            {
                if (str[i] == '8')
                {
                    c = i;
                    break;
                }

            }
           // if (str[0] == '8' && sz == 11)
            //{
               // printf("YES");
            //}
            if (n-i<=11)
            {
                printf("NO");
            }
            else
            {
                printf("YES");
            }


        }
    }


  */


    /// F - F Ideal Telephone Number
    // bug fixed
    // submit again



    #include <stdio.h>
    #include <string.h>
    int main () {
        int t;
        scanf("%d", &t);

        for (int i=0; i<t; i++)
        {
            int i, n;
            scanf("%d", &n);
            char str[n+1];
            int cnt = 0 ;   // for condition
            for (i=0; i<n+1; i++) // prblm occuring here i<n part. i was running the loop until not n but array size is n+1 so loop shld run until not n+1
            {
                scanf("%c", &str[i]);
            }



            for(i=0; i<n; i++)
            {
                int nod;
                if (str[i] == '8')
                {
                    nod = i; // nod indicates the str[0]

                    int num = n - nod; // sizeof array - nod indicating to remaining numbers


                    if (num>=10)
                    {
                        printf("YES\n");
                        cnt = 0;
                        break;
                    }
                }

                else if (str[i] != '8') // if there are no char 8
                {
                    cnt++; // then count not number of not availability of char 8
                }
            }

            if (cnt>0) // if no char 8 in string then it's not a mobile number
            {
                printf("NO\n");
            }

        }

    }


