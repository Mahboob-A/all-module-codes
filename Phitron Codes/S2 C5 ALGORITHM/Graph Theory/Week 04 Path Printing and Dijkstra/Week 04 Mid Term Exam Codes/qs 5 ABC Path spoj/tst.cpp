    //270123, Friday, 09.00 pm
    // algo, gt, week 4 exam mid term ABC PATH SPOJ PROBLEM BELOW BFS
    // question 05



#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define first first
#define second second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
const int N = 50;
int visited[N][N];
int matrix[N][N];   
vector<int>ans;
int H, W;
int idx = 0;

int dx[] = {0, 0, -1, 1, -1, -1, 1, 1};
int dy[] = {1, -1, 0, 0, -1, 1, -1, 1};


bool is_inside(pair<int, int> coord)
{
    int x = coord.first;
    int y = coord.second;

    if(x>=0 && x<H && y>=0 && y<W)
        return true;
    return false;
}

bool is_valid(pair<int, int> head, pair<int, int> adjNode)
{
    if(matrix[adjNode.first][adjNode.second] == matrix[head.first][head.second] + 1)
        return true;
    return false;
}

bool is_not_visited(pair<int, int> adjNode)
{
    if(visited[adjNode.first][adjNode.second] == 0)
        return true;
    return false;
}

int bfs(pair<int, int> src)
{
    queue<pair<int, int>>q;
    q.push(src);
    int count = 1;

    while(!q.empty())
    {
        pair<int, int>head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;

        int forwardNode = matrix[x][y] + 1;
        for(int i=0; i<8; i++)
        {
            int new_x = dx[i]+x;
            int new_y = dy[i]+y;
            pair<int, int> adjNode = {new_x, new_y};

            if(is_inside(adjNode) && matrix[new_x][new_y] == forwardNode )   //&& is_not_visited(adjNode))
            {
                q.push(adjNode);
                count++;
            }
        }

        if(!q.empty()){
            int t1 = q.front().first;
            int t2  = q.front().second;
            if(matrix[x][y] == matrix[t1][t2]) count--;
        }
    }

    return count;
}

// void process(vecPii src)
// {
//         int MaxLen = -1;
//         for(int i=0; i<src.size(); i++)
//         {
//         int tmpLen = bfs({src[i].first, src[i].second});
//         if(tmpLen > MaxLen)
//         MaxLen = tmpLen;
//         }
//         ans.push_back(MaxLen);
// }

// void printCases()
// {

//         for(int i=1; i<=ans.size(); i++)
//         {
//                 cout<<"Case "<<i<<": "<<ans[i]<<endl;
//         }

    
// }

int main () {
        //  ios_base::sync_with_stdio(false);
        //  cin.tie(NULL);



        while(true)
        {
                cin>>H>>W;
                if(H == 0 && W == 0) 
                {
                        break;
                }
                vector<pair<int, int>>src;
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
                        }
                }

                for(int i=0; i<src.size(); i++)
                {
                        int tmpLen = bfs({src[i].first, src[i].second});
                        if(tmpLen > MaxLen)
                                MaxLen = tmpLen;
                }


                ans.push_back(MaxLen);

        }

        for(int i=0; i<ans.size(); i++)
        {
                cout<<"Case "<<i+1<<": "<<ans[i]<<endl;
        }


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
