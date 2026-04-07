#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong


void solve() {
    int n;
    cin >> n;

    bool sixseven = false;
    while(n--) {
        int i = 0;
        cin >> i;

        if(i == 67) 
        {
            sixseven = true;
        }
    }

    sixseven ? cout << "YES" << '\n' : cout << "NO" << '\n';
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