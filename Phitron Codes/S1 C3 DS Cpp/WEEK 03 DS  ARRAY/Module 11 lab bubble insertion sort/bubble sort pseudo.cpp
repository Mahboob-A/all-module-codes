
    /// Week 03: Lab Class 03 - B - B 11-2 Bubble Sort - Part 1
    #include <bits/stdc++.h>
    using namespace std;

    void inputArray(int *ar, int size)
    {
        cout<<"Enter array elements: \n";
        for (int i=0; i<size; i++)
            cin>>ar[i];
    }

    void printArray(int *ar, int size)
    {
        for (int i=0; i<size; i++)
            cout<<ar[i]<<" ";

        cout<<endl;
    }

    void bubbleSort(int *ar, int size)
    {
        int i, j;
        for (i=0; i<size-1; i++)
        {
            for (j=0; j<size-1; j++)
            {
                if (ar[j] > ar[j+1])
                {
                    int tmp = ar[j];
                    ar[j] = ar[j+1];
                    ar[j+1] = tmp;
                }
            }
        }
    }

    int main() {
        int i, j, size;
        cout<<"Enter array size: ";
        cin>>size;
        int ar[size];

        inputArray(ar, size);
        cout<<"Array Before Sort: ";
        printArray(ar, size);

        // bubble sort implementation: In accordance with B - B 11-2 Bubble Sort - Part 1 pseudocode

        bubbleSort(ar, size);
        cout<<"Array After Bubble Sort: ";
        printArray(ar, size);


        return 0;
    }
