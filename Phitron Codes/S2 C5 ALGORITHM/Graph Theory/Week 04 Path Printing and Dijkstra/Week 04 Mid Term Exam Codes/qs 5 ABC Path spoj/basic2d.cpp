

//270123, Friday, 09.00 pm
// algo, gt, week 4 exam mid term ABC PATH SPOJ PROBLEM BELOW BFS
#include <bits/stdc++.h>
using namespace std;

   char a[5][5];

/*


int BFS(pair<int,int> src)
{


    queue<pair<int,int>> q;
    q.push(src);
    int count = 1;


    while(!q.empty())
    {


        pair<int,int> head = q.front();
        q.pop();
        int x = head.first; //row number
        int y = head.second; // col cumber


        int next = maze[x][y]+1;


        for(int i=0; i<8; i++)
        {


            int new_x = x + dx[i];
            int new_y = y + dy[i];


            pair<int,int> adj_node = {new_x,new_y};




            if(is_inside(adj_node) && maze[new_x][new_y] == next)
            {


                q.push(adj_node);


                count++;

            }


        }


        if(!q.empty())
        {


            int t1 = q.front().first;
            int t2  = q.front().second;


            if(maze[x][y] == maze[t1][t2]) count--;
        }




    }




    return count;
}

*/
// #define vector<vector<char>>vec

vector<vector<char>>v(3, vector<char>(3));



int main(){
    char x[] = {'a', 'b', 'c', 'd', 'e'};

    //memset(a, 0, sizeof(a));
    //a[0][0] = 1;



    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            //a[i][j] = x[j]; //a[i][j]-1;
            char x;
            cin>>x;
            //scanf("%c", &a[i][j]);
            //a[i][j] = x;
            v[i][j] = x;
        }
        //cout<<endl;
    }

    int idx = 0;
    cout<<idx++<<endl;
    cout<<idx<<endl;
    cout<<"Print 1"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            //a[i][j] = a[i][j]+1;
            cout<<v[i][j]<<" ";



        }
        cout<<endl;
    }


    // memset(v, 'a', sizeof(v));
//    for(auto elem : v) 
//    {
//         std::fill(elem.begin(), elem.end(), 'a');
//    }
    v.resize(3, vector<char>(3));

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            v[i][j] = 'a';
        }
    }

    cout<<"Print 2"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            //a[i][j] = a[i][j]+1;
            cout<<v[i][j]<<" ";



        }
        cout<<endl;
    }


    return 0;
}
