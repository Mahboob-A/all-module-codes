


            /// 22 2 Stack with LL O 1 TC Head as Top
            // 220822, Monday, 10.30 pm





    #include <bits/stdc++.h>
    using namespace std;

    class Node
    {
    public:
        int val;
        Node *next;

        Node (int val)
        {
            this -> val = val;
            next = NULL;
        }
    };

    Node *head = NULL;

    // function to push in stack n O(1) TC head as top || head is is not always pointing the element that was IN at first, rather head is always
    // being changed to the element that is IN at last i.e the element that has been pushed the last time or recently> Hence, we can make
    // head to the next node and delete the recent node
    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode -> next = head;
        head = newNode;
        cout<<"push() is done"<<endl;
    }

    // function to pop in stack i
    void pop(void)
    {
        if (head == NULL)
        {
            cout<<"The stack is empty"<<endl;
        }
        else
        {
            cout<<"The element deleted: "<<head->val<<endl;
            Node *tmp = head;
            head = head -> next;
            delete tmp;
            cout<<"pop() is done"<<endl;
        }
    }

    // function to see the top element
    void peek(void)
    {
        if (head != NULL)
        {
            cout<<head->val<<endl;
        }
    }

    int main() {

        int n, i, val;
        cin>>n;
        for (i=0; i<n; i++)
        {
            cin>>val;
            push(val);
        }

        peek();
        pop();
        pop();
        pop();
        pop();








        return 0;
    }
