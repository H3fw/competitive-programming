#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
  int n, t;
  cin >> n >> t;

  vector<int> input(n);

  for (int i = 0; i < n; i++) {
    cin >> input[i];
  }

  map<int, vector<int>> items;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    items[input[i]].push_back(a);
  }
  for (int i = 0; i < items.size(); i++) {
    sort(items[i].begin(), items[i].end());
  }

  int c;
  cin >> c;

  for (int i = 0; i < c; i++) {
    int a;
    cin >> a;
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  solve();
}
