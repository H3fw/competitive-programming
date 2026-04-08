#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long

void solve() {
  int x, y;
  cin >> x >> y;

  int a = (x + y) / 2;
  int b = x - a;
  cout << a << ' ' << b << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
