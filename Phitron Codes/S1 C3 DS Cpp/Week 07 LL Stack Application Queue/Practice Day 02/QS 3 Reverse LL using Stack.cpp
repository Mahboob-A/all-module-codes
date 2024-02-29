



    // pr day 02, week 07
    // 030933, Saturday, 09.30 pm
    // reverse linked list using stack
    #include <bits/stdc++.h>
    using namespace std;

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


    void insertAtTail(Node *&head, int val);
    void printList(Node *head);
    int countNodes(Node *tmp);

    // function to insertAtTail
    void insertAtTail(Node *&head, int val)
    {
        Node *newNode = new Node(val);

        // corner case:
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        // general case:
        Node *tmp = head;
        while(tmp -> next != NULL)
        {
            tmp = tmp -> next;
        }
        tmp -> next = newNode;
    }

    // function to printList
    void printList(Node *head)
    {
        Node *tmp = head;
        if (tmp != NULL)
        {
            while(tmp -> next != NULL)
            {
                cout<<tmp -> val;
                if (tmp -> next != NULL)
                    cout<<" -> ";

                tmp = tmp -> next;
            }
            cout<<tmp -> val;
            cout<<endl;
        }
        else
            cout<<"No nodes in the list"<<endl;

    }


    // reverse linked list using stack
    /*
    Approach:
        1. We need to push the entire node in the stack, so create Node type stack stack<Node* >st;
        2. Now traverse the list until tmp != NULL and push the tmp node in the stack
        3. As the stack has now the nodes, now, run loop until the stack becomes empty
           and and save the top of the stack.
        4. Take Node type two head and tail pointer and just insert like inserting in head and tail of a Node
           and after the while loop put tail -> next = NULL as it will make the NULL of last node's next part
        5. now make head = newHead and the reversal is done


    */
    void reverse_list_using_stack(Node *&head)
    {
        stack<Node* >st;
        Node *tmp = head;
        while(tmp != NULL)
        {
            st.push(tmp);
            tmp = tmp -> next;
        }

        Node *newHead = NULL;
        Node *tail = NULL;
        while(!st.empty())
        {
            Node *currentNode = st.top();
            if(newHead == NULL)
            {
                newHead = tail = currentNode;
            }
            else
            {
                tail -> next = currentNode;
                tail = currentNode;
            }
            st.pop();
        }
        tail -> next = NULL;
        head = newHead;
    }



    int main() {

        Node *head = NULL;
        int i, n, val;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>val;
            insertAtTail(head, val);
        }

        reverse_list_using_stack(head);
        printList(head);




        return 0;
    }


