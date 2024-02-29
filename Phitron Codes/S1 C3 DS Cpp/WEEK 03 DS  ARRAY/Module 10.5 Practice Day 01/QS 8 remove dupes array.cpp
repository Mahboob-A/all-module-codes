

    /// QS 8 Remove dupes from an arr

    /// Prctice Day 01 Week 03 Course 03 Sem 01.
    // 260722 4.30 pm

    /// Question: 8 - WAP that will take n integers into an array A. Now remove all duplicate numbers
    // from that array. Finally, print all elements from that array.


    #include <bits/stdc++.h>
    using namespace std;

    void input_arr(int *ar, int *n)
    {
        cout<<"Enter Array Elements: ";
        for (int i=0; i<n; i++)
            cin>>ar[i];
    }

    void remove_dupes_arr(int *ar, int *n)
    {
        sort(ar, ar+n);    // sorting the Array

        for (int i=0; i<n-1; i++)     // checking one by one index and until <n-1
        {
            if (ar[i] == ar[i+1])     // if adajcent values are same
            {
                for (int j=i; j<n-1; j++)  // then running a loop from that i'th index until <n-1
                {
                    ar[j] = ar[j+1];     // and j's (j+1) right side value is being copid to present j'th index
                }
                n--;  // decreasing the size of the array
            }
        }
    }


    void print_arr(int *ar, int *n)
    {
        for (int i=0; i<n; i++)
            cout<<ar[i]<<" ";
    }


    int main() {


        cout<<"\tRemove Dupes from an Sorted Array"<<endl<<endl;

        int i, n;
        cout<<"Enter number of elements of array: ";
        cin>>n;
        int ar[n];

        int *p = &n;
        input_arr(ar, p);

        remove_dupes_arr(ar, p);

        print_arr(ar, p);  //  as n is being decreased, grabage value is being print with ans

        return 0;
    }



    /// remove dupes of unsorted array


    /// Prctice Day 01 Week 03 Course 03 Sem 01.
    // 260722 4.30 pm

    /// Question: 8 - WAP that will take n integers into an array A. Now remove all duplicate numbers
    // from that array. Finally, print all elements from that array.


    #include <bits/stdc++.h>
    using namespace std;

    void input_arr(int *ar, int n)
    {
        cout<<"Enter Array Elements: ";
        for (int i=0; i<n; i++)
            cin>>ar[i];
    }

    void remove_dupes_arr(int *ar, int n)
    {
        for (int i=0; i<n; i++)     // checking one by one index and until <n-1
        {
            for (int j=i+1; j<n; j++)  // then running a loop from that i'th index until <n-1
            {
                if (ar[i] == ar[j]) // if adajcent values are same
                {
                    ar[j] = -1;
                }
            }
        }
    }

    void print_arr(int *ar, int n)
    {
        for (int i=0; i<n; i++)
        {
            if (ar[i] != -1)
            {
                cout<<ar[i]<<" ";
            }
        }
    }


    int main() {


        cout<<"\tRemove Dupes from an Sorted Array"<<endl<<endl;

        int i, n;
        cout<<"Enter number of elements of array: ";
        cin>>n;
        int ar[n];

        input_arr(ar, n);

        remove_dupes_arr(ar, n);

        print_arr(ar, n);

        return 0;
    }

