


        /// write a function to reverse an array

    #include <stdio.h>

    void reverse (int n, int ar[])
    {
        for (int i=0, j=n-1; i<j; i++, j--)
        {
            int temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    }


    int main () {
        int i, n;
        scanf ("%d", &n);
        int ar[n];

        for (i=0; i<n; i++)
        {
            scanf ("%d", &ar[i]);
        }

        reverse(n, ar);
        for (i=0; i<n; i++)
        {

            printf ("%d", ar[i]);
        }



    }


    /// another solution
/*

#include<stdio.h>

 //Function prototype
void reverse(int a[100], int n);

void main()
{
 int a[100], i, n;
 //clrscr();
 printf("Enter n:\n");
 scanf("%d", &n);
 // Reading array
 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d", &a[i]);
 }
 //Function Call
 reverse(a,n);
  //Displaying reversed array
 printf("Reversed array is:\n");
 for(i=0;i< n;i++)
 {
  printf("%d\t", a[i]);
 }
 return 0;
}
 //Function definition for reverse
void reverse(int a[10], int n)
{
 int i, temp;
 for(i=0;i< n/2;i++)
 {
  temp = a[i];
  a[i] = a[n-1-i];
  a[n-1-i] = temp;
 }
}

*/
