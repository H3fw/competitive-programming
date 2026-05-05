#include <bits/stdc++.h>

using namespace std;
#define endl '\n'
#define all(x) begin(x), end(x)

void dbg_print(int x) { cerr << x; }
void dbg_print(long x) { cerr << x; }
void dbg_print(long long x) { cerr << x; }
void dbg_print(unsigned x) { cerr << x; }
void dbg_print(unsigned long x) { cerr << x; }
void dbg_print(unsigned long long x) { cerr << x; }
void dbg_print(float x) { cerr << x; }
void dbg_print(double x) { cerr << x; }
void dbg_print(long double x) { cerr << x; }
void dbg_print(char x) { cerr << '\'' << x << '\''; }
void dbg_print(const char *x) { cerr << '\"' << x << '\"'; }
void dbg_print(const string &x) { cerr << '\"' << x << '\"'; }
void dbg_print(bool x) { cerr << (x ? "true" : "false"); }
template <typename T, typename V> void dbg_print(const pair<T, V> &x) {
  cerr << '{';
  dbg_print(x.first);
  cerr << ',';
  dbg_print(x.second);
  cerr << '}';
}
template <typename T> void dbg_print(const T &x) {
  int f = 0;
  cerr << '{';
  for (auto &i : x)
    cerr << (f++ ? "," : ""), dbg_print(i);
  cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V> void _print(T t, V... v) {
  dbg_print(t);
  if (sizeof...(v))
    cerr << ", ";
  _print(v...);
}
template <size_t T> void dbg_print(bitset<T> b) { cerr << b; }
#ifndef ONLINE_JUDGE
#define debug(x...)                                                            \
  cerr << "[" << #x << "] = [";                                                \
  _print(x)
#else
#define debug(x...)
#endif

// ==============================================================================================
// //

typedef long long ll;

void solve() {
  double x1, x2, x3, x4, y1, y2, y3, y4;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

  double d1 = ((x1 * y2) - (y1 * x2)) * (x3 - x4);
  double d2 = (x1 - x2) * (x3 * y4 - y3 * x4);
  double div = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
  double px = (d1 - d2) / div;
  d1 = (x1 * y2 - y1 * x2) * (y3 - y4);
  d2 = (y1 - y2) * (x3 * y4 - y3 * x4);
  double py = (d1 - d2) / div;

  cout << px << ' ' << py << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  solve();
}
