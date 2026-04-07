#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  ll x, y;
  cin >> y >> x;

  ll leaderCord;
  x > y ? leaderCord = x : leaderCord = y;

  ll leader = leaderCord * (leaderCord - 1) + 1;

  if (x == y) {
    cout << leader << endl;
    return;
  }
  if (x > y) {
    x % 2 == 0 ? leader -= x - y : leader += x - y;
  } else {
    y % 2 == 0 ? leader += y - x : leader -= y - x;
  }

  cout << leader << endl;
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
