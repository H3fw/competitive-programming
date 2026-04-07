#include <bits/stdc++.h>
#include <ios>

using namespace std;

#define ll long long
#define endl '\n'

void solve() {
  ll n, x;
  cin >> n >> x;

  vector<int> childs(n);
  for (ll i = 0; i < n; i++)
    cin >> childs[i];

  sort(childs.begin(), childs.end());

  int j = 0;
  int g = 0;
  while (!childs.empty()) {
    if (childs.size() == 1) {
      g++;
      break;
    }

    if (childs.front() + childs.back() <= x) {
      g++;
      childs.pop_back();
      childs.erase(childs.begin());
      continue;
    }
    childs.pop_back();
    g++;
  }

  cout << g << endl;
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
