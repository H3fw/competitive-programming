#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
  int n, q;
  cin >> n >> q;

  vector<vector<int>> forest(n + 1, vector<int>(n + 1));

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < n + 1; j++) {
      char tree;
      cin >> tree;
      if (tree == '*')
        forest[j][i] = 1;
      else
        forest[j][i] = 0;
    }
  }

  vector<vector<int>> mapped(n + 1, vector<int>(n + 1));

  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < n + 1; j++) {
      mapped[j][i] = forest[j][i] + forest[j - 1][i] + forest[j][i - 1] -
                     forest[j - 1][i - 1];
    }
  }

  while (q--) {
    int y1, x1, y2, x2;
    cin >> y1 >> x1 >> y2 >> x2;

    cout << mapped[x2][y2] - mapped[x1 - 1][y2] - mapped[x2][y1 - 1] +
                mapped[x1 - 1][y1 - 1]
         << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
}
