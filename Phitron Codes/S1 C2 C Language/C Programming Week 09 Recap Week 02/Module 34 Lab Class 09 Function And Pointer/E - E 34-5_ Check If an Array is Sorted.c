


        /// E - E 34-5_ Check If an Array is Sorted

    #include <stdio.h>
    #include <stdbool.h>
    void select_sort (int ar[], int n)  // a function to sort an array selection sort
    {
        for (int i=0; i<n-1; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (ar[j] < ar[i]) // sorting in asending order
                                    // so overall function check korbe array assending order e ache kina ( > dile boro the choto ache kina check korbe)
                {
                    int tmp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = tmp;
                }
            }
        }
    }

    void array_copy (int a[], int b[], int n)  // function to copy original ar to 2nd array
    {
        for (int i=0; i<n; i++)
        {
            b[i] = a[i];
        }
    }

    bool is_sorted(int ar[], int n)
    {
        int br[n];     // taking another array to copy the main array
                        // this 2nd array would be sorted to check
                        // whether the original array sorted or not.

        array_copy(ar, br, n);    // calling array_copy  function to copy original array to 2nd array
        select_sort(br, n);        // calling soring function to sort 2nd array

        for (int i=0; i<n; i++) // checking whether the original array is equal to 2nd array
        {
            if (ar[i] != br[i]) // (==) diye kaj hobe na, tokhn j kono akta equal holei return kore debe so use (!=) operator
            {
                return false; // if not equal then return false
            }

            return true; // else true
        }
    }

    int main () {
        int i, n;
        scanf("%d", &n);
        int ar[100] = {0};

        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        bool ans = is_sorted(ar, n); // calling is_sorted function as it returns true false so store the answer

        if (ans)   // atar mane if (ans == true)
            printf("The array is sorted");

        else
            printf("The array is not sorted");

        return 0;
    }


    /*



    // selection sort program

    #include <stdio.h>
    #include <stdbool.h>
    void selec_sort (int *ar, int n)
    {
        for (int i=0; i<n-1; i++)
        {
            for (int j=i+1; j<n; j++)
            {
                if (ar[j] < ar[i])
                {
                    int tmp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = tmp;
                }
            }
        }
    }

    void cpy_arr (int *ar, int *br, int n)
    {
        for (int i=0; i<n; i++)
        {
            br[i] = ar[i];
        }
    }

    bool is_sorted (int *ar, int n)
    {
        int br[n];
        cpy_arr(ar, br, n);
        selec_sort(br, n);

        for (int i=0; i<n; i++)
        {
            if (ar[i] != br[i])
            {
                return false;
            }
            return true;
        }
    }

    int main () {
        int i, n;
        scanf("%d", &n);

        int ar[n];
        for (i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }

        bool ans = is_sorted(ar, n);

        if (ans)
            printf("The array is sorted.");
        else
            printf("Sorry! The array is not sorted.");


    }

    */
