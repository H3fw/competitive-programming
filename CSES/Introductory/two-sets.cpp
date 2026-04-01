#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll long long

void solve() {
  ll n;
  cin >> n;

  vector<ll> nums;
  for (ll i = 1; i < n + 1; i++) {
    nums.push_back(i);
  }
  ll sum = (n * (n + 1) / 2);

  if (sum % 2 != 0) {
    cout << "NO" << endl;
    return;
  }

  vector<ll> sumset;
  ll tmp = sum;
  for (ll i = n; i > n / 2; i--) {
    if (tmp - i > sum / 2) {
      tmp -= i;
      sumset.push_back(i);
      nums.pop_back();
      continue;
    }
    sumset.push_back(tmp - sum / 2);
    nums.erase(nums.begin() + (tmp - 1 - sum / 2));
    break;
  }

  cout << "YES" << endl;

  cout << sumset.size() << endl;
  for (ll a : sumset)
    cout << a << ' ';
  cout << endl;

  cout << nums.size() << endl;
  for (ll a : nums)
    cout << a << ' ';
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
  return 0;
}
