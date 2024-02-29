


                /// 31-3 Construct a Binary Tree using Preorder and Inorder Traversal
                // 110922, Sunday, 12.00 pm




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
    treeNode* buildTreePreIn(int *preOrder, int *inOrder, int start, int end);
    int searchInorder(int *inOrder, int currentVal, int start, int end);


    int searchInorder(int *inOrder, int currentVal, int start, int end)
    {
        for(int i=start; i<=end; i++)
        {
            if(inOrder[i] == currentVal)
            {
                return i;
            }
        }
        return -1;
    }

    treeNode* buildTreePreIn(int *preOrder, int *inOrder, int start, int end)
    {
        // step 01: take a static variable to access the index of preOrder array
        static int index = 0;

        // step 02: now take the value at index'th position of preOrder array in a variable and incriment the index
        int currentVal = preOrder[index];
        index++;

        // step 03: now we need to create the nodes as with the nodes we will build the tree
        // create node with the value accessed from the preOrder array i.e with the currentVal variable
        treeNode *newNode = new treeNode(currentVal);

        // step 04: check if start and end are equal, if equal then there is only one node, hence return the newNode to
        // the before recursive call
        if(start == end)
        {
            return newNode;
        }

        // step 05: make a function to find the position of the currentVal in the inOrder array within the range of start and end
        // function is in outside
        // step 06: now we need to find the position of the currentVal in the inOrder array. Receive the positon in a variable.
        // now everything from start to pos-1 will be at the left side of the inOrder array of currentVal and everything
        // from pos+1 to end will be at the right side of the currentVal in the inOrder array

        int pos = searchInorder(inOrder, currentVal, start, end);

        // step 06: As we have found the position of the currentVal in the inOrder array,
        // we need to call the recursive calls now. Call recursive calls for left of currentVal and right of currentVal and
        // put the returned value in the leftChild of newNode and rightChild of newNode respectively.

        newNode -> leftChild = buildTreePreIn(preOrder, inOrder, start, pos-1);
        newNode -> rightChild = buildTreePreIn(preOrder, inOrder, pos+1, end);


        // step 07: now simply return the newNode as the root of the tree
        return newNode;


    }


    // inorder traversal
    void inorderTraversal(treeNode *root)
    {
        if(root == NULL) return;

        inorderTraversal(root -> leftChild);

        cout<<root -> data << " ";

        inorderTraversal(root -> rightChild);
    }



    int main () {


        // step 01: take n sized two array (can also be done with a string) and take input the preOrder and Inorder values
        int n;
        cin>>n;

        int preOrder[n], inOrder[n];

        for(int i=0; i<n; i++)
            cin>>preOrder[i];

        for(int i=0; i<n; i++)
            cin>>inOrder[i];


        // step 02: now call the function to build the tree, as the root will be returned, hence receive it in a treeNode type node
        // pass the two array and the starting point and ending point of the array i.e 0 as starting point and
        // n-1 as the ending point
        treeNode *root = buildTreePreIn(preOrder, inOrder, 0, n-1);

        // printing
        // step 03: as in the step 02, the root of the tree has been received, now print it with any traversal

        cout<<endl<<"The tree after creation using preOrder and inOrder Traversal is -"
        <<" (printing in in-order traversal): ";
        inorderTraversal(root);

        cout<<endl;

        /*
        Input:

        9
        0 1 3 4 2 5 7 8 6
        3 1 4 0 7 5 8 2 6



        i. size
        ii. preOrder
        iii. inOrder

        */


        return 0;
    }





