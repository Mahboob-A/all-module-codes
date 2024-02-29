




            /// QS 4 Reverse A Queue also in week 07 pr day 01.
            // 020922, 07.00 am


        // LB Class 61: Queue Revalsal
    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"
    #include"MYNODE.h"
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

