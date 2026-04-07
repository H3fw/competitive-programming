#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong


void solve() {
    int n;
    cin >> n;

    vector<int> a;
    a.push_back(0);
    while(n--) {
        int i = 0;
        cin >> i;
        a.push_back(i);
    }

    bool changes = true;
    while(changes) {
        changes = false;
        for(int i = 1; i <= a.size()/2; i++) {
            if (i*2 < a.size()) {
                if(a[i] > a[i*2]) {
                    int bfr = a[i];
                    a[i] = a[i*2];
                    a[i*2] = bfr;
                    changes = true;
                }
            }

        }
    }

    is_sorted(a.begin(), a.end()) ? cout << "YES" << '\n' : cout << "NO" << '\n'; 
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