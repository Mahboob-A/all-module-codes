


            /// 37 4 heap sort
            // 160922, Friday, 10.00 pm



    // 37-3: Heapify | Part-2 | Implementation using C++
    // 160922, Friday, 07.00

    // implement a max heap using array
    // can we implement heap using ll? ask support
    // what is the best ds to store some elements and find if a particular element is in among the elements? ask support
    #include <bits/stdc++.h>
    using namespace std;

    // swap function using reference ask support what's wrong with this function
    void getSwap(int *a, int *b)
    {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }

    void heapify(int arr[], int size, int currentParent)
    {
        // step 01: copy currentParent in a var say largest as it is max heap
        int largest = currentParent;

        // step 02: now find left child and right child of currentParent
        int left = 2 * currentParent + 1;
        int right = 2 * currentParent + 2;

        // step 03: check if arr of left child is > than arr of largest, if true then make left child largest
        if(left < size && arr[left] > arr[largest])
            largest = left;

        // step 04: check if arr of right child is > than arr of largest, if true then make right child largest
        if(right < size && arr[right] > arr[largest])
            largest = right;

        // step 05: now check if largest and currentParent is changed,
        // if true, then swap arr of currentParent and arr of largest
        if(largest != currentParent)
        {
            swap(arr[currentParent], arr[largest]);
            // now as for the swap the elements are altered, hence pass largest as the new parent and call recursively
            // to rearrange the data again
            heapify(arr, size, largest);
        }
    }

    // for(int i=size-1; i>=0; i--) ai vabe loop chalale first element last leaf node
    // arr[n-1] is last leaf node

    void heapSort(int *arr, int size)
    {
        for(int i=size-1; i>=0; i--)
        {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }



    void displayHeap(int *arr, int size)
    {
        cout<<endl;
        for(int i=0; i<size; i++)
            cout<<arr[i]<<" ";

        cout<<endl;
    }


    int main() {

        // step 01: take input of array
        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++)
            cin>>arr[i];


        cout<<"Before the max Heapify: "<<endl;
        displayHeap(arr, n);


        // step 02: find the last parent node
        int nonLeafBegin = (n/2) -1;

        // step 03: now run loop until >=0 and pass arr, n and the non leaf parent in the heapify function
        for(int i=nonLeafBegin; i>=0; i--)
            heapify(arr, n, i); // i is the parent node


        cout<<"\nAfter the max Heapify: "<<endl;
        displayHeap(arr, n);



        heapSort(arr, n);
        cout<<"\nAfter the heapSort: "<<endl;
        displayHeap(arr, n);



        /*
        input

        9
        2 10 1 5 4 8 3 8 7

        */












        return 0;
    }

