




            /// D 9 - 4 Array Insertion.cpp
            // 250722 10.30 am


            /// Insertion for sorted array

    /*

    #include <iostream>
    using namespace std;

    int main() {

        /// Insertion for sorted array

        // traversing n times

        //time complexity: thita(n) thita of n i.e n times operation (in worst case)

        /*
        sudo code: in loop

        i = size-1
        i >= pos
        i--

        ar[i+1] = ar[i];

        loop end;

        ar[pos] = val;

        //
        cout<<"Array Insertion For Sorted Array: "<<endl<<endl;
        int i, n, pos, val;
        int ar[50];
        cout<<"Input array size: "<<endl;
        cin>>n;

        cout<<"Input array element: "<<endl;
        for (i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        cout<<"Input pos and val: "<<endl;
        cin>>pos>>val;

        if (pos < 0 || pos > n)
        {
            cout<<"Invalid Position: "<<endl;
        }
        else
        {
            for (i = n-1; i>=pos; i--)
            {
                ar[i+1] = ar[i];
            }
            ar[pos] = val;
        }

        cout<<"Updated array: "<<endl;
        for (i=0; i<=n; i++)   // loop till n because 1 size has been increased
        {
            cout<<ar[i]<<" ";
        }

        return 0;

    }

    */

    #include <iostream>
    using namespace std;

    int main() {

        /// Array insertion for unsorted array

        // time complexity: in constant time i.e in just single swap (best case)

        /*
        sudo code: no loop.
        ar[size] = ar[pos];
        ar[pos] = val;

        */

        cout<<"Array Insertion For Unsorted Array: "<<endl<<endl;
        int i, n, pos, val;
        int ar[5];
        cout<<"Input array size: "<<endl;
        cin>>n;

        cout<<"Input array element: "<<endl;
        for (i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        cout<<"Input pos and val: "<<endl;
        cin>>pos>>val;

        if (pos < 0 || pos > n)
        {
            cout<<"Invalid Position: "<<endl;
        }
        else
        {
            ar[n] = ar[pos];
            ar[pos] = val;
        }

        cout<<"Updated array: "<<endl;
        for (i=0; i<=n; i++)  // loop till n because 1 size has been increased
        {
            cout<<ar[i]<<" ";
        }

        return 0;

    }











