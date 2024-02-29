


            /// 9-5 Array Deletion
            // 250722 11.30 am


        // A - 9 - 1: DS - Array Introduction

    #include <iostream>
    using namespace std;

    int main() {
        cout<<"Deletion of an element of an array : "<<endl<<endl;
        int i, n, pos;
        int ar[50];
        cout<<"Input array size: "<<endl;
        cin>>n;

        cout<<"Input array element: "<<endl;
        for (i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        cout<<"Input pos to delete: "<<endl;
        cin>>pos;

        if (pos < 0 || pos > n)
        {
            cout<<"Invalid Position to delete: "<<endl;
        }
        else
        {

            // traverse pos + 1 to size - 1 i.e i<n or i<size
            if (pos == n-1) // if deletion is at the last pos that is size of the array
            {
                n--; // just decrease the array size
            }
            else  // if deletion from first or middle position
            {
                for (i = pos + 1; i<n; i++)  // traversing right side
                {
                    // present index value is copying to previous index
                    ar[i-1] = ar[i];
                }
                n--; // as an element does not exist now so decrease the size of the array
            }

        }

        cout<<"Updated array afte deletion is: "<<endl;
        for (i=0; i<n; i++)  // print should be from i<n as size of the array has been updated
        {
            cout<<ar[i]<<" ";
        }

        return 0;
    }
