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
  int A, m, n;
  cin >> A >> m >> n;

  int divida = 0;
  vector<tuple<char, int, int>> punches(m);

  for (int i = 0; i < m; i++) {
    cin >> get<0>(punches[i]);
    cin >> get<1>(punches[i]);
    cin >> get<2>(punches[i]);
  }

  vector<int> times(n);
  for (int i = 0; i < n; i++) {
    cin >> times[i];
  }

  int curPointIndex = 0;
  int curTimeIndex = 0;
  for (int i = 0; i <= times.back(); i++) {
    cout << divida << " DIVIDA " << endl;
    if (curPointIndex < punches.size()) {
      while (get<2>(punches[curPointIndex]) == i) {
        if (get<0>(punches[curPointIndex]) == 'K') {
          divida += get<1>(punches[curPointIndex]);
          curPointIndex++;
          if (curPointIndex >= punches.size())
            break;
          continue;
        }
        divida -= get<1>(punches[curPointIndex]);
        divida = max(divida, 0);
        curPointIndex++;
        if (curPointIndex >= punches.size())
          break;
      }
    }
    if (times[curTimeIndex] == i) {
      curTimeIndex++;
      if (divida >= A) {
        cout << "FALIDO" << endl;
        return;
      }
      cout << divida << endl;
    }
    if (i % 10 == 0) {
      divida *= 1.1;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  solve();
}
