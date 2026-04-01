#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong


void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    while(true) {
        bool change = false;
        for(int i = 1; i < n-1; i++) {
            if(s[i-1] == '1' && s[i+1] == '1' && s[i] != '1') {
                s[i] = '1';
                change = true;
            }
        }
        if(!change) break;
    }
    string maxOnes = s;

    for(int i = 1; i < n-1; i++) {
        if(s[i-1] == '1' && s[i+1] == '1' && s[i] != '0') {
            s[i] = '0';
        }
    }

    int min = 0;
    int max = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '1')  min++;
        if(maxOnes[i] == '1') max++;
    }

    cout << min << ' ' << max << '\n';
    
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