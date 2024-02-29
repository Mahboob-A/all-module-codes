

// 201222, Tuesday, 10.20 am



    #include <bits/stdc++.h>
    using namespace std;

    void printArr(int *arr, int n)
    {
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";

    }

    void bubbleSort(int *arr, int n)
    {
        int i, j, flag;
        for(i=0; i<n-1; i++)
        {
            cout<<i+1<<"'th iteration"<<endl;
            flag = 0;
            for(j=0; j<n-1-i; j++)
            {
                cout<<j+1<<"'th step "<<endl;
                printArr(arr, n);
                cout<<"  ->  ";
                printArr(arr, n);
                cout<<endl;
                if(arr[j] > arr[j+1])
                {
                    swap(arr[j], arr[j+1]);
                    flag = 1;
                }

            }
            if(flag == 0)
                break;
        }


    }


    void bubbleSort2(int *arr, int n)
    {
        int flag;
        for(int i=0; i<n-1; i++)
        {
            flag = 0;
            for(int j=0; j<n-1-i; j++)
            {
                if(arr[j] < arr[j+1])
                {
                    int tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                    flag = 1;
                }
            }
            if(flag == 0)
                break;
        }
    }

    int main () {

        int arr[] = {1, 5, 7, 3, 9, 7};
        int n = sizeof(arr) / sizeof(arr[0]);
        bubbleSort(arr, n);
        printArr(arr, n);

    return 0;
    }
