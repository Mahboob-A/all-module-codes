

#include <bits/stdc++.h>
#define int long long
 
using namespace std;
 
int gcd(int a, int b) 
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
 
void solve() 
{
    int n; 
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) 
    {
        for (int j = i + 1; j < n; ++j) 
        {
            if (gcd(a[i], a[j]) <= 2) 
            {
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
}
 
signed main() {
    if (1) 
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
    }

    int t; 
    cin >> t;
    while (t--) 
    {
        solve();
    }

    return 0;
}