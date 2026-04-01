#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long
#define int ll

void solve() {
  int n, W;
  cin >> n >> W;

  vector<pair<int, int>> items(n);
  for (int i = 0; i < n; i++)
    cin >> items[i].first >> items[i].second;

  vector<vector<int>> dp(n + 1, vector<int>(W + 1));

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < W + 1; j++) {
      dp[i][j] = dp[i - 1][j];
      if (j - items[i - 1].first >= 0) {
        dp[i][j] = max(dp[i - 1][j],
                       dp[i - 1][j - items[i - 1].first] + items[i - 1].second);
      }
    }
  }

  cout << dp[n][W] << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
