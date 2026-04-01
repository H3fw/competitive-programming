#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int n, k, p, m;
  cin >> n >> k >> p >> m;
  k--;
  p--;

  vector<int> cards(n);
  for (int i = 0; i < n; i++) {
    cin >> cards[i];
  }

  int wins = 0;

  while (m) {
    int smallestNum = 5001;
    int index = 0;

    for (int i = 0; i <= k; i++) {

      if (cards[i] < smallestNum) {
        smallestNum = cards[i];
        index = i;
      }

      if (p <= k) {
        if (m - cards[p] >= 0) {
          wins++;
          smallestNum = cards[p];
          index = p;
          p = cards.size();
          break;
        } else
          m = 0;
      }
    }

    if (m - smallestNum < 0)
      break;

    m -= smallestNum;
    cards.push_back(smallestNum);
    cards.erase(cards.begin() + index);
    p--;
  }

  cout << wins << endl;
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
