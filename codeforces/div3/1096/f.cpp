#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long
#define int ll

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  vector<pair<int, int>> takeOutValues;
  for (int i = n - 1; i >= 0; i--) {
    takeOutValues.push_back({0, i});

    for (int j = i - 1; j >= 0; j--) {
      if (a[j] < a[i]) {
        i = j + 1;
        break;
      }
      takeOutValues.back().first++;
      if (!j) {
        i = -1;
      }
    }
  }

  int maxMove = -1, maxMoveIndex = -1;
  for (auto i : takeOutValues) {
    if (i.first > maxMove) {
      maxMove = i.first;
      maxMoveIndex = i.second;
    }
  }

  int moved = 0;
  for (int i = n - 2; i > maxMoveIndex; i--) {
    int Cmove = max(0ll, a[i] - a[i + 1]);
    a[i] -= Cmove;
    moved += Cmove;
  }
  a[maxMoveIndex]--;
  if (maxMoveIndex < n - 1) {
    int mMove = max(0ll, a[maxMoveIndex] - a[maxMoveIndex + 1]);
    a[maxMoveIndex] -= mMove;
    moved += mMove;
  }
  for (int i = maxMoveIndex - 1; i >= 0; i--) {
    int Cmove = max(0ll, a[i] - a[i + 1]);
    a[i] -= Cmove;
    moved += Cmove;
  }

  cout << moved << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
