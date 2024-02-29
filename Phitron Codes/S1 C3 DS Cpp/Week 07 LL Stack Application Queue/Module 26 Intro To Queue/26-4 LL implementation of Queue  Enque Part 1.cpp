


            /// 26-4 LL implementation of Queue  Enque Part 1.cpp


    /// 26-4 Linked List implementation of Queue | Part 1
    // 310822, Wednesday, 07.00 pm

    #include <bits/stdc++.h>
    using namespace std;

    // as the queue would be implemented in linked list, then create a LLL
    class Node
    {
    public:
        int val;
        Node *next;

        Node (int val)
        {
            this -> val = val;
            this -> next = NULL;
        }
    };

    // now create a class for queue and implemente the operations here
    class Queue
    {
        // step 01: take two node type pointer as front and rear as front will point to the head part and rear will point to the tail part
        Node *front, *rear;

        // step 02: now creare a empty Queue constructor to make front and rear NULL whenever we creare any object with the Queue class
        Queue()
        {
            front = NULL;
            rear = NULL;
        }

        // now create operations: in STL queue, enqueue is -> push, dequeue is -> pop and peek or top has two seperate function i.e front as head value and back as rear value
        // so use function name any of your choice enqueue or push and dequeue or pop

        // enque function --> or push()
        void enque(int val)
        {
            Node *newNode = new Node(val);
            if (front == NULL)
            {
                front = rear = newNode;
                return;
            }
            rear -> next = newNode;
            rear = newNode; // rear = rear -> next;
        }



    };





    int main () {






        return 0;
    }
