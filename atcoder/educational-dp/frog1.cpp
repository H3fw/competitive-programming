#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n;
  cin >> n;

  vector<int> h(n);
  for (int i = 0; i < n; i++)
    cin >> h[i];

  vector<int> dp(n);
  dp[0] = 0;
  dp[1] = abs(h[0] - h[1]);

  for (int i = 2; i < n; i++) {
    dp[i] =
        min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
  }
  cout << dp.back();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
