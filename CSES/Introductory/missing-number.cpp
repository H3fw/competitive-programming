#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  int n;
  cin >> n;

  vector<int> a(n + 1);
  for (int i = 0; i < n - 1; i++) {
    int j = 0;
    cin >> j;

    a[j] = 1;
  }

  for (int i = 1; i <= n; i++) {
    if (a[i] == 0) {
      cout << i << endl;
      return;
    }
  }

  cout << "error" << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
