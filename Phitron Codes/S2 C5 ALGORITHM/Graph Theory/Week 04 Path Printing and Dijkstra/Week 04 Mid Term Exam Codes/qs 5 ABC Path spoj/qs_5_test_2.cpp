// 280123 

#include<bits/stdc++.h>
using namespace std;


int maze[51][51];
int H,W;


int dx[] = {0, 0, -1, 1, -1, -1, 1, 1};
int dy[] = {1, -1, 0, 0, -1,  1, -1, 1};




bool is_inside(pair<int,int> node){


    int x = node.first;
    int y = node.second;


    if(x>=0 && x<H && y>=0 && y<W) return true;
    return false;
}






int BFS(pair<int,int> src){


    queue<pair<int,int>> q;
    q.push(src);
    int count = 1;


    while(!q.empty()){


        pair<int,int> head = q.front();
        q.pop();
        int x = head.first; //row number
        int y = head.second; // col cumber


        int next = maze[x][y]+1;


        for(int i=0; i<8; i++){


            int new_x = x + dx[i];
            int new_y = y + dy[i];


            pair<int,int> adj_node = {new_x,new_y};




            if(is_inside(adj_node) && maze[new_x][new_y] == next){


                q.push(adj_node);


                count++;
               
            }


        }


        if(!q.empty()){


            int t1 = q.front().first;
            int t2  = q.front().second;


            if(maze[x][y] == maze[t1][t2]) count--;
        }




    }




    return count;
}






int main(){




    vector<int>ans;
   


    while(true){


       
        cin>>H>>W;


        if(H == 0 && W == 0) break;


        int max = -1;
        vector<pair<int,int>> src;


        for(int i=0; i<H; i++){


            string input;
            cin>>input;


            for(int j=0; j<W; j++){


                if(input[j] == 'A'){
                    src.push_back({i,j});
                    int val = int(input[j] - 'A');
                    maze[i][j] = val;
                }


                else{
                    int val = int(input[j] - 'A');
                    maze[i][j] = val;
                }
            }
        }


        for(int k=0; k<src.size(); k++){


            int res = BFS({src[k].first,src[k].second});
            if(res>max) max = res;
        }
       
       
        ans.push_back(max);
   


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



    for(int i=0; i<ans.size(); i++){


        cout<<"Case "<<i+1<<": "<<ans[i]<<endl;
    }
   


    return 0;


}
