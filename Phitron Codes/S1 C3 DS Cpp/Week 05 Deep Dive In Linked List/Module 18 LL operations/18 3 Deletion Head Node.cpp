

            // 130822, Saturday
            /// 18 2 insert after a specific value

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
        int position[100];
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
        if (tmp == NULL) // corner case 1: chekc whether the list is empty or not, if empty, then return -1.
        {
            return -1;
        }

        while(tmp -> val != key)
        {
            if(tmp -> next == NULL)  // corner case 2: check if the searched value is not present in the list and tmp is at the last
            {                           // last node, then chekc wheter the next option has any address or it is null, if null, then tmp is
                return -1;              // at last node and there is no next node, thus the searched vlaue is not present in the list.
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
        if (tmp != NULL)
        {
            head = tmp -> next;
            delete tmp;
            cout<<"Head deletion successful! ";
            printList(head);
            cout<<endl;
        }
        else cout<<"There is not node in the Linked List"<<endl<<endl;
    }

    int main() {
        Node *head = NULL;

        cout<<"Choice 1: InsertAtHead"
            <<endl<<"Choice 2: InsertAtTail"
            <<endl<<"Choice 3: InsertAtSpecificPos"
            <<endl<<"Choice 4: SearchByValUniqueList(unique list)"
            <<endl<<"Choice 5: SearchByValUniqueList(dupe list returned from function)"
            <<endl<<"Choice 6: Initialise List with 1 to 5"
            <<endl<<"Choice 7: Insert A Value After Specific Value(unique list)"
            <<endl<<"Choice 8: Deletion At Head"
            <<endl<<"Choice 9: Print the List"
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


