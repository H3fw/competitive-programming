#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int x;
  cin >> x;
  string s;
  cin >> s;

  int m = 0, n = 0;
  for (auto a : s) {
    if (a == '(')
      m++;
    else
      n++;
  }

  if (n == m)
    cout << "YES" << endl;
  else
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
