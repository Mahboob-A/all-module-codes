

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e9 
const int N = 1e5+100;
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<pii, vecPii, greater<pii>>q;
vecPii adjList[N];
int visited[N];
int parent[N];
long long dist[N];
int n, m;

string a = "codeforces";
void solve(char inp)
{
        bool found = false;
        for(int i=0; i<10; i++)
        {
                if(inp == a[i])
                {
                        found = true;
                        break;
                }
        }

        if(found)
        {
                cout<<"YES"<<endl;
        }
        else
        {
                cout<<"NO"<<endl;
        }
}

int main(){

        int t; 
        cin>>t;

        
        

        while(t--)
        {
                char inp;
                cin>>inp;
                solve(inp);
        }


   


        return 0;
}