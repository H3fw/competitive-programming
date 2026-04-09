#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  string s, t;
  cin >> s >> t;

  int ss = int(s.size()) + 1, ts = int(t.size()) + 1;

  vector<vector<int>> dp(ss, vector<int>(ts));

  for (int i = 1; i < ss; i++) {
    for (int j = 1; j < ts; j++) {
      if (s[i - 1] == t[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1] + 1;
        continue;
      }
      dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
  }

  vector<char> substring;
  int k = 1;
  for (int i = 1; i < ss; i++) {
    for (int j = k; j < ts; j++) {
      if (dp[i - 1][j - 1] < dp[i][j]) {
        cout << s[i - 1] << ' ';
        cout << dp[i][j] << ' ';
        k++;
        break;
      }
    }
  }
  cout << endl;

  for (auto a : dp) {
    for (auto b : a) {
      cout << b << ' ';
    }
    cout << endl;
  }
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
