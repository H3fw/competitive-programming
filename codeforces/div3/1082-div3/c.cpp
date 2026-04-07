#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool reducible = true;
    
    while(reducible) {
        reducible = false;
        if(s.size() > 1) {
            for(int i = 1; i < s.size(); i++) {
                if (s[i] == s[i-1]) {
                    s.erase(s.begin() + i);
                    s.erase(s.begin() + i-1);
                    reducible = true;
                    break;
                }
            }
        }
    }

    if (s.size() > 0) {
        cout << "NO";
    } else { cout << "YES"; }
    cout << '\n';
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