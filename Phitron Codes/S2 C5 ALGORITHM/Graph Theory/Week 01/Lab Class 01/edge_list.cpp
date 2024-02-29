/*
Algorithms
Graph Theory
Week 01
Lab Class 01
2-2 : Adjacency Matrix
141222, Wednesday, 07.00 pm 
*/

/*
0------1
        /    \
     2 ---- 3

in edge list, we take a vector of vector.
we only take the two node that has an edge
[
        [node1, node2, weight]
        [0, 1]
        [1, 2]
        [1, 3]
        [2, 3]

]

So, in the vector it will look like, {{0, 1}, {1, 2}, {1, 3}, {2, 3}}
and if the graph is weighted then the graph will be like => {{0, 1, weight}, {1, 2, weight}, {1, 3, weight}, {2, 3, weight}}

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

        int nodes = 4;
        vector<vector<int>> edge_list = {    // initializing the list 
                {0, 1},   // {0, 1, weight} if the list has weight
                {1, 2},
                {1, 3},
                {2, 3}
        };

        // edge list using pushback 

        // edge_list.push_back({0, 1});
        // edge_list.push_back({1, 2});
        // edge_list.push_back({1, 3});
        // edge_list.push_back({2, 3});

        for (int i = 0; i < edge_list.size(); i++)
        {
                cout << edge_list[i][0] << " " << edge_list[i][1]<<endl;
        }

                return 0;
}