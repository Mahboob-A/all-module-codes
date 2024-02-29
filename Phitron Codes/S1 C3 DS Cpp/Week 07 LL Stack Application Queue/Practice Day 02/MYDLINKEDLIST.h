
    #include <bits/stdc++.h>
    #include"MYDLL.h"  // including doubly ll header file
    using namespace std;

    template<typename L>
    class dLinkedList
    {
        dNode<L>*head;

    public:
        dLinkedList()
        {
            head = NULL;
        }

        // insertAtHead
        void insertAtHead(L dNode *&head, L val)
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
        void insertAtTail(L dNode *&head, L val)
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

        // printList
        void printList(L dNode *&head, L val)
        {
            dNode<L>*tmp = head;
            while(tmp != NULL)
            {
                cout<<tmp->val;
                if(tmp->next != NULL)
                {
                    cout<<" -> ";
                }
                tmp = tmp --> next;
            }
            cout<<endl;
        }

        // countNode
        int countNode(L dNode *&head)
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
