


    #include <bits/stdc++.h>
    using namespace std;

    // stack in dynamic way
    // LL Node
    template <typename T>
    class Node
    {
    public:
        T val;
        Node *next;
        Node *prev;

        Node (T  val)
        {
            this -> val = val;
            next = NULL;
            prev = NULL;
        }
    };

    // stack making
    template <typename S>
    class Stack
    {

    public:

            Node <S> *head;
            Node <S> *top;
            int count = 0;
            // null constructor
            Stack()
            {
                head = NULL;
                top = NULL;
            }

            // push
            void push(S val)
            {
                Node <S> *newNode = new Node<S>(val);


                if (head == NULL)
                {
                    head = top = newNode;
                }
                else
                {
                    top -> next = newNode;
                    newNode -> prev = top;
                    top = newNode;
                }
                count++;
            }


            // pop
            S pop()
            {
                Node <S> *delNode = top;
                S retrnVal;
                if(head == NULL)
                {
                    cout<<"Stack Underflow || No values in the Stack"<<endl;
                }
                else if (head == top)
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

            // coutnt
            int size()
            {
                return count;
            }

            // empty
            bool empty()
            {
                if (head == NULL) return true;
                else return false;
            }

            // Top
            S Top()
            {
                S retrnVal;
                if (head == NULL)
                {
                    cout<<"Stack Underflow || No Nodes in the Stack"<<endl;
                }
                else
                {
                    retrnVal = top -> val;
                }

                return retrnVal;
            }



    };


