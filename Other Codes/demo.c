


            /// D 9 - 4 Array Insertion.cpp
            // 250722 10.30 am


    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        // traversing n times
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
        for (i=0; i<=n; i++)
        {
            cout<<ar[i]<<" ";
        }

        return 0;
    }
