


            /// 22-3 Implementation Of Stack Part 1





        /// 22-3 Implementation Of Stack Part 1
    // 230822, Tuesday, 08.00 am
    #include <bits/stdc++.h>
    using namespace std;

    // make a class type node of doubly linked list
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

    // make a class type stack and create all the operations in the class
    class Stack
    {
        Node *head, *top;

        // count variable to count the push and pop to get the size of the stack without any further loop
        int count = 0;



    public:
        // constructor to make head and top NULL
        Stack()
        {
            head = NULL;
            top = NULL;
        }


        /// main operations
        // push()
        // pop()
        // is_empty()
        // size()
        // peak() -> to see the top element in a stack


        // function to push() in Stack
        void push(int val)
        {
            // step 01: create a newNode
            Node *newNode = new Node(val);

            // step 02: check if head and top are null then it is the first node, hence, put head = top = newNode, head and top at the same position
            if (head == NULL)
            {
                head = top = newNode;
                return;
            }

            top ->  next = newNode;
            newNode -> prev = top;
            top = newNode;  // or top = top -> next;
        }

    };


    int main() {















        return 0;
    }
