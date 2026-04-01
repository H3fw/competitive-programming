#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

#define arr std::array
#define ll longlong

bool checkAdjacent(int num1, int num2) {
  return num1 == num2 || num2 == 7 - num1;
}

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  int minChanges = 0;

  for (int position = 1; position < n; position++) {
    int cnt = 1;
    while (position < n) {
      if (checkAdjacent(a[position - 1], a[position])) {
        cnt++;
      } else
        break;
      position++;
    }
    minChanges += cnt / 2;
  }

  cout << minChanges << '\n';
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
