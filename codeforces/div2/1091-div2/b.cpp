#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n, k, index;
  cin >> n >> k;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> index;

  int l, r;
  l = 0;
  r = 0;
  bool check = a[index - 1];
  // int count = 0;

  // while (l != r) {
  //   while (a[l] == check and l != index) {
  //     l++;
  //   }
  //   while (a[r] == check and r != index) {
  //     r--;
  //   }
  //   if (a[r] != check or a[l] != check)
  //     count++;
  //   check = !check;
  // }
  //
  for (int i = 0; i <= index - 1; i++) {
    if (a[i] != check) {
      l++;
      check = !check;
    }
  }

  check = a[index - 1];

  for (int i = n - 1; i >= index - 1; i--) {
    if (a[i] != check) {
      r++;
      check = !check;
    }
  }

  cout << max(l, r) << endl;
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
