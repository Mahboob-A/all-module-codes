
// algo 
// gt, bfs, practice day 01 
// QS 05: sum of digits, recursive
// mod date: 191222, Sunday 
// practice date: 251222, Sunday, 08.00 am 

#include <bits/stdc++.h>
using namespace std;

int digSum(int n, int sum=0)
{
    if(n==0)
        return sum;
        
    sum += n%10;
    n=n/10;
    digSum(n, sum);
}

int main() {

    int n = 7464;
    int s = digSum(n);
    cout<<s<<endl;
    
    
    return 0;
}