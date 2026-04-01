#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];

  for(int i = 0; i < n; i++) {
    int lowers = 0;
    int uppers = 0;
    for(int j = i; j < n; j++) {
      if (a[i] == a[j]) continue;
      if (a[i] > a[j]) lowers++;
      else uppers++;
    }
    cout << max(lowers, uppers) << ' '; 
  }
  cout << endl;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--) {
      solve();
    }
}
