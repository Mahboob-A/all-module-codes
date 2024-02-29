

/*  
Week 06 : Intro to dp 
Module 21.5 : practice day 01 
mod date : 230123, Monday. 
practice date : 140223, tuesday, 07.00 am 
current module : week 09 - lab class 09 


Question link: https://docs.google.com/document/d/1crH0BkdvYCbdzxIgJhggq_mpNQKVrZyEDDqZ1joHg7U/edit#
question 01: 

All the problems below are related to Dynamic Programming. 
You have to solve each problem using both memoization and tabulation methods.


Write code to output the n-th Tribonacci number. 
A Tribonacci series is a series where each number of the series is the sum of previous three numbers 
(except the 1st three numbers which are all 1-s)

The first few numbers of the series is as follows:

1, 1, 1, 3, 5, 9, 17, 31, 57, 105, 193, 355, 653, 1201 . . .

What is the time and space complexity of your code?

*/

#include<bits/stdc++.h>
using namespace std;

const int N = 101;
int n, dp[N];

long long trib(long long n)   // state 
{
        // 1. base case 
        if(n==1 || n==2 || n==3)  // if(n<=3)
        {
                return 1;
        }

        // 2. if the answer is already computed, return the answer 
        if(dp[n] != 0)
        {
                return dp[n];
        }

        // 3. calculate the answer from the smaller sub-problems 
        dp[n] = trib(n-1) + trib(n-2) + trib(n-3);
        return dp[n];
}

int arr[10];

void fun()
{
        
        arr[1] = arr[2] = arr[5] = 1;
        for(int i=0; i<10; i++) cout<<arr[i]<<endl;
}

int main(){

        // cin>>n;

        // // fun();

        // cout<<endl<<arr[1]<<endl<<arr[5]<<endl;

        // cout<<trib(n)<<endl;


        return 0;
}