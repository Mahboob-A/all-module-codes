




                /// 31-4 Boundary Traversal of a Binary Tree
                // 1109022, Sunday, 03.00 pm

                // see notebook for detailed explanation

    #include <bits/stdc++.h>
    using namespace std;

    class treeNode
    {
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
    // for boundary traversal, we need total four functions

    void printLeftNonLeaves(treeNode *root)
    {
        if(root == NULL) return;

        // if any of the condition is true in if or in else if, then the node is a parent node hence print
        // its value and again call the same function recursively to check if it has any more nodes in
        // its leftChild or in rightChild respectively
        if(root -> leftChild != NULL)
        {
            cout<< root -> data << " ";
            printLeftNonLeaves(root -> leftChild);
        }
        else if( root -> rightChild != NULL)
        {
            cout<< root -> data << " ";
            printLeftNonLeaves(root -> rightChild);
        }
    }

    void printLeaves(treeNode *root)
    {
        if(root == NULL) return;

        // if the both leftChild and rightChild section of the node is null then it does not have any node
        // in their left or right that is it is a leaf node and print it
        if(root -> leftChild == NULL && root -> rightChild == NULL)
        {
            cout<< root -> data << " ";
            return;
        }

        // reaching towards the last node recursively
        printLeaves(root -> leftChild);
        printLeaves(root -> rightChild);
    }


    void printRightNonLeaves(treeNode *root)
    {
        if(root == NULL) return;

        // if any of the condition is true in if or in else if, then the node is a parent node hence print
        // its value and again call the same function recursively to check if it has any more nodes in
        // its leftChild or in rightChild respectively
        if(root -> rightChild != NULL)
        {
            cout<< root -> data << " ";
            printRightNonLeaves(root -> rightChild);
        }
        else if(root -> leftChild)  // equavalent to (root -> leftChild != NULL)
        {
            cout<< root -> data << " ";
            printRightNonLeaves(root -> leftChild);
        }
    }

    // main function for boundary traversal
    void boundaryTraversal(treeNode *root)
    {
        if(root == NULL) return;

        cout<< root -> data << " ";

        // Function to print Left Bound Non Leaves Node
        printLeftNonLeaves(root -> leftChild);

        // Function to print the LB leaf Nodes
        printLeaves(root -> leftChild);

        // Function to print Right Bound leaf Nodes
        printLeaves(root -> rightChild);

        // Function to print RB Non Leaves Nodes
        printRightNonLeaves(root -> rightChild);


    }


    int main () {

        int n;
        cin>>n;

        treeNode *allNodes[n];

        for(int i=0; i<n; i++)
        {
            allNodes[i] = new treeNode(-1);
        }

        // taking input of the tree
        for(int i=0; i<n; i++)
        {
            int value, left, right;
            cin>>value>>left>>right;

            allNodes[i] -> data = value;

            if(left > n-1 || right > n-1)
            {
                cout<<"Invalid Index"<<endl;
                break;
            }

            if(left != -1)
            {
                allNodes[i]->leftChild = allNodes[left];
            }

            if(right != -1)
            {
                allNodes[i] -> rightChild = allNodes[right];
            }
        }

        // calling the function
        boundaryTraversal(allNodes[0]);

        /*
        Input:

        9
        0 1 2
        1 3 4
        2 5 6
        3 -1 -1
        4 -1 -1
        5 7 8
        6 -1 -1
        7 -1 -1
        8 -1 -1

        */

        return 0;
    }






