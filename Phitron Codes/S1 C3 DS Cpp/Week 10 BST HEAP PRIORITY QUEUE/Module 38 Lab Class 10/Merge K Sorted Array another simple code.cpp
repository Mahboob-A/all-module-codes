
    // merge k sorted array using pq 300922, friday, 04.45 pm
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<k;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(int j=0;j<n;j++)
        {
            pq.push(a[j]);
        }
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
