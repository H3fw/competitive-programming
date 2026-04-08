#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n, m, a, b;
  cin >> n >> m >> a >> b;

  if (gcd(n, a) > 1) {
    cout << "NO" << endl;
    return;
  }
  if (gcd(m, b) > 1) {
    cout << "NO" << endl;
    return;
  }
  if (gcd(n, m) > 1 and (n != 2 and m != 2)) {
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
