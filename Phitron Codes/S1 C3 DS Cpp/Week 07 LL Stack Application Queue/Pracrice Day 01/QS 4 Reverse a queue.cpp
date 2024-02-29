


            /// QS 4 Reverse A Queue
            // 020922, 07.00 am
        // LB Class 61: Queue Revalsal
        /*
        Approach 1: Below code
            1. Take input in queue.
            2. Take a stack, pop from from queue, and push in stack.
            3. Pop from stack and push in queue.
        Approach 2:
            Use recursion.

        Approach 3:
            Use 3 pointer prev, curr, next method.

        */


    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"

    using namespace std;

    Queue<int> revQueue(Queue<int> q)
    {
        stack<int>st;
        while(!q.empty())
        {
            int val = q.pop();
            st.push(val);
        }
        while(!st.empty())
        {
            int val = st.top();
            st.pop();
            q.push(val);
        }
        return q;


    }

    int main() {


        Queue <int> q;
        int i, n, val;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>val;
            q.push(val);
        }

        q = revQueue(q);
        q.display();

        return 0;
    }
