#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> agcd(n - 1);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    int trash;
    cin >> trash;
  }

  for (int i = 0; i < n - 1; i++) {
    agcd[i] = gcd(a[i], a[i + 1]);
  }

  int value = 0;
  for (int i = 0; i < n; i++) {
    int change;
    if (i == 0)
      change = agcd[i];
    else if (i == n - 1)
      change = agcd[i - 1];
    else
      change = max(agcd[i], agcd[i - 1]);
    if (change != a[i])
      value++;
  }

  cout << value << endl;
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
