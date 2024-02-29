

/*

linked list practice: 171222, Saturday, 11.50 pm
Phitron Internship Opportunity

*/

    #include <iostream>
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
    void initializeList(Node *&head);
    void displayList(Node *head);
    void insertAtSpecificPosition(Node *&head, int pos, int val);
    int searchByValueUniqueList(Node *&head, int key);
    int countNode(Node *&head);
    void searchByValueDupeList(Node *&head, int key);
    int findMidPositon(Node *&head);
    void makeCycleInList(Node *&head, int pos);
    bool detectCycleInList(Node *&head);
    void removeCycleFromList(Node *&head);
    void revPrintListRecurse(Node *head);


    void insertAtHead(Node *&head, int val)
    {
        Node *newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            return;
        }

        newNode-> next = head;
        head = newNode;

    }

    void insertAtTail(Node *&head, int val)
    {
        Node *newNode = new Node(val);
        if(head == NULL)
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

    void initializeList(Node *&head)
    {
        for(int i=1; i<=5; i++)
        {
            insertAtTail(head, i);
        }
    }

    void displayList(Node *head)
    {
        Node *tmp = head;
        while(tmp != NULL)
        {
            cout<<tmp -> val;
            if(tmp -> next != NULL)
                cout<<"-> ";
            tmp = tmp -> next;
        }
    }

    void insertAtSpecificPosition(Node *&head, int pos, int val)
    {
        Node *newNode = new Node(val);
        if(head == NULL && pos < 1)
        {
            cout<<"No previous nodes in the list, you can only add at position 1"<<endl;
            return;
        }
        if(pos == 1)
        {
            newNode -> next = head;
            head = newNode;
            return;
        }

        int i = 0;
        Node *tmp = head;
        while(i<pos-2)
        {
            tmp = tmp -> next;
            i++;
        }

        newNode -> next = tmp -> next;
        tmp -> next = newNode;

    }

    int searchByValueUniqueList(Node *&head, int key)
    {
        Node *tmp = head;
        int count = 1;

        if(head == NULL)
            return -1;

        while(tmp -> val != key)
        {
            if(tmp -> next == NULL)
                return -1;

            tmp = tmp -> next;
            count++;

        }
        return count;
    }

    int countNode(Node *&head)
    {
        Node *tmp = head;
        if(head == NULL)
            return -1;

        int count = 1;
        while(tmp != NULL)
        {
            tmp = tmp -> next;
            count++;
        }
        return count;
    }

    void searchByValueDupeList(Node *&head, int key)
    {
        int size = countNode(head);
        int positions[size+1];
        int count = 1, k = 1, flag = 0;
        Node *tmp = head;

        if(head == NULL)
            return;

        while(tmp != NULL)
        {
            if(tmp -> val == key)
            {
                positions[k] = count;
                flag = 1;
                k++;
            }
            tmp = tmp -> next;
            count++;
        }

        if(flag == 0)
            cout<<"No nodes available in the list with the "<<key<<endl;
        else
        {
            positions[0] = k;
            for(int i=1; i<positions[0]; i++)
            {
                cout<<positions[i];
                if(i<positions[0]-1)
                    cout<<"-> ";
            }
            cout<<endl;
        }

    }


    int findMidPositon(Node *&head)
    {
        if(head == NULL)
            return -1;

        int count = 1;
        Node *fast = head, *slow = head;
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            count++;
        }
        return count;
    }

    void makeCycleInList(Node *&head, int pos)
    {
        if(head == NULL || head -> next != NULL)
            return;
        Node *tmp = head;
        Node *startNode = NULL;
        int count = 1;
        while(tmp -> next != NULL)
        {
            if(count == pos)
                startNode = tmp;
            tmp = tmp -> next;
            count++;
        }
        tmp -> next = startNode;
    }

    bool detectCycleInList(Node *&head)
    {
        if(head == NULL)
            return false;
        Node *slow = head, *fast = head;
        while(fast != NULL && fast -> next != NULL)
        {
            if(slow -> next == fast -> next)
                return true;
        }
        return false;
    }

    void removeCycleFromList(Node *&head)
    {
        Node *slow = head, *fast = head;

        do{
            slow = slow -> next;
            fast = fast -> next -> next;
        }while(slow != fast);

        fast = head;

        while(slow -> next != fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next;
        }
        slow -> next = NULL;
    }

    void revPrintListRecurse(Node *head)
    {
        if(head == NULL)
            return;
        Node *tmp = head;
        revPrintListRecurse(head -> next);
        cout<<head -> val<<" ";
    }


    int main () {

        Node *head = NULL;
        initializeList(head);
        displayList(head);
        cout<<endl;
        for(int i=1; i<=5; i++)
        {
            int x;
            cin>>x;
            insertAtHead(head, x);
        }
        displayList(head);
        cout<<endl;
        searchByValueDupeList(head, 6);
        cout<<endl;
        displayList(head);
        int mid = findMidPositon(head);
        cout<<"\nMid pos is : "<<mid<<endl;
        //makeCycleInList(head, 4);
        //bool cycle = detectCycleInList(head);
        //if(cycle) cout<<"The list has cycle "<<endl;
        //else cout<<"The list has no cycle "<<endl;
        //removeCycleFromList(head);
        //cycle = detectCycleInList(head);
        //if(cycle) cout<<"The list has cycle "<<endl;
        //else cout<<"The list has no cycle "<<endl;
        cout<<endl;
        revPrintListRecurse(head);



        return 0;
    }
