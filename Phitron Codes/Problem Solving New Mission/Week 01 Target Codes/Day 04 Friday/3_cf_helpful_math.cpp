


/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 04 : 170223, Friday  
Time : 08.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 03 || A. Helpful Maths || http://codeforces.com/problemset/problem/339/A
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

we will be given a string with 123 and with + sign in between them most likely in 
reverse order. we have to make it increasing order with appropriate + sign in between them 


*/


int main(){

        string s, ans = "";
        cin>>s;

        if(s.size() == 1)
        {
                cout<<s<<endl;
                return 0;
        }

        sort(s.begin(), s.end());
        for(int i=0; i<s.size(); i++)
        {
                if(s[i] == 49 && ans == "")
                {
                        ans += '1';
                }
                else if(s[i] == 49)
                {
                        ans += "+1";
                }
                else if(s[i] == 50  && ans == "")
                {
                        ans += '2';
                }
                else if(s[i] == 50)
                {
                        ans += "+2";
                }
                else if(s[i] == 51 && ans == "")
                {
                        ans += '3';
                }
                else if(s[i] == 51)
                {
                        ans += "+3";
                }                
        }

        cout<<ans<<endl;


        return 0;
}


// another non if else approach : 
/*
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
int a,b;
char s[110];
int y[4];
int main(){
    scanf("%s\n",s);
    for(int i=0;i<strlen(s);i+=2){
        if(s[i]=='1')y[1]++;
        if(s[i]=='2')y[2]++;
        if(s[i]=='3')y[3]++;
    }
    a=0;
    for(int q=1;q<=3;q++){
        for(int i=1;i<=y[q];i++){
            if(a>0)printf("+");
            a++;
            printf("%d",q);
        }
    }
        printf("\n");
}
*/

/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Split the string into individual summands
    size_t start = 0;
    vector<int> summands;
    while (true) {
        size_t end = s.find("+", start);
        if (end == string::npos) {
            end = s.length();
        }
        summands.push_back(stoi(s.substr(start, end - start)));
        if (end == s.length()) {
            break;
        }
        start = end + 1;
    }

    // Sort the summands in non-decreasing order
    sort(summands.begin(), summands.end());

    // Join the sorted summands into a new string
    string sorted_sum;
    for (int i = 0; i < summands.size(); i++) {
        if (i > 0) {
            sorted_sum += "+";
        }
        sorted_sum += to_string(summands[i]);
    }

    // Print the new sum
    cout << sorted_sum << endl;

    return 0;
}
*/