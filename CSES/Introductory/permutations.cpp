#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << 1 << endl;
    return;
  }
  if (n < 4) {
    cout << "NO SOLUTION" << endl;
    return;
  }
  if (n == 4) {
    cout << 2 << ' ' << 4 << ' ' << 1 << ' ' << 3 << endl;
  } else {
    for (int i = 0; i < n / 2; i++) {
      cout << i + 1 << ' ';
      cout << (n + 1) / 2 + i + 1 << ' ';

      if (i == n / 2 - 1 && n % 2 != 0)
        cout << i + 2 << endl;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
