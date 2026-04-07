#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong


void solve() {
    int n;
    cin >> n;

    int maxnum = 0;
    int winners = 1;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        if(maxnum < a) {
            maxnum = a;
            winners = 1;
        }
        else if (maxnum == a) {
            winners++;
        }
    }

    cout << winners << '\n';
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