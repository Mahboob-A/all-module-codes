


    #include <bits/stdc++.h>
    #include"266MYQUEUEGENPUSHPOP.h"
    using namespace std;

    int main() {

        Queue <double> q;
        int val, n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            double vall;
            cin>>vall;
            q.push(vall);
        }

        cout<<"dequeue: "<<endl;
        while(!q.empty())
        {
            cout<<q.pop()<<endl;
        }



        return 0;
    }

