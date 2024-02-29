



#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<pair<int, int> > g[N];
int n, d, v, r, dist[N];
bool used[N];

void bfs(int s) {
queue<int> q;
q.push(s);
memset(dist, 0x3f, sizeof(dist));
dist[s] = 0;
while (!q.empty()) {
int x = q.front();
q.pop();
if (used[x]) continue;
used[x] = true;
for (int i = 0; i < g[x].size(); i++) {
int y = g[x][i].first, w = g[x][i].second;
if (dist[y] > dist[x] + w) {
dist[y] = dist[x] + w;
q.push(y);
}
}
}
}

int main() {
cin >> n >> d >> v >> r;
while (r--) {
int x, y, w;
cin >> x >> y >> w;
g[x].push_back(make_pair(y, w));
}
bfs(d);
if (dist[v] == 0x3f3f3f3f) cout << -1 << endl;
else cout << dist[v] << endl;
return 0;
}
