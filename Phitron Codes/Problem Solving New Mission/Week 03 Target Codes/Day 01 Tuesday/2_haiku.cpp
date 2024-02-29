





/*  
===========
Problem Solving New Mission 
===========

===========
Week 03 - 280223, Tuesday to 060323, Monday
Day 01 : 280223, Tuesday
Time : 03.30 pm  
===========

===========
https://earthshakira.github.io/a2oj-clientside/server/Ladder22.html
===========

===========
QS =  02   ||    A. Haiku    ||    https://codeforces.com/problemset/problem/78/A
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

/*  
Understanding: 

1st and 3rd line exact 5 vowels, 2nd line exact 7 vouels. 
running nested loop instead of using || 

*/






int main(){

        FIO 

        string a, b, c;
        getline(cin, a);
        getline(cin, b);
        getline(cin, c);

        string s = "aeiou";
        int count1 = 0, count2 = 0, count3 = 0;
        for(int i=0; i<a.size(); i++)
        {
                if(a[i] != ' ')
                {
                        for(int j=0; j<5; j++)
                        {       
                                if(a[i] == s[j])
                                {
                                        count1++;
                                }
                        }
                }
        }

        for(int i=0; i<b.size(); i++)
        {
                if(b[i] != ' ')
                {
                        for(int j=0; j<5; j++)
                        {
                                if(b[i] == s[j])
                                {
                                        count2++;
                                }
                        }
                }
        }

        for(int i=0; i<c.size(); i++)
        {
                if(c[i] != ' ')
                {
                        for(int j=0; j<5; j++)
                        {
                                if(c[i] == s[j])
                                {
                                        count3++;
                                }        
                        }
                }
        }

        if(count1 == 5 && count2 == 7 && count3 == 5)
        {
                yes;
        }
        else 
        {
                no;
        }

        return 0;
}





// another approch 
// takes count array 
/*  
char s[1000];
bool v[1000];
 
int get() {
	gets(s);
	v['a'] = v['e'] = v['i'] = v['o'] = v['u'] = 1;
	int n = strlen(s);
	int cnt = 0;
	for (int i = 0; i < n; ++i)
		cnt += v[s[i]];
	return cnt;	
}
 
int main() {
	int a = get();
	int b = get();
	int c = get();
	if (a == 5 && b == 7 && c == 5)
		puts("YES");
	else
		puts("NO");
	return 0;		
}


*/