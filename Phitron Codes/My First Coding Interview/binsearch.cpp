

// 201222, Tuesday, 04.10 pm

    #include <bits/stdc++.h>
    using namespace std;

    void printArr(int *arr, int n)
    {
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" " ;
    }

    void binSearch(int *arr, int n, int target)
    {
        int ans = -1;
        int lb = 0, hb = n-1;
        while(lb <= hb)
        {
            int mid = lb+(hb - lb) /2;
            if(arr[mid] == target)
            {
                ans = mid;
                hb = mid - 1; // moving left side for leftmost dupe
                //lb  = mid + 1;  for rightmost dupe
            }
            else if(arr[mid] > target)
                hb = mid - 1;
            else
                lb = mid + 1;
        }
        cout<<endl<<ans<<endl;

    }
    int main () {

        int arr[] = {5, 3, 9, 2, 5, 1, 3, 10, 9, 3, 10};
        int n = *(&arr + 1) - arr;

        sort(arr, arr+n);

        int target = 3;

        printArr(arr, n);

        binSearch(arr, n, target);



    return 0;
    }
