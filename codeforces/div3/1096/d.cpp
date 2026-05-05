#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n;
  cin >> n;

  vector<int> a(2 * n);
  int z1 = -1, z2 = -1;
  for (int i = 0; i < n * 2; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < 2 * n; i++) {
    if (a[i] == 0) {
      z1 = i;
      break;
    }
  }
  for (int i = z1 + 1; i < 2 * n; i++) {
    if (a[i] == 0) {
      z2 = i;
    }
  }

  vector<int> freq(n + 1);
  freq[0] = 1;
  int mex = 0;
  int mexz1 = 0, mexz2 = 0;

  bool ip = true;
  for (int i = 1; z1 + i <= z2 - i; i++) {
    if (a[z1 + i] != a[z2 - i]) {
      ip = false;
      break;
    }
    freq[a[z1 + i]] = 1;
  }

  if (ip) {
    for (int i = 1; z1 - i >= 0 && z2 + i < 2 * n; i++) {
      if (a[z1 - i] != a[z2 + i]) {
        break;
      }
      freq[a[z1 - i]] = 1;
    }

    for (int i = 0; i < n + 1; i++) {
      if (freq[i] != 1) {
        break;
      }
      mex++;
    }
  } else {
    vector<int> freqz1(n + 1), freqz2(n + 1);
    freqz1[0] = 1;
    freqz2[0] = 1;

    for (int i = 1; z1 + i < 2 * n && z1 - i >= 0; i++) {
      if (a[z1 + i] == a[z1 - i]) {
        freqz1[a[z1 + i]] = 1;
      } else
        break;
    }
    for (int i = 1; z2 + i < 2 * n && z2 - i >= 0; i++) {
      if (a[z2 + i] == a[z2 - i]) {
        freqz2[a[z2 + i]] = 1;
      } else
        break;
    }

    for (auto i : freqz1) {
      if (i == 0)
        break;
      mexz1++;
    }
    for (auto i : freqz2) {
      if (i == 0)
        break;
      mexz2++;
    }
  }

  cout << max({mex, mexz1, mexz2}) << endl;
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
