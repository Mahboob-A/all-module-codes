


    // tree input and print
    // 01022023, Monday, 08.00 am
    // Phitron, algo, gt, week 03

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

    void takeInput(Node *&head)
    {
        int val;
        cin>>val;
        head = new Node(val);

        queue<Node*>q;

        q.push(head);

        while(!q.empty())
        {
            Node* frontNode = q.front();
            q.pop();

            int leftVal, rightVal;
            Node* leftNode = NULL, *rightNode = NULL;

            cin>>leftVal>>rightVal;

            if(leftVal != -1)
            {
                leftNode = new Node(leftVal);
                frontNode -> left = leftNode;
            }

            if(rightVal != -1)
            {
                rightNode = new Node(rightVal);
                frontNode -> right = rightNode;
            }

            if(leftNode)
                q.push(leftNode);
            if(rightNode)
                q.push(rightNode);

        }

    }

    void inorder(Node *head)
    {
        if(head == NULL)
            return;
        inorder(head -> left);
        cout<< head -> data << " ";
        inorder(head -> right);
    }



    int main () {

        Node *head = NULL;
        takeInput(head);
        inorder(head);




    return 0;
    }
