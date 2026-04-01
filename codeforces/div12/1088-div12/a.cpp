#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
  }

  if (n == 1) {
    cout << 1 << endl;
    return;
  }
  while(n > 1) {
    n--;
    cout << 2 << ' ';
  }
  cout << 2 << endl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
}
