



            /// B - B 10 - 2 Linear Search





            ///  B - B 10 - 2: Linear Search.
            // 250722

    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        cout<<"Linrar Search: All values of array are distinct: "<<endl<<endl;
        cout<<"Input size of array: ";
        int i, n, val;
        cin>>n;
        int ar[n];

        cout<<"Input array value: "<<endl;
        for (i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        cout<<"Input value to find: ";
        cin>>val;
        bool found = false;

        for (i=0; i<n; i++)
        {
            if (ar[i] == val)
            {
                found = true;
                cout<<"The value is found in index "<<i<<" ";
                break;
            }
        }

        if (!found)
        {
            cout<<"Inputed value "<<val<<" has not found in the array."<<endl;
        }


        return 0;
    }

