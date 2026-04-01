#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  ll n;
  cin >> n;
  cout << n << ' ';

  while (n > 1) {
    if (n % 2 > 0) {
      n = n * 3 + 1;
      cout << n << ' ';
      continue;
    }
    n = n / 2;
    cout << n << ' ';
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
