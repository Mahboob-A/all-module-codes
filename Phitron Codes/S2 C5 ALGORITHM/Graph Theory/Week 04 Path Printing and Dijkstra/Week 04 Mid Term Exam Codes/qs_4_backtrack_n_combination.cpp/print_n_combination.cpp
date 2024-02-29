

//290123, sunday, 11.00 pm 
// algo, gt, week 4 exam mid term exam print sequence 
// question 04

/*  
Given a positive integer n, write a recursive function to print all combinations of numbers between 1 and n having sum n.										10
For example, 

For n = 5, the following combinations are possible: 
{ 5 }
{ 1, 4 }
{ 2, 3 }
{ 1, 1, 3 }
{ 1, 2, 2 }
{ 1, 1, 1, 2 }
{ 1, 1, 1, 1, 1 }

*/


#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back
const int N = 550;
vii adjList[N];
vec dist(N);
vec visited(N, 0);
int n, m, T=0;


vec comb;

void printCombination()
{
        cout<<"{";
        for(int x : comb)
        {
                cout<<x<<",";
        }
        cout<<"}"<<endl;
}

void findCombination( int val, int idx)
{
        if(val == 0)
        {
                printCombination();
                return;
        }


        for(int i=idx; i<=val; i++)
        {
                comb.pb(i);
                findCombination(val-i, i);
                comb.ppb();
        }
}

int main(){

        vec comb;
        int x;
        cin>>x;

        findCombination(x, 1);

        return 0;
}



