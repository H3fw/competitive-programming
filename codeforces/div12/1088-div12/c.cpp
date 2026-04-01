#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
  int n, k;
  cin >> n >> k;
  
  vector<int> a(n), b(n);
  set<int> bset;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }

  bool possible = true;
  int sStart = n - k + 1-1;
  int end = k-1;

  for(int i = 0; i < sStart; i++) {
    if(b[i] == a[i]) {
      continue;
    } else if (b[i] == -1) {
      bset.insert(a[i]);
    } else possible = false;
  }
  for(int i = end+1; i < n; i++) {
    if(b[i] == a[i]) {
      continue;
    } else if (b[i] == -1) {
      bset.insert(a[i]);
    } else possible = false;
  }

  for(int i = sStart; i <= end; i++) {
    if(b[i] != a[i] && b[i] != -1) {
      if(bset.find(b[i]) != bset.end()) {
        possible = false;
      }
    }
  }

  sort(b.begin(), b.end()); 
  for(int i = 1; i < n; i++) {
    if(b[i] == b[i-1] && b[i]) possible = false; 
  }

  if(possible) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
}
