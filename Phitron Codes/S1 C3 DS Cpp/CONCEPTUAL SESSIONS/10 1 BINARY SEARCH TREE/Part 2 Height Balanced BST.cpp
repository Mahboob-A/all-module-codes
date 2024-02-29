


            /// height balanced bst

    // conceptual session: 10 - 1: Binary Search Tree
    // 40 - 115 Min: Making of a height balanced binary search tree taking the inputs in array
    // height balanced tree te elements gulo mustbe sorted thakbe hobe and it works just like the
    // mechanism of binary search.
    // 170922, Saturday, 06.00 pm
    #include <bits/stdc++.h>
    using namespace std;

    class treNode
    {
    public:
        int data;
        treNode *left;
        treNode *right;

        treNode(int data)
        {
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
    };


    // height balanced tree using array
    treNode* takeInputBST(int *arr, int left_bound, int right_bound)
    {
        // if the left_bound becomes > than right_bound then return NULL
        // this is the condition from where the recursive calls will be returned to its parent call
        if(left_bound > right_bound)
            return NULL;


        // step 01: find mid out of the total bound
        // this left_bound + (right_bound - left_bound) / 2; instead of (left_bound + right_bound) / 2 is to prevent outflow of integer addition
        int mid = left_bound + (right_bound - left_bound) / 2;

        // step 02: create new node using the value of arr[mid] index
        treNode *newNode = new treNode(arr[mid]);

        // step 03: call recursive call to newNode's left with right_bound as mid - 1
        newNode -> left = takeInputBST(arr, left_bound, mid-1);

        // step 04: call recursive call to newNode's right with left_bound as mid + 1
        newNode -> right = takeInputBST(arr, mid+1, right_bound);

        // step 05: now return the newNode from which node it was called
        return newNode;

    }




    // a new line level wise simple print
    void printTreeLevel(treNode *root)
    {
        if(root == NULL)
            return;

        queue<treNode *>q;

        q.push(root);

        while(!q.empty())
        {
            treNode *parent = q.front();
            q.pop();

            cout<<parent -> data <<endl;

            if(parent -> left)
                q.push(parent -> left);
            if(parent -> right)
                q.push(parent -> right);

        }
    }

    /*
    void printTreeLevel(treNode *root)
    {
        queue<treNode *>q;

        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            treNode *parent = q.front();
            q.pop();

            if(parent != NULL)
            {
                cout<<parent -> data << " ";

                if(parent -> left)
                    q.push(parent -> left);
                if(parent -> right)
                    q.push(parent -> right);
            }
            else
            {
                cout<<endl;
                if(!q.empty())
                {
                    cout<<endl;
                    q.push(NULL);
                }
            }
        }
    }
    */
    int main() {

        int n;
        cin>>n;

        int arr[n];

        treNode *root = NULL;

        // value must be sorted
        for(int i=0; i<n; i++)
            cin>>arr[i];

        // value must be sorted so sorting the elements
        sort(arr, arr+n);

        root = takeInputBST(arr, 0, n-1); // passing lower bound, upper bound and the array

        printTreeLevel(root);


        /*

        5
        4 3 1 2 5

        */



        return 0;
    }

