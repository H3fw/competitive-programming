#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong
#define endl '\n'

void solve() {
  int n, m;
  cin >> n >> m;

  vector<vector<char>> roomMap(m, vector<char>(n));
  for (int i = 0; i < m; i++) {
    cout << "building line " << i << ": ";
    for (int j = 0; i < n; j++) {
      cin >> roomMap[i][j];
      cout << "- " << roomMap[i][j];
    }
  }

  for (auto a : roomMap) {
    cout << "line 1: ";
    for (auto b : a) {
      cout << b;
    }
    cout << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
