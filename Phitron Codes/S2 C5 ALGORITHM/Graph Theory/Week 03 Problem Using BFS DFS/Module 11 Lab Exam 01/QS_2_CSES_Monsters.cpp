/*
Module date: 311223
Exam Writing Start Date: 130123, Friday, 10.00 pm
Today date: 140123, 09.00 am 

Question 01: 
link: https://cses.fi/problemset/task/1194

Steps: 

follow along the grid traversal problem.
and check if the node is in the boundary, then store it, it is the destination node 

*/

#include <bits/stdc++.h>
using namespace std;

#define pt pair<int, int>

const int N = 1100;
int maze[N][N];
int visited[N][N];
int level[N][N];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

pair<int, int>src, des(-1, -1);
int n, m;

bool is_inside(pt node)
{
        int x = node.first;
        int y = node.second;
        if(x>=0 && x<n && y>=0 && y<m)
                return true;
        return false;
}

bool is_safe(pt node)
{
        int x = node.first;
        int y = node.second;
        if(maze[x][y] == -1)
                return false;
        return true;
}

bool is_monster(pt node)
{
        if(maze[node.first][node.second] == -2)
        {
                // cout<<"True: Monster"<<endl;
                // cout<<node.first<<" "<<node.second<<endl;
                return true;
        }
        // cout<<"False: Not Monster"<<endl;
        // cout<<node.first<<" "<<node.second<<endl;
        return false;
}

bool is_boundary(pt node)
{
        int x = node.first;
        int y = node.second;
        if(x>=0 && x<n && y==0)
                return true;
        else if(x>=0 && x<n && y==m-1)
                return true;
        else if(y>=0 && y<m && x==0)
                return true;
        else if(y>=0 && y<m && x==n-1)
                return true;
        else 
                return false;
}


void findPath(pair<int, int>source)
{
        queue<pair<int, int>>q;
        visited[source.first][source.second] = 1;
        level[source.first][source.second] = 0;
        q.push(source);

        while(!q.empty())
        {
                pt parentNode = q.front();
                q.pop();
                // cout<<"parentNode: "<<parentNode.first<<" "<<parentNode.second<<endl;

                // int flag = 0;
                for(int i=0; i<4; i++)
                {
                        int x = parentNode.first + dx[i];
                        int y = parentNode.second + dy[i];

                        pt adjNode = {x, y};
                        if(is_monster(adjNode) == false)
                        {
                                if(is_inside(adjNode) && is_safe(adjNode) && visited[x][y] == 0)
                                {
                                        if(is_boundary(adjNode))
                                        {
                                                des = {x, y};
                                        }
                                        // cout<<x<<" "<<y<<endl;
                                        visited[x][y] = 1;
                                        level[x][y] = level[parentNode.first][parentNode.second] + 1;
                                        q.push(adjNode);
                                }   
                        }
                }
        }
}

int main() {

        cin>>n>>m;
        int flag = 1;   // if only one source node is given 
        for(int i=0; i<n; i++)
        {
                string input;
                cin>>input;
                for(int j=0; j<m; j++)
                {
                        if(input[j] == '#')
                                maze[i][j] = -1;
                        else if(input[j] == 'M')
                                maze[i][j] = -2;
                        else if(input[j] == '.')
                        {
                                flag = 0;
                        }
                        else if(input[j] == 'A')
                        {
                                // maze[i][j] = 0;
                                src = {i, j};
                        }
                               
                }
        }
        
        if(flag)
        {
                cout<<"YES"<<endl<<"0"<<endl;
        }
        else 
        {
                findPath(src);

                if(des.first != -1 && des.second != -1)
                {
                        cout<<"YES"<<endl;
                        cout<<level[des.first][des.second]<<endl;
                }
                else    
                        cout<<"NO"<<endl;
        }
        
        return 0;
}
