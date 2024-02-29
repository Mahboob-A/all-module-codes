
// algo 
// gt, bfs, practice day 01 
// QS 06: sum of digits, recursive
// mod date: 191222, Sunday 
// practice date: 251222, Sunday, 08.20 am 

// the programme has some bug
// when I am printing the first cap in the func it gives o/p but when i try to return it doesnot work
// fix the bug 
#include <bits/stdc++.h>
using namespace std;

bool isCap(char c)
{
    cout<<c<<endl;
    if(c>='A' && c<='Z')
        return true;
    else
        return false;
}

int solve(string s, int i=0)
{
    int n = s.length();
    if(i>n-1)
        return -1;
        
    if(isCap(s[i]))
    {
        cout<<i<<endl;
        cout<<s[i]<<endl;
        return i;
    }
    solve(s, i+1);
    
}

char firstCap(string s)
{
    int i = solve(s);
    cout<<i<<endl;
    
    if(i==-1)
        cout<<"No capital letter in the string";
    else
        return s[i];
}

int main() {

    string s = "iamAgoodBoy";
//     string s = "iamagoodboy";
    char c = firstCap(s);
    cout<<c<<endl;
    // char z = 'A';
    // bool ans = isCap(z);
    // cout<<isCap('Z')<<endl;
    // cout<<s[4]<<endl;
    
    
    return 0;
}
