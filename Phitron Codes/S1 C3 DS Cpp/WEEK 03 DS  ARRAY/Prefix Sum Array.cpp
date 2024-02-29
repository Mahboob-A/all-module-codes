
 /    // prefix array 310722 08.00 am
    #include <iostream>
    using namespace std;

    int main() {
        cout<<"\v\vPrefix Array: "<<endl;

        int n;
        cout<<"Enter array size: ";
        cin>>n;
        int ar[n], pre[n];

        cout<<"Input array: "<<endl;
        for (int i=0; i<n; i++)
            cin>>ar[i];

        // prefix array's [0]th index is original array's [0]th index
        pre[0] = ar[0];     // we need to assign it manually because later pre[i-1] would give garbage as 0-1 is -1 and there are no index with -1

        for (int i=1; i<n; i++)   // as we have assigned [0]th index manually so need to run the loop from 1 index
            pre[i] = ar[i] + pre[i-1];   // pre of i is original array of i + pre's previous index's vlaue

        cout<<"\nOriginal Array is: "<<endl;
        for (int i=0; i<n; i++)  // printing original array
            cout<<ar[i]<<" ";

        cout<<"\nPrefix Array is: "<<endl;
        for (int i=0; i<n; i++)   // printing prefix array
            cout<<pre[i]<<" ";

        int idxI, idxJ;
        cout<<"\nEnter two index value from which you want to know sum: ";
        cin>>idxI>>idxJ;

        cout<<endl<<endl;

        int sum = 0;
        if (idxI == 0)   // if i is zero then pre[j] is answer
        {
            cout<<"Sum of index "<<idxI<<" to "<<idxJ<<" is "<<pre[idxJ]<<"."<<endl;
        }
        else
        {
            sum = pre[idxJ] - pre[idxI-1];   // else this is the answer
            cout<<"Sum of index "<<idxI<<" to "<<idxJ<<" is "<<sum<<"."<<endl;
        }

        return 0;
    }
