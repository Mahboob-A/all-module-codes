


#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
#include <utility>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
 
using namespace std;
 
using namespace std;
 
long long n,q,ans;
vector<long long> v;
 
int main(){
//freopen("lifts.in","r",stdin);
//freopen("lifts.out","w",stdout);
//freopen("C:/input.txt","r",stdin);
//freopen("C:/output.txt","w",stdout);
ios_base::sync_with_stdio(0);
 
cin>>n;
for (int i=1;i<=n;i++)
{cin>>q;
v.push_back(q);}
sort(v.begin(),v.end());
for (int i=0;i<n;i++)
{        
        ans+=abs(v[i]-(i+1));
        cout<<v[i]<<" "<<i+1<<endl;
        cout<<"ans : "<<ans<<endl;
}
cout<<endl;
cout<<ans<<endl;
 

 int x = abs((-1) - (1));
 cout<<x<<endl;
// cin.get(); 
// cin.get();
return 0;}
    
