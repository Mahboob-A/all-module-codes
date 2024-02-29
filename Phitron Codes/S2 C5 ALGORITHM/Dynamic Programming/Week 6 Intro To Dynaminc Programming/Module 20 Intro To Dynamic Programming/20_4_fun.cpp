


/*  
Week 06 : Intro To Dynamic Programming 
Module 20: Intro To Dynamic Programming
Mod date: 210123, Satuerday
Watch date: 120223, Sunday, 08.00 pm 

20-3 : back to fibonacci 
*/
#include <bits/stdc++.h>
using namespace std;


int fib(int n)
{
	if(n<2)
		return 1;
	return fib(n-1) + fib(n-2);
}

int x = 0;

int fun(int n)
{
        cout<<"n:  "<<n<<endl;
        if(n==1)
        {
                cout<<"# n is 1: "<<n<<endl;
                return 1;
        }

        // x += 1;        // 7 
        // return fun(n-1);   // 1 

        //     x += 1;     // 7 
        //     fun(n-1);   // 1 

        
        cout<<"n-1: "<<n-1<<endl;
        fun(n-1);   // 7     // why 7 in printed? should not be it 1? 
        x += 1;   // 7 
        cout<<"x+=1: "<<x<<endl;
        cout<<"after func call n: "<<n<<endl;


        // fun(n-1);   // 1 
        // x += 1;   

        // return fun(n-1);   // 1 
        // x += 1;        //  0
        
    
}

int main(void)
{
	
	
// 	int n = 46;
// 	int x = fib(n);
// 	cout<<x<<endl;

        cout<<endl;
        cout<<"fun: " <<fun(8)<<endl;
        cout<<"x: "<<x<<endl;
                
	
	
	return 0;
}