#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n;
  cin >> n;

  set<int> a;
  for (int i = 0; i < n; i++) {
    int b = 0;
    cin >> b;

    a.insert(b);
  }

  vector<pair<int, int>> ranges = {{0, 0}};
  int last = 1000000001;
  for (auto b : a) {
    if (b == last + 1)
      ranges.
  }
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
