



    /// 5-2 Doubly Linked List & Print Reverse Linked list (Aug 10)
    // 190822, Friday, 05.45 am
    #include <bits/stdc++.h>
    using namespace std;

    // doubly list class
    class Node
    {
    public:
        int val;
        Node *prev;
        Node *next;

        Node(int val)
        {
            this -> val = val;
            prev = NULL;
            next = NULL;
        }
    };

    // function to print the list right ward and reversed
    void printList(Node *head)
    {
        Node *tmp = head;

        // at first, drive until the last node, and outside the loop, cout manually the val of last node
        // because if tmp becomes null, then I cannot drive tmp to backward.
        // And in the backward traversal, drive until NULL because if tmp now becomes null, its no issue because the printing job is done.

        // step 01: drive tmp until last node, print, and manually print the last node outside the loop
        while (tmp -> next != NULL)
        {
            cout<<tmp -> val << " --> ";
            tmp = tmp -> next;
        }

        // tmp is stopped at the last node and control gone out of the loop, hence, printing of last node is not done yet
        // so, as tmp is now at the last node, print its val manually
        cout<<tmp -> val<<endl<<endl;

        // step 02: now as tmp is at last node, traverse backward using prev pointer and print until tmp not NULL
        while (tmp != NULL)
        {
            cout<<tmp -> val;
            if (tmp -> prev != NULL)
            {
                cout<<" --> ";
            }
            tmp = tmp -> prev;
        }
        cout<<endl<<endl;
    }

    // function to print only rev list
    void printOnlyRev(Node *head)
    {
        Node *tmp = head;
        // step 01: as I need to print from right to left i.e rev, so at first move tmp to the last node
        // last node is tmp -> next == NULL
        while (tmp -> next != NULL)
        {
            tmp = tmp -> next;
        }
        // tmp is now at the last node

        // step 02: now as tmp is at last node, then traverse backward and print
        while(tmp != NULL)
        {
            cout<<tmp -> val;
            if (tmp -> prev != NULL) cout<<" --> ";
            tmp = tmp -> prev;
        }
        cout<<endl;
    }

    // function to insert at specific pos
    void insertAtSpecificPos(Node *&head, int pos, int val)
    {
        // step 01: creare a new node and tmp of head
        Node *newNode = new Node(val);
        Node *tmp = head;

        // to drive the loop to find pos i will be 0 by any case i.e positon or index
        int i = 0;
        // corner case 1: if head is null then return
        if (head == NULL) return;

        // corner case 2: if pos is 1 then insert manually
        if (pos == 1)
        {
            newNode -> next = head;
            head -> prev = newNode;
            head = newNode;
            return;
        }

        // step 02:
        // normal case: traverse until the previous node of the pos and insert
        // while(i<pos-2) by positon i.e 1, 2, 3 . . . n etc if by positon, then head positon should be 1
        // while(i<=pos-2) by index i.e 0, 1, 2 . . . n etc if by index, then head positon should be 0
        while(i<pos-2)
        {
            tmp = tmp -> next;
            i++;
        }
        // checking if tmp is reached before node of pos node
        cout<<tmp -> val<<endl;

        // step 03: at the just before node of positon, copy the next node's address that is present at current node's next
        Node *nextNode = tmp -> next;

        // step 04: now put new node in current node's next field and new node's prev field current node i.e tmp
        // connection to left side is complete
        tmp -> next = newNode;
        newNode -> prev = tmp;

        // step 05: now connection to right side. put next Next Node's address in newNode's next field and nextNextNode pointe's node's prev field newNode
        // hence, connection with right side is complete
        newNode -> next = nextNode;

        // corner case 03: I need to check if nextNode node is null, if null then we can not get nul -> prev. right? so, if not NULL
        // only then I need to connect it with previous node. And if nextNode node is null, then it is the last node, hence we need to keep the null
        if (nextNode != NULL)
        {
            nextNode -> prev = newNode;
        }


        cout<<endl;
    }

    // function to delete node
    void deleteNodeByPos(Node *&head, int pos)
    {
        Node *tmp = head;

        if (pos == 1)
        {
            tmp -> next -> prev = NULL;
            head = tmp -> next;
            delete tmp;
            return;

            /* or this:
            head = tmp -> next;
            head -> prev = NULL;
            delete tmp;
            return;
            */
        }

        // cant implement this loop in while loop only in for loop, ask in support why?
        for(int i=0; i<pos-2; i++)
        {
            tmp = tmp -> next;
        }
        cout<<tmp -> val<<endl;

        Node *nextNextNode = tmp -> next -> next;
        delete tmp -> next;
        tmp -> next = nextNextNode;
        if (nextNextNode != NULL)
        {
            nextNextNode -> prev = tmp;
        }

    }

    /// function to print rev linear linked list
    void revListPrint(Node *head)
    {
        if (head == NULL)
        {
            return;
        }
        revListPrint(head -> next);
        cout<<head -> val;

    }


    int main() {

        // node creation
        Node *head = new Node(10);
        Node *a = new Node(20);
        Node *b = new Node(30);
        Node *c = new Node(40);

        // node linking: link both, prev and next
        head -> next = a;

        a -> prev = head;
        a -> next = b;

        b -> prev = a;
        b -> next = c;

        c -> prev = b;

        printList(head);
        printOnlyRev(head);

        int pos, val;
        cout<<"Enter pos and val "<<endl;
        cin>>pos>>val;

        insertAtSpecificPos(head, pos, val);
        printList(head);

        cout<<"Enter pos to delete"<<endl;
        cin>>pos;

        deleteNodeByPos(head, pos);
        printList(head);




        return 0;
    }
