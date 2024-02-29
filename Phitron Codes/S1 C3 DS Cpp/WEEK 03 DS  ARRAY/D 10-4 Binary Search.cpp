


            /// D - D 10-5: Binary Search Implementation
            // 270722 7.30 am




    // 10-5: Binary Search Implementation
    // 260722\

    /*
    #include <iostream>
    using namespace std;

    int binarySearch(int *ar, int search_val, int lb, int ub)
    {
        if (lb <= ub)
        {
            // finding mid value
            int mid = (lb + ub) / 2;

            // x == ar[mid] - in middle / central position
            if (search_val == ar[mid]) return mid;

            // x > ar[mid] - in right position
            else if (search_val > ar[mid])
                binarySearch(ar, search_val, mid+1, ub); // changing lb to right side to mid+1 position

            // x < ar[mid] - in left position
            else
                binarySearch(ar, search_val, lb, mid-1);  // changing ub to left side to mid-1 position
        }
        else
            return -1;
    }

    int main() {
        cout<<"\tBinary Search Program:"<<endl<<endl;
        int i, size;
        cout<<"Enter array size: ";
        cin>>size;

        int ar[size];
        cout<<"Enter array elements: "<<endl;
        for (i=0; i<size; i++)
            cin>>ar[i];

        int search_val;
        cout<<"Enter value to search: ";
        cin>>search_val;

        int idx_of_bin_search = binarySearch(ar, search_val, 0, size-1);

        if (idx_of_bin_search == -1)
            cout<<"The element is not found in the array."<<endl;
        else
            cout<<"The element "<<search_val<<" is found in "<<idx_of_bin_search<<" index and "<<idx_of_bin_search+1<<"th position."<<endl;


        return 0;
    }

    */
    /// same code in enhanced way
    // this code sorts the array first then calls the function to search


        #include <bits/stdc++.h>
    using namespace std;

    int binarySearch(int *ar, int search_val, int lb, int ub)
    {
        if (lb <= ub)
        {
            //int mid = lb + (ub - lb) / 2;
            int mid = (lb + ub) / 2;
            if (search_val == ar[mid]) return mid;
            else if (search_val > ar[mid]) binarySearch(ar, search_val, mid+1, ub);
            else binarySearch(ar, search_val, lb, mid-1);
        }
        else return -1;
    }

    int main() {
        cout<<"\tBinary Search Program:"<<endl<<endl;
        int i, size;
        cout<<"Enter array size: ";
        cin>>size;

        int ar[size];
        cout<<"Enter array elements: "<<endl;
        for (i=0; i<size; i++)
            cin>>ar[i];

        sort(ar, ar+size);  // sorting the array if it is not already sorted

        for (i=0; i<size; i++)  // printing the array to see if it is sorted
            cout<<ar[i]<<" ";

        int search_val;
        cout<<"\nEnter value to search: ";
        cin>>search_val;

        int idx_of_bin_search = binarySearch(ar, search_val, 0, size-1);

        if (idx_of_bin_search == -1)
            cout<<"The element is not found in the array."<<endl;
        else
            cout<<"The element "<<search_val<<" is found in "<<idx_of_bin_search<<" index and "<<idx_of_bin_search+1<<"th position."<<endl;


        return 0;
    }


