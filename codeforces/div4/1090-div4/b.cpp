#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

void solve() { 
  const int n = 7;
  
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  pair<int, int> biggestNum = {-1e3, -1};
  for(int i = 0; i < n; i++) {
    if (a[i] > biggestNum.first) {
      biggestNum.first = a[i];
      biggestNum.second = i;
    }
  }
  
  int sum = 0;

  for(int i = 0; i < n; i++) {
    if(i == biggestNum.second) {
      sum += a[i];
      continue;
    }
    sum -= a[i];
  }

  cout << sum << endl;
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);

  int tt;
  cin >> tt;
  while(tt--)
    solve();
}
