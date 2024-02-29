

// this code is to find the longesst path in a dag 
// 070223, tuesday 
// still need to verify if the code outputs correct result 

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int inf = 1e9;

vector<pair<int, int>> g[N];
int d[N];

void bellman_ford(int n, int s) 
{
    for (int i = 1; i <= n; i++) d[i] = -inf;
    d[s] = 0;
    for (int i = 1; i <= n - 1; i++) 
    {
        for (int u = 1; u <= n; u++) 
        {
            for (auto v : g[u]) 
            {
                int to = v.first, w = -v.second;
                d[to] = max(d[to], d[u] + w);
            }
        }
    }
}

/*  

5 7
1 2 4 
1 4 3 
2 3 6
2 4 5
4 5 7
3 5 4
4 3 5



*/
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) 
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
    }

    int s = 1;
    bellman_ford(n, s);

    for (int i = 1; i <= n; i++) 
    {
        cout << "i: "<<i<<" -> " <<-d[i] << endl;
    }

    return 0;
}
