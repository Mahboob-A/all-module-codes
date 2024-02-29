
/*
Mod date: 291222, Thursday
Watch date: 050122, Thursday
Week 03 : Problem solving using dfs and bfs 
Module 09: More Problem solving using dfs and bfs

9-4: Flood Fill Algorithm / Problem: 
CSES Counting Rooms problem.  

- The task is to find the number of conncected components in the maze 
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e2;
#define pt pair<int, int>  // typedef pair<int, int> pt;
#define s second 
#define f first 

int visited[N][N] = {0};
int maze[N][N] = {0};
int n, m;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool is_inside(pt coord)
{
        if(coord.f >= 0 && coord.f <n && coord.s >= 0 && coord.s <m)
                return true;
        return false;
}

bool is_safe(pt coord)
{
        if(maze[coord.f][coord.s] == -1)
                return false;
        return true;
}

void bfs(pt src)
{
        queue<pt>q;
        visited[src.f][src.s] = 1;
        q.push(src);

        while(!q.empty())
        {
                pt head = q.front();
                q.pop();

                int x = head.f;
                int y = head.s;

                // x = 1
                // y = 2

                for(int i=0; i<4; i++)
                {
                        int new_x = x + dx[i];
                        int new_y = y + dy[i];
                        pt adjnode = {new_x, new_y};

                        if(is_inside(adjnode)  && is_safe(adjnode) && visited[new_x][new_y] == 0)
                        {
                                visited[new_x][new_y] = 1;
                                q.push(adjnode);
                        }
                }
        }
}

pt get_unvisited_and_valid_cell()
{
        for(int i=0; i<n; i++)
        {
                for(int j=0; j<m; j++)
                {
                        if(visited[i][j]  ==  0 && maze[i][j]  == 0)
                                return {i, j};
                }
        }
        return {-1, -1}; // if no unvisited or no valid cell is found 
}



/*
Input:

5 8
########
#..#...#
####.#.#
#..#...#
########

Output:
3

*/

int main() {

        int count = 0;
        cin>> n >> m;
        for(int i=0; i<n; i++)
        {
                string input;
                cin>> input;
                for(int j=0; j<m; j++)
                {
                        if(input[j] == '#')
                                maze[i][j] = -1;
                }
        }
        

        // get the valid cell from the maze 
        while(1)
        {
                pt valid_cell = get_unvisited_and_valid_cell();
                if(valid_cell == pt{-1, -1})
                        break;
                bfs(valid_cell);
                count++;
        }

        cout<< count << endl;

        // my logic to find the unvisited and valid cell 
        // for(int i=0; i<n; i++)
        // {
        //         for(int j=0; j<m; j++)
        //         {
        //                 if(visited[i][j]  == 1)
        //                         continue;

        //                 if(maze[i][j]  != -1 && visited[i][j]  == 0)
        //                 {
        //                         bfs({i, j});
        //                         count++;
        //                 }
        //         }
        // }
        // cout<< "Count:  " << count << endl;
       
        // for(int i=0; i<N; i++)
        // {
        //         for(int j=0; j<N; j++)
        //         {
        //                 cout<< visited[i][j] << " ";
        //         }
        //         cout << endl; 
        // }


        return 0;
}