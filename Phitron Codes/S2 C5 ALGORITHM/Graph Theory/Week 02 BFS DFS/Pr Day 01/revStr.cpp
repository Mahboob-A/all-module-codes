// algo 
// gt, bfs, practice day 01 
// QS 04: reverse str using recursion 
// mod date: 191222, Sunday 
// practice date: 241222, Saturday, 10.00 pm 

#include <bits/stdc++.h>
using namespace std;


void revStr(string &s, int i = 0)
{
        int n = s.length();

        // if(i== n/2)
        //         return;
        // both terminating case is same
        if(s[i] == s[n-i-1])
                return;

        swap(s[i], s[n-i-1]); // swapping first to last and last to first and then i'th to n-i'th and n-i'th to i'th (-1 is to exclude the null char)
        revStr(s, i+1);
        cout<<s<<endl;




}

int main() {

        string s = "Phitron";
        revStr(s);
        cout<<s<<endl;


        return 0;
}
