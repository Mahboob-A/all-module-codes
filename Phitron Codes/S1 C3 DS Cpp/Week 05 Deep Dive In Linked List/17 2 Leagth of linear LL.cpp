


            /// 17 2 Length Of A Linear Linked List 120822, Friday, 07.30 am
            // module date 060822, Saturday.



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
            newNode = head;
            return;
        }
        Node *tmp = head;
        while(tmp -> next != NULL)
        {
            tmp = tmp -> next;
        }
        tmp -> next = newNode;
    }

    /// function to find length of a linked list
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
            <<endl<<"Choice 3: Stop";

        int choice;
        cout<<"\n\nInput Choice: ";
        cin>>choice;

        while(choice != 0)
        {
            int val;
            cout<<"Input value: ";
            cin>>val;

            switch(choice)
            {
                case 1:
                    insertAtHead(head, val);
                    break;
                case 2:
                    insertAtTail(head, val);
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
