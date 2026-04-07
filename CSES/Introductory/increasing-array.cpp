#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  int n;
  cin >> n;

  ll increases = 0;
  vector<ll> a(n);
  cin >> a[0];

  for (int i = 1; i < n; i++) {
    cin >> a[i];

    if (a[i] < a[i - 1]) {
      increases += a[i - 1] - a[i];
      a[i] = a[i - 1];
    }
  }

  cout << increases << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
