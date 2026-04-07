#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  string sequence;
  cin >> sequence;

  int longestSeq = 0;
  int currSeq = 0;
  char currChar = ' ';

  for (char l : sequence) {
    if (l == currChar) {
      currSeq++;
    } else {
      currChar = l;
      if (longestSeq < currSeq)
        longestSeq = currSeq;
      currSeq = 1;
    }
  }
  if (longestSeq < currSeq)
    longestSeq = currSeq;

  cout << longestSeq << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
