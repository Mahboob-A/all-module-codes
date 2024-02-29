

// queue 201222, Tuesday, 06.20 pm

     #include <bits/stdc++.h>
     using namespace std;

     class Node
     {
     public:
        int data;
        Node *next;

        Node(int data)
        {
            this -> data = data;
            this -> next = NULL;
        }


     };

     class Queue
     {
     public:
        Node *front;
        Node *rear;
        int count;

        Queue()
        {
            front = NULL;
            rear = NULL;
            count = 0;
        }

        void push(int val)
        {
            Node *newNode = new Node(val);

            if(front == NULL && rear == NULL)
            {
                front = rear = newNode;
                count++;
                return;
            }

            rear -> next = newNode;
            rear = newNode;
            count++;
        }

        int pop()
        {

            if(front == NULL)
            {
                cout<<"Underflow"<<endl;
                return;
            }

            Node *delNode = front;
            front = front -> next;
            if(front == NULL)
                rear = NULL;
            count--;
            int val = delNode -> data;
            delete delNode;
            return val;

        }

        bool empty()
        {
            if(front == NULL && rear == NULL)
                return true;
            else
                return false;
        }

        int Front()
        {
            int val;
            if(front != NULL)
            {
                val = front -> data;
                return val;
            }
            cout<<"Underflow"<<endl;
        }

        int Back()
        {
            if(rear != NULL)
            {
                int val = rear -> data;
                return val;
            }
            cout<<"Underflow"<<endl;
        }


     };


     int main () {



     return 0;
     }
