








// /*  
// ===========
// Codeforces Contest 
// ===========
// 020323, Thursday
// Time : 08.00 pm 
// ===========
// Div 3 || Round 855
// ===========
// QS =  tmp_2 
// ===========

// ===========
// Mahboob Alam 
// ===========
// */


// #include <bits/stdc++.h>
// using namespace std;

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




#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"


void solve() {
    ll n,k; cin>>n>>k;
    string s; cin>>s;
    map<char,ll>mp1,mp2;
    ll ans=0;
    for(auto x: s){
        if(isupper(x)) mp1[x]++;
        else mp2[x]++;
    }
    for(auto x: mp1){
        char c=tolower(x.first);
        while(mp2.find(c)!=mp2.end() and mp2[c]>0 and mp1[x.first]>0) {
            ans++;
            mp2[c]--;
            mp1[x.first]--;
        }
        while(mp1[x.first]>=2 and k>0){
            k--;
            ans++;
            mp1[x.first]-=2;
        }
    }
    
    for(auto x: mp2){
        while(mp2[x.first]>=2 and k>0){
            k--;
            ans++;
            mp2[x.first]-=2;
        }
    }
    
    cout<<ans<<endl;
    
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
