


            /// 21 2 Make a cycle at k th position
            // 190822, Friday.
            /*

                // function to create a cycle
    void makeCycle(Node *&head, int pos)
    {
        // step 01: create a tmp node and startNode pointing to NULL to catch starting node to create the ccycle and count = 1
        Node *tmp = head;
        Node *startNode = NULL;
        int count = 1;

        // step 02: drive a while loop until the last node, do not go to NULL
        while(tmp -> next != NULL)
        {
            // Corner Case: Keep a check if count == pos, if true, store the node's address in the startNode pointer
            if (count == pos) startNode = tmp;
            tmp = tmp -> next;
            count++;
        }
        // step 03: as now tmp is at the last node, override its -> next field from NULL to the startNode node's address
        // now the last node will be pointing to the node == pos and run infinity as no NULL between them
        tmp -> next = startNode;

    }

    */



    // week 06: begin date 130822, saturday
    // watch begin date: 19082, friday
    // 21-1 Find Mid Point Of A List [Slow-Fast Pointer]





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

    /// struct to save the positions of nodes in struct type Array and return the Array in the main function
    struct Array
    {
        int position[150];
    };

    void insertAtHead(Node *&head, int val);
    void insertAtTail(Node *&head, int val);
    void insertAtSpecificPos(Node *&head, int pos, int val);
    int searchByValUniqueList(Node *&head, int key);
    int countNode(Node *head);
    void printList(Node *head);
    void initialiseList(Node *&head);
    //void searchByValDupeList(Node *&head, int key);
    Array searchDupeListReturn(Node *&head, int key);
    void insertAfterAValueUnique(Node *&head, int searchVal, int val);
    void deletionAtHead(Node *&head);
    void deletionAtTail(Node *&head);
    void deletionAtSpecificPosition(Node *&head, int pos);
    void deletionByValueUniqueList(Node *&head, int delVal);
    Node* reverseListNonRecursive(Node *&head);
    Node* reverseListRecursive(Node *&head);
    int findMidVal(Node *head);
    int findMidPos(Node *head);
    void makeCycle(Node *&head, int pos);


    /// function to insert at head of a list
    void insertAtHead(Node *&head, int val)
    {
        Node *newNode = new Node(val);
        newNode -> next = head;
        head = newNode;
    }

    /// function to insert at tail of a list
    void insertAtTail(Node *&head, int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *tmp = head;
        while(tmp -> next != NULL)
        {
            tmp = tmp -> next;
        }
        tmp -> next = newNode;
    }

    /// function to insertion at a specific position in a list
    void insertAtSpecificPos(Node *&head, int pos, int val)
    {
        int i = 0;
        Node *tmp = head;
        // creating new node
        Node *newNode = new Node(val); // if the deaisred position to insertion is the 1 or the head'th position

        if (tmp == NULL)
        {
            cout<<"There is no previous element in the list, Invalid Position"<<endl;
            return;
        }
        if (pos == 1)
        {
            Node *prev_head_address = head;
            head = newNode;
            head -> next = prev_head_address;
            return;
        }


        /// traversing before the previous element of the desired pos i.e -2 pos then the desired pos
        while(i<pos-2)
        {
            tmp = tmp -> next;
            i++;
        }

        // copying the address of next node of the specific pos that is present tmp -> next to newNode -> next
        newNode -> next = tmp -> next;
        //now copying the address of newNode into present node's next overriding the previous address
        tmp -> next = newNode;
    }

    /// function to check if a value is present in the list
    int searchByValUniqueList(Node *&head, int key)
    {
        int count = 0; // if we take count == 1, then no need to count++ at the outer of while loop
        Node *tmp = head;
        if (tmp == NULL) // corner case 1: check whether the list is empty or not, if empty, then return -1.
        {
            return -1;
        }

        while(tmp -> val != key)
        {
            if(tmp -> next == NULL)  // corner case 2: check if the searched value is not present in the list and tmp is at the
            {                           // last node, then check whether the next option has any address or it is null, if null, then tmp is
                return -1;              // at last node and there is no next node, thus the searched value is not present in the list.
            }
            tmp = tmp -> next;
            count++;
        }
        count++;  // as count started from 0, because linked list denoted with position not index, and position starts from 1, again count++
        return count;
    }

    /// function to count nodes
    int countNode(Node *head)
    {
        int count = 0;
        Node *tmp = head;
        while (tmp != NULL)
        {
            count++;
            tmp = tmp -> next;
        }
        return count;
    }

    /// function to print the list
    void printList(Node *head)
    {
        Node *tmp = head;
        while(tmp != NULL)
        {
            cout<<tmp -> val;
            if (tmp -> next != NULL)
                cout<<" -> ";
            tmp = tmp -> next;
        }
        cout<<endl;
    }

    /// function to initialize the list with 1 to 5.
    void initialiseList(Node *&head)
    {
        cout<<"List Initialization"<<endl;
        int i, n = 5;
        for (i=1; i<=n; i++)
            insertAtTail(head, i);

        printList(head);
    }

    /// Github link: how not to use another array to store the dupes but store them in a list -> shorturl.at/bcfY2
    /// function to find dupes and print in the function using struct type array
    /*
    void searchByValDupeList(Node *&head, int key)
    {
        Node *tmp = head;

        int size = countNode(head);
        int position[size+1], k = 1; // taking an array with size of list + 1 and k = 1 to traverse the array
        int count = 1;
        int flag = 0;  // to check if the value is present or not
        while(tmp != NULL)
        {
            if(tmp -> val == key)
            {
                position[k] = count;    // placing the count'th position in the array beginning from 1
                k++;                    // increasing the k
                flag = 1;
            }
            tmp = tmp -> next;      // moving to next node
            count++;                // count is increasing because we need to increasing count say 1 2 3 3 4 3 4 and finding 3, so is count is not increasing then it can not find the 4th and 6th 3's
        }
        if(flag == 0) cout<<endl<<"The searched value is not present in the list"<<endl;
        else
        {
            position[0] = k;    // in the 0th position, I am putting the size of k
            cout<<"The value is found at position: ";
            for (int i=1; i<position[0]; i++)
            {
                cout<<position[i];
                if (i<position[0]-1)
                {
                    cout<<", ";
                }
            }
            cout<<endl;
        }
    }
    */

    /// function to return dupes in a list in the main function using a struct type Array
    Array searchDupeListReturn(Node *&head, int key)
    {
        Node *tmp = head;
        Array arr;
        int k = 1, count = 1;

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

    /// insert after a specific value or before a specific value mod: 18 2
    void insertAfterAValueUnique(Node *&head, int searchVal, int val)
    {
        // step 01: find the position of the value after which the entrance value will be inserted
        // for this call the function to find the position of a unique list
        int position = searchByValUniqueList(head, searchVal);

        if (position == -1)
        {
            cout<<"The value you have given is not present in the list"<<endl;;
            return;
        }

        // step 2: now insert the value after or before the the position as you need by position +1 or -1
        // for this, call the function to InsertAtSpecificPos function and provide position to InsertAtSpecificPos
        insertAtSpecificPos(head, position+1, val);
    }

    /// function to delete node at head Mod: 18 3
    void deletionAtHead(Node *&head)
    {
        cout<<"Head Node Deletion "
        <<endl<<"Loading . . . "<<endl;

        Node *tmp = head;

        // if tmp is not null i.e the list is not empty
        if (tmp != NULL)
        {
            // make the next or 2nd node as head
            head = tmp -> next;
            // delete tmp as tmp has the address of 1st node
            delete tmp;

            cout<<"Head node deletion is successful! ";
            printList(head);
            cout<<endl;
        }
        else cout<<"There is no node in the Linked List"<<endl<<endl;
    }

    /// function to delete nodes at tail Mod: 18 4
    void deletionAtTail(Node *&head)
    {
        cout<<"Tail Node Deletion "
        <<endl<<"Loading . . . "<<endl;

        Node *tmp = head;
        /// normal case: deletion of tail
        // if the list is not empty and there is at least 2 nodes (tmp -> next != NULL means present node's next is not NULL)
        if (tmp != NULL && tmp -> next != NULL)
        {
            // traverse untill the previous element of last node as the last node has always null in next
            while (tmp -> next -> next != NULL)
            {
                tmp = tmp -> next;
            }
            // copy the address of last node as tmp is now at the just before the last node, hence tmp -> next has the address of last node
            Node *dellNode = tmp -> next;
            // put NULL in the next of the present i.e just before node of last node, thus the before node will loose the connection with the last node
            tmp -> next = NULL;
            // now delete the pointer that has the address saved of the last node
            delete dellNode;

            // printing the updated nodes
            cout<<"Tail node deletion is successful! ";
            printList(head);
            cout<<endl;
        }

        // checking the corner cases
        else
        {
            // check if the head is null i.e if there is no nodes in the list
            if (tmp == NULL)
            {
                cout<<"There are no nodes in the list."<<endl;
            }

            // check if there is at least second node, if false, i.e if tmp -> next == NULL that means the next of tmp is NULL i.e it is the only node in the list
            // hence head and tail is same, in this case just delete head, thus call deletionAtHead(head) function
            else
            {
                deletionAtHead(head);

                // printing the updated nodes
                cout<<"Tail node deletion is successful! ";
                printList(head);
                cout<<endl;
            }

        }

    }

    /// function to delete node from specific position Mod: 18 5
    void deletionAtSpecificPosition(Node *&head, int pos)
    {
        // create a tmp Node
        Node *tmp = head;

        // check if the head is null, if true then return
        //if (tmp == NULL) is being checked in the main function so, no need to check again in main if condition

        // in this main if condition just check if the position is less than or equal to the total number of nodes count
        if (pos <= countNode(head))
        {
            if (pos == 1)
            {
                deletionAtHead(head);
            }
            // if pos is the n'th node i.e the last node
            else if (pos == countNode(head))  // this is though no necessary because the " else " part can also delete the n'th node
            {
                deletionAtTail(head);
            }
            else
            {
                // step 1: traverse untill the previous node of the specific position
                int i = 1;
                while (i<pos-1)
                {
                    tmp = tmp -> next;
                    i++;
                }

                // now as tmp is at the just before the position Node
                // copy the address of the node that needed to delete in a new pointer
                Node *dellNode = tmp -> next;

                // as dellNode has the address of the node that is needed to be deleted, hence,
                // make a connection to the present node (just before node of the node that will be deleted) and just after node of the node that will be deleted i.e adjacent of position'th node
                tmp -> next = tmp -> next -> next; // (tmp -> next -> next == dellNode -> next)
                delete dellNode;

                // printing the updated list
                cout<<"Deletion of node from specific position is successful! ";
                printList(head);
                cout<<endl;
            }

        }
        else
        {
            // if the inputed position is greater than the total node counts
            // i.e if (pos > countNode(head)) then print below

            cout<<"Position is out of bound. Invalid Position"<<endl;
        }
    }

    /// function to delete a node by value in unique list Mod: 18 6
    void deletionByValueUniqueList(Node *&head, int delVal)
    {
        // step 1: find the pos of the val that need to be deleted
        int pos = searchByValUniqueList(head, delVal);

        // step 2: check if the value is present in the list, if true call function to deletionAtSpecificPosition else the vlaue is not present
        if (pos != -1)
        {
            deletionAtSpecificPosition(head, pos);

            // printing
            cout<<"Deletion by value is successful! ";
            printList(head);
            cout<<endl;
        }
        else
        {
            cout<<"The value is not present in the list"<<endl;
        }
    }

    /*
    // function to reverse a list non recursive
    Node* reverseListNonRecursive(Node *&head)
    {
        Node *prev = NULL;
        Node *current = head;
        if (head == NULL)
        {
            cout<<"The list is empty"<<endl;
            return head;
        }
        Node *Next = head -> next;

        while (true)
        {
            current -> next = prev;
            prev = current;
            current = Next;
            if (current == NULL) break;
            Next = Next -> next;
        }
        return prev;
    }
    */
    // easy and short code non recursive
    // function to reverse a list non recursive
    Node* reverseListNonRecursive(Node *&head)
    {
        Node *prev = NULL, *curr = head, *Next = NULL;
        while (curr != NULL)
        {
            Next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = Next;
        }

        if (head == NULL)
            cout<<"The list is empty"<<endl;

        return prev;
    }

    // function to reverse list with recursion
    Node* reverseListRecursive(Node *&head)
    {
        // step 01: Base Case
        //put condition that if head -> next or head == NULL then return head
        if (head == NULL || head -> next == NULL)
        {
            // put the prompt in another if because if we want to put the both main condition in one if and return head
            // then each time the prompt will be printed. So, if head == null, then the command will be in main if and 2nd
            // if will be exwcuted. And if head != null then 2nd if will not be executed.
            // if you do not want to make it like this then put the main two if condition if two seperate if and in both case return head.
            if (head == NULL) cout<<"The list is empty"<<endl;
            return head;
        }

        // step 02: Recursive Call
        // receive the returned value of the recursive call in a new node.
        // this new node is new Head and head -> next -> next is the newHead.
        // so, put the head in newHead -> next as written in upper line and put null in head's next
        // thus the right - most node is now pointing to adjacent left node and it has the null is its next
        // as head -> next = NULL is given.
        // in this way, the right - most node will have left node's address and left node's next field will have null
        // continuously and at last, the original head node's next field will have null and
        // the nodes will be linked from right side to left side

        Node *newHead = reverseListRecursive(head -> next);
        head -> next -> next = head;
        head -> next = NULL;

        // newHead is the right - most node, so, this is the new head, hence return it and update it in main as new head.
        // in main the left - most node is now head, after receive newHead in head in main, head will be repleced to the
        // right - most node
        return newHead;
    }

    // function to find mid value of a linked list
    int findMidVal(Node *head)
    {
        // corner case: if head is NULL; then return -1, if node is being returned then return head itself
        if (head == NULL) return -1;

        // step 01: take two pointer named slow and fast pointing to head both
        Node *slow = head;
        Node *fast = head;

        // run a loop until fast  is not NULL and fast->next is also not NULL
        // step 02: move fast pointer by twice than slow pointer
        while (fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        // return slow -> value if want to see the mid value.
        // if the position of mid node is needed, then return entire node of slow or take a Count
        // variable and return count

        // returning slow -> val to see the mid val
        return slow -> val;
    }

    // function to find mid position of a linked list
    // if I return the entire node from function, then how to receive it in main function
    int findMidPos(Node *head)
    {
        int count = 1;
        // corner case: if head is NULL; then return -1, if node is being returned then return head itself
        if (head == NULL) return -1;

        // step 01: take two pointer named slow and fast pointing to head both
        Node *slow = head;
        Node *fast = head;

        // run a loop until fast  is not NULL and fast->next is also not NULL
        // step 02: move fast pointer by twice than slow pointer
        while (fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            count++;
        }

        // return slow -> value if want to see the mid value.
        // if the position of mid node is needed, then return entire node of slow or take a Count
        // variable and return count

        return count;

        //return slow;
    }

    // function to create a cycle
    void makeCycle(Node *&head, int pos)
    {
        // step 01: create a tmp node and startNode pointing to NULL to catch starting node to create the ccycle and count = 1
        Node *tmp = head;
        Node *startNode = NULL;
        int count = 1;

        // step 02: drive a while loop until the last node, do not go to NULL
        while(tmp -> next != NULL)
        {
            // Corner Case: Keep a check if count == pos, if true, store the node's address in the startNode pointer
            if (count == pos) startNode = tmp;
            tmp = tmp -> next;
            count++;
        }
        // step 03: as now tmp is at the last node, override its -> next field from NULL to the startNode node's address
        // now the last node will be pointing to the node == pos and run infinity as no NULL between them
        tmp -> next = startNode;

    }

    int main() {
        Node *head = NULL;

        cout<<"Choice 1: InsertAtHead"
            <<endl<<"Choice 2: InsertAtTail"
            <<endl<<"Choice 3: InsertAtSpecificPos"
            <<endl<<"Choice 4: SearchByValUniqueList(Unique List)"
            <<endl<<"Choice 5: SearchByValUniqueList(Dupe list returned from function)"
            <<endl<<"Choice 6: Initialise List with 1 to 5"
            <<endl<<"Choice 7: Insert A Value After Specific Value(Unique List)"
            <<endl<<"Choice 8: Deletion At Head"
            <<endl<<"Choice 9: Deletion At Tail"
            <<endl<<"Choice 10: Deletion At Specific Position"
            <<endl<<"Choice 11: Deletion By Value (Unique List)"
            <<endl<<"Choice 12: Reverse List (Non Recursive 3 pointer Method)"
            <<endl<<"Choice 13: Reverse List (Recursive Method)"
            <<endl<<"Choice 14: Find Mid Value Of List (Slow - Fast Pointer Method)"
            <<endl<<"Choice 15: Find Mid Position Of List (Slow - Fast Pointer Method)"
            <<endl<<"Choice 16: Make A Cycle (At k'th Position)"
            <<endl<<"Choice 17: Print the List"
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

                case 3:
                    cout<<"Input the position: ";
                    cin>>pos;
                    cout<<"Input the value: ";
                    cin>>val;
                    insertAtSpecificPos(head, pos, val);
                    break;

                case 4:
                    cout<<"Input the value to search: ";
                    cin>>val;
                    pos = searchByValUniqueList(head, val);
                    if(pos != -1) cout<<"The position of the value is "<<pos<<endl;
                    else cout<<"The value is not present in the list"<<endl;
                    break;

                /*
                case 5:
                    cout<<"Input the value to search: ";
                    cin>>val;
                    searchByValDupeList(head, val);
                    break;
                */

                case 5:
                    cout<<"Input the value to search: ";
                    cin>>val;
                    Array arr;
                    arr = searchDupeListReturn(head, val);
                    if (arr.position[0] == 1)
                    {
                        cout<<"The value is not present in the list"<<endl;
                    }
                    else
                    {
                        int size = arr.position[0];
                        cout<<"The value "<<val<<" is found at: ";
                        for (int i=1; i<size; i++)
                        {
                            cout<<arr.position[i];
                            if (i<arr.position[0]-1) // or if (i<size-1)
                            {
                                cout<<", ";
                            }
                        }
                        cout<<" positions"<<endl;
                    }
                    break;

                case 6:
                    initialiseList(head);
                    break;

                case 7:
                    cout<<"Enter the value after which you want to insert: ";
                    int searchVal;
                    cin>>searchVal;
                    cout<<"Enter the value to insert: ";
                    cin>>val;
                    insertAfterAValueUnique(head, searchVal, val);
                    break;

                case 8:
                    deletionAtHead(head);
                    break;

                case 9:
                    deletionAtTail(head);
                    break;

                case 10:
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

                case 11:
                    cout<<"Enter the value to delete: ";
                    int delVal;
                    cin>>delVal;
                    deletionByValueUniqueList(head, delVal);
                    break;

                case 12:
                    head = reverseListNonRecursive(head);
                    printList(head);
                    break;

                case 13:
                    head = reverseListRecursive(head);
                    printList(head);
                    break;

                case 14:
                    int mid;
                    mid = findMidVal(head);
                    if (mid != -1) cout<<"The mid value is "<<mid<<endl;
                    else
                        cout<<"The linked list is empty "<<endl;
                    break;

                case 15:
                    mid = findMidPos(head);
                    if (mid != -1) cout<<"The mid position is "<<mid<<endl;
                    else
                        cout<<"The linked list is empty "<< endl;
                    break;

                case 16:
                    cout<<"Enter the position to create the cycle: ";
                    cin>>pos;
                    makeCycle(head, pos);
                    printList(head);
                    break;

                case 17:
                    cout<<"Printing the list: ";
                    printList(head);
                    break;

                default:
                    break;
            }
            cout<<"Next Choice: ";
            cin>>choice;
        }

        cout<<"Nodes are: ";
        printList(head);

        cout<<"Count of Nodes: "<<countNode(head)<<endl;


        return 0;
    }
















