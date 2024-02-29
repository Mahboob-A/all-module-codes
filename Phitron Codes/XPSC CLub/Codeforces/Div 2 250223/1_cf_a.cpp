

// contest : https://codeforces.com/contest/1789  
// round 853, div 2 
// 250223, saturday 

// problem : https://codeforces.com/contest/1789/problem/A

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

void solve()
{
    int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (gcd(a[i], a[j]) <= 2) {
                    cout<<"yes"<<endl;
                    return;
                }
            }
        }

        cout<<"no"<<endl;
}


int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
