



    // Conceptual Session: 10 - 2: Heap And Priority Queue
    // 190922, Monday, 07.30 am

    // Priority Queue Creation With Heap
    #include <bits/stdc++.h>
    using namespace std;

    // min_queue
    class PriorityQueue
    {
    private:
        vector<int>v;

        int leftChild(int index)
        {
            return (2*index)+1;
        }

        int rightChild(int index)
        {
            return (2*index)+2;
        }

        int parent(int index)
        {
            return (index - 1)/2;
        }

        // min heap
        void heapify(int parentIdx)
        {
            // step 01: Find left child index of parent
            int left_index = leftChild(parentIdx);

            // step 02: Find right child index of parent
            int right_index = rightChild(parentIdx);

            // step 03: Take parent as the smallest value
            int smallest = parentIdx;

            // step 04: check if left_index is within the bound of vector size
            // and if the value of v[left_index] < the value of v[smallest] if true make left_index as the smallest
            if(left_index < v.size() && v[left_index] < v[smallest])
                smallest = left_index;

            // step 05: Again, chekc if right_index is within the bound of vector size
            // and if the value of v[right_index] < the value of v[smallest], if true make right_index as the smallest
            if(right_index < v.size() && v[right_index] < v[smallest])
                smallest = right_index;

            // step 05: Now, the time to check if the value of smallest and parentIdx is altered, if so,
            // then value of child is less than the value of parent hence, we need to put the smallest value as the parent
            // in min heap, hence, swap the value of v[smallest] and v[parentIdx]
            if(smallest != parentIdx)
            {
                // before the swap, the smallest index has the smallest value and parentIdx has the greater value
                swap(v[smallest], v[parentIdx]);

                // now, after the swap, smallest value has now the greater value and parent has the lesser value.
                // so, we need to again check if this greater vlaue in smallest index has again any child
                // and if those child are smaller than this value that is in smaller index now, that's why call recursively
                // with the smallest index so that all the other child of smallest index now, if it has any, should get rearranged.
                heapify(smallest);
            }
        }

    public:

        // heap creation
        void Push(int val)
        {
            // heap ke complete bt hote hobe ai jonno last theke vector e push kora hocche as
            // vector e last theke push kora jai
            v.push_back(val);
            // last j element ta push holo tar index
            int last_pushed_index = v.size()-1;

            // joto khon porjonto v[last_pushed_index] na tar parent er theke choto totokhon swap korte hobe,
            // last_pushed_index tar parent er theke boro hoye elei loop break korbe
            // " if(last_pushed_index == 0) break " ai condition lagbe jodi loop e <= deowa hoy
            while(v[last_pushed_index] < v[parent(last_pushed_index)])
            {
                swap(v[last_pushed_index], v[parent(last_pushed_index)]);
                // akbar swap hobar por last_pushed_index akhn jar child holo sei parent er songe chekc korar jonno
                // parent er position ke akhn last_pushed_index banano hocche, jeno abar se tar opopere (as bt) parent
                // er songe nijeke compare korte pare.
                last_pushed_index = parent(last_pushed_index);
            }
        }

        // heap pop
        void Pop()
        {
            // step 01: override the [0] element with the last element of the vector
            v[0] = v[v.size()-1];

            // step 02: now pop the last element
            v.pop_back();

            // step 03: now heapify the vector with its root
            // heapify will take 0 as parent index and rearrange all with min value in root, and max value in child
            heapify(0);
        }


        int Top()
        {
            // return the [0] value
            return v[0];
        }

        bool Empty()
        {
            // return true if vector size is 0 and false if size > 0
            return v.size()==0;
            // this will return true is vector size == 0 and will return false if vector size is not 0
        }

    };


    int main() {

        PriorityQueue pq;

        /*
        pq.Push(10);
        pq.Push(15);
        pq.Push(20);
        pq.Push(21);
        pq.Push(18);
        pq.Push(3);
        pq.Push(0);
        pq.Push(3);

        while(!pq.Empty())
        {
            int top = pq.Top();
            pq.Pop();
            cout<<top<<" ";
        }

        */




        int n;
        cin>>n;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        for(int i=0; i<n; i++)
            pq.Push(arr[i]);


        // priority queue itself is a kind of heapsort.
        // if we need to perform heapsort, then we need to
        // create the push pop and heapify function
        // push elements in push function or pass the array else we can implement the heapsort as shown in module also

        while(!pq.Empty())
        {
            int val = pq.Top();
            pq.Pop();
            cout<<val<< " ";
        }






        return 0;
    }
