

    /// full program
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





    void insertAtHead(Node* &head, int val)
    {
        // function to insert at head of node

        // step 01: create a newNode
        // step 02: update newNode -> next to head.  so that newNode could fit at the first position as head holds address of first node, newNode will go to first node via head address
        // step 03: update head to newNode. so that head holds the address of the newly first node address

        // step 01: create a newNode

        Node* newNode = new Node(val);  // creation of new Node and value passing using constructor


        // step 02: update newNode -> next to head.

        newNode -> next = head;

        // step 03: update of head to newNode.

        head = newNode;

    }


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





    int main() {

        // creating nodes

        Node *head = NULL;


        cout<<"Choice 1: Insert at Head "<<endl<<"Choice 2: Insert at Tail "<<endl<<"Choice 03: Exit "<<endl<<endl;
        int choice;
        cout<<"Input Your Choice: 1 2 or 3 : \n";
        cin>>choice;

        while(choice == 1 || choice == 2)
        {
            int n;
            cout<<"Input value: ";
            cin>>n;
            if (choice == 1) insertAtHead(head, n);

            else if (choice == 2) insertAtTail(head, n);

            cout<<"Input Your Choice: 1 2 or 3 : \n";
            cin>>choice;
        }



        displayList(head);


        return 0;
    }



        /// my practice of this full code


    /*



    // make a linked list and take input from user at head and tail and print the result

    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
    public:
        int value;
        Node *next;

        Node (int val)
        {
            value = val;
            next = NULL;
        }
    };

    // a function to add nodes at head
    void insertAtHead(Node* &head, int val)
    {
        // step 01 create a new Node
        Node *newNode = new Node(val);

        // step 02 update newNode -> next to head
        newNode -> next = head;

        // step 03 update head to newNode
        head = newNode;
    }

    // a function to add nodes at tail
    void insertAtTail(Node* &head, int val)
    {
        // step 01: create a newNode
        Node *newNode = new Node(val);


        //insertion at tail
        // two cases here 1) if head == NULL and 2) if head != NULL

        // 1) if head == NULL
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        // 2) if head != NULL

        Node *tmp = head;

        while (tmp -> next != NULL)
        {
            tmp = tmp -> next;
        }
        tmp -> next = newNode;
    }

    // a function to display the list
    void display(Node *n)
    {
        while(n != NULL)
        {
            cout<<n -> value;
            if (n -> next != NULL)
                cout<<" -> ";
            n = n -> next;
        }
    }

    int main() {

        Node *head = NULL;

        int choice;
        cout<<"Choice 1: Insert at Head"<<endl<<"Choice 2: Insert at Tail"<<endl<<"Choice 3: Exit"<<endl<<endl;
        cin>>choice;

        while (choice == 1 || choice == 2)
        {
            int n;
            cout<<"Enter value ";
            cin>>n;

            if (choice == 1) insertAtHead(head, n);
            else if (choice == 2) insertAtTail(head, n);

            cout<<"Next choice: \n";
            cin>>choice;
        }

        display(head);



        return 0;
    }

    */
