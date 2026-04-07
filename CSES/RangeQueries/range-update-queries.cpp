#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<ll> arr;
vector<ll> seg;
ll sum;

void build(int v, int l, int r) {
  if (r == l) {
    seg[v] = arr[r];
    return;
  }

  int med = (r + l) / 2;
  build(v * 2, l, med);
  build(v * 2 + 1, med + 1, r);

  seg[v] = 0;
}

void update(int v, int l, int r, int L, int R, ll u) {
  if (r < L or l > R) {
    return;
  }

  if (R >= r and L <= l) {
    seg[v] += u;
    return;
  }

  int med = (r + l) / 2;
  update(v * 2, l, med, L, R, u);
  update(v * 2 + 1, med + 1, r, L, R, u);
}

void query(int v, int l, int r, int k) {
  if (k > r or k < l)
    return;
  sum += seg[v];

  if (l == r and r == k)
    return;

  int med = (r + l) / 2;
  query(v * 2, l, med, k);
  query(v * 2 + 1, med + 1, r, k);
}

void solve() {
  int n, q;
  cin >> n >> q;

  arr.resize(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  seg.resize(4 * n);
  build(1, 0, n - 1);

  for (int i = 0; i < q; i++) {
    int option;
    cin >> option;

    if (option == 1) {
      int a, b, u;
      cin >> a >> b >> u;
      a--;
      b--;

      update(1, 0, n - 1, a, b, u);
    } else {
      int k;
      cin >> k;
      k--;

      sum = 0;
      query(1, 0, n - 1, k);

      cout << sum << endl;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
}
