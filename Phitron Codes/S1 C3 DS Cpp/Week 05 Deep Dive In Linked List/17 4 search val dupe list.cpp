

    /// 17 4 part 1 130822, Saturday
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
    void insertAtSpecificPos(Node *&head, int pos, int val);
    int searchByValUniqueList(Node *&head, int key);
    void printList(Node *head);
    void initialiseList(Node *&head);
    int countNode(Node *head);


    void insertAtHead(Node *&head, int val)
    {
        Node *newNode = new Node(val);
        newNode -> next = head;
        head = newNode;
    }

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

    // insertion at a specific position
    void insertAtSpecificPos(Node *&head, int pos, int val)
    {
        int i = 0;
        Node *tmp = head;
        // creating new node
        Node *newNode = new Node(val); // if the deaisred position to insertion is the 1 or the head'th position
        if (pos == 1)
        {
            Node *prev_head_address = head;
            head = newNode;
            head -> next = prev_head_address;
            return;
        }


        // traversing before the previous element of the desired pos i.e -2 pos then the desired pos
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

    // function to count nodes
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

    // function to initialize the list with 1 to 5.
    void initialiseList(Node *&head)
    {
        cout<<"List Initialization"<<endl;
        int i, n = 5;
        for (i=1; i<=n; i++)
            insertAtTail(head, i);

        printList(head);
    }

    void searchByValDupeList(Node *&head, int key)
    {
        Node *tmp = head;
        int count = 1;
        int flag = 0, incriment = 1;
        while(tmp != NULL)
        {
            if(tmp -> val == key)
            {
                cout<<"The pos of "<<incriment<<"'th val "<<count<<endl;
                flag = 1;
                incriment++;
            }
            tmp = tmp -> next;
            count++;
        }
        if(flag == 0) cout<<"\nThe searched value is not present in the list"<<endl;
    }


    int main() {
        Node *head = NULL;

        cout<<"Choice 1: InsertAtHead"
            <<endl<<"Choice 2: InsertAtTail"
            <<endl<<"Choice 3: InsertAtSpecificPos"
            <<endl<<"Choice 4: SearchByValUniqueList(unique list)"
            <<endl<<"Choice 5: SearchByValUniqueList(dupe list)"
            <<endl<<"Choice 6: Initialise List with 1 to 5"
            <<endl<<"Choice 7: Print the List"
            <<endl<<"Choice 3: Stop";

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
                    if(pos != -1) cout<<"The position of the value is "<<val<<endl;
                    else cout<<"The value is not present in the list"<<endl;
                    break;

                case 5:
                    cout<<"Input the value to search: ";
                    cin>>val;
                    searchByValDupeList(head, val);
                    break;

                case 6:
                    initialiseList(head);
                    break;

                case 7:
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

