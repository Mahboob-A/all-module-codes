

        /// QS- 7: Find if a program is reversed sorted

        /*
        implement the is_reverese_sorted() function to check
        if an array reverse sorted. For example if a = {6, 4, 3, 1}.
            Then is_reverse_sorted should return True
        */


      /*  #include <stdio.h>

    void is_reverse_sorted (int n, int arr[]) {

        for(int i=0;i<n-1;i++){

            for(int j=i+1;j<n;j++){

                if(arr[i]> arr[j]){

                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        printf("Sorted elements: ");
        for(int i=0;i<n;i++) {
            printf("%d ", arr[i]);
        }



    }
    */


    #include <stdio.h>
    void is_reverse_sorted (int n, int ar[])
    {
        int cnt = 0;
        for(int i=0; i<n-1; i++)
        {
            if( ar[i] < ar[i+1] )
            {
                cnt++;
                break;
            }
        }

        if (cnt == 0) printf ("True");
        else printf ("False");
    }

    int main()
{
   int n, i;

   scanf("%d",&n);

   int ar[n];

   for (i=0; i<n; i++)
   {
       scanf("%d", &ar[i]);
   }

   is_reverse_sorted (n, ar);


   return 0;
}
