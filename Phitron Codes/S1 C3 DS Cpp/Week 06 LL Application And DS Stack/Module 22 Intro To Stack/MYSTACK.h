



        /// my header file for stack


    // 230822, Tuesday, 10.30 am
    #include <bits/stdc++.h>
    using namespace std;

    // make a class type node of doubly linkded list
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

    // make a clss type stack and create all the operations in the class
    class Stack
    {
        Node *head, *top;

        // count variable to count the push and pop to get the size of the stack without any further loop
        int count = 0;



    public:
        // constrctor to make head and top NULL
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



        /// function to push() in Stack
        void push(int val)
        {
            // step 01: create a newNode
            Node *newNode = new Node(val);

            // step 02: check if head and top are null then it is the first node, hence, put head = top = newNode, head and top at the same position
            // and count++ before return because a new element is inserted
            if (head == NULL)
            {
                head = top = newNode;
                count++;
                return;
            }

            // step 03: if head is not null then it is not first element, hence, put newNode in top -> next (top -> next = newNode)
            // and put top in newNode -> prev (newNode -> prev = top); the link is connected and now make newNode as new top (top = newNode)
            // and as a new element is inserted, count++
            top ->  next = newNode;
            newNode -> prev = top;
            top = newNode;  // or top = top -> next;
            count++;
        }

        /// function to pop element in Stack
        // function type is not void because I wil return the popped element
        int pop()
        {
            // as always top node will be deleted so copy top in delNode
            Node *delNode = top;
            // as we will return the popped element in chk, initialize it with -1 so if Underflow, we can track it in main
            int chk = -1;

            // step 01: check if head is null then there is no nodes i.e no element in the stack
            // No element
            if (head == NULL)
            {
                cout<<"Stack Underflow || No element in the stack"<<endl;
                return chk; // returning -1;
            }

            // step 02: check if it is only one node and if top == head then it is true i.e single element in the stack.
            //  make head and top both NULL
            // one element
            if (top == head)
            {
                head = top = NULL;
            }

            // step 03: if top is at the top of the stack then
            // i) make top to delNode -> prev (top = delNode -> prev)
            // ii) put NULL in new top's next (top -> next = NULL) i.e cut the next connection to the delNode from new down top
            // more than one element
           else
           {
               top = delNode -> prev;
               top -> next = NULL;
           }

           // these processes will be executed for both if and else. If i want to do not write them here, then i have to write them in both if else
           // whichever if or else is true these below code will be executed

           // i) copy delNode -> val in chk;
           chk = delNode -> val;

           // ii) delete delNode
           delete delNode;

           // as an element is popped, count --
           count--;

           // return chk
           return chk;

        }

        /// function to check if the stack is empty or not
        bool is_empty()
        {
            // step 01: if head is null then there is no node i.e no element hence return true else not empty then return false
            if (head == NULL)
                return true;
            else
                return false;
        }

        /// function to get the size of the stack
        int size()
        {
            // step 01: return the count variable as count is taking care of push and pop
            return count;
        }

        /// function to see the top element
        int peak()
        {
            // step 01: if head is NULL then no element in the stack and return
            // if head == NULL, the cout will be printed and a garbage will also be printed for the else part
            // hence take a int chk = -1 and return it in if chk and in else return chk = top -> val and return chk
            int chk = -1;
            if (head == NULL)
            {
                cout<<"Stack Underflow || No element in the Stack"<<endl;
                chk = -1;
            }

            // else take the value of the top -> val in chk and return chk
            else
            {
                chk = top -> val;
            }

            return chk;

        }

    };


    /// only code without comment

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
        bool is_empty()
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


    */









