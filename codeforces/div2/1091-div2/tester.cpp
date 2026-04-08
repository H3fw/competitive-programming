#include <bits/stdc++.h>

using namespace std;

signed main() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;

  vector<vector<bool>> g(n, vector<bool>(m));

  int corA = 0, corB = 0;
  while (not g[corA][corB]) {
    g[corA][corB] = true;
    corA += a;
    corB += b;
  }

  for (auto i : g) {
    for (auto j : i) {
      cout << j << " ";
    }
    cout << endl;
  }
}
