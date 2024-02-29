


            /// 17 3 Insert Node At A Specific Position 120822, Friday, 08.00 am
            // module date: 060822, Saturday



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
    int countNode(Node *head);
    void printList(Node *head);



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
        // traversing before the previous element of the desired pos i.e -2 pos then the desired pos
        while(i<pos-2)
        {
            tmp = tmp -> next;
            i++;
        }

        // creating new node
        Node *newNode = new Node(val);
        // copying the address of next node of the specific pos that is present tmp -> next to newNode -> next
        newNode -> next = tmp -> next;
        //now copying the address of newNode into present node's next overriding the previous address
        tmp -> next = newNode;
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


    int main() {
        Node *head = NULL;

        cout<<"Choice 1: InsertAtHead"
            <<endl<<"Choice 2: InsertAtTail"
            <<endl<<"Choice 3: insertAtSpecificPos"
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
            }
            cout<<"Next Choice: ";
            cin>>choice;
        }

        cout<<"Nodes are: ";
        printList(head);

        cout<<"Count of Nodes: "<<countNode(head)<<endl;



        return 0;
    }
