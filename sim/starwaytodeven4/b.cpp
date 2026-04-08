#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define ll long long

void solve() {
  string s, copia;
  int n;
  cin >> n >> s;

  copia = s;
  sort(copia.begin(), copia.end());

  char c = ' ';
  int indice = -1;

  for (int i = 0; i < n; i++) {
    if (s[i] != copia[i]) {
      c = copia[i];
      indice = i;
      break;
    }
  }

  if (indice != -1) {
    for (int i = n - 1; i > 0; i--) {
      if (s[i] == c) {
        swap(s[indice], s[i]);
        break;
      }
    }
  }

  cout << s << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
