
    // 27-1 Balanced Parenthesis | Part-1 (Theory) Part 2 (Code) (Lab Class 07)
    // Generic Stack
    #include <bits/stdc++.h>
    using namespace std;

    template <typename T>
    class Node
    {
    public:
        T val;
        Node *next;
        Node *prev;

        Node(T val)
        {
            this -> val = val;
            this -> next = NULL;
            this -> prev = NULL;
        }
    };

    template <typename S>
    class Stack
    {
        Node <S> *head;
        Node <S> *top;
        Node <S> *mid;
        int count = 0;
    public:

        Stack()
        {
            head = NULL;
            top = NULL;
            mid = NULL;
        }

        // push
        void push(S val)
        {
            Node <S> *newNode = new Node <S> (val);
            if(head == NULL)
            {
                head = top = mid = newNode;
                count++;
                return;
            }
            top -> next = newNode;
            newNode -> prev = top;
            top = newNode;
            count++;
            if(count%2 == 0)
            {
                mid = mid -> next;
            }
        }

        // pop
        S pop()
        {
            Node <S> *delNode = top;
            S retrnVal;
            if(head == NULL)
            {
                cout<<"Stack Underflow"<<endl;
                return retrnVal;
            }
            if(head == top)
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
            if(count%2 != 0)
            {
                mid = mid -> prev;
            }
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
            if(head == NULL)
                return true;
            else
                return false;
        }

        // Top
        S Top()
        {
            if(head == NULL)
            {
                cout<<"Stack Underflow"<<endl;
            }
            else
            {
                return top -> val;
            }
        }
    };




