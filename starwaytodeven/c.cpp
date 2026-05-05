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
#define int ll

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> monsters(n);
  vector<ll> sum(n);
  set<int> punched;
  set<int> exPunched;

  for (int i = 0; i < n; i++) {
    cin >> monsters[i];
    if (i > 0)
      sum[i] = sum[i - 1] + monsters[i];
    else
      sum[i] = monsters[i];
  }

  for (int i = n - 1; i >= 0; i--) {
    auto p = punched.lower_bound(i + 1);
    if (p != punched.end() && *p <= i + k) {
      if (sum[*p - 1] > sum[*p] - monsters[i]) {
        punched.insert(i);
        exPunched.insert(*p);

        auto forward = exPunched.lower_bound(*p + 1);
        if (forward != exPunched.end() && *forward <= *p + k &&
            (punched.lower_bound(*forward + 1) == punched.end() or
             *punched.lower_bound(*forward + 1) > *forward + k)) {
          punched.insert(*forward);
        }
        punched.erase(p);
        continue;
      }
      continue;
    }
    punched.insert(i);
  }

  ll count = 0;
  for (int i = 0; i < monsters.size(); i++) {
    if (punched.find(i) != punched.end()) {
      continue;
    }
    count += monsters[i];
  }

  cout << count << endl;
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  solve();
}
