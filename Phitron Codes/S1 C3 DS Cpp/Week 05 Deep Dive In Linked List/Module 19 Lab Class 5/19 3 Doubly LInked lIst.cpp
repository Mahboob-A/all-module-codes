




            /// 19-3 Doubly Linked List Part 1
            // 180822, Thursday, 06.00 pm


    /// only theory. please refer to notebook.


    /// 19 4 Doubly Linked List Part 2
    // 180822, Thursday, 04.45 pm
    #include <iostream>
    using namespace std;

    // doubly linked list class
    class doublyNode
    {
    public:
        int val;
        doublyNode *prev;
        doublyNode *next;

        doublyNode(int val)
        {
            this -> val = val;
            prev = NULL;
            next = NULL;
        }
    };

    // function to insert at head of a doubly linked list
    void insertAtHead(doublyNode *&head, int val)
    {
        // step 01: create a new node
        doublyNode *newNode = new doublyNode(val);

        // in previous code and module code, this checking was not needed, then why if head is null then without this checking head insertion is not done?
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        // step 02: put newNode node's address to head of prev || update head -> prev to newNode
        head -> prev = newNode;

        // step 03: put head's value (head node's address) to newNode's next
        newNode -> next = head;

        // step 04: update head to newNode
        head = newNode;
    }

    // function to insert at tail
    void insertAtTail(doublyNode *&head, int val)
    {
        // step 01: create a new node
        doublyNode *newNode = new doublyNode(val);

        // corner case
        // step 02: check if head is null, if true, make newNode as head and return
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        // step 03: traverse until tmp of next is not NULL
        doublyNode *tmp = head;
        while (tmp -> next != NULL)
            tmp = tmp -> next;

        // step 04: put temp node's address to newNode's prev so that they can be linked from backward
        newNode -> prev = tmp;

        // step 05: as usual, put newNode node's address to tmp of next
        tmp -> next = newNode;
    }

    // function to print normal
    void printList(doublyNode *head)
    {
        doublyNode *tmp = head;
        while (tmp != NULL)
        {
            cout<<tmp -> val;
            if (tmp -> next != NULL)
                cout<<" --> ";

            tmp = tmp -> next;
        }
        cout<<endl;
    }

    // function to print reverse
    void revPrintList(doublyNode *head)
    {
        // as all the nodes are connected forward and backward, so, to print from rev, at first move the tmp
        // unitil last node and then traverse backward using prev and print

        // step 01: create a tmp node
        doublyNode *tmp = head;

        // step 02: traverse until the last node
        while (tmp -> next != NULL)
        {
            tmp = tmp -> next;
        }

        // step 03: traverse form backward and print
        while (tmp != NULL)
        {
            cout<<tmp -> val;
            if (tmp -> prev != NULL)
                cout<<" --> ";

            tmp = tmp -> prev;
        }
        cout<<endl;
    }

    // function to count nodes in a list
    int countList(doublyNode *&head)
    {
        int count = 0;
        doublyNode *tmp = head;

        while (tmp != NULL)
        {
            count++;
            tmp = tmp -> next;
        }
        cout<<endl;
        return count;
    }



    int main () {

        doublyNode *head = NULL;

        int choice, val, count = 0;

        cout<<"Choice 01: Input At Head "
        <<endl<<"Choice 02: Input At Tail "
        <<endl<<"Choice 03: Print List "
        <<endl<<"Choice 04: Print List In Reverse "
        <<endl<<"Choice 05: Count List "<<endl;

        cout<<endl<<"Input choice: ";
        cin>>choice;

        while (choice != 0)
        {
            switch(choice)
            {
                case 1:
                    cout<<"Input value ";
                    cin>>val;
                    insertAtHead(head, val);
                    printList(head);
                    break;

                case 2:
                    cout<<"Input value ";
                    cin>>val;
                    insertAtTail(head, val);
                    printList(head);
                    break;

                case 3:
                    cout<<"List printing ";
                    printList(head);
                    break;

                case 4:
                    cout<<"Print list in reverse ";
                    revPrintList(head);
                    break;

                case 5:
                    cout<<"Number of nodes "<< countList(head);
                    break;

                default:
                    break;
            }
            cout<<endl;
            cout<<"Next choice: ";
            cin>>choice;
        }

        cout<<"Doubly Linked List: ";
        printList(head);

        cout<<endl<<"Number of nodes: " <<countList(head);



        return 0;
    }
