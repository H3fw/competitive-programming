#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  int n, k;
  cin >> n >> k;

  ll sum = 0;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  if (sum % 2 != 0 or (k * n) % 2 == 0) {
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
