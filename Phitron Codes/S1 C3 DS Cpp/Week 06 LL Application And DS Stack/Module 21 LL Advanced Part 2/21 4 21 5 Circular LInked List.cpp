
    /// 21 - 4 and 21 5 Circular Linked List Part 1
    // 200822, Saturday, 11.30 am
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
            this -> next = NULL;
        }
    };

    void insertAtHead(Node *&head, int val);
    void insertAtTail(Node *&head, int val);
    void displayList(Node *head);
    void initialiseList(Node *&head);
    int countLength(Node *head);
    void deletionAtHead(Node *&head);
    void deletionAtTail(Node *&head);

    // function to insert at head of a circular linked list
    void insertAtHead(Node *&head, int val)
    {
        // step 01: create a new node
        Node *newNode = new Node(val);

        // corner case:
        // step 02: if head is null, make newNode head and put head in newNode's next and return
        if (head == NULL)
        {
            head = newNode;
            newNode -> next = head;
            return;
        }

        // step 03: put head in newNode's next
        newNode -> next = head;

        // step 04: traverse until the last node as tmp -> next != head and at the last node
        // put put newNode node's address i.e tmp -> next = newNode
        Node *tmp = head;
        while(tmp -> next != head)
        {
            tmp = tmp -> next;
        }
        tmp -> next = newNode;

        // step 05: make newNode as head
        head = newNode;
    }

    // function to insert at Tail of a circular linked list
    void insertAtTail(Node *&head, int val)
    {
        // step 01: create a newNode
        Node *newNode = new Node(val);

        // corner case
        // step 02: if head is null, make newNode as head and put head in newNode's next
        if (head == NULL)
        {
            head = newNode;
            newNode -> next = head;
            return;
        }

        // step 03: if head is not null, traverse until tmp -> next != head as all newNode has head in its next field
        // and in the out of the loop put newNode -> next = tmp -> next or head and tmp -> next = newNode
        Node *tmp = head;
        while (tmp -> next != head)
        {
            tmp = tmp -> next;
        }
        newNode -> next = tmp -> next; // or newNode -> next = head ... as tmp -> next has head

        // put new node node's address in the tmp -> next
        tmp -> next = newNode;
    }

    // function to initialise list with 1 to 5
    void initialiseList(Node *&head)
    {
        for(int i=1; i<=5; i++)
            insertAtTail(head, i);

        displayList(head);
    }

    // function to display the list
    void displayList(Node *head)
    {
        // step 01: if head is null, then return
        if (head == NULL)
        {
            cout<<"The list is empty"<<endl;
            return;
        }

        // step 02: drive loop until tmp != head
        Node *tmp = head;
        // if while (tmp != head) then it will not work because I have copied head to tmp and in while
        // condition it is tmp != head, so, the control will not enter in while. So, I need to alter tmp
        // once then we need to check the condition and for this we need to use do while loop as do while loop
        // at first executes then checks the condition
        do
        {
            cout<<tmp -> val;
            if (tmp -> next != head) cout<<" -> ";
            tmp = tmp -> next;
        }while (tmp != head);

        cout<<endl;
    }

    // function to count nodes
    int countLength(Node *head)
    {
        // step 01: take count = 0, and a tmp to drive

        int count = 0;
        Node *tmp = head;

        // step 02: drive tmp until it becomes head. But again, as we have copied it from head, thus we can not simply
        // put while loop as tmp != head, we need to alter them first hence, use do while loop
        do
        {
            count++;
            tmp = tmp -> next;
        }while (tmp != head);

        return count;
    }

    // function to delete node at head
    void deletionAtHead(Node *&head)
    {
        // step 01: take a tmp node
        Node *tmp = head;

        // step 02: keep a check of if tmp != NULL
        // and inside the if condition build the logic of deletion of head
        if (tmp != NULL)
        {
            // receive the tmp in a new pointer as tmp is now not null as it is in if (tmp != null)
            Node *delNode = tmp;

            // drive the loop until the last node i.e tmp -> next != head as each circular node has head at its last node
            while (tmp -> next != head)
            {
                tmp = tmp -> next;
            }
            // now as tmp is at the last node, put delVal -> next in its next field as delVal is copied from tmp that is a copy of head
            tmp -> next = delNode -> next;

            // as the last node now has address of head -> next, hence make this second node as head
            head = delNode -> next;

            // at last delete delVal as it is a via copy of previous head, hence it will delete the previous head node
            delete delNode;
        }

        // if head is null then promt no nodes in the list
        else
        {
            cout<<"There is no node in the list"<<endl;
        }
    }

    // function to delete at tail
    void deletionAtTail(Node *&head)
    {
        // step 01: take a tmp of head
        Node *tmp = head;

        // step 02: put a if condition that is head is null i.e if there is no node &&
        // if there is only one node i.e tmp -> next == head that means list has only one Node, then control goes to else
        if (tmp != NULL && tmp -> next != head)
        {
            // traverse until the previous node of last node i.e to the node that has head in its next field
            while (tmp -> next -> next != head)
            {
                tmp = tmp -> next;
            }
            // now tmp is at the just before node of the last node, so, copy the last node in a new pointer
            Node *delNode = tmp -> next;

            // now put head at the tmp -> next so the before node of last node will have head in its next field
            tmp -> next = delNode -> next; // as delNode is the last node, and last node has head, so delNode -> next is head

            // step 03: delete delNode
            delete delNode;
        }
        else
        {   // if head is NULL
            if (head == NULL)
                cout<<"The list is empty"<<endl;

            // if head and tail is same i.e only one node
            else
                deletionAtHead(head);  // as tmp -> next or head -> next = head is true i.e there is only one node and head and tail is same node
        }
    }


    int main() {
        Node *head = NULL;

            cout<<"Choice 1: InsertAtHead"
            <<endl<<"Choice 2: InsertAtTail"
            //<<endl<<"Choice 3: InsertAtSpecificPos"
            <<endl<<"Choice 4: Deletion At Head"
            <<endl<<"Choice 5: Deletion At Tail"
            //<<endl<<"Choice 6: Deletion At Specific Position"
            <<endl<<"Choice 7: Initialise List with 1 to 5"
            <<endl<<"Choice 8: Count Length"
            <<endl<<"Choice 9: Display List"
            <<endl<<"Choice 0: Stop";


        int choice, val, pos;
        cout<<"\n\nInput Choice: ";
        cin>>choice;

        while(choice != 0)
        {
            switch(choice)
            {
                case 1:
                    cout<<"Input the value: ";
                    cin>>val;
                    insertAtHead(head, val);
                    break;

                case 2:
                    cout<<"Input the value: ";
                    cin>>val;
                    insertAtTail(head, val);
                    break;
                /*
                case 3:
                    cout<<"Input the position: ";
                    cin>>pos;
                    cout<<"Input the value: ";
                    cin>>val;
                    insertAtSpecificPos(head, pos, val);
                    break;
                */

                case 4:
                    deletionAtHead(head);
                    break;

                case 5:
                    deletionAtTail(head);
                    break;
                /*
                case 6:
                    // if the head node is null i.e no nodes in the list (head == NULL)
                    if (head == NULL)
                    {
                        cout<<"There are no nodes in the list"<<endl;
                        break;
                    }
                    cout<<"Enter the pos to delete: ";
                    cin>>pos;
                    deletionAtSpecificPosition(head, pos);
                    break;
                    */

                case 7:
                    initialiseList(head);
                    break;

                case 8:
                {
                    if (head == NULL)
                    {
                        cout<<"The list is empty"<<endl;
                        break;
                    }
                    int len = countLength(head);
                    cout<<"Total nodes "<<len<<endl;
                    break;
                }


                case 9:
                    displayList(head);
                    break;

                default:
                    break;
            }
            cout<<"Next Choice: ";
            cin>>choice;
        }

        cout<<"Nodes are: ";
        displayList(head);

        cout<<"Count of Nodes: "<<countLength(head)<<endl;


        return 0;
    }
