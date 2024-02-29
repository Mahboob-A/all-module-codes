


            /// 23-2 Impltion of Stack with template p 2
            // 240822, 05.00 pm

    /// making the int stack into generic stack using template
    #include <bits/stdc++.h>
    using namespace std;

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


    template <typename S> class Stack
    {
        Node <S> *head, *top;
        int count = 0;

    public:
        Stack()
        {
            head = NULL;
            top = NULL;
        }

        // push
        void push(int val)
        {
            Node *newNode = new Node(val);

            if (head = NULL)
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
        int pop()
        {
            int retrnVal = -1;
            Node *delNode = top;
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
        int Top()
        {
            int retrnVal;
            if (head == NULL)
            {
                cout<<"Underflow || NO element in the stack"<<endl;
                retrnVal = -1;
            }
            else
            {
                retrnVal = top -> val;
            }

            return retrnVal;
        }







































    };
