/*
Algo, GT
Week 02, Exam 01 
Theory Assignment 01 
Exam date: 231222, Thursday
Written date: 311222, Saturday, 11.00 am 

QS 02: trim the  edge if u -> v = 1 but v -> u = 0 and return number of edges removed.   
*/


// input a graph in directional way and check if the graph is bi-directional
#include <bits/stdc++.h>
using namespace std;


int adjMatrix[10][10] = {0};

int trimEdges(int n)
{
        int count = 0;
        for(int i=0; i<=n; i++)
        {
                for(int j=0; j<=n; j++)\
                {
                        if(adjMatrix[i][j] == 1 && adjMatrix[j][i] == 0)
                        {
                                adjMatrix[i][j] = 0;
                                count++;
                        }
                        if(adjMatrix[j][i] == 1 && adjMatrix[i][j] == 0)
                        {
                                adjMatrix[j][i] = 0;
                                count++;
                        }
                }
        }
        return count;
}

/*
4 5
1 2 
2 1
2 3   
3 1
1 3 


2 3 is directed hence 2 -> 3 edge will be removed 
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

        int res = trimEdges(n);
        cout<<"Number of edges removed: "<<res<<endl;

         
        return 0;
}


