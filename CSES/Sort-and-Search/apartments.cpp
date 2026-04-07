#include <bits/stdc++.h>
#include <ios>

using namespace std;

#define ll long long
#define endl '\n'

void solve() {
  int n, m, k;
  cin >> n >> m >> k;

  multiset<ll> houses;
  vector<ll> wishes(n);

  for (int i = 0; i < n; i++)
    cin >> wishes[i];
  for (int i = 0; i < m; i++) {
    ll a;
    cin >> a;
    houses.insert(a);
  }

  sort(wishes.begin(), wishes.end());
  int happy = 0;

  for (auto a : wishes) {
    if (!houses.empty()) {
      auto l = houses.lower_bound(a - k);
      if (l == houses.end())
        continue;
      if (*l <= a + k) {
        happy++;
        houses.erase(l);
      }
    }
  }

  cout << happy << endl;
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
