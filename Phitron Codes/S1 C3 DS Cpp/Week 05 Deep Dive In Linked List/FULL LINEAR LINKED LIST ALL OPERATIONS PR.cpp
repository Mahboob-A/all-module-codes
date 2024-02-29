







    /// Make a full fledged Linked List with all 19 operations
    // 200822, Saturday, 10.00 am

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

    struct Array
    {
        int position[250];
    };

    void insertAtHead(Node *&head, int val);
    void insertAtTail(Node *&head, int val);
    void printList(Node *head);
    void insertAtSpecificPos(Node *&head, int pos, int val);
    int searchByValUniqueList(Node *&head, int key);
    void initializeList(Node *&head);
    int countNodes(Node *tmp);
    void searchByValDupeList(Node *&head, int key);
    Array searchByValDupeListReturn(Node *&head, int key);
    Node *searchByValDupeListCreateAnotherList(Node *&head, int key);
    void insertAfterAValUniqueList(Node *&head, int searchVal, int val);
    void insertBeforeAValUniqueList(Node *&head, int searchVal, int val);
    void deletionAtHead(Node *&head);
    void deletionAtTail(Node *&head);
    void deletionAtSpecificPos(Node *&head, int pos);
    void deletionByValUniqueList(Node *&head, int val);
    Node* reverseListNonRecursive(Node *&head);
    Node* revRec(Node *head);
    Node* reverseListRecursive(Node *head);
    int findMidVal(Node *head);
    int findMidPos(Node *head);
    void makeCycle(Node *&head, int pos);
    bool detectCycle(Node *&head);
    void removeCycle(Node *&head);


    // function to insertAtHead
    void insertAtHead(Node *&head, int val)
    {
        Node *newNode = new Node(val);

        // general case:
        newNode -> next = head;
        head = newNode;
    }

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

    // function to insert at Specific pos
    void insertAtSpecificPos(Node *&head, int pos, int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL && pos<1)
        {
            cout<<"No previous nodes in the list. Now you can only add at Position 1"<<endl;
            return;
        }

        // corner case:
        if (pos == 1)
        {
            newNode -> next = head;
            head = newNode;
            return;
        }

        // general case:
        Node *tmp = head;
        int i = 0;
        while(i<pos-2)
        {
            tmp = tmp -> next;
            i++;
        }
        newNode -> next = tmp -> next;
        tmp -> next = newNode;
    }

    // function to find value in the List
    int searchByValUniqueList(Node *&head, int key)
    {
        Node *tmp = head;
        int count = 1;

        // corner case:
        if (head == NULL)
        {
            return -1;
        }

        // general case:
        while (tmp -> val != key)
        {
            if (tmp -> next == NULL)
            {
                return -1;
            }

            tmp = tmp -> next;
            count++;
        }
        return count;
    }

    // function to Initialize List
    void initializeList(Node *&head)
    {
        cout<<"List Initialization: ";
        for (int i=1; i<=5; i++)
        {
            insertAtTail(head, i);
        }
        printList(head);
        cout<<endl;
    }

    // function to count Node
    int countNodes(Node *tmp)
    {
        int count = 0;
        while (tmp != NULL)
        {
            tmp = tmp -> next;
            count++;
        }
        return count;
    }

    // function to Search value in dupe list and print in the list non return
    void searchByValDupeList(Node *&head, int key)
    {
        int size = countNodes(head);
        Node *tmp = head;
        int pos[size+1], k = 1, flag = 0, count = 1;

        while(tmp != NULL)
        {
            if (tmp -> val == key)
            {
                pos[k] = count;
                k++;
                flag = 1;
            }
            tmp = tmp -> next;
            count++;
        }
        pos[0] = k;

        if (flag != 0)
        {
            cout<<"The Position of the "<<key<<" in the list are: ";
            for (int i=1; i<k; i++)
            {
                cout<<pos[i];
                if (i<pos[0]-1)
                {
                    cout<<", ";
                }
            }
            cout<<endl;
        }
        else
            cout<<"The value "<<key<<" is not found in the list"<<endl;
    }

    // function to search dupes in the list and return in main by struct Array
    Array searchByValDupeListReturn(Node *&head, int key)
    {
        Node *tmp = head;
        Array arr;
        int count = 1, k = 1;
        while(tmp != NULL)
        {
            if (tmp -> val == key)
            {
                arr.position[k] = count;
                k++;
            }
            tmp = tmp -> next;
            count++;
        }
        arr.position[0] = k;
        return arr;
    }

    // function to search dupes in the list by creating another list
    Node* searchByValDupeListCreateAnotherList(Node *&head, int key)
    {
        Node *tmp = head;
        Node *saveDupe = NULL;
        int k = 1;

        while(tmp != NULL)
        {
            if (tmp -> val == key)
            {
                insertAtTail(saveDupe, k);
            }
            k++;
            tmp = tmp -> next;
        }
        return saveDupe;
    }

    // function to insert after a value unique list
    void insertAfterAValUniqueList(Node *&head, int searchVal, int val)
    {
        int pos = searchByValUniqueList(head, searchVal);
        if (pos == -1)
        {
            cout<<"The value is not present in the list"<<endl;
            return;
        }

        insertAtSpecificPos(head, pos+1, val);
    }

    // function to Insert before a value Unique list
    void insertBeforeAValUniqueList(Node *&head, int searchVal, int val)
    {
        int pos = searchByValUniqueList(head, searchVal);
        if (pos == -1)
        {
            cout<<"The value is not present in the list"<<endl;
            return;
        }
        insertAtSpecificPos(head, pos, val);

    }

    // function to deletion at head
    void deletionAtHead(Node *&head)
    {
        Node *tmp = head;
        if (tmp == NULL)
        {
            cout<<"No nodes in the list ok"<<endl;
            return;
        }
        head = tmp -> next;
        delete tmp;
    }

    // function to deletion at tail
    void deletionAtTail(Node *&head)
    {
        Node *tmp = head;
        if (tmp != NULL && tmp -> next != NULL)
        {
            while (tmp -> next -> next != NULL)
            {
                tmp = tmp -> next;
            }
            Node *delNode = tmp -> next;
            tmp -> next = NULL;
            delete delNode;
        }
        else
            deletionAtHead(head);
    }

    // function to delete at specific position
    void deletionAtSpecificPos(Node *&head, int pos)
    {
        int totalNodes = countNodes(head);
        if (pos <= totalNodes)
        {
            if (pos == 1)
            {
                deletionAtHead(head);
            }
            else if (pos == totalNodes)
            {
                deletionAtTail(head);
            }
            else
            {
                Node *tmp = head;
                int i = 0;
                if (tmp -> next -> next != NULL)
                {
                    while(i<pos-2)
                    {
                        tmp = tmp -> next;
                        i++;
                    }
                    Node *delNode = tmp -> next;
                    tmp -> next = tmp -> next -> next;
                    delete delNode;
                }
            }
        }
        else
            cout<<"Position is out of bound. Invalid Position"<<endl;
    }

    // function to delete by value
    void deletionByValUniqueList(Node *&head, int val)
    {
        int pos = searchByValUniqueList(head, val);

        if (pos != -1)
        {
            deletionAtSpecificPos(head, pos);
        }
        else
            cout<<"The value is not present in the list"<<endl;
    }

    // function to reverse the list in non Recursive method
    Node* reverseListNonRecursive(Node *&head)
    {
        if (head == NULL) cout<<"The list is empty"<<endl;

        Node *prev = NULL, *next = NULL, *curr = head;
        while (curr != NULL)
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    // recursion to reverse the list
    Node* revRec(Node *head)
    {
        if (head == NULL || head -> next == NULL)
        {
            if (head == NULL) cout<<"The list is empty"<<endl;
            return head;
        }
        Node *newHead = reverseListRecursive(head -> next);
        head -> next -> next = head;
        head -> next = NULL;

        return newHead;
    }

    // function to reverse a list by recursion
    Node* reverseListRecursive(Node *head)
    {
        return revRec(head);
    }

    // function to print the list in reverse by recursion
    void printListRev(Node *tmp)
    {
        if (tmp == NULL)
        {
            return;
        }
        printListRev(tmp -> next);
        cout<<tmp -> val<<" ";
        cout<<endl;
    }

    // function to find value of mid Position of a list
    int findMidVal(Node *head)
    {
        Node *slow = head, *fast = head;
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow -> val;
    }

    // function to find the mid Position of node in a list
    int findMidPos(Node *head)
    {
        int count = 1;
        Node *slow = head, *fast = head;
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            count++;
        }
        return count;

    }

    // function to make a cycle in a list
    void makeCycle(Node *&head, int pos)
    {
        if(head == NULL || head -> next == NULL)
        {
            if (head == NULL) cout<<"The list is empty"<<endl;
            else cout<<"The list has not enough nodes to create a cycle"<<endl;
            return;
        }
        Node *tmp = head;
        Node *startNode = NULL;
        while(tmp -> next != NULL)
        {
            if (tmp -> val == pos)
            {
                startNode = tmp;
            }
            tmp = tmp -> next;
        }
        tmp -> next = startNode;
    }

    // function to detect if a node has a cycle
    bool detectCycle(Node *&head)
    {
        Node *slow = head, *fast = head;
        while (fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            if (slow -> next == fast -> next)
            {
                return true;
            }
        }
        return false;
    }

    // function to remove cycle from a list
    void removeCycle(Node *&head)
    {
        Node *slow = head, *fast = head;
        do
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }while(slow != fast);

        fast = head;

        while (slow -> next != fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next;
        }

        slow -> next = NULL;
    }




    int main() {

        Node *head = NULL;

            int choice, val, pos;
            cout<<"Choice 01: Insert At Head"
            <<endl<<"Choice 02: Insert At Tail"
            <<endl<<"Choice 03: Insert At Specific Position"
            <<endl<<"Choice 04: Search By Value (Unique List)"
            <<endl<<"Choice 05: Search By Value (Dupe List By Array Non-Return)"
            <<endl<<"Choice 06: Search By Value (Dupe List By Array Return In Main)"
            <<endl<<"Choice 07: Search By Value (Dupe List By Creating Another List)"
            <<endl<<"Choice 08: Insert A Value After Specific Value"
            <<endl<<"Choice 09: Insert A Value Before Specific Value"

            <<endl<<"\nChoice 10: Deletion At Head"
            <<endl<<"Choice 11: Deletion At Tail"
            <<endl<<"Choice 12: Deletion At Specific Position"
            <<endl<<"Choice 13: Deletion By Value"

            <<endl<<"\nChoice 14: Print List In Reverse"
            <<endl<<"Choice 15: Reverse List Non Recursive"
            <<endl<<"Choice 16: Reverse List Recursive"

            <<endl<<"\nChoice 17: Find Mid Value Of List"
            <<endl<<"Choice 18: Find Mid Position Of List"

            <<endl<<"\nChoice 19: Make A Cycle In The List"
            <<endl<<"Choice 20: Detect A Cycle In A List"
            <<endl<<"Choice 21: Remove Cycle From A List"

            <<endl<<"\nChoice 111: Print List"
            <<endl<<"Choice 121: Initialize LIst"
            <<endl<<"Choice 211: Count Nodes"
            <<endl<<"Choice 0: stop";

        cout<<"\n\nInput Choice: ";
        cin>>choice;

        while(choice != 0)
        {
            switch(choice)
            {
                case 1:
                    cout<<"Enter value: ";
                    cin>>val;
                    insertAtHead(head, val);
                    break;

                case 2:
                    cout<<"Enter value: ";
                    cin>>val;
                    insertAtTail(head, val);
                    break;

                case 3:
                    cout<<"Enter Position: ";
                    cin>>pos;
                    cout<<"Enter Value: ";
                    cin>>val;
                    insertAtSpecificPos(head,pos, val);
                    break;

                case 4:
                    cout<<"Enter value to search: ";
                    cin>>val;
                    pos = searchByValUniqueList(head, val);
                    if (pos != -1)
                        cout<<"The value is found at the "<<pos<<" position"<<endl;
                    else
                        cout<<"The value is not found in the list"<<endl;
                    break;

                // priting the dupe list in the function
                case 5:
                    if (head == NULL)
                    {
                        cout<<"No nodes in the list"<<endl;
                        break;
                    }
                    cout<<"Enter the value to search: ";
                    cin>>val;
                    searchByValDupeList(head, val);
                    break;

                case 6:
                    Array arr;
                    cout<<"Enter the value to search: ";
                    cin>>val;
                    arr = searchByValDupeListReturn(head, val);
                    if (arr.position[0] == 1)
                        cout<<"The value "<<val<<" is not present in the list"<<endl;
                    else
                    {
                        cout<<"The value "<<val<<" is found at ";
                        for (int i=1; i<arr.position[0]; i++)
                        {
                            cout<<arr.position[i];
                            if (i<arr.position[0]-1)
                            {
                                cout<<", ";
                            }
                        }
                        cout<<" positions"<<endl;
                    }
                    break;

                case 7:
                {
                    cout<<"Enter value to search: ";
                    cin>>val;
                    Node *pos = searchByValDupeListCreateAnotherList(head, val);
                    if (pos == NULL)
                    {
                        cout<<"The value "<<val<<" is not present in the list"<<endl;
                    }
                    else
                    {
                        while (pos != NULL)
                        {
                            cout<<pos->val;
                            if (pos -> next!=NULL)
                            {
                                cout<<" -> ";
                            }
                            pos = pos -> next;
                        }
                    }
                    cout<<endl;
                    break;
                }

                case 8:
                    cout<<"Enter the value to insert: ";
                    cin>>val;
                    cout<<"Enter the value after which you want to insert: ";
                    cin>>pos;
                    insertAfterAValUniqueList(head, pos, val);
                    break;

                case 9:
                    cout<<"Enter the value to insert: ";
                    cin>>val;
                    cout<<"Enter the value before which you want to insert: ";
                    cin>>pos;
                    insertBeforeAValUniqueList(head, pos, val);
                    break;

                case 10:
                    deletionAtHead(head);
                    break;

                case 11:
                    deletionAtTail(head);
                    break;

                case 12:
                    cout<<"Enter the position to delete: ";
                    cin>>pos;
                    deletionAtSpecificPos(head, pos);
                    break;

                case 13:
                    cout<<"Enter the value to delete: ";
                    cin>>val;
                    deletionByValUniqueList(head, val);
                    break;

                case 14:
                    printListRev(head);
                    break;

                case 15:
                    head = reverseListNonRecursive(head);
                    break;
                case 16:
                    head = reverseListRecursive(head);
                    break;

                case 17:
                    if (head == NULL)
                        cout<<"The list is empty"<<endl;
                    else
                    {
                        int midVal;
                        midVal = findMidVal(head);
                        cout<<"The Mid value is "<<midVal<<endl;
                    }
                    break;

                case 18:
                    if (head == NULL)
                        cout<<"The list is empty"<<endl;
                    else
                    {
                        int midPos;
                        midPos = findMidPos(head);
                        cout<<"The mid position of the list is "<<midPos<<endl;
                    }
                    break;

                case 19:
                    cout<<"Enter the position to make a cycle: ";
                    cin>>pos;
                    makeCycle(head, pos);
                    break;

                case 20:
                    bool cycleStatus;
                    cycleStatus = detectCycle(head);
                    if (cycleStatus)
                        cout<<"The list has a cycle"<<endl;
                    else
                        cout<<"The list has no cycle"<<endl;
                    break;

                case 21:
                    cycleStatus = detectCycle(head);
                    if (cycleStatus)
                    {
                        removeCycle(head);
                    }
                    else
                        cout<<"The list has no cycle"<<endl;
                    break;

                case 111:
                    printList(head);
                    break;

                case 121:
                    initializeList(head);
                    break;

                case 211:
                    if (head == NULL)
                    {
                        cout<<"No nodes in the list"<<endl;
                        break;
                    }
                    cout<<"Total nodes are: "<<countNodes(head)<<endl;
                    break;

                default:
                    break;

            }
            cout<<"Next Choice: ";
                cin>>choice;
        }

        cout<<"The list is: ";
        printList(head);
        cout<<"\nand total node are: "<<countNodes(head);



        return 0;
    }

