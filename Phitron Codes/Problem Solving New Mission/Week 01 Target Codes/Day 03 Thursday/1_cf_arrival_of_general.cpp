

/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 03 : 160223, Thursday  
Time : 04.00 pm 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 01 || A. Arrival of the General || https://codeforces.com/problemset/problem/144/A
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

we will be given n, the size of array and n elements. 
I have to sort it in a way that the the biggest element remains in the 1st pos and the least 
element remains at the last pos 
*/


// void bubsort()    // no need of bubble sort here 
// {
//         for(int i=0; i<n; i++)
//         {
//                 for(int j=0; j<n-1; j++)
//                 {
//                         if(arr[j] > arr[j+1])
//                         {
//                                 int tmp = arr[j];
//                                 arr[j] = arr[j+1];
//                                 arr[j+1] = tmp;
//                         }
//                 }
//         }
// }

/*  
Algo: 
Min Num of swaps needed of n elements in an array to bring the max element in 1st pos and smallest
element in last pos : 

the algorithm is that we will take input the n value 
we will take the max and min element and maxindex and minindex. 

the min num of swaps will be = maxindex + (last index of array(i.e n-1)) - minindex
here the edge case is : 
if the index of the max value is > than the index of  min value, in this case we will incriment 1 
to the min index and the rest calculation remain same 

33 44 11 22 => here the max index is 1 and min index is 2. our task is to move the max to left and min to right. 
in this case, the max is already inclind towards left and min also inclind towards right. 

10 10 58 31 63 40 77 => in this case, there are two min index with same value, 0 and 1 index. 
as our target is to take the min to the right, so we will not take the left most min, we will take the right most min value index 
so in this case we have to check like this mn >= arr[i], so we will get the last min. 
and see, the max value is in the rightmost index, i.e in 6 index. so, the max val index is greater and min value index is 
smaller, in this case, while swapping, we will cross the min value and and the max value while taking the min to the right 
and max to the left. this will be extra count, in this case, if we see that min index is lesser, and max index in greater, that means 
min is in left and max is in right, so in this case we will minus 1 from the total answer. 

33 33 11 22 => see this example, while taking the max index, we will only take 1st pos of max element if there are more than one
same element of max. because, we want to move it to left, and if we take the last max, then we will be moving to the right, 
but we want the leftmost max, so we will check like mx < arr[i] this way ensuring only taking the left most max 
if there are consequitive same max values. 

so the final algo to min number of moves to make the max val at 1st pos and min val at last pos is : 
if maxindex > minindex : 
        - minindex++ 
print maxindex + n-1 - minindex 



*/

int main(){

        int n;
        cin>>n;
        // no need of array to store the elements as 
        // we are calculating while taking input 
        int min_idx, max_idx, mx = -1, mn = 110;
        for(int i=0; i<n; i++)
        {
                int val;
                cin>>val;
                if(mx < val)   // taking only the first max index if there are consequitive same max elements
                {
                        mx = val;
                        max_idx = i;
                }
                if(mn >= val)   // taking the last found min if there are consequitive same min elements
                {
                        mn = val;
                        min_idx = i;
                }

        }

        if(max_idx > min_idx)   // to exclude the cross of min and max val, increase min by 1 
        {
                min_idx++;
        }
        cout<<max_idx+(n-1)-min_idx<<endl;

        return 0;
}




