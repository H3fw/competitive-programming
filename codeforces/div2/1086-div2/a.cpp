#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n;
  cin >> n;

  vector<int> colors(n * n);
  for (int i = 0; i < n * n; i++) {
    int squareColor = 0;
    cin >> squareColor;
    squareColor--;

    colors[squareColor]++;
  }

  for (int i = 0; i < n * n; i++) {
    if (colors[i] > n * (n - 1)) {
      cout << "NO" << endl;
      return;
    }
  }

  cout << "YES" << endl;
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
