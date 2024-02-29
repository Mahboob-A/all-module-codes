


            /// 30 1 BT Implementation P1 Formation
            // 090922, Friday, 07.30 am


            // formation of binary tree using class object type pointer array





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


    // a function to print the tree
    // here the 0th index of the pointer array is being taken as the root of the function and taking the level of the root
    void printTree(treeNode *root, int level)
    {

    }




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
            allNodes[i] -> data = -1;
        }


        // taking input of n nodes using for loop
        for(int i=0; i<n; i++)
        {
            // taking the root as value, leftChild as left and rightChild as right
            int value, left, right;
            cin>>value>>left>>right;

            // putting the value as the data part of the node
            allNodes[i] -> data = value;

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
