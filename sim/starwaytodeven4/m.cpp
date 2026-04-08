#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long

void solve() {
  int n, a, b, k;
  cin >> n >> a >> b;

  vector<int> stair(n);
  cin >> stair[0];
  for (int i = 1; i < n; i++) {
    int l;
    cin >> l;
    stair[i] = stair[i - 1] + l;
  }

  cin >> k;
  k--;

  for (int i = 0; i < n; i++) {
    if (i == k)
      continue;
    if (stair[i] + a >= stair[k] + b) {
      cout << "SIM" << endl << i + 1 << endl;
      return;
    }
  }
  cout << "NAO" << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
