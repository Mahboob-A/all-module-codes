



    /// Prctice Day 01 Week 03 Course 03 Sem 01.
    // 260722 10.30 am

    /// Question: 5 - WAP that will take n integers into an array, and then search a number
    // into that array. If found then print its index. If not found then print “NOT FOUND”.

    /// Linear Search || Duplicate Elements
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

    void linear_search_dup(int *ar, int n)
    {
        int i, search_val;
        cout<<"Input value to search: ";
        cin>>search_val;
        bool found = false;
        for (i=0; i<n; i++)
        {
            if (ar[i] == search_val)
            {
                found = true;
                cout<<"Element Found in Index: "<<i<<"\n";
            }
        }

        if (!found)
            cout<<"Element Not Found.\n";
    }


    int main() {


        cout<<"\tLinear Search || Duplicate Elements"<<endl<<endl;

        int i, j, n;
        cout<<"Enter number of elements: ";
        cin>>n;
        int ar[n];

        input_arr(ar, n);

        linear_search_dup(ar, n);


        return 0;
    }

