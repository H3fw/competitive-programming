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

  vector<vector<int>> dp(n + 1, vector<int>(1e3 * n + 1));
  int maxVal = 0;
  for (int i = 1; i < n + 1; i++) {
    int v = items[i - 1].second;

    for (int j = 1; j < 1e3 * n + 1; j++) {
      dp[i][j] = dp[i-1][j];
      if(j-v >= 0) {
        if(dp[i-1][j-v] > 0) {
          if(dp[i-1][j-v] + items[i-1].first <= W) {
            dp[i][j] = dp[i-1][j-v] + items[i-1].first;
            maxVal = max(maxVal, j);
          }
        } else {
          if(v == j && items[i-1].first <= W) {
            dp[i][j] = items[i-1].first;
            maxVal = max(maxVal, j);
          }
        }
      }
      if(dp[i-1][j] > 0) {
        dp[i][j] = min(dp[i-1][j], dp[i][j]);
      }
    }
  }

  cout << maxVal << endl;

  // for(int i = 0; i < n+1; i++) {
  //   cout << "using " << i << ' ';
  //   for(int j = 0; j < 20; j++) {
  //     cout << dp[i][j] << ' ';
  //   }
  //   cout << endl;
  // }
}
signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
