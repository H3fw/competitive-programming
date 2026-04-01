#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  ll n;
  cin >> n;
  n--;

  ll mult = 2;
  while (n--) {
    mult = mult * 2 % (1000000007);
  }

  cout << mult << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
