


                /// 30 2 BT Implementation P2 PrintTree
                // 090922, Friday, 11.00 am



    /// Module 30 - 1: Binary Tree Implementation Part 01: Formation :
    #include <bits/stdc++.h>
    using namespace std;

    // class for doubly linked list
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

    // prototyping the functions
    void printTree(treeNode *root, int level);
     void spacePrint(int level);
     void printTree(treeNode *root, int level);


    /// Mod 30 - 2
    // a function to print the tree
    // here the 0th index of the pointer array is being taken as the root of the function and taking the level of the root
    void printTree(treeNode *root, int level)
    {
        if(root == NULL)    // base case if tree is empty
        {
            return;
        }

        if(root -> leftChild == NULL && root -> rightChild == NULL)  // if the node is leaf node
        {
            cout<<root -> data<<endl;
            return;
        }
        else
        {
            cout<<endl;
            spacePrint(level);
            cout<<"Root: "<<root -> data<<endl;
        }

        if(root -> leftChild != NULL)
        {
            spacePrint(level);
            cout<<"Left: ";
            printTree(root -> leftChild, level+1);
        }

        if(root -> rightChild != NULL)
        {
            spacePrint(level);
            cout<<"Right: ";
            printTree(root -> rightChild, level+1);
        }
    }

    void spacePrint(int level)
    {
        for(int i=0; i<level; i++)
        {
            cout<<"   ";
        }
    }

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


    int main() {

        // n is representing the number of nodes in the list
        int n;
        cin>>n;

        // creating a treeNode type pointer array to store the values
        // as the array is the treeNode(class type) pointer array, hence it has access to all the members of the calss
        treeNode *allNodes[n];

        // making all the indexes -1 as -1 will indicate the null values in the nodes of the tree
        for(int i=0; i<n; i++)
        {
            allNodes[i] = new treeNode(-1);
        }


        // taking input of n nodes using for loop
        for(int i=0; i<n; i++)
        {
            // taking the root as value, leftChild as left and rightChild as right
            int value, left, right;
            cin>>value>>left>>right;

            // putting the value as the data part of the node
            allNodes[i] -> data = value;

            if(left > n-1 || right > n-1)
            {
                cout<<"Invalid Index"<<endl;
                break;
            }

            // if left is not -1 then it is another node, then putting it in the leftChild pointer section of the node
            if(left != -1)
            {
                allNodes[i]->leftChild = allNodes[left];
            }
            // and if the right is not -1 then it is another node, then putting the node in the rightChild section of the node
            if(right != -1)
            {
                allNodes[i] -> rightChild = allNodes[right];
            }
        }

        // a function to print the tree, passing the root of the tree, and level of root using call by value
        printTree(allNodes[0], 0);




        return 0;
    }

