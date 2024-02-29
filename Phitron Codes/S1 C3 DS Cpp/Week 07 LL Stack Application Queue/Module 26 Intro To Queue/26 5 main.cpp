


            /// 26-5 Linked List implementation of Queue | Part 2 || MAIN of header file
            // 310822, Wednesday, 08.00 pm


    #include <bits/stdc++.h>
    #include"MYQUEUE.h"
    using namespace std;

    int main () {

        Queue q;

        int n;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            q.enque(val);
        }

        cout<<endl;

        while(!q.empty())
        {
            cout<<q.deque()<<endl;
        }


        cout<<q.Front()<<endl;
        cout<<q.Back()<<endl;














    return 0;
    }
