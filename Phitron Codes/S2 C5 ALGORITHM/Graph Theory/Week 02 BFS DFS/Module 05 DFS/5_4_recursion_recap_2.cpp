// dfs 
// mod date: 201222, tuesday, 
// watch date: 251222, sunday, 04.00 pm 
// 5-4: recursion recap 2: check if a str is palindrome using recursion 


// dfs 
// mod date: 201222, tuesday, 
// watch date: 251222, sunday, 03.00 pm 
// 5-3: recursion recap 1: get sum of all positive nums of n. 
#include <bits/stdc++.h>
using namespace std;

// bug can not check "mamm" 
bool isPalin(string s, string y, int i=0)
{
    int n = s.length();
    int flag = 0;
    if(s[i] == y[n-i-1])
    {
        flag = 1;
        isPalin(s, y, i+1);
    }
    else
        flag = 0;
    
    if(flag)
        return true;
    else
        return false;
}

// bug can not check "mamm" 
bool isPalin2(string s, string y, int i=0)
{
    int n = s.length();
    int flag = 0;
    if(s[i] != y[n-i-1])
        return false;
    else
        return true;
    isPalin(s, y, i+1);
    
}

// main function for checking if a str is recursion 
/*
the funda is that as we know empty string or size of 1 strign is palindrome. so this will be base case.
and we will check if smaller part of the str is a palindrome in respect of 0th and n-1th node. 
so we will make substr with 1, n-2 i.e with 2nd and last - 1 th characters and pass it in recursive call with the first and last char if equal 
*/
bool isPalin3(string s)
{
    if(s == "" || s.size() == 1)
        return true;
        
    int n = s.size();
    string sub_string = s.substr(1, n-2); // taking a substring out of 1'th index to n-2 i.e last-1 index 
    
    return isPalin3(sub_string) && (s.front() == s.back()); // checking if the smaller sub str and 0'th and n-1'th elements are palindrome
    
    
}

int main() {

    string s = "mamm";
    bool x = isPalin2(s, s);
    cout<<x<<endl;
    
    if(isPalin3(s)) cout<<"palindrome"<<endl;
    else cout<< "not palindrome"<<endl;
    
    return 0;
}