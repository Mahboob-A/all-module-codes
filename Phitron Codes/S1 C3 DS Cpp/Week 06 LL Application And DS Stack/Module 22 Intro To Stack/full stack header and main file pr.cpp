


            /// 230822, Tuesday, 04.10 pm


    // practice of stack


    /// header file

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
        int peak()
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





    /// main file




    #include <bits/stdc++.h>
    #include"mystack.h"
    using namespace std;


    int main () {

        Stack st;
        st.push(1);
        st.push(2);
        st.push(3);


        /*

        while(!st.empty())
        {
            cout<<"The popped element is: "<<st.pop()<<endl;
        }
        */


        /// *** bug alert ***
        // seek support
        // this below if check is popping the top element while checking if st.pop() != -1
        if (st.pop() != -1) cout<<"The popped element is: "<<st.pop()<<endl;




        //cout<<st.pop()<<endl;
        if (st.peak() != -1) cout<<"The top element is: "<<st.peak()<<endl;
        cout<<"The size of the stack is: "<<st.size()<<endl;
        if (!st.empty()) cout<<"The node is not empty"<<endl;
        else cout<<"The stack is empty"<<endl;



        return 0;
    }
