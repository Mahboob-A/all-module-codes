








/*  
===========
Codeforces Contest 
===========
020323, Thursday
Time : 08.00 pm 
===========
Div 3 || Round 855
===========
QS =  tmp_1  
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i, y) for(int i=true; i<y; i++)
#define For(i, y) for(int i=false; i<=y; i++)
#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define no_ans cout<<-1<<"\n"
#define en '\n'
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */






int main(){

        FIO 


        return 0;
}



/*  
#include <bits/stdc++.h>
 
using i64 = long long;
 
void solve() {
    int n;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    
    int j = 0;
    for (int i = 0; i < 4; i++) {
        char lo = "meow"[i];
        char up = "MEOW"[i];
        if (j == n || (s[j] != lo && s[j] != up)) {
            std::cout << "NO\n";
            return;
        }
        while (j < n && (s[j] == lo || s[j] == up)) {
            j++;
        }
    }
    if (j == n) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}


*/


/*
||-----------------------------------||
||        Rahat Khan Pathan          ||
||         Programming Hero          ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#define ll long long int
#define pub push_back
#define pob pop_back
#define PI 3.14159265359
#define vll vector<ll>
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique(All(X)),(X).end())
#define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
#define pi pair<ll,ll>
#define vpair vector<pair<ll,ll> >
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define minus cout<<-1<<endl
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string a="meow";
    int x=0;
    char cnt[256]={0};
    int m=0,e=0,o=0,w=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='m') m=1;
        if(s[i]=='e') e=1;
        if(s[i]=='o') o=1;
        if(s[i]=='w') w=1;
        if(i>0 && s[i]==s[i-1]) continue;
        else 
        {
            if(x>3)
            {
                no;
                return;
            }
            if(s[i]==a[x])
            {
                x++;
            }
            else 
            {
                no;
                return;
            }
        }
    }
    if(m && e && o && w) yes;
    else no;
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--) solve();
    return 0;
}