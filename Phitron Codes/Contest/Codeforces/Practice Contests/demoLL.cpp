    #include <iostream>
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


    void insertAtTail(Node* &head, int val)
    {
        // function to insert val at tail of node

        Node *newNode = new Node(val);   // creation of new Node and value passing using constructor

        // if head is NULL i.e it is the first node, just insert the newNode value here
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        // if head != NULL i.e head has other nodes, then search which node has NULL and put the new node at the end of it i.e of its tail
        // copying head so head value is not distorted
        Node *tmp = head;

        // run loop until next pointer value is NULL
        while (tmp -> next != NULL)
        {
            tmp = tmp -> next;  // keep updating until NULL is found
        }
        // loop is terminated i.e tmp's next pointer is now pointing at a NULL address, so it is the last node, hence, put newNode here, it is the tail of the nodes
        tmp -> next = newNode;

    }

    /*
    void insertAtTail(Node* &head, int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head == newNode;
            return;
        }

        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        cout<<"Inserting done "<<newNode<<endl;
    }
    */

    void display(Node *n)
    {
        Node * tmp = n;
        while (tmp != NULL)
        {
            cout<<tmp->value;
            if(tmp->next != NULL)
                cout<<" -> ";
            tmp = tmp->next;
        }
            cout<<endl;
    }

    int main()
    {
        Node *head = NULL;
        insertAtTail(head, 3);
        insertAtTail(head, 4);
        insertAtTail(head, 5);
        display(head);
        return 0;
    }
