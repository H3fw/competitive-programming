#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n;
  cin >> n;
  vector<int> p(n + 1);
  for (int i = 1; i < n + 1; i++)
    cin >> p[i];

  int val = 0;
  for (int i = n; i > 0; i--) {
    if (p[i] > i) {
      continue;
    }
    val++;
  }
  cout << val << endl;
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
