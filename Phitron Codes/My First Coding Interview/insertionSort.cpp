
// selection sort, 201222, Tuesday, 12.10 pm


    #include <bits/stdc++.h>
    using namespace std;


    void printArr(int *arr, int n)
    {
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
    }

    void selectionSort(int *arr, int n)
    {
        int key, j;
        for(int i=1; i<n; i++)
        {
            key = arr[i];
            j = i-1;
            while(arr[j] > key && j>=0)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }

    void selectionSort2(int arr[], int n)
    {
        int key, j;
        for(int i=1; i<n; i++)
        {
            key = arr[i];
            j = i-1;
            while(arr[j] > key && j >= 0)
            {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }

    int main () {
        int arr[] = {1, 9, 2, 5, 4, 3, 7};
        int n = sizeof(arr) / sizeof(arr[0]);
        selectionSort2(arr, n);
        printArr(arr, n);


    return 0;
    }
