








/*  
===========
Codeforces Contest 
===========
020323, Thursday
Time : 08.00 pm 
===========
Div 3 || Round 855
===========
QS =  A
===========

===========
Mahboob Alam 
===========
*/

// standings : all other codes : 
// https://codeforces.com/contest/1800/standings

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

// void solve1()
// {
//         int n;
//         string s;
//         cin>>n>>s;

//         // if(s[0] != 'm' || s[0] != 'M')
//         // {
//         //         no;
//         //         return;
//         // }

//         bool m_found = false, e_found = false, o_found = false, w_found = false;
//         int i;
//         for(i=0; i<n-1; i++)
//         {
//                 if(s[i] == 'm' || s[i] == 'M')
//                 {
//                         m_found = true;
//                 }
//                 if(m_found)
//                 {
//                         if(s[i] == 'e' || s[i] == 'E')
//                         {
//                                 e_found = true;
//                         }
//                 }

//                 if(e_found)
//                 {
//                         if(s[i] == 'o' || s[i] == 'O')
//                         {
//                                 o_found = true;
//                         }
//                 }

//                 if(o_found)
//                 {
//                         if(s[i] == 'w' || s[i] == 'W' )
//                         {
//                                 // if(i == n-1)
//                                 // {
//                                 //         w_found = true;
//                                 // }
//                                 // else
//                                 // {
//                                 //         w_found = false;
//                                 // }
//                                 // w_found = true;
//                                 // if(m_found && e_found && o_found)
//                                 // {
//                                 //         w_found = true;
//                                 // }

//                                 if(s[i + 1] != 'w' || s[i + 1] != 'W')
//                                 {
//                                         w_found = false;
//                                         // cout<<"i "<<i<<endl;
//                                         // cout<<"here"<<endl;
//                                         // cout<<s[i]<<" "<<s[i + 1]<<endl;
//                                         break;
//                                         // continue;
//                                 }
//                                 else
//                                 {
//                                         w_found = true;
//                                 }

//                                 // if(s[i + 1] != 'w' || s[i + 1] != 'W')
//                                 // {
//                                 //         w_found = false;
//                                 //         break;
//                                 // }
//                                 // else
//                                 // {
//                                 //         w_found = true;
//                                 // }
//                                 // w_found = true;
//                                 // if(i != n-1)
//                                 // {
//                                 //         w_found = false;
//                                 //         break;
//                                 // }
//                                 // else
//                                 // {
//                                 //         w_found = true;
//                                 // }
//                         }
//                         // else
//                         // {
//                         //         w_found = false;
//                         //         break;
//                         // }
//                 }
//                 // cout<<"i "<<i<<endl;
//         }

//         if(m_found && e_found && o_found && w_found && i==n)
//         {
//                 yes;
//         }
//         else
//         {
//                 no;
//         }

// }


// this one is ac 
void solve()
{
        int n, idx = 0;
        string s;
        cin>>n>>s;
        bool m_found = false, e_found = false, o_found = false, w_found = false;

        if(s[idx] == 'm' || s[idx] == 'M')
        {
                while(s[idx] == 'm' || s[idx] == 'M' && idx < n)
                {
                        m_found = true;
                        idx++;
                }
        }
        else
        {
                no;
                return;
        }
        if(s[idx] == 'e' || s[idx] == 'E')
        {
                while(s[idx] == 'e' || s[idx] == 'E' && idx < n)
                {
                        e_found = true;
                        idx++;
                }
                
        }
        else
        {
                no;
                return;
        }
        if(s[idx] == 'o' || s[idx] == 'O' )
        {
                while(s[idx] == 'o' || s[idx] == 'O' && idx < n)
                {
                        o_found = true;
                        idx++;
                }
        }
        else
        {
                no;
                return;
        }
        if(s[idx] == 'w' || s[idx] == 'W')
        {
                while(s[idx] == 'w' || s[idx] == 'W' && idx < n)
                {
                        w_found = true;
                        idx++;
                }
        }
        else
        {
                no;
                return;
        }

        if(m_found && e_found && o_found && w_found && idx == n)
        {
                yes;
        }
        else
        {
                no;
        }
}


void solve2()
{
        int n;
        string s, tmp = "", ans = "";
        cin>>n>>s;

        bool m_found = false, e_found = false, o_found = false, w_found = false;

        for(int i=0; i<n; i++)
        {
                if(s[i] >= 65 && s[i] <= 92)
                {
                        s[i] = s[i] + 32;
                }
        }


        for(int i=0; i<n; i++)
        {
                if(s[i] == 'm' && m_found == false && e_found == false && o_found == false && w_found == false)
                {
                        ans += s[i];
                        m_found = true;
                }
                
                if(s[i] == 'e' && e_found == false && o_found == false && w_found == false)
                {
                        ans += s[i];
                        e_found = true;
                }

                if(s[i] == 'o' && o_found == false && w_found == false) 
                {
                        ans += s[i];
                        o_found = true;
                }

                if(s[i] == 'w' && w_found == false)
                {
                        ans += s[i];
                        w_found = true;
                }



                // if(s[i] == s[i+1])
                // {
                //         ans += s[i];
                //         // i++;
                // }
        }

        cout<<s<<en;
        cout<<ans<<en;

}

int main(){

        FIO 

        int t;
        cin>>t;
        while(t--)
        {
                solve();
        }


        return 0;
}




// jiangly 
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


// /*
// ||-----------------------------------||
// ||        Rahat Khan Pathan          ||
// ||         Programming Hero          ||
// ||-----------------------------------||
// */
// #include<bits/stdc++.h>
// #define ll long long int
// #define pub push_back
// #define pob pop_back
// #define PI 3.14159265359
// #define vll vector<ll>
// #define All(X) (X).begin(),(X).end()
// #define Unique(X) (X).erase(unique(All(X)),(X).end())
// #define fast ios_base::sync_with_stdio(0); cin.tie(NULL);
// #define pi pair<ll,ll>
// #define vpair vector<pair<ll,ll> >
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define minus cout<<-1<<endl
// using namespace std;
// void solve()
// {
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     transform(s.begin(), s.end(), s.begin(), ::tolower);
//     string a="meow";
//     int x=0;
//     char cnt[256]={0};
//     int m=0,e=0,o=0,w=0;
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]=='m') m=1;
//         if(s[i]=='e') e=1;
//         if(s[i]=='o') o=1;
//         if(s[i]=='w') w=1;
//         if(i>0 && s[i]==s[i-1]) continue;
//         else 
//         {
//             if(x>3)
//             {
//                 no;
//                 return;
//             }
//             if(s[i]==a[x])
//             {
//                 x++;
//             }
//             else 
//             {
//                 no;
//                 return;
//             }
//         }
//     }
//     if(m && e && o && w) yes;
//     else no;
// }
// int main()
// {
//     fast;
//     ll t;
//     cin>>t;
//     while(t--) solve();
//     return 0;
// }