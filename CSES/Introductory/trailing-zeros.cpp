#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  ll n;
  cin >> n;

  ll sum = 0;
  for (ll i = 5; i <= n; i *= 5) {
    sum += n / i;
  }

  cout << sum << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
