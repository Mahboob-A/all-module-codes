


            /// QS 3 Print Each Level In Separate Line
            // 110922, 9.30 am


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
    void leverOrderTraversal(treeNode *root, string &s);
    void levelOrderTraversalExample2(treeNode *root, string &s);


    /// Module 31.2 Level Order Traversal
    void leverOrderTraversal(treeNode *root, string &s)
    {
        // parimary case
        if(root == NULL) return;

        // step 01: take a node pointer queue
        queue<treeNode*>q;

        // step 02: push root and null in the queue
        q.push(root);
        q.push(NULL);

        // step 03: take a while loop until the queue is empty
        while(!q.empty())
        {
            // step 04: take the front node in a tmp node and pop the front
            treeNode *tmp = q.front();
            q.pop();

            // step 05: check if tmp is not null, then print data of tmp or store it in string
            if(tmp != NULL)
            {
                cout<<tmp -> data <<" ";
                s += to_string(tmp -> data);

                // step 06: check both of child of tmp, if not null, then push onto the queue
                if(tmp -> leftChild != NULL)
                {
                    q.push(tmp -> leftChild);
                }

                if(tmp -> rightChild != NULL)
                {
                    q.push(tmp -> rightChild);
                }
            }
            else
            {
                // step 07: put a new line as here in else part, tmp is null.
                cout<<endl;

                // step 08: check if queue is not empty then push null
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }

        }
    }

    /// level order traversal another function example

    void levelOrderTraversalExample2(treeNode *root, string &s)
    {

        if(root == NULL)
        {
            return;
        }

        queue<treeNode*>q;

        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            treeNode *tmp = q.front();
            q.pop();

            if(tmp == NULL)
            {
                cout<<endl;
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                cout<<tmp -> data <<" ";
                s += to_string(tmp -> data);

                if(tmp -> leftChild != NULL)
                {
                    q.push(tmp -> leftChild);
                }
                if(tmp -> rightChild)
                {
                    q.push(tmp -> rightChild);
                }
            }

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

    /// Module 30 - 1: Binary Tree Implementation Part 01: Formation:
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


        // level order traversal, also saving the result in a string
        string levelOrderString = "";

        //leverOrderTraversal(allNodes[0], levelOrderString);

        levelOrderTraversalExample2(allNodes[0], levelOrderString);

        cout<<"\nThe level order string is: "<<levelOrderString<<endl;



        return 0;
    }



