

    /// QS 2
    /*
    Given N integers, the task is to insert those elements in the queue. Also,
    given M integers,your task is to find the frequency of each number of M in the Queue.
    */

    // TC = O(N^2)
    // SC = O(N) extra m size array

    #include <bits/stdc++.h>
    #include"MYQUEUEGEN.h"
    #include"MYSTACKGEN.h"
    using namespace std;

    void findFreqOfQueue(Queue<int>q, int *arr, int M)
    {

        for(int i=0; i<M; i++)
        {
            int count = 0;
            for(int j=0; j<q.size(); j++)
            {
                int val = q.Front();
                q.pop();
                if(val == arr[i])
                {
                    count++;
                }
                q.push(val);
            }
            if(count != 0)
            {
                cout<<count<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }

    }

    int main() {

        Queue<int>q;
        int i, N, M;
        int arr[M];
        cin>>N;
        for(i=0; i<N; i++)
        {
            int val;
            cin>>val;
            q.push(val);
        }
        cin>>M;
        for(i=0; i<M; i++)
            cin>>arr[i];


        findFreqOfQueue(q, arr, M);


        return 0;
    }

    /*
    another solution submitted by me
    https://practice.geeksforgeeks.org/problems/queue-operations/1?page=2&category[]=Queue&sortBy=submissions


    */



