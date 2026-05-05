#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long
#define int ll

const int MAXN = 2e5;

vector<int> segMin(4 * 2e5);
vector<int> segMax(4 * 2e5);
vector<int> a;

void build(int v, int l, int r, char mode) {
  if (r == l) {
    if (mode == '>')
      segMax[v] = a[r];
    else
      segMin[v] = a[r];
    return;
  }

  int mid = (l + r) / 2;
  build(v * 2, l, mid, mode);
  build(v * 2 + 1, mid + 1, r, mode);

  if (mode == '>')
    segMax[v] = max(segMax[v * 2], segMax[v * 2 + 1]);
  else
    segMin[v] = min(segMin[v * 2], segMin[v * 2 + 1]);
}

int queryMin(int v, int l, int r, int L, int R, int minNum) {
  int minAmount = 0;
  if (L > r or R < l) {
    return minAmount;
  }
  if (!(segMin[v] < minNum)) {
    return minAmount;
  }

  if (l == r) {
    return 1;
  }

  int mid = (l + r) / 2;
  minAmount += queryMin(v * 2, l, mid, L, R, minNum);
  minAmount += queryMin(v * 2 + 1, mid + 1, r, L, R, minNum);
  return minAmount;
}

int queryMax(int v, int l, int r, int L, int R, int maxNum) {
  int maxAmount = 0;
  if (L > r or R < l) {
    return maxAmount;
  }
  if (!(segMax[v] > maxNum)) {
    return maxAmount;
  }

  if (l == r) {
    return 1;
  }

  int mid = (l + r) / 2;
  maxAmount += queryMax(v * 2, l, mid, L, R, maxNum);
  maxAmount += queryMax(v * 2 + 1, mid + 1, r, L, R, maxNum);
  return maxAmount;
}

void solve() {
  int n;
  cin >> n;

  a.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  build(1, 0, n - 1, '<');
  build(1, 0, n - 1, '>');

  int trios = 0;
  for (int i = 0; i < n; i++) {
    int r = queryMax(1, 0, n - 1, i + 1, n - 1, a[i]);
    int l = queryMin(1, 0, n - 1, 0, i - 1, a[i]);

    trios += r * l;
  }

  cout << trios << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
