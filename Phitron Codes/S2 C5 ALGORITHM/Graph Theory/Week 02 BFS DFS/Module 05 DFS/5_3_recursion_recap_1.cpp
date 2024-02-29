
// dfs 
// mod date: 201222, tuesday, 
// watch date: 251222, sunday, 03.00 pm 
// 5-3: recursion recap 1: get sum of all positive nums of n. 
#include <bits/stdc++.h>
using namespace std;

// sum of digits of a number (like if n = 15 then 1 + 5 = 6)
int digSum(int n, int sum=0)
{
    if(n==0)
        return sum;
        
    sum += n%10;
    n=n/10;
    return digSum(n, sum);   // digSum(n, sum);
}

// sum of all positive numbers from 1 to n (sum of all numbers like if n=5 then  1+2+3+4+5 = 15)
int getSum(int n)
{
    if(n==1)
        return 1;
    
    return getSum(n-1) + n;
    
}

int getSum2(int n, int sum = 0, int begin=1)
{
    
    if(begin > n)
        return sum;
    // if(begin % 2 == 0)
        sum += begin;
    

    return getSum2(n, sum, begin+1);
}

int main() {

    int n = 21;
    int res = getSum(n);
    cout<<res<<endl;
    int res2 = getSum2(n);
    cout<<res2<<endl;
    int res3 = digSum(n);
    cout<<res3<<endl;
    
    return 0;
}