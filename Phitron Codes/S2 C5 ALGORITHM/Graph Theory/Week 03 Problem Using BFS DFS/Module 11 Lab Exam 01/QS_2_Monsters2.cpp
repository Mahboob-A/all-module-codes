#include<bits/stdc++.h>
using namespace std;
 
const int N = 1010;
int maze[N][N];
 
int n,m;
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
 
 
bool is_inside(pair<int,int>coord){
 
    int x = coord.first;
    int y = coord.second;
 
    if(x>=0 && x<n && y>=0 && y<m) return true;
    return false;
}
 
 
bool is_safe(pair<int,int>coord){
 
    int x = coord.first;
    int y = coord.second;
 
    if(maze[x][y] == -1 || maze[x][y] == -2) return false;
    return true;
}
 
 
bool monster_safe(pair<int,int>coord){
 
    int x = coord.first;
    int y = coord.second;
 
    if(maze[x][y] == -1 || maze[x][y] == 1) return false;
    return true;
}
 
 
void Monster_step(pair<int,int>monster_node){
 
    int x = monster_node.first;
    int y = monster_node.second;
 
    int flag = 0;
 
    for(int i=0; i<4; i++){
 
        int new_x = x + dx[i];
        int new_y = y + dy[i];
 
        pair<int,int> adj_node = {new_x,new_y};
 
        if(maze[new_x][new_y] == 0 && is_inside(adj_node) && monster_safe(adj_node)){
 
            maze[new_x][new_y] = -2;
            flag = 1;
        }
 
        if(flag == 1) break;
 
    }
 
}
 
 
void Game_Men_Step(pair<int,int> src){
 
    queue<pair<int,int>>q;
    q.push(src);
    maze[src.first][src.second] = 1;
 
    int steps = 0;
    int flag = 0;
 
    while(!q.empty()){
 
        pair<int,int> head = q.front();
        q.pop();
        int x = head.first;
        int y = head.second;
 
        for(int i=0; i<4; i++){
 
            int new_x = x+dx[i];
            int new_y = y+dy[i];
 
            pair<int,int> adj_node = {new_x,new_y};
 
            if(maze[new_x][new_y] == 0 && is_safe(adj_node) && is_inside(adj_node)){
 
                steps++;
 
                q.push(adj_node);
                maze[new_x][new_y] = 1;
                flag = 1;
 
            }
           
            if(flag == 1) break;
        }
 
        if(steps == 0) break;
       
 
        if(flag == 1){
 
            for(int i=0; i<n; i++){
 
                for(int j=0; j<m; j++){
 
                    if(maze[i][j] == -2){
                        pair<int,int> monster_node = {i,j};
                        Monster_step(monster_node);
                    }
                }
            }
        }
 
       
        flag = 0;
    }
 
    if(steps>0){
 
        cout<<"YES"<<endl;
        cout<<steps<<endl;
    }
 
    else cout<<"NO"<<endl;
   
 
   
}
 
 
 
 
 
int main(){
 
 
    cin>>n>>m;
 
    pair<int,int> src;
 
    for(int i=0; i<n; i++){
 
        string input;
        cin>>input;
 
        for(int j=0; j<m; j++){
 
            if(input[j] == '#'){
 
                maze[i][j] = -1;
            }
            else if(input[j] == 'M'){
 
                maze[i][j] = -2;
            }
            else if(input[j] == 'A'){
 
                src = {i,j};
            }
        }
    }
 
    Game_Men_Step(src);
 
 
    return 0;
 
}
