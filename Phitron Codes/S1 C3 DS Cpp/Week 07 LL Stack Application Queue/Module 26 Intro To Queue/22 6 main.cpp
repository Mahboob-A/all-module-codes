


                            /// 266MYQUEUEGEN.h

            /// 26-6 Generic implementation of Queue
            // 310822, Wednesday, 09.00 pm



    #include <bits/stdc++.h>
    #include"266MYQUEUEGEN.h"
    using namespace std;


    // declaring a pair type datatype


    int main () {

        Queue <pair<int, int>> q;
        //typedef pair<int, int>pairType;
        int n;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            int p1, p2;
            cin>>p1>>p2;
            q.enque(make_pair(p1, p2));

        }

        cout<<endl;



        while(!q.empty())
        {
            pair<int, int> dq;
            dq = q.deque();
            cout<<dq.first<<" | "<<dq.second<<endl;
        }
        cout<<endl<<endl;

        /*
        pairType peek;
        peek = q.Front();
        cout<<peek.first<<" | "<<peek.second<<endl;

        pairType peekBack;
        peekBack = q.Bront();
        cout<<peekBack.first<<" | "<<peekBack.second<<endl;

        */






        return 0;
    }
