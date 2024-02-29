

/*
Algo Greedy and Backtracking 
Week 09 : Mod date : 130223, Tuesday 
Watch date : 210523, Sunday and 220523, Monday, 06.00 am 

Problem : Generate all possible permutations using backtracking 
33-5: Code

*/



#include <bits/stdc++.h>
using namespace std;

// #define loop(i, x, y) for(int i=x; i<y; i++)
// #define Loop(i, x, y) for(int i=x; i<=y; i++)
// #define loop(y) for(int i=0; i<y; i++)
// #define For(y) for(int i=1; i<=y; i++)

#define loop(i, y) for(int i=0; i<y; i++)
#define For(i, y) for(int i=1; i<=y; i++)
#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e9 
const int N = 1e5+100;
vector<int>ans1;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;
vec adjList[N];
int visited[N];
int parent[N];
int dist[N];
int n, m;


// All possible permutations 
// General pseudocode of backtracking 
/*
backtrack(state)
{
        // base case 
        if solution_found(state)
        {
                ans.push_back(state)
                return 
        }

        // loop over all the possible candidates 
        for all possible candidates 
        {
                - add the candidate to the state 
                - backtrack(state)
                - remove the candidate 
        }

}


*/

// As we will push a vector, a vector of vecotr is needed. 
vector<vector<int>>ans;



bool solution_found(int id)
{       
        // if id == n, then we can assume that we have reached to a state where no more 
        // insertion can be done and it is a potential answer 
        return id == n;
}


vector<int>get_candidates(vector<int>state)
{
        // mark which candidates are already taken 
        map<int, int>taken_candidates;
        for(int candidate : state)
        {
                taken_candidates[candidate] = 1;
        }

        // ignore the taken candidates, take only the candidates that are not taken 
        vector<int>possible_candidates;
        for(int i=1; i<=n; i++)
        {
                if(taken_candidates[i] == 0)  // if(taken_candidates.count(i) == 0)
                {
                        possible_candidates.push_back(i);
                }
        }

        return possible_candidates;
}



void backtrack(int pos, vector<int>state)
{
        // base case 
        if(solution_found(pos))
        {
                ans.push_back(state);
                return;
        }

        // loop through all the possible states 
        vector<int> possible_candidates = get_candidates(state);
        for(int candidate : possible_candidates)
        {
                state[pos] = candidate;
                backtrack(pos+1, state);  // pos++ wont work 
                state[pos] = 0;
        }
}


int main(){

	// ios_base::sync_with_stdio(false);
        // cin.tie(NULL);

        cin >> n;

        vector<int>state(n);

        // 0 as the initial state of the vector - as now no possible candidate is choosen 
        backtrack(0, state);
        
        

        // print the answer 
	for(vector<int> candidate_vec : ans)
        {
                for(int candidate : candidate_vec)
                {
                        cout << candidate << " ";
                }
                cout << endl;
        }

                
        

	return 0;
}