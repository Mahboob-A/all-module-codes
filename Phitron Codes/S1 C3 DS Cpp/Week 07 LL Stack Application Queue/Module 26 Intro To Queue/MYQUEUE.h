


                /// MYQUEUE Header || 26 5
                // 310822, Wednesday, 07.00 pm




    /// 26-4 Linked List implementation of Queue | Part 1
    // 310822, Wednesday, 07.00 pm


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
    public:
        // step 01: take two node type pointer as front and rear as front will point to the head part and rear will point to the tail part
        Node *front, *rear;

        // step 02: now create a empty Queue constructor to make front and rear NULL whenever we create any object with the Queue class
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

        // deque or pop() function
        int deque()
        {
            // take a retrnVal to return and initialize it with -1;
            int retrnVal = -1;

            // check if rear is null, then there is no element is the queue and return -1 as in delNode;
            if (rear == NULL)
            {
                cout<<"Queue Underflow | No element in the queue"<<endl;
                return retrnVal;
            }

            // take a delNode and copy front in delNode as deletion will be from front side
            Node *delNode = front;

            // update front to front -> next
            front = front -> next;

            // check if front is now NULL after the updation, then make rear also NULL
            if (front == NULL)
            {
                rear = NULL;
            }

            // copy delNode's val in retrnVal
            retrnVal = delNode -> val;

            // delete delNode
            delete delNode;

            // return retrnVal
            return retrnVal;
        }

        // if the queue is empty, then after the cout, both Front and Back function is returning garbage, fix it.
        // front function
        int Front()
        {
            if (front != NULL)
            {
                return front -> val;
            }
            else
            {
                cout<<"Queue Underflow"<<endl;
            }
        }

        // back function
        int Back()
        {
            if (rear != NULL)
            {
                return rear -> val;
            }
            else
            {
                cout<<"Queue Underflow"<<endl;
            }
        }

        // empty function
        bool empty()
        {
            if (front == NULL && rear == NULL)
                return true;
            else
                return false;
        }
    };




