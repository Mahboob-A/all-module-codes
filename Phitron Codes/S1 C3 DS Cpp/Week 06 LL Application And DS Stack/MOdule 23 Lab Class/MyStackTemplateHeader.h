

        /// Template Code Template File


            /// 23-2 Impltion of Stack with template p 2
            // 240822, 05.00 pm

    /// making the int stack into generic stack using template
    #include <bits/stdc++.h>
    using namespace std;

    // marking the data type as N of Node class
    // all the data received in class with be of N
    template <typename N> class Node
    {
    public:
        N val;
        Node *next;
        Node *prev;

        Node(N val)
        {
            this -> val = val;
            next = NULL;
            prev = NULL;
        }

    };

    // now again  marking all the data that will be received in the
    // stack will be of S. So, every data declaration in Stack template
    // will be of S data type
    template <typename S> class Stack
    {
        Node <S> *head;
        Node <S> *top;
        int count = 0;

    public:
        Stack()
        {
            head = NULL;
            top = NULL;
        }

        // push
        void push(S val)
        {
            Node <S> *newNode = new Node <S> (val);

            if (head == NULL)
            {
                head = top = newNode;
                count++;
                return;
            }

            top -> next = newNode;
            newNode -> prev = top;
            top = newNode;
            count++;
        }

        // pop
        S pop()
        {
            Node <S> *delNode;
            delNode = top;
            S retrnVal;
            if (head == NULL)
            {
                cout<<"Underflow || No element in the stack"<<endl;
                return retrnVal;
            }

            if (top == head)
            {
                head = top = NULL;
            }
            else
            {
                top = delNode -> prev;
                top -> next = NULL;
            }

            retrnVal = delNode -> val;
            delete delNode;
            count--;
            return retrnVal;

        }

        // size
        int size()
        {
            return count;
        }

        // empty
        bool empty()
        {
            if (head == NULL)
                return true;
            else
                return false;
        }

        // Top
        S Top()
        {
            S retrnVal;
            if (head == NULL)
            {
                cout<<"Underflow || NO element in the stack"<<endl;
            }
            else
            {
                retrnVal = top -> val;
            }

            return retrnVal;
        }


    };

