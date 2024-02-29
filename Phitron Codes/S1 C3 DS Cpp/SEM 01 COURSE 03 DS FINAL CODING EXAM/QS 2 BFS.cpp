


            /// QS 2 BFS


    // Sem 01 Course 03 Final exam: QS 2 BFS
    #include <bits/stdc++.h>
    using namespace std;

    vector<int> V[20];
    bool visited[20];

    void bfs(int src, int level)
    {
        queue<pair<int, int>>q;
        queue<int>qq;

        q.push({0, src});

        while(!q.empty())
        {
            pair<int, int> parent = q.front();
            q.pop();

            if(visited[parent.second] == true) continue;

            if(parent.first == level)
            {
                qq.push(parent.second);
            }


            for(int i=0; i<V[parent.second].size(); i++)
            {
                int adjNode = V[parent.second][i];
                if(visited[adjNode] == false)
                {
                    q.push({parent.first+1, adjNode});
                }

            }
            visited[parent.second] = true;
        }

        while(!qq.empty())
        {
            int q = qq.front();
            qq.pop();
            cout<<q<<" ";
        }


    }




    int main() {

        int n, e;
        cin>>n>>e;

        for(int i=0; i<e; i++)
        {
            int u, v;
            cin>>u>>v;

            V[u].push_back(v);
            V[v].push_back(u);
        }

        memset(visited, false, sizeof(visited));


        int level;
        cin>>level;

        bfs(0, level);



        return 0;
    }
