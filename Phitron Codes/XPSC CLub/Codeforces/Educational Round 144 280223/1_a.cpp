



/*  
===========
Educational Codeforces Round 144 (Rated for Div. 2)
===========
280223, Tuesday 
===========
A : A. Typical Interview Problem  || https://codeforces.com/contest/1796/problem/0  
===========
Mahboob Alam 
===========
*/
/*

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

/*  
Understanding: 


*/

/*

int main(){

        FIO 

        int t;
        cin >> t;
        while (t--) 
        {
                int k;
                string s;
                cin >> k >> s;

                bool found = false;
                int f_count = 0, b_count = 0;
        
                for (int i = 0; i < s.length(); i++) 
                {
                        if (s[i] == 'F') 
                        {
                                f_count++;
                                if (f_count % 2 == 1 && b_count % 2 == 0) 
                                {
                                        found = true;
                                }
                        } 
                        else 
                        {
                                b_count++;
                                if (b_count % 2 == 1 && f_count % 2 == 1 && i == s.length() - 1) 
                                {
                                        found = true;
                                }
                        }
                }

                if (found) 
                {
                        cout << "YES" << endl;
                } 
                else 
                {
                        cout << "NO" << endl;
                }
        }
        


        return 0;
}




*/

// ac code 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s,s1;

        string ss = "FBFFBFFBFBFFBFFBFBFFBFFB";

        cin >> s;

        int flag = 0;
        for(int i=0; i<ss.size(); i++)
        {
                if(ss.substr(i, n) == s);
                {
                        flag = 1;
                        break;
                }
        }

        // for(int i=1;i<=1000;i++)
        // {
        //     if(i%3==0)
        //     {
        //         // s1.push_back('F');
        //         s1 += 'F';
        //     }
        //     if(i%5==0)
        //     {
        //         // s1.push_back('B');
        //         s1 += 'B';
        //     }
        // }
        // int flag=0;
        // for(int i=0;i<=s1.size();i++)
        // {
        //     if (s1.substr(i,n) == s)
        //     {
        //         flag=1;
        //         break;
        //     }
        // }

        // cout<<s1<<endl;
        if(flag==1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}