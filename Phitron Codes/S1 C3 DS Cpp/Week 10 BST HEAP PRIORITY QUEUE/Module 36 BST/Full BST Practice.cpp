


            /// Full BST Practice
            // 150922, Thursday, 10.00 pm




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

    // 1) Take Input In BST
    void takeInputBST(treeNode *&root, int value)
    {
        treeNode *newNode = new treeNode(value);
        if(root == NULL)
            root = newNode;

        else if(value < root -> data)
            takeInputBST(root -> left, value);

        else
            takeInputBST(root -> right, value);

    }

    // 2) Function To Search In BST
    treeNode* searchInBST(treeNode *root, int key, string &savePath)
    {
        if(root == NULL)
            return NULL;

        if(root -> data == key)
        {
            cout<<root -> data;
            savePath += to_string(root -> data);
            return root;
        }

        else if(key < root -> data)
        {
            cout<<root -> data << " -> ";
            savePath += to_string(root -> data) + " -> ";
            searchInBST(root -> left, key, savePath);
        }

        else
        {
            cout<<root -> data << " -> ";
            savePath += to_string(root -> data) + " -> ";
            searchInBST(root -> right, key, savePath);
        }
    }

    // 3) Delete Node In BST

    treeNode* getSuccessor(treeNode *root)
    {
        treeNode *curr = root;
        while(curr -> left != NULL)
        {
            curr = curr -> left;
        }
        return curr;
    }


    treeNode* deletionBST(treeNode *root, int key)
    {
        // traversing
        if(key < root -> data)
            root -> left = deletionBST(root -> left, key);

        else if(key > root -> data)
            root -> right = deletionBST(root -> right, key);

        else // valus matched
        {
            // if leaf node and parent node which does not have left child
            if(root -> left == NULL)
            {
                treeNode *tmpNode = root -> right;
                delete root;
                return tmpNode;
            }
            // if parent node and does not have right child
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
                root -> right = deletionBST(root -> right, successorNode -> data);
            }
        }
        return root;
    }



    // in-order print
    void printIn(treeNode *root)
    {
        if(root == NULL)
            return;

        printIn(root -> left);
        cout<<root -> data<< " ";
        printIn(root -> right);
    }

    int main() {

        treeNode *root = NULL;
        int n;
        cin>>n;
        while(n-->0)
        {
            int val;
            cin>>val;
            takeInputBST(root, val);
        }

        printIn(root);
        string path = "";

        int key;
        cout<<endl;
        cout<<"Input value to search: "<<endl;
        cin>>key;



        if(searchInBST(root, key, path) != NULL)
            cout<<"\nThe value is found in the tree. "<<endl;
        else
            cout<<"\nThe value is not found in the tree."<<endl;

        cout<<"\nPath: "<<path<<endl;


        int delVal;
        cout<<"\nInput value to delete: "<<endl;
        cin>>delVal;
        root = deletionBST(root, delVal);

        cout<<endl;
        cout<<"After deletion: "<<endl;
        printIn(root);





        return 0;
    }
