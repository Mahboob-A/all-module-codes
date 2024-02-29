
    // node name as sNode as in the header file of queue, class Node has been used to avoid redefinition
     // 030922, Saturday, 07.30 am
    #include <bits/stdc++.h>
    using namespace std;
    template <typename T>
    class sNode
    {
    public:
        T val;
        sNode *next;
        sNode *prev;


        sNode(T val)
        {
            this -> val = val;
            this -> next = NULL;
            this -> prev = NULL;
        }
    };

    template <typename S>
    class Stack
    {
        sNode<S>*head;
        sNode<S>*top;
        sNode<S>*mid;
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
            sNode <S> *newNode = new sNode<S>(val);
            if(head == NULL)
            {
                head = top = mid = newNode;
            }
            else
            {
                top -> next = newNode;
                newNode -> prev = top;
                top = newNode;
            }
            count++;
            if(count%2 == 0)
            {
                mid = mid -> next;
            }
        }

        // pop
        S pop()
        {
            sNode <S> *delNode = top;
            S retrnVal;
            if(head == NULL)
            {
                cout<<"Stack Underflow"<<endl;
                return retrnVal;
            }
            if(head == top)
            {
                head = top = mid = NULL;
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
            if(head != NULL)
                return false;
            else
                return true;
        }

        // Top
        S Top()
        {
            S retrnVal;
            if(head == NULL)
            {
                cout<<"Stack Underflow"<<endl;
            }
            else
            {
                retrnVal = top -> val;
            }
            return retrnVal;
        }

        // mid
        S Mid()
        {
            S retrnVal;
            if(head != NULL)
            {
                retrnVal = mid -> val;
            }
            else
            {
                cout<<"Stack Underflow"<<endl;
            }
            return retrnVal;
        }


    };

