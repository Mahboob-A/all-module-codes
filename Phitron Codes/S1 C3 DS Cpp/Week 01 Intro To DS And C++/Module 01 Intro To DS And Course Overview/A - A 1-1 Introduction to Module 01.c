


            /// A - A 1-1 Introduction to Module 01
            // 03.07.22 Sunday, 10.17 am

            // a pen selling code to find who bought max pens from a seller

    /// Code - 01: pensell code using selection sort

    #include <stdio.h>
    struct Pensell
    {
        char name[100];
        int pens;
    };

    void selec_sort (struct Pensell *ar, int n)   // receiving struct array and size
    {
        int i, j;
        for (i=0; i<n-1; i++)   // selection sort
        {
            for (j=i+1; j<n; j++)
            {
                if (ar[j].pens < ar[i].pens)  // assending order 0 theke boro
                {
                    int tmp = ar[j].pens;
                    ar[j].pens = ar[i].pens;
                    ar[i].pens= tmp;
                }
            }
        }
    }



    int main () {
        int i, j, n;
        scanf("%d", &n);

        struct Pensell ar[n];


        for (i=0; i<n; i++)
            scanf("%s %d", &ar[i].name, &ar[i].pens);



        selec_sort(ar, n);

//        for (i=0; i<n; i++)
//            printf("%s %d\n", ar[i].name, ar[i].pens);

        printf("Max pen sold is %d\n", ar[n-1].pens);  // 0 theke boro vabe sajano hoyeche tai last index e boro ache tai last index er pen ke acccess kora hocche/


    }


    /// Code - 02: pensell code using max variable

     #include <stdio.h>
    struct Pensell
    {
        char name[100];
        int pens;
    };
    int main () {
        int i, n;
        printf("Input array size, name of buyer and number of pens: ");
        scanf("%d", &n);

        struct Pensell ar[n];
        //memset(ar, 0, sizeof(ar));   /// error: - struct dt array ke ai vabe memset diye kichu assign kora jai na

        int max = 0;

        for (i=0; i<n; i++)
        {
            scanf("%s %d", &ar[i].name, &ar[i].pens);
            //printf("%s %d \n", ar[i].name, ar[i].pens);
            if (ar[max].pens < ar[i].pens)   // check korchi j ar er max e j indx ache sei index er pens ki current input array er index er pens theke choto kina. structure tahkle ai vabe min max ba onno j kono kajer jonno left hand to right hand check korle ai vabe member name diye if condition dite hobe.
            {
                // printf("max -> %d \n", max);  // printing for debugging
                //printf("ar[i].pens -> %d\n", ar[i].pens);   // printing for debugging
                max = i;    // max e index ta rekhe dicchi, ai index e char name and int pens dutoi ache
            }
        }

        printf("Max pen bought by %s and quantity is: %d\n", ar[max].name, ar[max].pens);   // max e jehetu akhn i ache tai ar[max].member name diye access korle member ke access kora jabe
    }
