


    //201222, Tuesday, 08.00 am


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

    void take_input_2(Node *&root)
    {
        int val;
        cin >> val;
        queue<Node *> q;
        root = new Node(val);
        q.push(root);
        while(!q.empty())
        {
                Node *currNode = q.front();
                q.pop();
                int leftVal, rightVal;
                Node *leftChild = NULL;
                Node *rightChild = NULL;
                cin >> leftVal >> rightVal;
                if(leftVal != -1)
                        leftChild = new Node(leftVal);
                if(rightVal != -1)
                        rightChild = new Node(rightVal);

                currNode->left = leftChild;
                currNode->right = rightChild;

                if(leftChild != NULL)
                        q.push(leftChild);
                if(rightChild != NULL)
                        q.push(rightChild);
        }

    }

    void take_input(Node *&root)
    {
        int val;
        cin>>val;
        root = new Node(val);
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node *currNode = q.front();
            q.pop();
            int leftVal, rightVal;
            Node *leftChild = NULL;
            Node *rightChild = NULL;
            cin>>leftVal>>rightVal;
            if(leftVal != -1)
                leftChild = new Node(leftVal);
            if(rightVal != -1)
                rightChild = new Node(rightVal);

            currNode -> left = leftChild;
            currNode -> right = rightChild;

            if(leftChild != NULL)
                q.push(leftChild);
            if(rightChild != NULL)
                q.push(rightChild);
        }

    }

    bool isPrime(int val)
    {
        if(val <= 1)
            return false;

        for(int i=2; i<val; i++)
        {
            if(val % i == 0)
                return false;
        }
        return true;
    }

    void preorder(Node *root)
    {
        if(root == NULL)
            return;
        bool prime = isPrime(root -> data);
        if(prime)
            cout<<root -> data<<" ";
        preorder(root -> left);
        preorder(root -> right);

    }

    void levelOrderPrint(Node *root)
    {
        if(root == NULL)
            return;

        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            Node *currNode = q.front();
            q.pop();

            if(currNode)
            {
                cout<<currNode -> data << " ";
                if(currNode -> left)
                    q.push(currNode -> left);
                if(currNode -> right)
                    q.push(currNode -> right);
            }
            else
            {
                cout<<endl;
                if(!q.empty())
                    q.push(NULL);
            }

        }

    }

    void printLeafToRootBfs(Node *root)
    {
        if(root == NULL)
            return;


        queue<Node *>q;
        stack<Node *>st;
        q.push(root);
        q.push(NULL);
        st.push(root);
        while(!q.empty())
        {
            Node *currNode = q.front();
            q.pop();
            if(currNode)
            {
                if(currNode -> right)
                {
                    q.push(currNode -> right);
                    st.push(currNode -> right);
                }

                if(currNode -> left)
                {
                    q.push(currNode -> left);
                    st.push(currNode -> left);
                }


            }
            else
            {
                if(!q.empty())
                    q.push(NULL);
                    st.push(NULL);
            }


            //st.push(currNode);
            //st.push(NULL);

        }
        while(!st.empty())
        {
            Node *topNode = st.top();
            st.pop();
            if(topNode)
                cout<<topNode -> data<< " ";
            else
                cout<<endl;

        }

    }

    void sumOfAllLevel(Node *root)
    {
        if(root == NULL)
            return;

        queue<Node *>q;
        q.push(root);
        q.push(NULL);
        int level = 1;

        while(!q.empty())
        {
            Node *currNode = q.front();
            double numOfNodes = 0;
            double sum = 0;
            while(currNode != NULL)
            {
                sum += currNode -> data;
                numOfNodes++;
                if(currNode -> left)
                    q.push(currNode -> left);

                if(currNode -> right)
                    q.push(currNode -> right);

                q.pop();
                currNode = q.front();

            }

            q.pop();
            cout<<"Sum of level " <<level<< ": "<< sum / numOfNodes << endl;
            if(!q.empty())
            {
                q.push(NULL);
                level++;
            }

        }


    }


/*
1
       2 3
       4 -1 5 6
       -1 8 -1 -1 -1 7
       -1 -1 -1 -1
*/

    int main () {

        Node *root = NULL;


        take_input(root);
        preorder(root);
        cout<<endl;
        levelOrderPrint(root);
        cout<<endl<<endl;
        printLeafToRootBfs(root);
        cout<<endl;
        sumOfAllLevel(root);

        return 0;
    }
