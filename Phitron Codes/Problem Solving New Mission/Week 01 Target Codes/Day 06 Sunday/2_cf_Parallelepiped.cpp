






/*  
===========
Problem Solving New Mission 
===========
Week 01 - 130223, Monday to 190223, Sunday 
Day 06 : 190223, Sunday 
Time : 07.00 am 
===========
Ladder : https://earthshakira.github.io/a2oj-clientside/server/Ladder11.html
===========
QS = 2  || A. Parallelepiped || https://codeforces.com/problemset/problem/224/A
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
vector<int>answer;
vector<pii>allSrc;
pii src, destination;
//priority_queue<int, vec, greater<int>>q;


/* ================================================================ */

/*  
Understanding: 

this is a pure mathemaitcal question, implemented through the formula. 

Given the area of three faces of the rectangular parallelepiped which has a common vertex. 
Our task is to find the sum of lengths of all 12 edges of this parallelepiped.
In geometry, a parallelepiped is a three-dimensional figure formed by six parallelograms. 
By analogy, it relates to a parallelogram just as a cube relates to a square or as a cuboid to a rectangle. 
A picture of a rectangular parallelepiped is shown below.

Approach: The area given are s1, s2 and s3 . Let a, b and c be the lengths of the sides that have one common vertex. 
Where s1 = a * b   , s2 = b * c   , s3 = c * a   . It’s easy to find the length in terms of faces areas: 
a = \sqrt{s1s3/s2}   , b = \sqrt{s1s2/s3}   , c = \sqrt{s2s3/s1}   . The answer will be the summation of all the 4 sides, 
there are four sides that have lengths equal to a, b and c.
In the first example the given area s1 = 1, s2 = 1 and s3 = 1. So with the above approach, the value of a, b, c will come out to be 1. 
So the sum of the length of all 12 edges will be 4 * 3 = 12.
Below is the implementation of the above approach: 

link : https://www.geeksforgeeks.org/sum-of-lengths-of-all-12-edges-of-any-rectangular-parallelepiped/

*/

int edge1, edge2, edge3;

// formula of Sum of lengths of all 12 edges of any rectangular parallelepiped
void find_sum_all_edges()
{
        int length1 = sqrt(edge1 * edge2 / edge3);
        int length2 = sqrt(edge1 * edge3 / edge2);
        int length3 = sqrt(edge3 * edge2 / edge1);

        int sum = length1 + length2 + length3;

        int total_sum = 4 * sum;

        cout<<total_sum<<endl;

}

int main(){

       
       cin>>edge1>>edge2>>edge3;

       find_sum_all_edges();

        return 0;
}


