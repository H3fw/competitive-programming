#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

void solve() { 
  int even, odd;
  cin >> even >> odd;

  if((even+odd) % 2 == 0) even--;
  else odd--;

  if(even > odd || odd < 0 || even < 0) {
    cout << "NO" << endl;
    return;
  }

  cout << "YES" << endl;
  
  int nodeCount = 1;
  while(even) {
    nodeCount += 2;
    cout << 1 << ' ' << nodeCount-1 << endl;
    cout << nodeCount-1 << ' ' << nodeCount << endl;
    even--; odd--;
  }
  while(odd) {
    nodeCount++;
    cout << 1 << ' ' << nodeCount << endl;
    odd--;
  }
}

signed main() {
  cin.tie(0)->sync_with_stdio(0);

  int tt;
  cin >> tt;
  while(tt--)
    solve();
}
