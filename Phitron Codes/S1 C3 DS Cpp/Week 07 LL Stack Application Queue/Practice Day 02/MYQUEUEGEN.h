


        /// MYQUEUEGEN.h Queue generic header file
        // 030922, Saturday, 07.00 am
    #include <bits/stdc++.h>
    using namespace std;

    template <typename T>
    class Node
    {
    public:
        T val;
        Node *next;

        Node(T val)
        {
            this -> val = val;
            this -> next = NULL;
        }
    };

    template <typename Q>
    class Queue
    {
        Node <Q> *front;
        Node <Q> *rear;
        int count = 0;

    public:
        Queue()
        {
            front = NULL;
            rear = NULL;
        }

        // push
        void push(Q val)
        {
            Node <Q> *newNode = new Node<Q>(val);
            if(front == NULL && rear == NULL)
            {
                front = rear = newNode;
            }
            else
            {
                rear -> next = newNode;
                rear = newNode;
            }
            count++;
        }

        // pop
        Q pop()
        {
            Node<Q> *delNode = front;
            Q retrnVal;
            if(front == NULL && rear == NULL)
            {
                cout<<"Queue Underflow pop"<<endl;
            }
            else
            {
                front = front -> next;
                if(front == NULL)
                {
                    rear = NULL;
                }
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

        // Front
        Q Front()
        {
            Q retrnVal;
            if(front != NULL)
            {
                retrnVal = front -> val;
                return retrnVal;
            }
            else
            {
                cout<<"Queue Underflow Front"<<endl;
                return retrnVal;
            }
        }

        // Back
        Q Back()
        {
            Q retrnVal;
            if(rear != NULL)
            {
                retrnVal = rear -> val;
                return retrnVal;
            }
            else
            {
                cout<<"Queue Underflow Back"<<endl;
                return retrnVal;
            }
        }

        // empty
        bool empty()
        {
            if(front != NULL && rear != NULL)
                return false;
            else
                return true;
        }

        // display
        void display()
        {
            Node<Q>*tmp = front;
            if(front == NULL)
            {
                cout<<"Queue Underflow Display"<<endl;
            }
            else
            {
                while(tmp != NULL)
                {
                    cout<<tmp->val;
                    if(tmp -> next != NULL)
                    {
                        cout<<" -> ";
                    }
                    tmp = tmp -> next;
                }
            }


        }


    };


