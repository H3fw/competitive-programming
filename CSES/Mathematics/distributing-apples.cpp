#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long
#define int ll
const int mod = 1e9 + 7;

int modFat(int a) {
  if (a == 0)
    return 1;
  int b = (a * modFat(a - 1)) % mod;
  return b;
}

int power(ll a, ll b) {
  ll result = 1;
  while (b > 0) {
    if (b & 1) {
      result = ((result * a) % mod);
    }
    a = ((a % mod) * (a % mod)) % mod;
    b >>= 1;
  }
  return result;
}

int inverse(int b) { return power(b, mod - 2); }

int modDiv(int a, int b) {
  int inv = inverse(b);

  return (a * inv) % mod;
}

void solve() {
  int n, m;
  cin >> n >> m;

  n--;
  if (n == 0) {
    cout << 1 << endl;
    return;
  }

  cout << (modFat(n + m) * (modDiv(1, (modFat(n) * modFat(m)) % mod))) % mod
       << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return 0;
}
