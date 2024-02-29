


            /// QS 3 - rev array elements



    /// Prctice Day 01 Week 03 Course 03 Sem 01.
    // 260722 10.30 am

    /// Question: 3 - WAP that will take n integer numbers into an array,
    // and then reverse all the integers within that array. Finally, print them all from 0 index to the last valid index.

    #include <bits/stdc++.h>
    using namespace std;

    void input_arr(int *ar, int n)
    {
        cout<<"Enter the "<<n<<" elements: "<<endl;
        for (int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
    }

    void rev_arr_inPlace(int *ar, int n)
    {
        int i, j;
        /*
        // inplace method
        for (i=0, j=n-1; i<j; i++, j--)
        {
            int tmp = ar[i];
            ar[i] = ar[j];
            ar[j] = tmp;
        }
        */
        // another method

        for (i=0; i<n/2; i++)
        {
            int tmp = ar[i];
            cout<<" tmp-  "<<tmp;
            ar[i] = ar[n-1-i];
            cout<<"  ar[n-1-i]  -  "<<ar[n-1-i];
            ar[n-1-i] = tmp;
        }

    }

    void print_arr(int *ar, int n)
    {
        for (int i=0; i<n; i++)
            cout<<ar[i]<<" ";
    }

    int main() {

        // sum of an array

        cout<<"\tReverse Array Elements"<<endl<<endl;

        int i, j, n;
        cout<<"Enter number of elements: ";
        cin>>n;
        int ar[n];

        input_arr(ar, n);

        rev_arr_inPlace(ar, n);

        print_arr(ar, n);


        return 0;
    }

