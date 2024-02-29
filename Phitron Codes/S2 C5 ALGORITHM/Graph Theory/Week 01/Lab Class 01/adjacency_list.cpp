/*
Algorithms
Graph Theory
Week 01
Lab Class 01
2-2 : Adjacency Matrix
141222, Wednesday, 03.00 pm
*/

#include <bits/stdc++.h>
using namespace std;

/*
// if the graph is weighted, then instead of 1, we will write the weight in [i][j] = weight for adajcency matrix
undirected unweighted
0------1
        /    \
     2 ---- 3


0 ---> 1
1 -----> 0
1 ----> 2
1 ----> 3
2 ----> 1
2 -----> 3
3 -----> 1
3 -----> 2


directed weighted

note: for adj_list, if the graph is weighted, then we use pair data where x = (node, weight)
0------1
        /    \
     2 ---- 3


      5
0 ----> 1

      3
1 -----> 2

     6
3 -----> 1

      7
3 -----> 2

x -> (node, weight)

0 -> (1, 5)
1 -> (2, 3)
2 ->
3 -> (1, 6), (2, 7)

pair<datatype, datatype> variable_name;
1st data = variable_name.first
2nd data = variable_name.second
a pair data can hold any two different type of data

push_in_vector:
vector<pair<int, int>> adj_list[4]   -> vector of pair data of size 4 to include node and weight

adj_list[0].push_back({1, 5})   <=  inserting pair of int    || or for older version of c++ => adj_list[0].push_back(pair<int, int>(1, 5))



*/

int main() {

        // undirected unweighted 

        // int nodes = 4;
        // vector<int> adj_list[nodes];

        // adj_list[0] = {1};
        // adj_list[1] = {0, 2, 3};
        // adj_list[2] = {1, 3};
        // adj_list[3] = {1, 2};

        // for (int i = 0; i<nodes; i++)
        // {
        //         cout << i << " -> ";
        //         for (int j = 0; j < adj_list[i].size(); j++)
        //         {
        //                 cout << adj_list[i][j] << " ";
        //         }
        //         cout << endl;
        // }

        // directed weighted 

        int nodes = 4;
        vector<pair<int, int>> adj_list[nodes];

        // we are inserting a pair of int as <node, weight> to respective index node of vector   using push_back   
        // adj_list[0].push_back({1, 5});
        // adj_list[1].push_back({2, 3});
        // adj_list[3].push_back({1, 6});
        // adj_list[3].push_back({2, 7});

        // adj list with list initialization
        // {} -> this is list and {{}} and inside another curly brace, we can insert a pair data, in this way 
        // we can initialize the adj_list without uisng push_back 
        adj_list[0] = {{1, 5}};
        adj_list[1] = {{2, 3}};
        adj_list[2] = {};   // adj_list[2] = {{}} -> this will output (0, 0) hence we can not put {{}} to node that has 0 conncetion
        adj_list[3] = {{1, 6}, {2, 7}};

        for (int i = 0; i<nodes; i++)
        {
                cout << i << " -> ";
                for (int j = 0; j < adj_list[i].size(); j++)
                {
                        cout << "(" << adj_list[i][j].first <<", " <<adj_list[i][j].second<< "), ";
                }
                cout << endl;
        }

                return 0;
}