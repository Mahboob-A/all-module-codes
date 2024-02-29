



    /// Prctice Day 01 Week 03 Course 03 Sem 01.
    // 260722 4.30 pm

    /// Question: 7 - WAP that will take n positive integers into an array A. Now find all the
    // integers that are divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.


    #include <bits/stdc++.h>
    using namespace std;

    void input_arr(int *ar, int n)
    {
        cout<<"Enter Array Elements: ";
        for (int i=0; i<n; i++)
            cin>>ar[i];
    }

    void find_div_by_3(int *ar, int n)
    {
        for (int i=0; i<n; i++)
        {
            if (ar[i] % 3 == 0)
            {
                ar[i] = -1;
            }
        }
    }

    void print_ar(int *ar, int n)
    {
        for (int i=0; i<n; i++)
            cout<<ar[i]<<" ";
    }


    int main() {


        cout<<"\tMake -1 of Array Elements if It is Divisible by 3"<<endl<<endl;

        int i, j, n;
        cout<<"Enter number of elements of array: ";
        cin>>n;
        int ar[n];

        input_arr(ar, n);

        find_div_by_3(ar, n);

        print_ar(ar, n);

        return 0;
    }

