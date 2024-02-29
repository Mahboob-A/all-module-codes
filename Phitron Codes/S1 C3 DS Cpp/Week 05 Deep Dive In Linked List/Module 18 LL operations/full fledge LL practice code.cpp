

    /// full fledged LL practice 160822 Tuesday

    // implement a full fledged linked list operations


    /// full fledged LL practice 160822 Tuesday

    // implement a full fledged linked list operations
    #include <bits/stdc++.h>
    using namespace std;

    // creating a calss for node
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

    // making a struct for storing the dupes in a list
    struct Array
    {
        int pos[150];
    };

    void printList(Node *head);
    void insertAtHead(Node *&head, int val);
    void insertAtTail(Node *&head, int val);
    void insertAtSpecificPos(Node *&head, int pos, int val);
    int countNode(Node *head);
    void intializeList(Node *&head);
    int searchByValUniqueList(Node *&head, int key);
    Array searchByValDupeListStruct(Node *&head, int key);

    /// function to display the list
    void printList(Node *head)
    {
        // step 01: make a tmp node to Head
        Node *tmp = head;

        // step 02: traverse untill tmp != NULL
        cout<<"Printing List: ";
        while (tmp != NULL)
        {
            cout<<tmp -> val;
            if (tmp -> next != NULL)
            {
                cout<<" -> ";
            }
            tmp = tmp -> next;
        }
        cout<<endl;
    }


    /// function to insert node at Head
    void insertAtHead(Node *&head, int val)
    {
        // step 01: create a new Node
        Node *newNode = new Node(val);

        // step 02: put head's address in newNode's next field
        newNode -> next = head;

        // step 03: update head, make newNode as new head
        head = newNode;
    }

    /// function to insert at tail
    void insertAtTail(Node *&head, int val)
    {
        // step 01: create a new Node
        Node *newNode = new Node(val);

        // corner case: if head is NULL then there's no Node
        // then simply put new node's address to head
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        // step 02: create a tmp node pointing to head
        Node *tmp = head;

        // step 03: traverse untill tmp -> next != NULL
        while (tmp -> next != NULL)
        {
            tmp = tmp -> next;
        }
        tmp -> next = newNode;
    }

    /// function to insert value in specific position
    void insertAtSpecificPos(Node *&head, int pos, int val)
    {
        // step 01: crate a new and tmp Node
        Node *newNode = new Node(val);
        Node *tmp = head;

        // corner case: -
        // step 02: check if pos is 1, then copy the head's address / value.
        // make newNode as head. Then put the previous head's value or node's address in next field of new head
        if (pos == 1)
        {
            Node *prev_head = head;
            head = newNode;
            head -> next = prev_head;
            return;
        }

        // step 03: general case - traverse just before the pos and at that before pos,
        // link newNode's next to later node and before node's next to newNode
        int i = 1;
        while (i<pos-1)
        {
            tmp = tmp -> next;
            i++;
        }
        // putting pos+1 th nodes address in newNode's next field
        newNode -> next = tmp -> next;
        // putting newNode's value to pos-1 th nodes next field.
        tmp -> next = newNode;
    }

    /// function to count nodes
    int countNode(Node *head)
    {
        int count = 0;
        Node *tmp = head;
        while (tmp != NULL)
        {
            tmp = tmp -> next;
            count++;
        }
        return count;
    }

    // Initialize the list with 1 to 5
    void intializeList(Node *&head)
    {
        // just insert the values of i at each iteration to tail of the list
        for (int i=1; i<=5; i++)
            insertAtTail(head, i);

        printList(head);
    }

    /// function to search the list if a value is present or not
    int searchByValUniqueList(Node *&head, int key)
    {
        // step 01: take a tmp node and initialize count variable with 160822
        Node *tmp = head;
        int count = 1;

        // step 02: check whether the tmp is null, if true, then return -1 as no value is present in the list
        if (tmp == NULL) return -1;

        // step 03: traverse until tmp -> val != key and count++
        // i.e traverse until tmp -> val does not matches with key, because if tmp -> val does not matches with key loop should move forward to check next node
        while (tmp -> val != key)
        {
            // corner case: if the list is full but value is not found and loop has reached at end, then return -1
            // i.e keep a check if tmp -> next is NULL then tmp is at last node but val has not been found.
            if (tmp -> next == NULL) return -1;

            // normal case:
            tmp = tmp -> next;
            count++;
        }
        return count;
    }

    /// function to search dupe values by struct data type
    Array searchByValDupeListStruct(Node *&head, int key)
    {
        // step 01: take tmp node and initialize count variable with 1. Also take k var to access struct instance and initialize with 1
        Node *tmp = head;
        int count = 1, k = 1;

        // step 02: creare a struct instance
        Array arr;

        // step 03: run loop until tmp is not NULL
        while (tmp != NULL)
        {
            // step 04: put all same nodes in struck instance with if condition
            if (tmp -> val == key)
            {
                arr.pos[k] = count;
                k++;
            }
            tmp = tmp -> next;
            count++;
        }

        // step 05: put the total value k in the 0'th pos of struck instance
        arr.pos[0] = k;
        return arr;
    }

    int main() {

        Node *head = NULL;

        int choice, val, pos, count;

        cout<<"Choice 1: Print List "
        <<endl<<"Choice 2: Insert At Head "
        <<endl<<"Choice 3: Insert At Tail "
        <<endl<<"Choice 4: Insert At Specific Position "
        <<endl<<"Choice 5: Count The Nodes "
        <<endl<<"Choice 6: Initialize List 1 to 5 "
        <<endl<<"Choice 7: Search List By Value (Unique List)  "
        <<endl<<"Choice 8: Search List By Value (Dupe List / Sturct)  "
        <<endl<<"Choice 0: Stop ";

        cout<<endl<<"Input your choice: ";
        cin>>choice;
        while (choice != 0)
        {
            switch (choice)
            {
                case 1:
                    printList(head);
                    break;

                case 2:
                    cout<<"Enter val to insert at head ";
                    cin>>val;
                    insertAtHead(head, val);
                    printList(head);
                    break;

                case 3:
                    cout<<"Enter value to insert at tail ";
                    cin>>val;
                    insertAtTail(head, val);
                    printList(head);
                    break;

                case 4:
                    if (head == NULL)
                    {
                        cout<<"List has no previous nodes "<<endl;
                        break;
                    }
                    cout<<"Enter the position to insert ";
                    cin>>pos;
                    cout<<"Enter value to insert ";
                    cin>>val;
                    insertAtSpecificPos(head, pos, val);
                    printList(head);
                    break;

                case 5:
                    count = countNode(head);
                    cout<<"Total nodes in the list: "<<count<<endl;
                    break;

                case 6:
                    intializeList(head);
                    break;

                case 7:
                    cout<<"Enter the value to search: ";
                    cin>>val;
                    pos = searchByValUniqueList(head, val);
                    if (pos != -1) cout<<"The position of the value is "<<pos<<endl;
                    else cout<<"The value is not present in the list"<<endl;
                    break;

                case 8:
                    cout<<"Enter the value to search: ";
                    cin>>val;
                    Array arr;
                    arr = searchByValDupeListStruct(head, val);
                    if (arr.pos[0] == 1)
                    {
                        cout<<"The value is not present in the list"<<endl;
                        break;
                    }
                    else
                    {
                        // step 01: extract the size of k from the struct instance's 0th index
                        int size = arr.pos[0];

                        // step 02: run a loop from 1 until i<size and cout the val of struct instance
                        cout<<"The value "<<val<<" is found at ";
                        for (int i=1; i<size; i++)
                        {
                            cout<<arr.pos[i];
                            if (i<arr.pos[0] - 1) cout<<", ";  // or " i<size-1 "
                        }
                        cout<<" positions"<<endl;
                    }
                    break;

                default:
                    break;
            }
            cout<<"Next choice ";
            cin>>choice;
        }





















        return 0;
    }

















        return 0;
    }
