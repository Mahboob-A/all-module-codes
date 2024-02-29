


// #include <iostream>
// #include <cmath>
// using namespace std;

// bool is_prime(int n) {
//     if (n < 2) return false;
//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0) return false;
//     }
//     return true;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int x, y;
//         cin >> x >> y;
//         int time = 0;
//         while (x < y) {
//             int p = 2;
//             while (x % p != 0 || !is_prime(p)) p++;
//             x += p;
//             time++;
//         }
//         cout << time << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

const int N = 1e8;
int spf[N];

void sieve() {
    for (int i = 2; i < N; i += 2) spf[i] = 2;
    for (int i = 3; i < N; i += 2) {
        if (!spf[i]) {
            for (int j = i; j < N; j += i) {
                if (!spf[j]) spf[j] = i;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        vector<int> dp(N, -1);
        dp[x] = 0;

        for (int i = x; i < y; i++) {
            if (dp[i] != -1) {
                int nxt = i + spf[i];
                if (nxt <= y) {
                    if (dp[nxt] == -1 || dp[nxt] > dp[i] + 1) {
                        dp[nxt] = dp[i] + 1;
                    }
                }
            }
        }

        cout << dp[y] << endl;
    }

        // cout<<7%4<<endl;

    return 0;
}
