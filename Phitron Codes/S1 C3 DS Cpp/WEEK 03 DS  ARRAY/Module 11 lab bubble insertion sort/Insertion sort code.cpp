



    /// Module code:



    /// Week 03: Lab Class 03 - F - F 11-6 Insertion Sort - Part 2
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

    void insertionSort(int *ar, int size)
    {
        for (int i=1; i<size; i++)
        {
            int key = ar[i];
            int j = i-1;
            cout<<endl<<"i - "<<i<<" Key - "<<key<<endl<<endl;
            while (ar[j]>key && j>=0)
            {
                cout<<"Current j -   "<<j<<endl;
                ar[j+1] = ar[j];
                printArray(ar, size);
                j--;
                cout<<"\nDecreased j -   "<<j<<endl;
            }
            ar[j+1] = key;
            printArray(ar, size);
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
        cout<<endl;

        // Insertion Sort implementation: F - F 11-6 Insertion Sort - Part 2:

        insertionSort(ar, size);
        cout<<endl<<endl;
        cout<<"Array After Insertion Sort: ";
        printArray(ar, size);


        return 0;
    }


    /// log2base2 code:


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

    void insertionSort(int *ar, int size)
    {
        for (int i=1; i<size; i++)
        {
            int value = ar[i];
            int index = i;
            while (ar[index - 1]>value && index>0)
            {
                ar[index] = ar[index-1];
                index--;
            }
            ar[index] = value;
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
        cout<<endl;

        // Insertion Sort implementation: F - F 11-6 Insertion Sort - Part 2:

        insertionSort(ar, size);
        cout<<endl;
        cout<<"Array After Insertion Sort: ";
        printArray(ar, size);


        return 0;
    }


