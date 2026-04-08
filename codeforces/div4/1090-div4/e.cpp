#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

void solve() { 
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];

  int maxNum = -1;
  for(int i = 0; i < n; i++) {
    for(int j = i+1; j < n; j++) {
      maxNum = max(maxNum, a[i] ^ a[j]);
    }
  }

  cout << maxNum << endl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);

  int tt;
  cin >> tt;
  while(tt--)
    solve();
}
