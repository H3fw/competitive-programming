#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  ll n;
  cin >> n;

  for (ll i = 1; i <= n; i++) {
    cout << (i * i * ((i * i) - 1)) / 2 - (i - 1) * (i - 2) * 4 << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
