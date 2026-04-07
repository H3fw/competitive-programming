#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<ll> seg;
vector<int> a;
ll minNum;

void build(int v, int r, int l) {
  if (r == l) {
    seg[v] = a[r];
    return;
  }
  int mid = (l + r) / 2;
  build(v * 2, r, mid);
  build(v * 2 + 1, mid + 1, l);

  seg[v] = min(seg[2 * v], seg[2 * v + 1]);
}

void query(int v, int l, int r, int L, int R) {
  if (L > r or R < l)
    return;
  if (r <= R and l >= L) {
    if (minNum > seg[v])
      minNum = seg[v];
    return;
  }

  int mid = (l + r) / 2;
  query(2 * v, l, mid, L, R);
  query(2 * v + 1, mid + 1, r, L, R);
}

void update(int v, int l, int r, int leaf, int att) {
  if (l == r and r == leaf) {
    seg[v] = att;
    return;
  }
  if (leaf > r or leaf < l) {
    return;
  }

  int mid = (l + r) / 2;
  update(2 * v, l, mid, leaf, att);
  update(2 * v + 1, mid + 1, r, leaf, att);

  seg[v] = min(seg[2 * v], seg[2 * v + 1]);
}

void solve() {
  int n, q;
  cin >> n >> q;

  a.resize(n);
  for (int i = 0; i < n; i++)
    cin >> a[i];

  seg.resize(4 * n);
  build(1, 0, n - 1);

  for (int i = 0; i < q; i++) {
    int option, a, b;
    cin >> option >> a >> b;

    if (option == 2) {
      a--;
      b--;
      minNum = 10e9+1;
      query(1, 0, n - 1, a, b);

      cout << minNum << endl;
    }

    if (option == 1) {
      a--;
      update(1, 0, n - 1, a, b);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
}
