

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 05 : 180223, Saturday 
Time : 10.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 03  || A. Amusing Joke || https://codeforces.com/problemset/problem/141/A
===========

===========
Mahboob Alam 
===========
*/


#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define f first
#define s second
#define vec vector<int>
#define vecPii vector<pair<int, int>> 
#define pb push_back 
#define ppb pop_back 
#define DOUBLE_INF 1e18 
#define INT_INF 1e8
vector<int>ans;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 
we will be given 3 string, we have to construct string 1 and 2 from string 3. 
so, if the size of string 1 + 2 != size of string 3 then we can not construct string 1 and 2 from string 3 

if the size is okey, then we will calculate the frequencies of string 1 and 2. 
then we will run a loop for string 3 and take each char, and substract the index of 
that char form frequency array. 
if we find that any index of freq array is negative, then we can tell that string 3 does not have 
enough char to form string 1 and string 2 

*/

const int N = 26;
int freq[N];

// ac code 
int main(){

        string s1, s2, s3;
        cin>>s1>>s2>>s3;

        if(s1.size() + s2.size() != s3.size())   // if str 1 + 2 != str 3 then no 
        {
                // cout<<"size"<<endl;
                cout<<"NO"<<endl;
                return 0;
        }

        for(char c : s1 + s2)   // counting the frequency of each characters
        { 
                int index = c - 65; // c - 'A' 
                freq[index]++;
        }

        for(char c : s3)   // substracting the char from the pile from the freq arraay 
        {
                freq[c-'A']--;
        }

        bool ans = true;
        // if any index of freq is less than 0, that means the string s3 does not have enough characters 
        // to form the s1 and s2 strig 
        for(int i=0; i<26; i++)  
        {
                if(freq[i] < 0)
                {
                        ans = false;
                        // cout<<"ans"<<endl;
                        break;
                }
        }


        if(ans)
        {
                cout<<"YES"<<endl;
        }
        else
        {
                cout<<"NO"<<endl;
        }



        return 0;
}



        /*
        for(int i=0; i<s1.size(); i++) 
        {
                int index = s1[i] - 65;
                // cout<<index<<endl;
                v1[index]++;
                // cout<<v1[index]<<endl;
        }
        
        // cout<<endl;
        for(int i=0; i<s2.size(); i++) 
        {
                int index = s2[i] - 65;
                // cout<<index<<endl;
                v2[index]++;
                // cout<<v2[index]<<endl;
        }
        
        // cout<<endl<<endl;

        bool ans = true;
        for(int i=0; i<s3.size(); i++)
        {
                int index = s3[i] - 65; 
                if(v1[index] )
                {
                        // cout<<"before v1 : "<<v1[index]<<endl;
                        v1[index]--;
                        // cout<<"after v1 : "<<v1[index]<<endl;
                }
                if(v2[index] )
                {
                        // cout<<"before v2 : "<<v2[index]<<endl;
                        v2[index]--;
                        // cout<<"after v2 : "<<v2[index]<<endl;
                }

                // if(v1[index] == 0 && index >= 0)
                // {
                //         ans = false;
                // }
                // if(v2[index] == 0 && index >= 0)
                // {
                //         ans = false;
                // }
        }

        // cout<<endl<<endl;

        bool flag1 = true, flag2 = true;
        for(int i=0; i<N; i++)
        {
                if(v1[i] < 0)
                {
                        flag1 = false;
                }
                // cout<<v1[i]<<" ";
        }

        // cout<<endl;
        for(int i=0; i<N; i++)
        {
                if(v2[i] < 0)
                {
                        flag2 = false;
                }
                // cout<<v2[i]<<" ";
        }

        // cout<<endl;
        if(flag1 && flag2 )
        {
                cout<<"YES"<<endl;
        }
        else
        {
                cout<<"NO"<<endl;
        }
        // cout<<endl<<endl;
        */

