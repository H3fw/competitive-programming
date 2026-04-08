#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long

void solve() {
  int n, k;
  cin >> n >> k;

  string c;
  cin >> c;

  int rocks = 0;
  int points = 0;

  for (int i = 1; i < n - 1; i++) {
    if (k) {
      if (c[i] == 'o') {
        rocks++;
      } else {
        points++;
        k--;
      }
    }
  }

  for (int i = 0; i < points; i++) {
    cout << '.';
  }

  cout << '#';

  for (int i = 0; i < rocks; i++) {
    cout << 'o';
  }

  for (int i = 0; i < n; i++) {
    if (c[i] == '#') {
      continue;
    }
    if (c[i] == '.' && points) {
      points--;
      continue;
    }
    if (c[i] == 'o' && rocks) {
      rocks--;
      continue;
    }
    cout << c[i];
  }
  cout << '#' << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
