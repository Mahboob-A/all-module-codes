



        /// my header file for stack
    /*

    #include <bits/stdc++.h>
    using namespace std;

    // make a class for doubly ll
    class Node
    {
    public:
        int val;
        Node *next;
        Node *prev;

        Node(int val)
        {
            this -> val = val;
            next = NULL;
            prev = NULL;
        }
    };

    // make a stack class
    class Stack
    {
        // take two node type pointer head and top
        Node *head, *top;
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

            if (head == NULL)
            {
                head = top = newNode;
                count++;
            }
            else
            {
                top -> next = newNode;
                newNode -> prev = top;
                top = newNode;
                count++;
            }
        }

        // pop
        int pop()
        {
            int chk = -1;
            Node *delNode = top;
            // if head == NULL
            if (head == NULL)
            {
                cout<<"Underflow || No elements in the stack"<<endl;
                return chk;
            }

            // if head == top i.e one element
            if (top == head)
            {
                head = top = NULL;
            }
            else   // if more than one element
            {
                top = delNode -> prev;
                top -> next = NULL;
            }

            chk = delNode -> val;
            delete delNode;
            count--;
            return chk;

        }



        // size
        int size()
        {
            return count;
        }

        // is_empty
        bool empty()
        {
            if (head == NULL)
                return true;
            else
                return false;
        }

        // top element
        int Top()
        {
            int chk = -1;
            if (head == NULL)
            {
                cout<<"Underflow || No elements in the stack"<<endl;
                chk = -1;
            }
            else
            {
               chk = top -> val;
            }

            return chk;
        }

    };
    */


    /// only code without comment


    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
    public:
        int val;
        Node *next;
        Node *prev;

        Node(int val)
        {
            this -> val = val;
            next = NULL;
            prev = NULL;
        }

    };


    class Stack
    {
        Node *head, *top;
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



























