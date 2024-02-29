/*
Algorithms
Graph Theory
Week 01
Lab Class 01
2-2 : Adjacency Matrix
141222, Wednesday, 2.30 pm
*/


#include <bits/stdc++.h>
using namespace std;

/*
// if the graph is weighted, then instead of 1, we will write the weight in [i][j] = weight of node
TC of adjacency matrix = O(n^2)
SC of adjacency matrix = O(n^2)

*/
int matrix[5][5] = {0};
const int N = 7;
// creating a 2d vector with fixed size of rows and cols 
vector<vector<int>>adjMatrix(N+1, vector<int>(N+1, 0));

int main() {

        for(int i=0; i<=N; i++)
        {
                for(int j=0; j<=N; j++)
                {
                        cout<<adjMatrix[i][j]<<" ";
                }
                cout<<endl;
        }
        cout<<endl;



        /*

        int nodes = 5;

        int matrix[nodes][nodes];

        // for (int i = 0; i < nodes; i++)
        // {
        //         for (int j = 0; j < nodes; j++)
        //         {
        //                 matrix[i][j] = i * j;
        //         }

        // }
           */
        for (int i = 0; i < 5; i++)
        {
                for (int j = 0; j < 5; j++)
                {
                        cout << matrix[i][j] << " ";
                }
                cout << endl;
        }

     

        return 0;
}
