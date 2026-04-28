#include <bits/stdc++.h>
#include <ios>

using namespace std;

#define ll long long
#define endl '\n'

void solve() {
  int n, x;
  cin >> n >> x;

  vector<int> childs(n);
  for (int i = 0; i < n; i++)
    cin >> childs[i];

  sort(childs.begin(), childs.end());

  int count = 0;
  int beginPointer = 0;

  for (int i = n - 1; i >= 0; i--) {
    if (beginPointer > i) {
      break;
    }
    if (childs[i] + childs[beginPointer] <= x) {
      count++;
      beginPointer++;
    } else
      count++;
  }

  cout << count << endl;
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
