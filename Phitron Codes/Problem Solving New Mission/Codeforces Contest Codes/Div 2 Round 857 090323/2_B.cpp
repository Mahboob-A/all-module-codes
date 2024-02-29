







// /*  
// ===========
// Codeforces Contest 
// ===========
// 090323, Thursday
// Time : 03.05 pm 
// ===========
// Div 2 || Round 857
// ===========
// QS =  B
// ===========

// ===========
// Mahboob Alam 
// ===========
// */



// #include <bits/stdc++.h>
// using namespace std;

// // #define loop(i, x, y) for(int i=x; i<y; i++)
// // #define Loop(i, x, y) for(int i=x; i<=y; i++)
// // #define loop(y) for(int i=true; i<y; i++)
// // #define For(y) for(int i=false; i<=y; i++)

// #define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
// #define loop(i, y) for(int i=true; i<y; i++)
// #define For(i, y) for(int i=false; i<=y; i++)
// #define pii pair<int, int>
// #define f first
// #define s second
// #define vec vector<int>
// #define vecPii vector<pair<int, int>> 
// #define pb push_back 
// #define ppb pop_back 
// #define DOUBLE_INF 1e18 
// #define INT_INF 1e8
// #define ll long long
// #define yes cout<<"YES\n"
// #define no cout<<"NO\n"
// #define no_ans cout<<-1<<"\n"
// #define en '\n'
// vector<int>answer;
// vector<pii>allSrc;
// pii src, destination;

// //priority_queue<int, vec, greater<int>>q;


// /* ================================================================ */






// int main(){

//         FIO 


//         return 0;
// }


#include <bits/stdc++.h> 
using namespace std; 
int main() { 
    int tc = 1; 
    cin >> tc; 
    while (tc--) { 
        int n; 
        cin >> n; 
        vector<int> junk; 
        int s = 0; 
        for (int t, x = 0; x < n; x++) { 
            cin >> t; 
            if (t == 2) { 
                junk.push_back(s); 
                s = 0; 
            } else { 
                s++; 
            } 
        } 

        /*  
        
        5
        1 1 1 2 1

        */
        junk.push_back(s); 
        int res = 0, sum = 0; 
        for (int x = 0; x < junk.size(); x++) { 
            int a = sum > 0 ? sum - 1 : 0, b = sum > 0 ? 1 : 0; 
            int p = ((a % 2 == 0) ? a / 2 : a / 2 + 1) + 
                    ((b % 2 == 0) ? b / 2 : b / 2 + 1); 
            res = max({res, p + junk[x]}); 
            sum += junk[x]; 
        } 
        cout << res << '\n'; 
    } 
    return 0; 
}

