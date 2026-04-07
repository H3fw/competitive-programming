#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

bool check_non_decreasing(vector<int> a) {
    int n = a.size();
    for(int i = 0; i < n-1; i++) {
        if(a[i] > a[i+1]) { 
            return false; 
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a;

    while (n--) {
        int i;
        cin >> i;
        a.push_back(i);
    }
    n = a.size();

    check_non_decreasing(a) ? cout << a.size() : cout << 1;
    cout << '\n';
    return;
//    for(int i = 0; i < n; i++) {
//        if (check_non_decreasing(a)) {
//            cout << a.size() << '\n';
//            return;
//        }
//        
//        
//    }


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