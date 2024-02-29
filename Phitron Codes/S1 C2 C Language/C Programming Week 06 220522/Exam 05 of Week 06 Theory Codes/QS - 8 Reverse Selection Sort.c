

        /// QS - 08: Reverse Selection Sort
        /*
        Modify the Selection sort function so that it sorts the array in
        reverse sorted order, ie.
        from the largest to smallest. For example reverse sorting
        a = {3, 4, 2, 5, 1} should result
        in {5, 4, 3, 2, 1}. Use the is_reverse_sorted() function to break
        early from the function if
        the array is already sorted

        */

    #include <stdio.h>

    void is_reverse_sorted (int n, int ar[]) {

        for(int i=0; i<n-1; i++) {

            for(int j=i+1; j<n; j++) {

                if(ar[i] < ar[j]) {
                    int temp = ar[i];
                    ar[i] = ar[j];
                    ar[j] = temp;
                }
            }
        }
        for(int i=0; i<n; i++) {
            printf("%d ", ar[i]);
        }



    }


    int main(){
    int i, n, j;
    scanf ("%d", &n);
    int ar[n];
    for (i=0; i<n; i++)
    {
        scanf ("%d", &ar[i]);
    }



    is_reverse_sorted (n, ar);

    return 0;
}
