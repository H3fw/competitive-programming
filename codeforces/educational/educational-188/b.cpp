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

  vector<int> prefix(n);
  prefix[0] = a[0];
  for (int i = 1; i < n; i++) {
    prefix[i] = max(a[i], prefix[i - 1]);
  }

  int count = 0;
  for (int i = n - 1; i > 0; i--) {
    if (prefix[i] == a[i])
      count++;
  }

  cout << count + 1 << endl;
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
