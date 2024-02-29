


            /// Part 01 Level Order Input
            // 110922, Sunday, 9.30 pm





    /// Binary Tree
    /// 8-1 Binary Tree & Problem solving
    // 110922, Sunday, 07.30 pm

    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
    public:
        int data;
        Node *left;
        Node *right;

        Node(int data)
        {
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
    };

    // inorder traversal
    void printTreeIn(Node *root)
    {
        if(root == NULL) return;

        printTreeIn(root -> left);

        cout<< root -> data << " ";

        printTreeIn(root -> right);

    }





    int main () {


        // level order input
        /*
        Level order input is done with BFS technique, i.e Breadth First Search. In order to do so, we need to
        use a queue. We will first push the root in the queue and then pop it, and while pop it, we will
        again ask what are the left and right child of the root and we will push them again in the queue.
        So, all the nodes might not have children that's why we will make a flag that if the value is -1 then it is NULL
        and we will not push it in the queue.
        After taking the values of the left and right child of the root, we will create two nodes and initialize it with null
        and now we will check, if the left or right that was inputed is not -1, then we will put the value in the nodes and link them.
        */

        int value;
        cin>>value;

        // step 01: create the first root node
        Node *root = new Node(value);

        // step 02: create a queue of Node pointer type and push root in the queue
        queue<Node*>q;
        q.push(root);

        // step 03: run a while loop until queue is not empty and do the following operations
        while(!q.empty())
        {
            // step 01: take the front value/node of the queue in a Node pointer and then pop it
            Node *currentRoot = q.front();
            q.pop();

            // step 02: input the left and right child of the currentRoot
            int leftValue, rightValue;
            cin>>leftValue>>rightValue;

            // step 03: create two new Node type pointer and initialize with NUll
            Node *leftNode = NULL;
            Node *rightNode = NULL;

            // step 04: check if leftValue and rightValue value is not -1, then make a new Node with the value and
            // receive them in respective node pointer
            if(leftValue != -1)
            {
                leftNode = new Node(leftValue);
            }

            if(rightValue != -1)
            {
                rightNode = new Node(rightValue);
            }


            // stepp 05: as the nodes have been created, now make the connection
            currentRoot -> left = leftNode;
            currentRoot -> right = rightNode;

            // step 06: Now, we need to push the children of the root. But, check, if the node is not NULL, if not null, then push
            // the node in the queue
            if(leftNode != NULL)
            {
                q.push(leftNode);
            }

            if(rightNode != NULL)
            {
                q.push(rightNode);
            }
        }

        cout<<"The tree after printing in in-order traversal is: ";
        printTreeIn(root);

       /*
       input:

       1
       2 3
       4 -1 5 6
       -1 8 -1 -1 -1 7
       -1 -1 -1 -1

        */



        /*
        // creation of nodes manually
        Node *root = new Node(1);
        Node *a = new Node(2);
        Node *b = new Node(3);
        Node *c = new Node(4);
        Node *d = new Node(5);
        Node *e = new Node(6);
        Node *f = new Node(8);
        Node *g = new Node(7);

        // linking the nodes

        root -> left = a;
        root -> right = b;

        a -> left = c;
        b -> left = d;
        b -> right = e;

        c -> right = f;

        e -> right = g;

        */



        return 0;
    }




