#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  string s, t;
  cin >> s >> t;

  int s_size = s.size();
  int t_size = t.size();

  vector<vector<int>> dp(s_size+1, vector<int>(t_size+1));

  for(int i = 1; i < s_size+1; i++) {
    for(int j = 1; j < t_size+1; j++) { 
      dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      if(s[i] == t[i]) {
        dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);
      }
    }
  }

  cout << dp[s_size][t_size] << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
