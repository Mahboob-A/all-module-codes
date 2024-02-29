/*
Algo, GT
Week 02, Exam 01 
Theory Assignment 01 
Exam date: 231222, Thursday
Written date: 311222, Saturday, 08.00 am 

QS 01: Input a graph in directional way then check if the graph inputed is bi-directional or not. 
*/

/*

3 6 
1 2 
2 1
2 3 
3 2 
1 3 
3 1

*/


// I have tried using adj list. 
// the code is not working 
// fix the bug 

/*
#include <bits/stdc++.h>
using namespace std;

vector<int>adj[100];


bool is_directional(int n)
{
    bool flag =true;
    for(int i=1; i<=n; i++)
    {
        //flag = false;
        for(int j=0; j<adj[i].size(); j++)
        {
               //flag = false;
                cout<<j<<endl;
                int adjNode = adj[i][j];

                for(int k=0; k<adj[adjNode].size(); k++)
                {
                        int adjNode2 = adj[adjNode][k];
                        if(i!=adjNode2)
                        {
                                flag = false; 
                                break;
                        }
                }
                if(flag)
                        break;

        }
    }
    return flag;
}

/*
3 6 
1 2 
2 1
2 3 
3 2 
1 3 
3 1



int main() {

    cout<<"Input nodes and edges"<<endl<<endl;
    
    int n, m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
    }

    bool res = is_directional(n); // passing the edge count
    if(res)
        cout<< "The graph is directional"<<endl;
    else 
        cout<< "The graph is not directional"<<endl;



    return 0;
}

*/

// using adj matrix 


// input a graph in directional way and check if the graph is bi-directional
#include <bits/stdc++.h>
using namespace std;


int adjMatrix[10][10] = {0};

bool is_directional(int n)
{
        bool flag = false;
        for(int i=0; i<=n; i++)
        {
                for(int j=0; j<=n; j++)
                {
                        if(adjMatrix[i][j] != adjMatrix[j][i])
                        {
                                flag = true;
                                break;
                        }
                }
               if(flag) break;
        }
        return flag;
}

/*
3 6 
1 2 
2 1
2 3 
3 2 
1 3 
3 1

*/


int main () {

        int n, m;
        cin>>n>>m;

        for(int i=0; i<m; i++)
        {
                int u, v;
                cin>>u>>v;
                adjMatrix[u][v] = 1;
        }

        bool res =  is_directional(n);
        if(res)
                 cout<<"The graph is not directional"<<endl;
        else   
                cout<<"The graph is directional"<<endl;

         
        return 0;
}

