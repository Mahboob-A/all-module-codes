


            /// LC 45 LB Rev of LL.cpp
            // 180822, Thursday, 12.00 pm


        // code in notebook.

    #include <iostream>
    using namespace std;

    class Node
    {
    public:
        int val;
        Node *next;

        Node(int val)
        {
            this -> val = val;
            this -> next = NULL;
        }
    };


    // function non recursive function to reverse a list
    Node* reverseListNonRecursive(Node *&head)
    {
        if (head == NULL || head -> next == NULL)
        {
            if (head == NULL) cout<<"The list is empty"<<endl;
            return head;
        }

        Node *prev = NULL, *curr = head, *forward = NULL;
        while (curr != NULL)
        {
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;

    }

    // function to reverse a list recursive method 01:
    // step 01: function to reverse recursive call
    void reverseListRecursiveCallFunction(Node *&head,  Node *curr, Node *prev)
    {
        // base case
        if (curr == NULL)
        {
            head = prev;
            return;
        }

        Node *forward = curr -> next;
        reverseListRecursiveCallFunction(head, forward, curr);
        curr -> next = prev;
    }


    // step 02:
    // calling recursive function
    Node* reveseListRecursiveMethod1(Node *&head)
    {
        Node *prev = NULL, curr = head;
        reverseListRecursiveCallFunction(head, curr, prev);
        return head;
    }

    // reverse list recursive method 02:
    Node* reverseListRecursiceMethod2(Node *&head)
    {
        if (head == NULL || head -> next == NULL)
        {
            if (head == NULL) cout<<"The list is empty"<<endl;
            return head;
        }

        Node *newHead = reverseListRecursiceMethod2(head -> next);
        head -> next -> next = head;
        head -> next = NULL;

        return newHead;

    }



    int main () {



        return 0;
    }
