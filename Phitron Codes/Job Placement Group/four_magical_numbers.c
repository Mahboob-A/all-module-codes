
// contest of job placement group 
// https://www.hackerrank.com/contests/fly-to-your-dream-contest/challenges
// contest date: 080123, Sunday 
// today 090123, Monday 


#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}
int main() {
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        int mxSum=INT_MIN,mnSum=INT_MAX,mxPro=INT_MIN,mnPro=INT_MAX;
        int greaterPositive=INT_MIN,greaterNegative=INT_MAX,smallerPositive=INT_MAX,smallerNegative=INT_MIN;
        bool pos=false,neg=false;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
            {
                greaterPositive=max(greaterPositive,a[i]);
                smallerPositive=min(smallerPositive,a[i]);
                pos=true;
            }
            else
            {
                greaterNegative=min(greaterNegative,a[i]);
                smallerNegative=max(smallerNegative,a[i]);
                neg=true;
            }
        }
        if(pos)
        {
            mxSum=greaterPositive*2;
            mxPro=greaterPositive*greaterPositive;
            mnSum=smallerPositive*2;
            mnPro=smallerPositive*smallerPositive;
        }
        if(neg)
        {
            mxPro=max(mxPro,greaterNegative*greaterNegative);
            mxSum=max(mxSum,smallerNegative*2);
            mnSum=min(mnSum,greaterNegative*2);
            if(pos)
            {
                mnPro=greaterNegative*greaterPositive;
            }
            else
            {
                mnPro=smallerNegative*smallerNegative;
            }
 
        }
 
        printf("%d %d %d %d\n",mxPro,mnPro,mxSum,mnSum);
    }
    return 0;
}