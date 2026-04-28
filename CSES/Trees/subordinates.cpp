#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

const int MAXN = 2e5 + 100;

vector<int> s(MAXN);
vector<int> adj[MAXN];

int dfs(int u) {
  if (adj[u].empty()) {
    s[u] = 0;
    return 0;
  }

  for (auto v : adj[u]) {
    s[u] += dfs(v) + 1;
  }

  return s[u];
}

void solve() {
  int n;
  cin >> n;

  for (int i = 2; i <= n; i++) {
    int a;
    cin >> a;
    adj[a].push_back(i);
  }

  s[1] = dfs(1);

  for (int i = 1; i < n + 1; i++) {
    cout << s[i] << ' ';
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
