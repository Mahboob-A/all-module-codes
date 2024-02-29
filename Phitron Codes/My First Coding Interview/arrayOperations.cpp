

// 201222, Tuesday, 03.30 pm

    #include <bits/stdc++.h>
    using namespace std;


    void insertValInArray(int *arr, int n, int pos, int val)
    {
        if(pos < 0 || pos > n)
            return;

        for(int i=n-1; i>=pos; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos] = val;
    }

    void inserInUnsortedArray(int *arr, int n, int pos, int val)
    {
        if(pos < 0 || pos > n)
            return;

        arr[n] = arr[pos];
        arr[pos] = val;
    }

    void delValFromArray(int *arr, int n, int pos)
    {
        if(pos < 0 || pos > n-1)
            return;
        if(pos == n-1)
        {
            n--;
            return;
        }

        for(int i=pos+1; i<n; i++)
        {
            arr[i-1] = arr[i];
        }
        n--;
    }

    void printArr(int *arr, int n)
    {
        for(int i=0; i<=n; i++)
            cout<<arr[i]<<" ";

    }

    int main () {

        int arr[] = {2, 5, 1, 6, 4, 5, 9};
        int n = *(&arr+1) - arr;

        int pos = 2;
        int val = 10;
        //sort(arr, arr+n);
        //insertValInArray(arr, n, pos, val);
        inserInUnsortedArray(arr, n, pos, val);
        inserInUnsortedArray(arr, n, 3, 20);
        printArr(arr, n);

        delValFromArray(arr, n, 2);
        cout<<endl;
        printArr(arr, n);


    return 0;
    }
