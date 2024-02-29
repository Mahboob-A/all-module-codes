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
const int N = 50;
int visited[N][N];
int matrix[N][N];   // alphabet
int lenArr[N][N]; // array to alphabet array
// vector<vector<char>>matrix(N, vector<char>(N));
// vector<vector<int>>visited;
// vector<vector<int>>lenArr;
vector<int>ans;
vector<pii>src;
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
    if(matrix[adjNode.f][adjNode.s] == matrix[head.f][head.s] + 1)
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
    lenArr[src.f][src.s] = 1;
    int len = 1;
    q.push(src);
    int count = 1;

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
                lenArr[new_x][new_y] = lenArr[x][y] + 1;
                if(lenArr[new_x][new_y] > len)
                {
                    len = lenArr[new_x][new_y];
                }

                q.push(adjNode);

            }
        }
    }

    return len;
}

void process()
{
    int MaxLen = -1;
    for(int i=0; i<src.size(); i++)
    {
        int tmpLen = bfs({src[i].f, src[i].s});
        if(tmpLen > MaxLen)
            MaxLen = tmpLen;
    }
    src.clear();
    ans.push_back(MaxLen);
}

void printCases()
{
    // if(ans.size() > 0)
    // {
        for(int i=0; i<ans.size(); i++)
        {
            cout<<"Case "<<i+1<<": "<<ans[i]<<endl;
        }
    // }
    
}

void setZero()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            lenArr[i][j] = 0;
            visited[i][j] = 0;
            matrix[i][j] = 0;
        }
    }
}

int main () {

    //  ios_base::sync_with_stdio(false);
    //  cin.tie(NULL);

    while(1)
    {
       
        
        cin>>H>>W;
        if(H == 0 && W == 0) 
        {
            break;
        }

        int MaxLen = -1;
        
        for(int i=0; i<H; i++)
        {
            string input;
            cin>>input;
            for(int j=0; j<W; j++)
            {
                if(input[j] == 'A')
                {
                    int  val = int(input[j] - 'A');
                    matrix[i][j] = val;
                    src.push_back({i, j});
                }
                else
                {
                    int val = int(input[j] - 'A');
                    matrix[i][j] = val;
                }

                // if(input[j] == 'A')
                // {
                //     src.push_back({i, j});
                // }
                // matrix[i][j] = input[j];
            }
        }

        process();
        setZero();
    }

    printCases();


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
