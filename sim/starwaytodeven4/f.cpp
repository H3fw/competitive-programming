#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long

void solve() {
  int n, f, s;
  cin >> n >> f >> s;

  vector<int> rocksQ(n);
  vector<int> rocksP(n);
  for (int i = 0; i < n; i++) {
    cin >> rocksP[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> rocksQ[i];
  }

  pair<int, int> longestSeq = {0, 0};
  pair<int, int> curSeq = {0, 0};

  for (int i = 0; i < n; i++) {
    if (longestSeq.second - longestSeq.first >)
  }
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
