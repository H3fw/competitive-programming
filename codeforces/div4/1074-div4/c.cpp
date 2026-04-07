#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort(a.begin(), a.end());

  pair<int, int> biggestSequence;
  pair<int, int> curSequence;
  for (int i = 1; i < n; i++) {
    if (a[i] == a[i - 1]) {
      continue;
    }
    if (a[i] == a[i] + 1) {
      curSequence.first++;
      continue;
    }
    if (curSequence > biggestSequence) {
      biggestSequence = curSequence;
    }
  }
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
