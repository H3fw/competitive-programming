#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
  ll c, n, k;
  cin >> n >> c >> k;

  vector<int> monsters(n);
  for(int i = 0; i < n; i++) cin >> monsters[i];

  sort(monsters.begin(), monsters.end());
  
  for(int& a: monsters) {
    if(a < c && k > 0) {
      int fflops = min(k, (c-a));
      a += fflops;
      k -= fflops;
    }
    
    if(!(a > c)) {
      c += a;
    } else break;
  }

  cout << c << endl;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--) {
      solve();
    }
}
