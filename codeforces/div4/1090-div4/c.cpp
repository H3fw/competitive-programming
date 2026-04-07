#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

void solve() { 
  int n;
  cin >> n;

  vector<int> p(n*3);
  for(int i = 1; i < (n*3)+1; i++) {
    if(i % 3 == 0) {
      p[i-1] = i / 3;
      continue;
    }
    p[i-1] = (n*3)-(i-i/3) + 1;
  }

  for(int i: p) {
    cout << i << ' ';
  }
  cout << endl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);

  int tt;
  cin >> tt;
  while(tt--)
    solve();
}
