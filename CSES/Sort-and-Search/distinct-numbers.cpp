#include <bits/stdc++.h>
#include <ios>

using namespace std;

#define arr std::array
#define map std::map
#define ll long long
#define endl '\n'

void solve() {
  int n;
  cin >> n;

  set<int> distinct;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    distinct.insert(a);
  }

  cout << distinct.size() << endl;
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
