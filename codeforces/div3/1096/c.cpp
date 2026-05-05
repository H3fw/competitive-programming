#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n;
  cin >> n;

  vector<int> modSix;
  vector<int> modThree;
  vector<int> modTwo;
  vector<int> extra;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    if (a % 6 == 0) {
      modSix.push_back(a);
    } else if (a % 3 == 0) {
      modThree.push_back(a);
    } else if (a % 2 == 0) {
      modTwo.push_back(a);
    } else {
      extra.push_back(a);
    }
  }

  for (auto a : modSix) {
    cout << a << ' ';
  }
  for (auto a : modTwo) {
    cout << a << ' ';
  }
  for (auto a : extra) {
    cout << a << ' ';
  }
  for (auto a : modThree) {
    cout << a << ' ';
  }
  cout << endl;
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
