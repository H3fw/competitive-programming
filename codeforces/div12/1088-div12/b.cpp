#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

int getNumDivisors(int a) {
  int div = 0;
  for(int i = 1; i <= a; i++) {
    if(a % i == 0) {
      div++;
    }
  }
  return div;
}

void solve() {
  int x, y;
  cin >> x >> y;
  
  if(x == y) {
    cout << 1 << endl;
    while(x--) {
      cout << 1 << ' ';
    }
    while(y--) {
      cout << -1 << ' ';
    }
    cout << endl;
    return;
  }

  int div = getNumDivisors(abs(x - y));
  cout << div << endl;
  for(int i = 1; i <= y; i++){
    cout << -1 << ' ';
  }
  for(int i = 1; i <= x; i++) {
    cout << 1 << ' ';
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
