

/*  

Educational Codeforces Round 143 (Rated for Div. 2)

question A 

we are taking both string input, string a and b.
then reversing the 2nd string i.e string b. 

then concating or adding the string b to string a. 

then running a loop till the new size of string a - 1 
and checking if a[i] == a[i+1]
and incrementing the count variable. 
if the count is <= 1 then yes else no. 

*/

// https://codeforces.com/contest/1795/problem/A
#include<bits/stdc++.h>
using namespace std;

int t, n, m;
string s1, s2;

void solve()
{
        cin>>n>>m;
        cin>>s1>>s2;

        reverse(s2.begin(), s2.end());

        s1+=s2;

        int count = 0;
        for(int i=0; i<s1.size() - 1; i++)
        {
                if(s1[i] == s1[i+1])
                {
                        count++;
                }
        }

        if(count <= 1)
        {
                cout<<"YES"<<endl;
        }
        else 
        {
                cout<<"NO"<<endl;
        }

}

int main(){

        cin>>t;
        while(t--)
        {
                solve();
        }

        return 0; 
}