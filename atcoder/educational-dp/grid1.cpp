#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int h, w;
  cin >> h >> w;

  vector<vector<char>> grid(h, vector<char>(w));
  vector<vector<int>> dp(h, vector<int>(w));

  const int mod = 1e9+7;

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      cin >> grid[i][j];
    }
  }

  dp[0][0] = 1;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(i+1 < h && grid[i+1][j] != '#') {
        dp[i+1][j] += dp[i][j];
        dp[i+1][j] %= mod;
      }
      if(j+1 < w && grid[i][j+1] != '#') {
        dp[i][j+1] += dp[i][j];
        dp[i][j+1] %= mod;
      }
    }
  }

  cout << dp.back().back() << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
