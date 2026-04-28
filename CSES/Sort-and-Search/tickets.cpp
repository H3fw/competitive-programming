#include <algorithm>
#include <bits/stdc++.h>
#include <ios>

using namespace std;

#define ll long long
#define endl '\n'

void solve() {
  int n, m;
  cin >> n >> m;

  vector<int> wishes(m);
  multiset<int> tickets;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    tickets.insert(a);
  }

  for (int i = 0; i < m; i++) {
    cin >> wishes[i];
    auto a = tickets.lower_bound(wishes[i]);
    if (*a == wishes[i]) {
      cout << *a << endl;
      tickets.erase(a);
      continue;
    }
    a--;
    if (*a > wishes[i]) {
      cout << -1 << endl;
      continue;
    }
    cout << *a << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  // int t;
  // cin >> t;
  // while (t--) {
  solve();
  // }
}
