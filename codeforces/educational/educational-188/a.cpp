#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  int count = 0;
  for (char stud : s) {
    count++;
    if (stud == 'L') {
      cout << count << endl;
      return;
    }
  }
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
