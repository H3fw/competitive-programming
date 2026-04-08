#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long

void solve() {
  string s;
  cin >> s;

  for (int i = s.size() - 1; i < s.size(); i--) {
    cout << s[i];
  }
  cout << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
