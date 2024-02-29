/*  
Week 05 : lab mid term exam 
exam date: 150123 - 170123 - 100; 170123-220123 - 90; rest 80 marks 
exam writing date: 090223, thursday, 04.00 pm 


qs_5 : I will be given a maze of n size. there will be obstacles. I have to trace @ symbol as souce
and X symbol as dest and find if three are any path from source to dest and if so, print the whole 
maze with the path giving + symbol to the path 
*/

/*  

In the table with n rows and n columns, some cells are occupied with balls, others are free. You choose a ball and a place where you want to move it. In one step the ball can be moved to the next horizontal or vertical empty cell. Determine, is it possible to move the ball from the initial cell to the given, and if it is possible, find a way with the minimum number of steps.

Input
The first line contains integer n (2 ≤ n ≤ 40), each of the the next n lines contains n symbols. The empty cell is marked with a point, the ball on the table is marked with letter O, the initial position of a ball that must be moved - with @, and the place where the ball must be moved - with a letter X.

Output
Print Y in the first line , if the path from the start to the end exists, or N otherwise. If the path exists, print N rows with N symbols like it is given at input, but symbol X and all points on the route must be changed to pluses.

Sample 1
Inputcopy	Outputcopy
5
....X
.OOOO
.....
OOOO.
@....
Y
+++++
+OOOO
+++++
OOOO+
@++++
Sample 2
Inputcopy	Outputcopy
5
..X..
.....
OOOOO
.....
..@..
N
Sample 3
Inputcopy	Outputcopy
5
...X.
.....
O.OOO
.....
....@
Y
..++.
.++..
O+OOO
.++++
....@

*/


// submitted code, path printed recursively 

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
const int N = 50;
vector<int>ans;
vector<pii>allSrc;

//priority_queue<int, vec, greater<int>>q;
int visited[N][N];
pair<int, int> parent[N][N];
char matrix[N][N];
int n, m;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool is_inside(pii adjNode)
{
        int x = adjNode.f;
        int y = adjNode.s;

        if(x>=0 && x<n && y>=0 && y<n)
        {
                return true;
        }
        return false;
}

bool is_valid(pii adjNode)
{
        int x = adjNode.f;
        int y = adjNode.s;

        if(matrix[x][y] == '.'  || matrix[x][y] == 'X')
        {
                return true;
        }
        return false;
}

bool is_not_visited(pii adjNode)
{
        if(visited[adjNode.f][adjNode.s] == 0)
        {
                return true;
        }
        return false;
}

// recursive call to process the path 
void process_path(int x, int y)
{
        // as the parent matrix is set to -1, if x and y comes to the src node, then return 
        if(x == -1 && y == -1)
        {
                return;
        }

        // go behind till the parent node 
        int new_x = parent[x][y].f;
        int new_y = parent[x][y].s;
        process_path(new_x, new_y);

        // since we have reached the parent node, now put + in the path of matrix in the same {x, y} path 
        // it came to the parent node 
        matrix[x][y] = '+';
}

// retruns a boolen answer is we could reach to the dest node 
bool bfs(pii src, pii dest)
{
        // in case of test case, we need to reset the matrixes 
        memset(visited, 0, sizeof(visited));
        memset(parent, -1, sizeof(parent));

        queue<pii>q;
        q.push(src);
        visited[src.f][src.s] = 1;

        while(!q.empty())
        {
                int x = q.front().f;
                int y = q.front().s;
                q.pop();

                // cout<<x<<" "<<y<<endl;
                // if we have found x and y equal to dest.f and dest.s then we have found dest node in the 
                // queue, which means we are able to visit the dest node 
                if(x == dest.f && y == dest.s)
                {
                        process_path(x, y);
                        // cout<<x<<" "<<y<<endl;
                        return true;
                }
                for(int i=0; i<4; i++)
                {
                        int new_x = dx[i] + x;
                        int new_y = dy[i] + y;
                        pii adjNode = {new_x, new_y};

                        if(is_inside(adjNode)  && is_valid(adjNode) && is_not_visited(adjNode))
                        {
                                // cout<<"y"<<endl;
                                visited[new_x][new_y] = 1;
                                // we are taking the xy of the char matrix in the parent matrix 
                                parent[new_x][new_y] = {x, y};   
                                q.push(adjNode);
                        } 
                }
        }
        // return false if while loop does not return true 
        return false;
}

// print the modified matrix 
void print_path(pii src)
{
        // make the source as @ as the recursive call made the source as + 
        matrix[src.f][src.s] = '@';
        for(int i=0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
                        cout<<matrix[i][j];
                }
                cout<<endl;
        }
}

int main(){

        cin>>n;
        pii src, dest;
        // we are taking the input as char matrix and changing it to int matrix 
        for(int i=0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
                        cin>>matrix[i][j];
                        if(matrix[i][j] == '@')
                        {
                                src = {i, j};
                        }
                        if(matrix[i][j] == 'X')
                        {
                                dest = {i, j};
                        }
                }
        }

        // cout<<src.f<<src.s<<endl;
        // cout<<dest.f<<dest.s<<endl;
        if(bfs(src, dest))
        {
                cout<<"Y"<<endl;
                print_path(src);
        }
        else 
        {
                cout<<"N"<<endl;
        }
        return 0;
}



// also works // check path print style 
/*
#include <iostream>
#include <cstring>
#include <queue>
#include <cstdio>

using namespace std;

const int N = 41;

char g[N][N];
int n, dist[N][N];
bool vis[N][N];
int startx, starty, endx, endy;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

struct node
{
    int x, y;
};

bool check(int x, int y)
{
    if (x >= 1 && x <= n && y >= 1 && y <= n && g[x][y] != '#')
    {
        return true;
    }
    return false;
}

void bfs(int sx, int sy)
{
    memset(vis, false, sizeof vis);
    memset(dist, 0x3f, sizeof dist);
    vis[sx][sy] = true;
    dist[sx][sy] = 0;
    queue<node> q;
    q.push((node){sx, sy});
    while (!q.empty())
    {
        node t = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = t.x + dx[i];
            int ny = t.y + dy[i];
            if (check(nx, ny) && !vis[nx][ny])
            {
                vis[nx][ny] = true;
                dist[nx][ny] = dist[t.x][t.y] + 1;
                q.push((node){nx, ny});
            }
        }
    }
}

int main()
{
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
                scanf("%s", g[i] + 1);
                for (int j = 1; j <= n; j++)
                {
                        if (g[i][j] == '@')
                        {
                                startx = i, starty = j;
                        }
                        if (g[i][j] == 'X')
                        {
                                endx = i, endy = j;
                        }
                }
        }

        bfs(startx, starty);
        if (dist[endx][endy] == 0x3f3f3f3f)
        {
                printf("NO\n");
                return 0;
        }

        printf("YES\n");
        int x = endx, y = endy;
        while (x != startx || y != starty)
        {
                g[x][y] = '+';
                int nx, ny;
                for (int i = 0; i < 4; i++)
                {
                        nx = x + dx[i];
                        ny = y + dy[i];
                        if (check(nx, ny) && dist[x][y] == dist[nx][ny] + 1)
                        {
                                x = nx;
                                y = ny;
                                break;
                        }
                }
        }

        g[startx][starty] = '+';
        for (int i = 1; i <= n; i++)
        {
                for (int j = 1; j <= n; j++)
                {
                        printf("%c", g[i][j]);
                }
                printf("\n");
        }

    return 0;
}

*/


// also gives correct output same as my code 

/*  
#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

const int N = 45;
int n;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
char a[N][N];
bool vis[N][N];
int d[N][N];
pair<int, int> pre[N][N];

bool in_board(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

void print_path(int x, int y) {
    if (x == -1 && y == -1) return;
    int nx = pre[x][y].first, ny = pre[x][y].second;
    print_path(nx, ny);
    a[x][y] = '+';
}

bool bfs(int sx, int sy, int ex, int ey) {
    queue<pair<int, int>> q;
    memset(vis, false, sizeof(vis));
    memset(d, 0, sizeof(d));
    memset(pre, -1, sizeof(pre));
    q.push({sx, sy});
    vis[sx][sy] = true;
    while (!q.empty()) {
        auto u = q.front();
        q.pop();
        int x = u.first, y = u.second;
        cout<<x<<" "<<y<<endl;
        if (x == ex && y == ey) {
            print_path(x, y);
            return true;
        }
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (!in_board(nx, ny) || vis[nx][ny] || a[nx][ny] == 'O') continue;
            vis[nx][ny] = true;
            d[nx][ny] = d[x][y] + 1;
            pre[nx][ny] = {x, y};
            q.push({nx, ny});
        }
    }
    return false;
}

int main() {
    cin >> n;
    int sx, sy, ex, ey;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] == '@') {
                sx = i;
                sy = j;
            } else if (a[i][j] == 'X') {
                ex = i;
                ey = j;
            }
        }
    }
    
    if (bfs(sx, sy, ex, ey)) 
    {
        cout << "Y" << endl;
        a[sx][sy] = '@';
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                cout << a[i][j];
            }
            cout << endl;
        }
    } 
    else 
    {
        cout << "N" << endl;
    }
    
    
        return 0;
    }


*/


// has some bug 
/*
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
const int N = 50;
vector<int>ans;
vector<pii>allSrc;

//priority_queue<int, vec, greater<int>>q;
int visited[N][N];
int dist[N][N];
int matrix[N][N];
int n, m;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

bool is_inside(pii adjNode)
{
        int x = adjNode.f;
        int y = adjNode.s;

        if(x>=0 && x<n && y>=0 && y<n)
        {
                return true;
        }
        return false;
}

bool is_valid(pii adjNode)
{
        int x = adjNode.f;
        int y = adjNode.s;

        if(matrix[x][y] == 0)
        {
                return true;
        }
        return false;
}

bool is_not_visited(pii adjNode)
{
        if(visited[adjNode.f][adjNode.s] == 0)
        {
                return true;
        }
        return false;
}

void bfs(pii src, pii dest)
{
        memset(visited, 0, sizeof(visited));
        memset(dist, -1, sizeof(dist));
        queue<pii>q;
        q.push(src);
        visited[src.f][src.s] = 1;
        dist[src.f][src.s] = 0;
        // parent[]

        while(!q.empty())
        {
                pii node = q.front();
                q.pop();

                int x = node.f;
                int y = node.s;

                for(int i=0; i<4; i++)
                {
                        int new_x = dx[i] + x;
                        int new_y = dy[i] + y;
                        pii adjNode = {new_x, new_y};

                        if(is_inside(adjNode)  && is_valid(adjNode) && is_not_visited(adjNode))
                        {
                                visited[new_x][new_y] = 1;
                                dist[new_x][new_y] = dist[x][y] + 1;
                                q.push(adjNode);
                        } 
                }

        }
}

void print_path(pii src, pii dest)
{
        for(int i=0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(i == dest.f && j == dest.s)
                        {
                                cout<<'X';
                                // continue;
                        }
                        if(matrix[i][j] == 2)
                        {
                                cout<<'@';
                                // continue;
                        }
                        if(visited[i][j] == 1 && dist[i][j] <= dist[dest.f][dest.s])
                        {
                                cout<<'+';
                        }
                        else
                        {
                                cout<<'.';
                        }
                }
                cout<<endl;
        }
}

int main(){

        cin>>n;
        pii src, dest;
        for(int i=0; i<n; i++)
        {
                string  inp;
                cin>>inp;
                for(int j=0; j<n; j++)
                {
                        if(inp[j] == 'O')
                        {
                                matrix[i][j] = -1;
                        }
                        else if(inp[j] == '@')
                        {
                                src = {i, j};
                                matrix[i][j] = 2;
                        }
                        else if(inp[j] == 'X')
                        {
                                dest = {i, j};
                        }
                }
        }

        bfs(src, dest);

        // for(int i=0; i<n; i++)
        // {
        //         for(int j=0; j<n; j++)
        //         {
        //                 cout<<parent[i][j]<<" ";
        //         }
        //         cout<<endl;
        // }

        // cout<<endl<<src.f<<src.s<<" "<<dest.f<<dest.s<<endl;

        if(visited[dest.f][dest.s] == 0)
        {
                cout<<"NO"<<endl;
        }
        else
        {
                cout<<"YES"<<endl;
                print_path(src, dest);
        }

        return 0;
}

*/