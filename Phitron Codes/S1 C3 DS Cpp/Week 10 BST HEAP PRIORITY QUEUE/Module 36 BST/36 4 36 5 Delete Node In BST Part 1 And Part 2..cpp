

            /// 36 4 36 5 Delete Node In BST Part 1 And Part 2
            // 150922, Thursday, 8.30 pm


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

    /// 36 - 2 || taking input in BST ||
    treeNode* takeInputBST(treeNode *root, int value)  // we can also receive the address of root so that we do not need to return anything
    {
        treeNode *newNode = new treeNode(value);
        if(root == NULL)
            root = newNode;

        // if value < root -> data
        if(value < root -> data)
            root -> left = takeInputBST(root -> left, value);

        // if value > root -> data
        else if(value > root -> data)
            root -> right = takeInputBST(root -> right, value);

            return root;
    }


    /// 36 - 3 || Searching a value in BST and prinitng search path ||
    treeNode* searchInBST(treeNode *root, int key, string &storePath)
    {

        // base case
        if(root == NULL)
            return NULL;

        // if the data mathces with the root
        if(root -> data == key)
        {
            cout<<root -> data;
            storePath += to_string(root -> data);
            return root;
        }

        // if the value i.e key is less than root data
        else if(key < root -> data)
        {
            cout<<root -> data << " -> ";
            storePath += to_string(root -> data) + " -> ";
            searchInBST(root -> left, key, storePath);
        }

        // if key is > root data
        else
        {
            cout<< root -> data << " -> ";
            storePath += to_string(root -> data) + " -> ";
            searchInBST(root -> right, key, storePath);
        }
    }


    /// 36 - 4 || Delete A Node In BST || Part 1 And Part 2 ||

    // function to get successorNode of the node that is being deleted (parent with two children)
    treeNode* getSuccessor(treeNode *root)
    {
        // copy root to tmp to traverse
        treeNode *curr = root;

        // run loop until curr -> left is not null and iterate to curr -> left
        while(curr -> left != NULL)
        {
            curr = curr -> left;
        }

        // as the curr has reached the successorNode of root, return it.
        return curr;
    }

    treeNode *deletionBST(treeNode *root, int val)
    {

        // traversal to the node
        if(val < root -> data)
            root -> left = deletionBST(root -> left, val);

        else if(val > root -> data)
            root -> right = deletionBST(root -> right, val);

        // traversal done || now deletion || implementation of 3 cases || else means val == root -> data
        else
        {
            // case 1: if it is leaf node and case 2 if parent has only 1 child(case 2: if parent has right child)
            if(root -> left == NULL)
            {
                // Case 2:  if left child null, then delete root and return right child
                // Casw 1: and for leaf node, left is null, so enters in this if, then copies null in
                // tmpNode as right child is also null and then it returns null
                treeNode *tmpNode = root -> right;
                free(root);
                return tmpNode;
            }
            else if(root -> right == NULL)
            {
                // Case 2: if parent has only left node
                treeNode *tmpNode = root -> left;
                free(root);
                return tmpNode;
            }
            else
            {
                // Case: 3 if parent has two nodes
                treeNode *successorNode = getSuccessor(root -> right);
                // replacing the root with its successor Node
                root -> data = successorNode -> data;

                // calling recursively and storing the returned value in root -> right and passing the
                // same root -> right as the root of the subtree and successorNode's data to delete
                // successorNode through which case it falls
                root -> right = deletionBST(root -> right, successorNode -> data);
            }
        }
        return root;
    }



    void inorder(treeNode *root)
    {
        if(root == NULL) return;
        inorder(root -> left);
        cout<<root -> data<< " ";
        inorder(root -> right);
    }


    int main() {


        int n;
        cin>>n;

        treeNode *root = NULL;

        //cout<<"Input "<<n<<" value in the tree: "<<endl;
        while(n-->0)
        {
            int val;
            cin>>val;

            root = takeInputBST(root, val);
        }

        cout<<endl;
        inorder(root);
        cout<<endl;

        // Search a val in bst

        /*
        int key;
        string searchPath;

        cout<<"Input the value to search in the tree: "<<endl;
        cin>>key;

        if(searchInBST(root, key, searchPath) != NULL)
            cout<<"\nThe value is present in the tree."<<endl;
        else
            cout<<"\nThe value is not present in the tree."<<endl;


        cout<<"\n\nSarch Path: "<<searchPath<<endl;
        */


        // delete a node in bst
        int key;
        cout<<"Input value to delete: "<<endl;
        cin>>key;

        root = deletionBST(root, key);

        cout<<endl;
        inorder(root);
        cout<<endl;

        /*
        input

        9
        11 5 9 43 34 1 2 7 21

        13
        7 5 12 3 6 9 15 1 4 8 10 13 17

        */










        return 0;
    }
