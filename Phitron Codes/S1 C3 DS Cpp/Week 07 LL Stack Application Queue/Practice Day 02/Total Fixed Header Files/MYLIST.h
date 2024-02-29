


    // header file for doubly linked list
    // 030922, Saturday, 08.30 pm
    #include <bits/stdc++.h>
    #include"MYDLL.h"
    using namespace std;

    template<typename L>
    class dLinkedList
    {
        dNode<L>*head;
        dNode<L>*tail;

    public:
        dLinkedList()
        {
            head = NULL;
        }

        // insertAtHead
        void insertAtHead(L val)
        {
            dNode<L>*newNode = new dNode<L>(val);
            if(head == NULL)
            {
                head = newNode;
                return;
            }

            newNode -> next = head;
            head -> prev = newNode;
            head = newNode;
        }

        // insertAtTail
        void insertAtTail(L val)
        {
            dNode<L>*newNode = new dNode<L>(val);
            if(head == NULL)
            {
                head = newNode;
                return;
            }

            dNode<L>*tmp = head;
            while(tmp -> next != NULL)
            {
                tmp = tmp -> next;
            }

            tmp -> next = newNode;
            newNode -> prev = tmp;
        }

        // deteleAtHead
        void delAtHead()
        {
            dNode<L>*tmp = head;
            if(tmp == NULL)
            {
                cout<<"LIST IS EMPTY"<<endl;
                return;
            }
            head = tmp -> next;
            delete tmp;
        }

        // deleteAtTail
        void delAtTail()
        {
            dNode<L>*tmp = head;
            if(tmp != NULL && tmp -> next != NULL)
            {
                while(tmp-> next -> next != NULL)
                {
                    tmp = tmp -> next;
                }
                dNode<L>*delNode = tmp -> next;
                tmp -> next = NULL;
                delete delNode;
            }
            else
            {
                delAtHead();
            }

        }

        // printList
        void printList()
        {
            dNode<L>*tmp = head;
            while(tmp != NULL)
            {
                cout<<tmp->val;
                if(tmp->next != NULL)
                {
                    cout<<" -> ";
                }
                tmp = tmp -> next;
            }
            cout<<endl;
        }

        // countNode
        int size()
        {
            int count = 0;
            dNode<L>*tmp = head;
            while(tmp != NULL)
            {
                count++;
                tmp = tmp -> next;
            }
            cout<<endl;
            return count;
        }
    };
