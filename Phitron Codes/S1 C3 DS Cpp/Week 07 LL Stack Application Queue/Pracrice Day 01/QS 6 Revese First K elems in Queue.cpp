

                        // LB Class 61: QS 2
                        // pr day 01: week 07: QS 6
                        // reverse first k elements of a queue
    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"
    #include"MYSTACKGEN.h"
    using namespace std;

                                /*
                                Approach:
                                    1. Traverse k times of the queue and pop the queue and push in a stack;
                                    2. In the pop again and push in the queue.
                                    3. Find q.size - k which is the front queue elements that needed to be push again back.
                                    4. Run loop i=1; i<=q.size() - k and pop form queue and push again in the queue.

                                    TC -> O(n)
                                    SC -> O(k) == as k size auxilary stack has been created
                                */


    Queue<int> revFIrstKElements(Queue<int> q, int k)
    {
        Stack<int> st;
        // pop first k elements of the Queue and push those in a stack

        for(int i=1; i<=k; i++)
        {
            int val = q.pop();
            st.push(val);
        }

        // run another loop until stack is not empty, pop stack elements and push in the Queue
        while(!st.empty())
        {
            int val = st.pop();
            q.push(val);
        }

        // if the original q was like 1 2 3 4 5
        // then now the queue would be like as 4 5 3 2 1. But we need 3 2 1 4 5. hence, the first two elements needed
        // to be pushed in the back. if the Queue size is n, then the first two element's size is n-k as k is
        // the size to reverse. so, run a loop util n-k and pop the elements of the q and push them back in the Queue
        // as pop happens in the front and push happens in the back of a Queue
        //int qSize = q.size();
        int subSize = q.size() - k;
        // for loop approach
        /*
        for (int i=1; i<=subSize; i++)
        {
            int val = q.pop();
            q.push(val);
        }
        */
        // while loop approach
        while(subSize--)
        {
            int val = q.Front();
            q.pop();
            q.push(val);
        }

        return q;

    }

    int main() {


        Queue <int> q;
        int i, n, val, k;
        cout<<"Input length of Queue and k to reverse first k elements of the Queue: ";
        cin>>n>>k;
        cout<<"Input Queue elements: "<<endl;
        for(i=0; i<n; i++)
        {
            cin>>val;
            q.push(val);
        }

        q = revFIrstKElements(q, k);
        q.display();

        return 0;
    }
