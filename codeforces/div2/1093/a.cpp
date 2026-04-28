#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end(), greater<int>());
  for (int i = 1; i < n; i++) {
    if (a[i] == a[i - 1]) {
      cout << -1 << endl;
      return;
    }
  }

  for (int i : a) {
    cout << i << ' ';
  }
  cout << endl;
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
