#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define arr std::array
#define ll longlong

arr<vector<int>, 1000001> primeFactors;

void getPrimeFactors() {
    for(int i = 2; i < primeFactors.size(); i++) {
        if (primeFactors[i].empty()) {
            for(int j = i; j < primeFactors.size(); j = j+i) {
                if(j > primeFactors.size()) break;
                primeFactors[j].push_back(i);
            }
        }
    }
}

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
    vector<int> origA;

    bool alice = false;
    for(int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a.push_back(ai);
        
    }
    
    if(check_non_decreasing(a)) {
        cout << "Bob" << '\n';
        return;
    }

    vector<int> newNums;
    for(int i = 0; i < n; i++) {
        if(primeFactors[a[i]].size() > 1) {
            cout << "Alice" << '\n';
            return;
        } else if(!primeFactors[a[i]].empty()) {
            newNums.push_back(primeFactors[a[i]].back());
        } else {
            newNums.push_back(a[i]);
        }
    }

    if(check_non_decreasing(newNums)) {
        cout << "Bob" << '\n';
    } else {
        cout << "Alice" << '\n';
    }    
}
 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    getPrimeFactors();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
