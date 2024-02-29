

// stack 201222, Tuesday, 06.00 pm

    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
    public:
        int data;
        Node *next;
        Node *prev;


        Node(int data)
        {
            this -> data = data;
            this -> next = NULL;
            this -> prev = NULL;
        }
    };


    class Stack
    {
    public:
        Node *head;
        Node *top;
        Node *mid;
        int count;

        Stack()
        {
            head = NULL;
            top = NULL;
            mid = NULL;
            count = 0;
        }


        void push(int val)
        {
            Node *newNode = new Node(val);
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
            if(count %2 == 0)
                mid = mid -> next;
        }

        int pop()
        {
            int returnVal = -1;
            Node *delNode = top;

            if(head == NULL)
            {
                cout<<"Underflow"<<endl;
                return;
            }
            if(head == top)
            {
                head = top = mid = NULL;
                count--;
                return;
            }

            top = delNode -> prev;
            top -> next = NULL;
            returnVal = delNode -> data;
            count--;
            if(count%2 != 0)
                mid = mid -> prev;
            return returnVal;
        }

        bool empty()
        {
            if(head == NULL && top == NULL)
                return true;
            else
                return false;
        }

        int size()
        {
            return count;
        }



    };


    int main () {



    return 0;
    }
