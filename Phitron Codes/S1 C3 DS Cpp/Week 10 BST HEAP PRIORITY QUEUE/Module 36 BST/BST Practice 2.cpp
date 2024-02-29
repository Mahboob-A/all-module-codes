


            /// BST Practice 2
            // 170922, Sunday, 7.30    /// practice 170922, Saturday, 7.30 am
    // input bst
    // search bst
    // delete bst
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

    void takeInputBST(treeNode *&root, int val)
    {
        treeNode *newNode = new treeNode(val);
        if(root == NULL)
            root = newNode;

        if(val < root -> data)
            takeInputBST(root -> left, val);

        else if(val > root -> data)
            takeInputBST(root -> right, val);
    }

    treeNode* searchBST(treeNode *root, int key)
    {
        if(root == NULL)
            return NULL;

        if(key == root -> data)
        {
            cout<<root -> data;
            return root;
        }

        if(key < root -> data)
        {
            cout<<root -> data << " -> ";
            searchBST(root -> left, key);
        }
        else
        {
            cout<<root -> data << " -> ";
            searchBST(root -> right, key);
        }
    }

    treeNode* getSuccessor(treeNode *root)
    {
        treeNode *curr = root;
        while(curr -> left != NULL)
        {
            curr = curr -> left;
        }
        return curr;
    }

    treeNode* deleteBST(treeNode *root, int key)
    {
        if(key < root -> data)
            root -> left = deleteBST(root -> left, key);

        else if(key > root -> data)
            root -> right = deleteBST(root -> right, key);

        else
        {
            if(root -> left == NULL)
            {
                treeNode *tmpNode = root -> right;
                delete root;
                return tmpNode;
            }
            else if(root -> right == NULL)
            {
                treeNode *tmpNode = root -> left;
                delete root;
                return tmpNode;
            }
            else
            {
                treeNode *successorNode = getSuccessor(root -> right);
                root -> data = successorNode -> data;
                root -> right = deleteBST(root -> right, successorNode -> data);
            }
        }
        return root;
    }



    void printIn(treeNode *root)
    {
        if(root == NULL)
            return;

        printIn(root -> left);
        cout<<root -> data<<" ";
        printIn(root -> right);
    }


    int main() {

        int n;
        cin>>n;

        treeNode *root = NULL;


        while(n-->0)
        {
            int val;
            cin>>val;
            takeInputBST(root, val);
        }

        printIn(root);

        cout<<endl;

        /*
        int val;
        cin>>val;
        cout<<endl;
        if(searchBST(root, val))
            cout<<"\nYES"<<endl;
        else
            cout<<"\nNO"<<endl;
        //*/

        /*
        int val;
        cin>>val;
        deleteBST(root, val);

        cout<<endl;
        printIn(root);
        //*/
        /*

        9
        11 5 9 43 34 1 2 7 21

        */











        return 0;
    }
