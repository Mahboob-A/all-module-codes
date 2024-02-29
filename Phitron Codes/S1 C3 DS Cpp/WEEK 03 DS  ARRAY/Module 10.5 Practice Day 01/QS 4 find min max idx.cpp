



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


    int main() {

        // sum of an array

        cout<<"\tReverse Array Elements"<<endl<<endl;

        int i, j, n;
        cout<<"Enter number of elements: ";
        cin>>n;
        int ar[n];

        input_arr(ar, n);

        int mn = 10000000;
        int mx = 0;
        int minI, maxI;
        for (i=0; i<n; i++)
        {
            if (mn > ar[i])
            {
                minI = i;
                mn = ar[i];
            }
            if (mx < ar[i])
            {
                maxI = i;
                mx = ar[i];
            }
        }

        cout<<"Min = "<<mn<<" and index is "<<minI<<endl;
        cout<<"Max = "<<mx<<" and index is "<<maxI<<endl;

        return 0;
    }

