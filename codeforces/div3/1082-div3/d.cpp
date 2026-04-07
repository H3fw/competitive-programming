#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

int minnum(vector<int> a) {
    if(a.empty()) return 0;
    
    int min = 0;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] < a[min]) { min = i; }
    }

    return min;
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> insidePort;
    vector<int> outsidePort;

    for(int i = 1; i < n+1; i++) {
        int a;    
        cin >> a;
        if(i <= x || i > y) {
            outsidePort.push_back(a);
            continue;
        }
        insidePort.push_back(a);
    }

    //while(insidePort[0] > insidePort[minnum(insidePort)]) {
    //    insidePort.push_back(insidePort[0]);
    //    insidePort.erase(insidePort.begin());
    //}

    vector<int> newInside;
    int insideMinIndex = minnum(insidePort);

    for(int i = insideMinIndex; i < insidePort.size(); i++) {
        newInside.push_back(insidePort[i]);
    }
    for(int i = 0; i < insideMinIndex; i++) {
        newInside.push_back(insidePort[i]);
    }

    vector<int> firstNums;
    vector<int> lastNums;
    
    //if(!outsidePort.empty()) {
    //    while(outsidePort[0] < newInside[0]) {
    //        firstNums.push_back(outsidePort[0]); 
    //    }
    //}

    if(!outsidePort.empty()) {
        int biggerIndex = 0;
        for(int i = 0; i < outsidePort.size(); i++) {
            if (outsidePort[i] > newInside[0]) {
                biggerIndex = i;
                break;
            }
            firstNums.push_back(outsidePort[i]);
        }
        if (biggerIndex) {
            for(int i = biggerIndex; i < outsidePort.size(); i++) {
                lastNums.push_back(outsidePort[i]);
            }
        }
    }

    if(!firstNums.empty()) {
        for(const int& num : firstNums) {
            cout << num << ' ';
        }
    }
    for(const int& num : newInside) {
        cout << num << ' ';
    }
    if(!lastNums.empty()) {
        for(const int& num : lastNums) {
            cout << num << ' ';
        }
    } else if (!outsidePort.empty() && firstNums.empty()){
        for(const int& num : outsidePort) {
            cout << num << ' ';
        }
    }
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