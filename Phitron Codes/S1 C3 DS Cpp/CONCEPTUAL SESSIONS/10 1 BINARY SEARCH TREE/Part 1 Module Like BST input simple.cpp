



    /// conceptual session: 10 - 1: Binary Search Tree
    // 00 - 40 Min: Making of a normal BST input that takes O(n) for searchig a node
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

    // taking input with reference
    void takeInputBST(treNode *&root, int val)
    {
        if(root == NULL)
        {
            root = new treNode(val);
            return;
        }

        if(val < root -> data)
            takeInputBST(root -> left, val);
        else
            takeInputBST(root -> right, val);
    }


    // taking input without root's reference. In this case, root = takeInputBST in main
    /*
    treeNode* takeInputBST(treeNode *root, int val)
    {
        if(root == NULL)
        {
            return root = new treeNode(val);
            // also below correct
            //treeNode *newNode = new treeNode(val);
            //return newNode;


        }

        if(val < root -> data)
            root -> left = takeInputBST(root -> left, val);
        else
            root -> right = takeInputBST(root -> right, val);

        return root;
    }

    */


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

        treNode *root = NULL;

        while(n-->0)
        {
            int val;
            cin>>val;
            takeInputBST(root, val);
        }

        printTreeLevel(root);


        /*

        5
        4 3 1 2 5

        */


        return 0;
    }
