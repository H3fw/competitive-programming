#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  int a, b;
  cin >> a >> b;

  int dif = abs(a - b);

  if (a > b) {
    a -= 2 * dif;
    b -= dif;
  } else {
    a -= dif;
    b -= dif * 2;
  }

  if (a < 0 || b < 0) {
    cout << "NO" << endl;
    return;
  }

  if (a % 3 == 0) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
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
