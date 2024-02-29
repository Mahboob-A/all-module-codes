/*
Mod date: 251222, Sunday
Watch date: 040122, Wednesday, 08.00 pm 
Week 03 : Problem solving using dfs and bfs 
Module 08: Problem solving using dfs and bfs

8-5: Grid Traversal Code: 
CSES laybrinth problem.  
*/


#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
typedef pair<int, int> pt; 

int visited[N][N] = {0};
int level[N][N] = {0};
int maze[N][N] = {0};

int n, m;
string direction = "";

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

bool is_inside(pt coord)
{
        int x = coord.first;
        int y = coord.second;

        if(x>=0 && x<n && y>=0 && y<m)
                return true;
        return false;
}


bool is_safe(pt coord)
{
        if(maze[coord.first][coord.second] == -1)
                return false;
        return true;
}


void bfs(pt src)
{
       queue<pt>q;
        visited[src.first][src.second] = 1;
        level[src.first][src.second] = 0;
        q.push(src);


        while(!q.empty())
        {
                pt head = q.front();
                q.pop();

                int x = head.first;
                int y = head.second;

                for(int i=0; i<4; i++)
                {
                        int new_x = x + dx[i];
                        int new_y = y + dy[i];
                        
                        pt adjnode = {new_x, new_y};
                        if(is_inside(adjnode)  &&  is_safe(adjnode)  && visited[new_x][new_y]  ==  0)
                        {
                                visited[new_x][new_y] = 1;
                                level[new_x][new_y] = level[x][y] + 1;

                                // this direction logic is incomplete // gives wrong path direction 
                                if(new_x < x && new_y == y)
                                        direction += 'U';
                                if(new_x > x   && new_y == y)
                                        direction += 'D';
                                if(new_y < y  && new_x == x)
                                        direction += 'L';
                                if(new_y > y  && new_x == x)
                                        direction += 'R';

                                q.push(adjnode); 
                        }
                }
                
        }

}

/*

5 8
########
#.A#...#
#.##.#B#
#......#
########

*/

int main() {

        cin >> n >> m;
        pt src, dest;

        for(int i=0; i<n; i++)
        {
                string input;
                cin >> input; 
                for(int j=0; j<m; j++)
                {
                        if(input[j] == '#')
                                maze[i][j] = -1;
                        else if(input[j] == 'A')
                                src = {i, j};
                        else if(input[j] == 'B')
                                dest = {i, j};
                }
        }

        bfs(src);

        if(visited[dest.first][dest.second]  == 0)
                cout << "Not Possible" << endl;
        else 
        {
                cout<< "Yes Possible" << endl;
                cout<< level[dest.first][dest.second] << endl;
        }
        cout << "The direction is :   " << direction << endl; 

}