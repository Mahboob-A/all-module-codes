


            /// Height Balanced BST AND NODE DELETION
    // delete node from bst

    // conceptual session: 10 - 1: Binary Search Tree
    // 115 - 157 Min: Function To Delete Node From BST
    // 180922, Sunday, 07.30 am
    #include <bits/stdc++.h>
    using namespace std;

    class treeNode
    {
    public:
        int data;
        treeNode *left;
        treeNode *right;

        treeNode(int data)
        {
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
    };


    // height balanced tree using array
    treeNode* takeInputBST(int *arr, int left_bound, int right_bound)
    {
        // if the left_bound becomes > than right_bound then return NULL
        // this is the condition from where the recursive calls will be returned to its parent call
        if(left_bound > right_bound)
            return NULL;


        // step 01: find mid out of the total bound
        // this left_bound + (right_bound - left_bound) / 2; instead of (left_bound + right_bound) / 2 is to prevent outflow of integer addition
        int mid = left_bound + (right_bound - left_bound) / 2;

        // step 02: create new node using the value of arr[mid] index
        treeNode *newNode = new treeNode(arr[mid]);

        // step 03: call recursive call to newNode's left with right_bound as mid - 1
        newNode -> left = takeInputBST(arr, left_bound, mid-1);

        // step 04: call recursive call to newNode's right with left_bound as mid + 1
        newNode -> right = takeInputBST(arr, mid+1, right_bound);

        // step 05: now return the newNode from which node it was called
        return newNode;

    }




    // a new line level wise simple print
    void printTreeLevel(treeNode *root)
    {
        if(root == NULL)
            return;

        queue<treeNode *>q;

        q.push(root);

        while(!q.empty())
        {
            treeNode *parent = q.front();
            q.pop();

            cout<<parent -> data <<endl;

            if(parent -> left)
                q.push(parent -> left);
            if(parent -> right)
                q.push(parent -> right);

        }
    }

    /*
    void printTreeLevel(treeNode *root)
    {
        queue<treNode *>q;

        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            treeNode *parent = q.front();
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



    /// Function to find min node from a subtree of root -> right
    treeNode* get_min_node(treeNode *root)
    {
        if(root == NULL)
            return NULL;

        treeNode *min_node = get_min_node(root -> left); // as root -> left e min ache
        // when the recursive call reaches to the leaf node, it will return NULL,
        // at that time return root will return that leaf node and for all recursive call being returned
        // they will check if min_node == NULL, but that time in min_node there will be the leaf node, so its not NULL,
        // hence the else will be executed as the leaf node will be returned each time as min_node
        if(min_node == NULL)
            return root;
        else
            return min_node;

    }

    /// Delete Node Form BST Function
    treeNode* deleteNode(treeNode *root, int key)
    {
        // corner case:
        if(root == NULL)
            return root; // or null, as root is now also NULL

        // step 01: If root -> data == key perform 3 steps
        if(root -> data == key)
        {
            // step A: If root is leaf node, directly delete and put null to root.
            if(root -> left == NULL && root -> right == NULL)
            {
                delete root;
                root = NULL;
            }

            // step B: If root has only one sub-tree, then root with the sub-tre
            else if(root -> left == NULL)
            {
                treeNode *tmpNode = root -> right;
                delete root;
                root = tmpNode;
            }
            else if(root -> right == NULL)
            {
                treeNode *tmpNode = root -> left;
                delete root;
                root = tmpNode;
            }

            // step C: This means that the node has both sub-tree, hence, replace the root with its right sub tree's minimim node and delete that minimum node
            else
            {
                treeNode *min_node = get_min_node(root -> right);
                root -> data = min_node -> data;
                root -> right = deleteNode(root -> right, min_node -> data);
            }
        }
        // step 02: If root -> data == key not true, then traverse
        else if(key < root -> data)
            root -> left = deleteNode(root -> left, key);

        // step 03: If key > root->data then traverse right
        else
            root -> right = deleteNode(root -> right, key);

        // step 04: Noe return root
        return root;
    }




    int main() {
        cout<<"Height balanced BST And Node Delation: "<<endl;


        int n;
        cin>>n;

        int arr[n];

        treeNode *root = NULL;

        // value must be sorted
        for(int i=0; i<n; i++)
            cin>>arr[i];

        // value must be sorted so sorting the elements
        sort(arr, arr+n);

        root = takeInputBST(arr, 0, n-1); // passing lower bound, upper bound and the array

        // deleteNode Function
        cout<<"Input value to delete node: "<<endl;
        int key;
        cin>>key;
        root = deleteNode(root, key);

        cout<<endl;
        printTreeLevel(root);


        /*

        5
        4 3 1 2 5

        */



        return 0;
    }


