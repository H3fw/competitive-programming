#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
  int n, q;
  cin >> n >> q;

  vector<ll> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<ll> subsums(n);
  subsums[0] = a[0];
  for (int i = 1; i < n; i++) {
    subsums[i] = subsums[i - 1] + a[i];
  }

  for (int i = 0; i < q; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;

    if (a > 0)
      cout << subsums[b] - subsums[a - 1] << endl;
    else
      cout << subsums[b] << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
}
