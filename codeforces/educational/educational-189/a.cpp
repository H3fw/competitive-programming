#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long
#define endl '\n'
#define int ll

void solve() {
    int x, y;
    cin >> x >> y;
    
    if(y / x > 2) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl; 
    }
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
