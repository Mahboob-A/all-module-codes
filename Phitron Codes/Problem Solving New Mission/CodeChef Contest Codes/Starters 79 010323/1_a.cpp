// #include <bits/stdc++.h>
// using namespace std;

// ll main() {
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         vector<ll> perm(n);
//         for (ll i = 0; i < n/2; i++) {
//             perm[i] = i+1;
//             perm[n-1-i] = n-i;
//         }
//         for (ll i = 0; i < n; i++) {
//             cout << perm[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// ll main() {
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;
//         vector<ll> perm(n);
//         for (ll i = 0; i < n/2; i++) {
//             perm[i] = i*2+2;
//             perm[n-1-i] = i*2+1;
//         }
//         for (ll i = 0; i < n; i++) {
//             cout << perm[i] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const ll MAXN = 1e9;
ll prime[MAXN];

void sieve()
{
	prime[1] = 1;
	for (ll i=2; i<MAXN; i++)


		prime[i] = i;

	for (ll i=4; i<MAXN; i+=2)
		prime[i] = 2;

	for (ll i=3; i*i<MAXN; i++)
	{
		if (prime[i] == i)
		{
			for (ll j=i*i; j<MAXN; j+=i)

				if (prime[j]==j)
					prime[j] = i;
		}
	}
}


int main()
{
	
	sieve();

        ll t;
        cin>>t;
        while(t--)
        {
                ll x, y, count = 0;
                cin>>x>>y;

                bool found = false;
                while(found == false)
                {
                        ll ans = prime[x];
                        x += ans;
                        count++;
                        if(x >= y)
                        {
                                // cout<<count<<endl;
                                found = true;
                        }
                }

                cout<<count<<endl;

        } 

	return 0;
}
