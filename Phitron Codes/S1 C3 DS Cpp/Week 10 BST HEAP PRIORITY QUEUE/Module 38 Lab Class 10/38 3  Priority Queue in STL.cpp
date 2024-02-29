

            /// 38-3: Vector & Priority Queue in STL

            // 38-3: Vector & Priority Queue in STL //
            // 200922, Tuesday, 10.00 am

    #include <bits/stdc++.h>
    using namespace std;

    // type definitation
    typedef pair<int, int>PAIR;

    int main() {

        // priority_queue and heap has same STL: -> " priority_queue " : priority_queue and heap is equalvalent

        // declaring max Priority Queue // Max Pq
        cout<<"Max priority_queue: "<<endl;
        priority_queue<int, vector<int>>pq;

        pq.push(5);
        pq.push(10);
        pq.push(1);

        while(!pq.empty())
        {
            cout<<pq.top()<<endl;
            pq.pop();
        }

        // min pq
        cout<<"\nMin priority_queue: "<<endl;
        priority_queue<int, vector<int>, greater<int>>PQ;

        PQ.push(10);
        PQ.push(50);
        PQ.push(4);
        PQ.push(91);
        PQ.push(2);

        while(!PQ.empty())
        {
            cout<<PQ.top()<<endl;
            PQ.pop();
        }

        // min pq with pair data type
        cout<<"priority_queue with PAIR data type: min "<<endl;
        priority_queue<PAIR, vector<PAIR>, greater<PAIR>>pPQ;

        pPQ.push(make_pair(1, 4));
        pPQ.push(make_pair(4, 8));
        pPQ.push(make_pair(2, 9));
        pPQ.push(make_pair(5, 7));
        pPQ.push(make_pair(1, 2));

        while(!pPQ.empty())
        {
            cout<<pPQ.top().first<<" | "<<pPQ.top().second<<endl;
            pPQ.pop();
        }

        return 0;
    }
