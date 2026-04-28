#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<vector<int>> dp(n + 1, vector<int>(m));
  dp[0][0] = 1;
  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < m; j++) {
      if (i != 0)
        if (a[i - 1] + j == m)
          dp[i][j] = 0;
      dp[i][(j + 1) % m] = max(dp[i][j], dp[i][(j + 1) % m]);
      if (i + 1 <= n)
        dp[i + 1][(j + 1) % m] = max(dp[i][j], dp[i + 1][(j + 1) % m]);
    }
  }

  bool passed = false;
  for (int i = 0; i < m; i++) {
    if (dp[n][i] == 1)
      passed = true;
  }

  for (int i = -1; i <= m; i++) {
    cout << i << ' ';
  }
  cout << endl;

  for (int i = 0; i < n + 1; i++) {
    if (i > 0)
      cout << i << ' ' << a[i - 1] << ' ';
    else
      cout << 0 << ' ' << 0 << ' ';
    for (bool b : dp[i]) {
      cout << b << ' ';
    }
    cout << endl;
  }

  if (passed) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
