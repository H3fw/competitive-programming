#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> h(n);
  for (int i = 0; i < n; i++)
    cin >> h[i];

  vector<int> dp(n);
  dp[0] = 0;
  dp[1] = abs(h[0] - h[1]);

  for (int i = 2; i < n; i++) {
    int minNum = 1e9;
    for (int j = 1; j <= k; j++) {
      if (i - j < 0)
        continue;
      minNum = min(minNum, dp[i - j] + abs(h[i] - h[i - j]));
    }
    dp[i] = minNum;
  }
  cout << dp.back();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
