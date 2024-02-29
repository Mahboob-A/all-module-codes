


            /// F sort() Function in C++
            // 060722 11.40 am

    #include <bits/stdc++.h>
    using namespace std;

    int main () {

        int a[]={5, 9, 4, 6, 8};
        int i, n = 5;

        sort(a, a+n); // sort takes two pointer: starting pointer and last pointer

        for (i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }

        /*
         sort is a stl function which uses quick, heap and insertion sort technique
         and its time complexity is o(nlogn).

        */


        return 0;
    }
