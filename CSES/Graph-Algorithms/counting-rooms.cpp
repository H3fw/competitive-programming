#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong
#define endl '\n'

void solve() {
  int n, m;
  cin >> n >> m;

  vector<vector<char>> roomMap(n, vector<char>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> roomMap[i][j];
    }
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (roomMap[i][j] == '#')
        continue;
      if (roomMap[i - 1][j] == '/' or roomMap[i + 1][j] == '/' or
          roomMap[i][j - 1] == '/' or roomMap[i][j + 1] == '/') {
        roomMap[i][j] = '/';
        continue;
      }
      if (roomMap[i][j] == '.') {
        roomMap[i][j] = '/';
        count++;
      }
    }
  }

  cout << count << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
