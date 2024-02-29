

    //270123, Friday, 09.00 pm
    // algo, gt, week 4 exam mid term ABC PATH SPOJ PROBLEM BELOW BFS
    // question 05



#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
const int N = 55;
int visited[N][N];
char alp[N][N];   // alphabet
int alpArr[N][N]; // array to alphabet array


int H, W;
int idx = 0;

int dx[] = {0, 0, -1, 1, -1, -1, 1, 1};
int dy[] = {1, -1, 0, 0, -1, 1, -1, 1};


bool is_inside(pii coord)
{
    int x = coord.f;
    int y = coord.s;

    if(x>=0 && x<H && y>=0 && y<W)
        return true;
    return false;
}

bool is_valid(pii head, pii adjNode)
{
    if(alp[adjNode.f][adjNode.s] == alp[head.f][head.s] + 1)
        return true;
    return false;
}

bool is_not_visited(pii adjNode)
{
    if(visited[adjNode.f][adjNode.s] == 0)
        return true;
    return false;
}

int bfs(pii src)
{
    queue<pii>q;
    visited[src.f][src.s] = 1;
    alpArr[src.f][src.s] = 1;
    int len = 1;
    q.push(src);

    while(!q.empty())
    {
        pii head = q.front();
        q.pop();
        int x = head.f;
        int y = head.s;

        for(int i=0; i<8; i++)
        {
            int new_x = dx[i]+x;
            int new_y = dy[i]+y;
            pii adjNode = {new_x, new_y};

            if(is_inside(adjNode) && is_valid(head, adjNode) && is_not_visited(adjNode))
            {
                visited[new_x][new_y] = 1;
                alpArr[new_x][new_y] = alpArr[x][y] + 1;
                if(alpArr[new_x][new_y] > len)
                    len = alpArr[new_x][new_y];

                q.push(adjNode);

            }
        }

    }
    return len;


}

void process(vecPii src, vec ans)
{
    int MaxLen = -1;
    for(int i=0; i<src.size(); i++)
    {
        int tmpLen = bfs({src[i].f, src[i].s});
        if(tmpLen > MaxLen)
            MaxLen = tmpLen;
        cout<<MaxLen<<endl;
    }
    // cout<<"Case "<<++idx<<": "<<MaxLen<<endl;
    ans.push_back(MaxLen);
}

void printCases(vec ans)
{
    cout<<"hello"<<endl;
    // if(ans.size() > 0)
    // {
        for(int i=0; i<ans.size(); i++)
        {
            cout<<"Case "<<i+1<<": "<<ans[i]<<endl;
        }
    // }
    
}

int main () {
    //  ios_base::sync_with_stdio(false);
    //  cin.tie(NULL);

    
    vector<int>ans;
    while(1)
    {
        vector<pii>src;
        cin>>H>>W;
        if(H == 0 && W == 0) 
        {
            break;
        }
        
        
        for(int i=0; i<H; i++)
        {
            for(int j=0; j<W; j++)
            {
                char x;
                cin>>x;
                alp[i][j] = x;
                if(x == 'A')
                {
                    src.push_back({i, j});
                }
            }
        }

        process(src, ans);
        // cin>>H>>W;
    }

    printCases(ans);


/*  

4 3
ABE 
CDF
BDG
ABC
4 3
ABE
CFG
BDH
ABC

*/



return 0;
}
