


// t-primes problem : https://codeforces.com/problemset/problem/230/B
/*

#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;
 
int main()
{
	
	long long int s, i, j, k, t, n;
	
	vector <bool> f(1000005);
	f[0] = f[1] = 1;
	f[2] = 0;
	for (i = 2; i * i <= 1000005; i++) {
		if (f[i] == 0) {
			//cout << i << ".." << endl;
			for (j = i * i; j < 1000005; j += i) {
				if (f[j] == 0) {
					f[j] = 1;
				}
			}
			
		}
	}
	cin >> t;
	while (t--) {
		cin >> n;
		s = sqrt(n);
		if (s * s == n && f[s] == 0) {
			puts("YES");
		} else {
			puts ("NO");
		}
	}
	return 0;
}


###############
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;
 
int N;
bool sieve[1000005];
 
void eratos () {
    sieve[1] = true;
    for (int i = 2; i <= 1000000; i ++) {
        if (sieve[i] == false) {
            for (int j = i + i; j <= 1000000; j += i) {
                sieve[j] = true;
            }
        }
    }
}
 
long long root (long long x) {
    long long s, e, m, ans = 0;
    s = 1, e = 1000000;
    while (s <= e) {
        m = (s + e)/2;
        if (m * m <= x) {
            s = m + 1;
            ans = m;
        } else {
            e = m - 1;
        }
    }
    return ans;
}
 
int main(void){
    eratos ();
    scanf ("%d", &N);
    while (N --) {
        long long num;
        scanf ("%I64d", &num);
        if (num == 1) printf ("NO\n");
        else {
            long long sq = root (num);
            if (sq * sq == num && sieve[sq] == false) {
                printf ("YES\n");
            } else printf ("NO\n");
        }
    }
 
    return 0;
}

*/