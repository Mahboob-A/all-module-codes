


#include <algorithm>
#include <iostream>
#include <iomanip>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <map>
#include <set>
using namespace std;
//#pragma comment(linker,"/STACK:102400000,102400000")
 
int n;
char board[301][301];
 
int MAIN()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> board[i][j];
	char c1 = board[1][1], c2 = board[1][2];
	bool good = true;
	if(c1 == c2)
		good = false;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
		{
			if((i == j) || (i+j == 1+n))
			{
				if(board[i][j] != c1)
				{
 
					good = false;
				}
			}
			else
			{
			
				if(board[i][j] != c2)
					good = false;
			}
		}
	if(good) cout << "YES" << endl;
	else cout << "NO" << endl;
	
	return 0;
}
 
int main()
{
	// #ifdef LOCAL_TEST
	// 	freopen("in.txt", "r", stdin);
	// 	freopen("out.txt", "w", stdout);
	// #endif
	ios :: sync_with_stdio(false);
	cout << fixed << setprecision(16);
	return MAIN();
}