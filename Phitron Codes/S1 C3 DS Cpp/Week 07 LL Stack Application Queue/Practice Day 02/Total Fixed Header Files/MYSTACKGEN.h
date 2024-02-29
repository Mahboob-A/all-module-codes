



    // node name as sNode as in the header file of queue, class Node has been used to avoid redefinition
    #include <bits/stdc++.h>
    //#include"MYDLL.h"  // including doubly ll header file
    using namespace std;

    template <typename S>
    class Stack
    {
        dNode<S>*head;
        dNode<S>*top;
        dNode<S>*mid;
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
            dNode <S> *newNode = new dNode<S>(val);
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
            dNode <S> *delNode = top;
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

