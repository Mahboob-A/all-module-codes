
    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
    public:

        int value;
        Node *next;

        Node(int val)
        {
            value = val;
            next = NULL;
        }

    };

    void displayList (Node *n)
    {
        while (n != NULL)
        {
            cout<<n -> value;

            if (n -> next != NULL)
                cout<<" -> ";
            n = n -> next;
        }
    }

    void insertAtTail(Node* &head, int val)
    {
        Node *newNode = new Node(val);

        // if head is NULL i.e it is the first node, just insert the newNode value here
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        // if head != NULL i.e head has other nodes, then search which node has NULL and put the new node at the end of it i.e of its tail
        // copying head so head value is not distored
        Node *tmp = head;

        // run loop until next pointer value is NULL
        while (tmp -> next != NULL)
        {
            tmp = tmp -> next;  // keep updating untill NULL is found
        }
        // loop is terminated i.e tmp's next pointer is now pointing at a NULL address, so it is the last node, hense, put newNode here, it is the tail of the nodes
        tmp -> next = newNode;

    }


    int main() {

        // creating nodes

        Node *head = NULL;

        char c = 'y';
        while(c == 'y')
        {
            int n;
            cout<<"Input value: ";
            cin>>n;

            insertAtTail(head, n);

            cout<<"\nPress 'y' input more or any key to stop: \n";
            cin>>c;
        }


        displayList(head);







        return 0;
    }
