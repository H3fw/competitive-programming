#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long
#define endl '\n'
#define int ll

void solve() {
  string ab;
  cin >> ab;

  int errors = 0;
  for(int i = 1; i < ab.size(); i++) {
    if (ab[i] == ab[i-1]) errors++;
  }

  if(errors > 2) {
    cout << "NO" << endl; 
    return;
  }
  cout << "YES" << endl; 
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
