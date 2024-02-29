


    #include <bits/stdc++.h>
    using namespace std;

    // make a class for doubly ll
    class Node
    {
    public:
        int val;
        Node *next;

        Node(int val)
        {
            this -> val = val;
            next = NULL;
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
                top = newNode;
                count++;
            }
        }

        // pop
        int pop()
        {
            int chk = -1;
            Node *delNode = top;
            Node *tmp = head;
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
                while (tmp -> next -> next != NULL)
                {
                    tmp = tmp -> next;
                }
                delNode = tmp -> next;
                top = tmp;
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



    /// main part



    /// Module 22.5 Practice Day 01
    // week 06 (7 days behind from current module)


    #include <bits/stdc++.h>
    #include"Stack.h"
    using namespace std;


    // insert at tail
    void insertAtTail(Node *&head, char ch)
    {
        Node *newNode = new Node(ch);
        Node *tmp = head;
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        while (tmp -> next != NULL)
        {
            tmp = tmp -> next;
        }

        tmp -> next = newNode;
    }

    // function to print
    void printList(Node *head)
    {
        Node *tmp = head;
        while(tmp != NULL)
        {
            cout<<tmp->val;
            if (tmp -> next != NULL)
            {
                cout<<" -> ";
            }
            tmp = tmp -> next;
        }
        cout<<endl;
    }

    bool isPalindrome(Node *&head)
    {
        Node *tmp = head;
        Node *tmp2 = head;
        // step 01: declare a Stack type instance
        Stack st;

        // step 02: push all elements of the list in stack
        while (tmp != NULL)
        {
            st.push(tmp -> val);
            tmp = tmp -> next;
        }

        // step 03: iterate the list and check the head elements with top element
        while (tmp2 != NULL)
        {
            // take the top element of the stack
            char topVal = st.peak();

            // pop the top element
            st.pop();

            // compare the popped element with the beginning element i.e head of data != popped element
            if (tmp2 -> val != topVal)
            {
                return false;
            }
            tmp2 = tmp2 -> next;
        }
        return true;
    }

    int main() {

        Node *head = NULL;
        int n;
        cin>>n;
        char ch;
        for (int i=1; i<=n; i++)
        {
            cin>>ch;
            insertAtTail(head, ch);
        }

        if (isPalindrome(head))
            cout<<"The group of characers is a palindrome"<<endl;
        else
            cout<<"The characters are not palindrome"<<endl;

        //printList(head);




        return 0;
    }
