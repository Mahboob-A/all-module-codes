    /// Conseptual sessoin: 4-2 Linked-List, Linked-List printing (August 03)
    // 050822
    #include <iostream>
    using namespace std;
    // 050422
    class Node  // declaring a class with name Node
    {
    public:
        int val;
        Node *next;

        Node(int val) // constructor
        {
            this -> val = val;
            this -> next = NULL;
        }

    };

    // function to insert node from 0 to next positions
    void listInsert(Node* &head, int pos, int val) // receiving address of main's head pointer address, pos to insert and val to assign
    {
        if (pos == 0)    // if pos is 0, that is a new node will be new head, and prev head will be in 2nd place
        {
            Node* prev_head_address = head;    // copy present head to a pointer
            head = new Node(val);             //  create a new node/obj and receive its address in the head pointer
            head -> next = prev_head_address;  // connect previous head to new head i.e store prev head's obj's address to new head's next
            return;  // and return. if you do not want to use return then you may use if else
        }

        // if pos is not 0 then we have to go to the pos where we want to create new node so to reach there the logic is (pos - 1)
        pos--;                      // hense, decreasing pos by 1
        Node* tmp = head;           // copying head to we do not lose original head's value

        for (int i=0; i<pos; i++)   // moving to the exact one node before we need to create new node by going next
        {
            tmp = tmp -> next;
        }
        // exactly at this position the node is just the previous node where we need to insert the new node
        Node* address_of_next_node = tmp -> next;   // so, copy the address stored in the present node's next that is the address of next node so that we can link it to the new node we are inserting

        Node* newNode = new Node(val);  // create a new node/obj and receive its address to a pointer

        tmp -> next = newNode;      // now in the next section or in the pointer section of present node, store new node's pointer that is the address of new node so that present node and new node could be connected

        newNode -> next = address_of_next_node;  // and in the pointer section of new node, store the previously stored next nodes address
    }

    void listDelete(Node* &head, int pos)  // to delete, we need address of main's head pointer and the pos to delete
    {
        if(pos == 0)   // is pos is 0 then
        {
            Node* prev_head_address = head;   // copy the present head's value i.e the address of head node
            head = head -> next;            // now copy the next nodes address in head i.e move forward by 1 i.e 2nd node is now the head node
            delete prev_head_address;   // now delete the copied head's pointer as we cannot simply delete head
            return;   // now return from the function
        }

        pos--;    // is pos to delete is not the head node then just as before described, go to the just previous node of which we need to delete
        Node* tmp = head;
        for (int i=0; i<pos; i++)
        {
            tmp = tmp -> next;
        }

        Node* address_of_next_next_node = tmp -> next -> next;  // now we need to delete the next node from this node, so copy the address of the adjacent node of which node we need to delete that is 2 node forward from present node
        delete tmp -> next;            // now delete the address of the next node from present node's next pointer
        tmp -> next = address_of_next_next_node;   // now assign the 2 node forwarded node's address to the present node's next pointer sectoin

    }

    // function to print in normal order iterative method
    /*
    void printList(Node *head)  // asusual a print function that just takes the head
    {
        Node *tmp = head;

        while (tmp != NULL)   // move forward untill find null
        {
            cout<<tmp -> val<<" ";
            tmp = tmp -> next;  // move to next node
        }
    }
    */

    // printing is normal order using recursion but to work with normal order, iterative method is good
    void printLinkList(Node* head)
    {
        if (head == NULL)
        {
            return;
        }
        cout<<head -> val <<" ";
        printLinkList(head -> next);
    }

    // printing is reverse order using recursion
    void reversedListPrint(Node* head)
    {
        if (head == NULL)
        {
            return;
        }
        reversedListPrint(head -> next);
        cout<<head -> val << " ";
    }

    int main()
    {

        Node *head = new Node(5);  // node creation
        Node *a = new Node(10);
        Node *b = new Node(20);
        Node *c = new Node(50);

        head -> next = a; // linking
        a -> next = b;
        b -> next = c;

        listInsert(head, 4, 100);

        //listDelete(head, 2);

        //printList(head);
        printLinkList(head);     // recursion normal printing

        cout<<endl;

        reversedListPrint(head);




        return 0;
    }
