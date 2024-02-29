


            /// 26 2 Queue in array code
            // 310822, Wednesday, 05.00 pm



            /// this code has much bug, please fix, these functions are not logically done


            /// working code below

    #include <bits/stdc++.h>
    using namespace std;

    #define size 6

    class Queue
    {
    public:
        int arr[size] = {0};
        int first = -1, rear = -1;


        // function to enqueue
        void enq(int val)
        {
            if (first == -1 && rear == -1)
            {
                first++;
                rear++;
                arr[rear] = val;
            }
            int pos = rear+1 % size;
            if (pos != first)
            {
                arr[pos] = val;
                rear = pos;
            }
            else
                cout<<"Queue Overloaded"<<endl;
        }

        // function to dequeue
        int deq()
        {
            int retrnVal;
            if (arr[first] == 0 && first == rear)
            {
                cout<<"Queue Overloaded"<<endl;
                return -1;
            }
            else
            {
                retrnVal = arr[first];
            }

            if (rear != first)
            {
                first = first+1 % size;
            }
            else
            {
                arr[first] = 0;
            }

            return retrnVal;
        }

        // peek
        int peek()
        {
            if (first == -1)
            {
                cout<<"Queue is Empty"<<endl;
            }
            else
            {
                return arr[first];
            }
        }

    };



    int main () {

        Queue qs;
        int n = 5;
        for (int i=1; i<=n; i++)
        {
            int val = i;
            qs.enq(val);
        }

        qs.deq();
        cout<<qs.peek()<<endl;



        return 0;
    }


    /// working code


                    // Circular Queue implementation in C++

        #include <iostream>
        #define SIZE 5 /* Size of Circular Queue */

        using namespace std;

        class Queue {
           private:
          int items[SIZE], front, rear;

           public:
          Queue() {
            front = -1;
            rear = -1;
          }
          // Check if the queue is full
          bool isFull() {
            if (front == 0 && rear == SIZE - 1) {
              return true;
            }
            if (front == rear + 1) {
              return true;
            }
            return false;
          }
          // Check if the queue is empty
          bool isEmpty() {
            if (front == -1)
              return true;
            else
              return false;
          }
          // Adding an element
          void enQueue(int element) {
            if (isFull()) {
              cout << "Queue is full";
            } else {
              if (front == -1) front = 0;
              rear = (rear + 1) % SIZE;
              items[rear] = element;
              cout << endl
                 << "Inserted " << element << endl;
            }
          }
          // Removing an element
          int deQueue() {
            int element;
            if (isEmpty()) {
              cout << "Queue is empty" << endl;
              return (-1);
            } else {
              element = items[front];
              if (front == rear) {
                front = -1;
                rear = -1;
              }
              // Q has only one element,
              // so we reset the queue after deleting it.
              else {
                front = (front + 1) % SIZE;
              }
              return (element);
            }
          }

          void display() {
            // Function to display status of Circular Queue
            int i;
            if (isEmpty()) {
              cout << endl
                 << "Empty Queue" << endl;
            } else {
              cout << "Front -> " << front;
              cout << endl
                 << "Items -> ";
              for (i = front; i != rear; i = (i + 1) % SIZE)
                cout << items[i];
              cout << items[i];
              cout << endl
                 << "Rear -> " << rear;
            }
          }
        };

        int main() {
          Queue q;

          // Fails because front = -1
          q.deQueue();

          q.enQueue(1);
          q.enQueue(2);
          q.enQueue(3);
          q.enQueue(4);
          q.enQueue(5);

          // Fails to enqueue because front == 0 && rear == SIZE - 1
          q.enQueue(6);

          q.display();

          int elem = q.deQueue();

          if (elem != -1)
            cout << endl
               << "Deleted Element is " << elem;

          q.display();

          q.enQueue(7);

          q.display();

          // Fails to enqueue because front == rear + 1
          q.enQueue(8);

          return 0;
        }

