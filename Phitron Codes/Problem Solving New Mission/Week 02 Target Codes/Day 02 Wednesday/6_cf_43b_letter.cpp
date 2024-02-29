


/*  
===========
Problem Solving New Mission 
===========
Week 02 - 210223, Tuesday to 270223, Monday
Day 02 : 220223, Wednesday
Time : 08.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 07 || B. Letter || https://codeforces.com/problemset/problem/43/B
===========

===========
Mahboob Alam 
===========
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
#define INT_INF 1e8
vector<int>answer;
vector<pii>allSrc;
pii src, destination;

//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

we will be given two string with mixed cases. 
we have to determine, using any characters only once of string one, can we create the string second. 

so, the logic is, we will count the frequency of both string, and as we can not change the cases, so simply 
take an array of 125 and count the frequency of each char with out extracting the 0'th index. 

we only can vreate the string 2 from string one only when we can see that each character frequence in string 2 should be less than 
that character's frequency in string 1, i.e we only can create the string 2 using any char of it only once, when we see that the same characters
frequency in string 2 is less and in string 1 is greater. 

*/

const int N = 150;
int count1[N], count2[N];


int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        for(int i=0; i<s1.size(); i++)
        {
                count1[s1[i]]++;      // taking 65 <=> 92 and 97 <=> 122 as the index as can not make all cases into a either lower or upper 
        }

        for(int i=0; i<s2.size(); i++)
        {
                count2[s2[i]]++;
        }

        bool flag = true;
        for(int i=65; i<=122; i++)
        {
                // if string 1 char count is less that string 2 char count, then we can not make string 2 using any char only once of string 1 
                if(count1[i]  < count2[i])
                {
                        flag = false;
                        break;
                }
        }

        if(flag)
                cout<<"YES"<<endl;
        else 
                cout<<"NO"<<endl;

        return 0;
} 













// this code only valid if the problem statement tells that upper case and lowercase characters should not be treated differently
// because I have made all the upper case to lower case 

/**

int count1[30];
int count2[30];

int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        for(int i=0; i<s1.size(); i++)
        {
                if(s1[i] != ' ')
                {
                        if(s1[i] >= 65 && s1[i] <=92)
                        {
                                s1[i] = s1[i] + 32;
                        }
                        count1[s1[i] - 97]++;
                }
        }

        // cout<<s1.size()<<endl;

        for(int i=0; i<s2.size(); i++)
        {
                if(s2[i] != ' ')
                {
                        if(s2[i] >= 65 && s2[i] <=92)
                        {
                                s2[i] = s2[i] + 32;
                                // int indx = s1[i] - 65;
                                // count1
                        }
                        count2[s2[i] - 97]++;
                }
        }

        // cout<<endl<<s1<<endl;

        // for(int i=0; i<26; i++)
        // {
        //         cout<<i<<" -> "<<count1[i]<<endl;
        // }

        // cout<<endl;
        // for(int i=0; i<26; i++)
        // {
        //         cout<<i<<" -> "<<count2[i]<<endl;
        // }

        bool flag = true;
        int indx = -1;
        for(int i=0; i<26; i++)
        {
                if(count2[i] > 0 && count1[i] == 0)
                {
                        flag = false;
                        break;
                }                
                else if(count1[i] != 0 && count2[i] != 0)
                {
                        if(count2[i] > count1[i])
                        {
                                flag = false;
                                break;
                        }
                }
        }

        if(flag)
        {
                cout<<"YES"<<endl;
        }
        else
        {
                cout<<"NO"<<endl;
        }


        return 0;
}

*/
