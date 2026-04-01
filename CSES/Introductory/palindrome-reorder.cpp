#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  string p;
  cin >> p;

  if (p.size() == 1) {
    cout << p << endl;
    return;
  }

  sort(p.begin(), p.end());

  vector<char> mid;

  for (int i = 0; i < p.size(); i += 2) {
    if (p[i] == p[i + 1])
      continue;

    mid.push_back(p[i]);
    p.erase(p.begin() + i);
    i -= 2;
  }

  if (mid.size() > 1) {
    cout << "NO SOLUTION" << endl;
    return;
  }

  int m = mid.size();
  int n = p.size();

  vector<char> sorted(n);
  for (int i = 0; i < n; i += 2) {
    sorted[(i + 1) / 2] = p[i];
    sorted[n - ((i + 1) / 2) - 1] = p[i + 1];
  }

  for (int i = 0; i < n; i++) {
    if (!mid.empty() && i == (n / 2))
      cout << mid[0];
    cout << sorted[i];
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
