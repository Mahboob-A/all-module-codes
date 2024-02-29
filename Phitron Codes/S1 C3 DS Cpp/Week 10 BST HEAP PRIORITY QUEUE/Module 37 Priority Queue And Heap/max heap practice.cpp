


            /// max heap practice
            // 180922, Sunday, 10.00 am



    /// practice heap 170922, Sunday, 09.00 am
    // create a max heap
    #include <bits/stdc++.h>
    using namespace std;


    void heapify(int *arr, int size, int currentParent)
    {
        int largest = currentParent;

        int left = 2*currentParent+1;
        int right = 2*currentParent+2;

        if(left < size && arr[left] > arr[largest])
            largest = left;
        if(right < size && arr[right] > arr[largest])
            largest = right;

        if(largest != currentParent)
        {
            swap(arr[currentParent], arr[largest]);
            heapify(arr, size, largest);
        }
    }




    void printHeap(int *arr, int size)
    {
        cout << endl;
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    int main() {

        int n;\
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        int nonLeafStart = (n/2) -1;

        for(int i=nonLeafStart; i>=0; i--)
        {
            heapify(arr, n, i);
        }

        printHeap(arr, n);

        /*

        9
        2 10 1 5 4 8 3 8 7


        9
        2 10 1 5 4 8 3 8 7

        */



        return 0;
    }
