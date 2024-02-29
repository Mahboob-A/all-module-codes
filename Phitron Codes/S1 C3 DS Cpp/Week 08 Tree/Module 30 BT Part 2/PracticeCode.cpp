


            /// Practice Code: 100922, Saturday, 01.00 pm



    /// Make a Binary Tree, input with pointer array, make Root, Left and Right formated inorder output and all three traversal
    // and store the result in a string.
    #include <bits/stdc++.h>
    using namespace std;

    class treeNode {
    public:
        int data;
        treeNode *leftChild;
        treeNode *rightChild;

        treeNode(int data)
        {
            this -> data = data;
            this -> leftChild = NULL;
            this -> rightChild = NULL;
        }
    };

    void printTreeInFormated(treeNode *root, int level);
    void spacePrint(int level);
    void preOrderTraversal(treeNode *root, string s);


    void printTreeInFormated(treeNode *root, int level)
    {
        if(root == NULL) return;

        if(root -> leftChild == NULL && root -> rightChild == NULL)
        {
            cout<<root -> data<<endl;
            return;
        }
        else
        {
            cout<<endl;
            spacePrint(level);
            cout<<"Root: "<<root -> data<<endl;;
        }

        if(root -> leftChild != NULL)
        {
            spacePrint(level);
            cout<<"Left: ";
            printTreeInFormated(root -> leftChild, level+1);
        }

        if(root -> rightChild != NULL)
        {
            spacePrint(level);
            cout<<"Right: ";
            printTreeInFormated(root -> rightChild, level+1);
        }
    }

    void spacePrint(int level)
    {
        for(int i=0; i<level; i++)
            cout<<"   ";
    }


    int main() {


        int n;
        cin>>n;

        treeNode *allNodes[n];

        for(int i=0; i<n; i++)
        {
            allNodes[i] = new treeNode(-1);
        }

        for(int i=0; i<n; i++)
        {
            int value, left, right;
            cin>>value>>left>>right;

            allNodes[i] -> data = value;

            if(left != -1)
            {
                allNodes[i] -> leftChild = allNodes[left];
            }

            if(right != -1)
            {
                allNodes[i] -> rightChild = allNodes[right];
            }
        }


        printTreeInFormated(allNodes[0], 0);

        string preOrder = "";
        string inOrder = "";
        string postOrder = "";

        /*
        preOrderTraversal(allNodes[0], preOrder);
        inOrderTraversal(allNodes[0], inOrder);
        postOrderTraversal(allNodes[0], postOrder);
        */

        cout<<"The pre-order traversal is: "<<preOrder<<endl<<endl;
        cout<<"The in-order traversal is: "<<inOrder<<endl<<endl;
        cout<<"The post-order traversal is: "<<postOrder<<endl<<endl;






        /*
        9
        0 1 2
        1 3 4
        2 5 6
        3 -1 -1
        4 -1 -1
        5 6 7
        6 -1 -1
        7 -1 -1
        8 -1 -1
        */













        return 0;
    }
