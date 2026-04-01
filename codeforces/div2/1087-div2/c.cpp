#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin >> n;
  int ans;
  for(int i = 1; i < n*2-2; i += 2) {
    cout << '?' << ' ' << i << ' ' << i+1 << endl;
    cin >> ans;
    if(ans == 1) {
      cout << '!' << ' ' << i << endl;
      return;
    }
  }
  cout << '?' << ' ' << 2*n << ' ' << 2*n-2 << endl;
  cin >> ans;
  if (ans == 1) {
    cout << '!' << ' ' << 2*n << endl; 
    return;
  }
  cout << '?' << ' ' << 2*n << ' ' << 2*n-3 << endl;
  cin >> ans;
  if (ans == 1) {
    cout << '!' << ' ' << 2*n << endl; 
    return;
  }
  cout << '!' << ' ' << 2*n-1 << endl;

}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--) {
      solve();
    }
}
