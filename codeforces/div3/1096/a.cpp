#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int x, y;
  cin >> x >> y;
  int odd = 0;
  if (x % 2 != 0)
    odd++;
  if (y % 2 != 0)
    odd++;

  if (odd > 1) {
    cout << "NO" << endl;
    return;
  }
  cout << "YES" << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
