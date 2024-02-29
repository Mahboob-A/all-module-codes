


            /// 36-3 Search a Node in BST and Print SearchPath
            // 150922, Thursday(100922, Saturday)
            // 03.30 pm



    // B - B: Implementation Of BST
    // 150922, Thursday(100922, Saturday)
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

    // 36 - 2 - taking input in BST
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


    // 36 - 3 - Searching a value in BST and prinitng search path
    treeNode* searchInBST(treeNode *root, int key, string &storePath)
    {

        // base case
        if(root == NULL)  // if NULL is returned that means root reached to null and the value value is not found
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

        // we can return root from here also
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

        cout<<"Input "<<n<<" value in the tree: "<<endl;
        while(n-->0)
        {
            int val;
            cin>>val;

            root = takeInputBST(root, val);
        }


        int key;
        string searchPath;

        cout<<"Input the value to search in the tree: "<<endl;
        cin>>key;

        if(searchInBST(root, key, searchPath) != NULL)
            cout<<"\nThe value is present in the tree."<<endl;
        else
            cout<<"\nThe value is not present in the tree."<<endl;


        cout<<"\n\nSarch Path: "<<searchPath<<endl;

        /*
        input

        9
        11 5 9 43 34 1 2 7 21

        */

        inorder(root);





        return 0;
    }
