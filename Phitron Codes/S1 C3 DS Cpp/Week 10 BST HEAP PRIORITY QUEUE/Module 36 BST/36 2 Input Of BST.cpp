


            /// 36 2 Input Of BST
            // 150922, 09.30 am, Thursday



    // B - B: Implementation Of BST
    // 150922, Thursday,
    // (Module Beginning Date 100922, Saturday)
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

    void takeInputBST(treeNode *&root, int val)
    {
        treeNode *newNode = new treeNode(val);
        if(root == NULL)
        {
            root = newNode;
            return;
        }
        if(val < root -> data)
            takeInputBST(root -> left, val);
        else
            takeInputBST(root -> right, val);
    }


    void inorder(treeNode *root)
    {
        if(root == NULL) return;
        inorder(root -> left);
        cout<<root -> data<< " ";
        inorder(root -> right);
    }


    // bst create hole, inorder traversal e output always assending order e sorted obosthai dekhabe.

    int main() {


        int n;
        cin>>n;

        treeNode *root = NULL;

        while(n-->0)
        {
            int val;
            cin>>val;

            root = takeInputBST(root, val);
        }

        inorder(root);


        // bst gives ascending sorted order in in-order traversal
        /*

        9
        11 5 9 43 34 1 2 7 21

        */



        return 0;
    }
