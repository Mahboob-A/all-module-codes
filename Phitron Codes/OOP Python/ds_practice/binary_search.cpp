// binary search on dupes
// 241022, 08.00 am, py week 04, xpsc week 0 

// testing on 251023, Thursday, 10.00 am 
#include <iostream>
#include <string>
using namespace std;

    int bin(int *ar, int sz, int target)
    {
        int l=0, r=sz-1, ans = -1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(ar[mid]==target)
            {
                ans = mid;
                r = mid-1;  // for finding the laft most dupe's index 
                // l = mid +1;  for finding the right most dupe's index 
            }
            else if(ar[mid]>target)
                r = mid - 1;
            else
                l=mid+1;
            
        }
        return ans;
    }

int main() {
    
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin>>ar[i];
        
    int target;
    cin>>target;
    
    int x = bin(ar, n, target);
    if (x == -1)
        cout<<"no"<<endl;
    else 
        cout<<"yes: "<<x<<endl;
    
    
    
    
    
    
    

    return 0;
}
