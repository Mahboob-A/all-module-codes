


    /// D - D 15 - 4 Linked list creation (030822, 10.30 am)
    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
    public:

        int value;
        Node *next;

    };

    void displayList (Node *n)
    {
        while (n != NULL)
        {
            cout<<n -> value;

            if (n -> next != NULL)
                cout<<" -> ";
            n = n -> next;
        }
    }



    int main() {

        // creating nodes

        Node *head = new Node();
        Node *second = new Node();
        Node *third = new Node();
        Node *fourth = new Node();

        // assigning values
        head -> value = 1;
        second -> value = 5;
        third -> value = 8;
        (*fourth).value = 9;

        // linking nodes
        head -> next = second;
        second -> next = third;
        (*third).next = fourth;
        fourth -> next = NULL;

        displayList(head);


        return 0;
    }



    ///



    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {

    public:
        int value;
        Node *next;

    };

    void display(Node *n)
    {
        while (n != NULL)
        {
            cout<<n -> value;
            if (n -> next != NULL)
                cout<<" -> ";

            n = n -> next;
        }


    }


    int main() {


        /*
        Node *head = new Node();
        Node *secod = new Node;   // both are same
        */
        Node *head = new Node();
        Node *secod = new Node;
        Node *third = new Node;
        Node *fourth = new Node;
        Node *fifth = new Node;

        head -> value = 1;
        secod -> value = 5;
        third -> value = 10;
        fourth -> value = 15;
        fifth -> value = 20;

        head -> next = secod;
        secod -> next = third;
        third -> next = fourth;
        fourth -> next = fifth;
        fifth -> next = NULL;

        display(head);



        return 0;
    }
