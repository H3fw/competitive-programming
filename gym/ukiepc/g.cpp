#include <bits/stdc++.h>

using namespace std;

#define arr std::array
#define ll longlong

void solve() {
  int numberOfDays, healthyDay, tiredDay, workWeek, restWeek;
  cin >> numberOfDays >> healthyDay >> tiredDay >> workWeek >> restWeek;

  int healthyWeek = workWeek + restWeek;
  int healthyWeekWorked = workWeek * healthyDay;
  int tiredWeekWorked = healthyWeek * tiredDay;

  if (healthyWeekWorked < tiredWeekWorked) {
    cout << workWeek * healthyDay + (numberOfDays - workWeek) * tiredDay
         << endl;
    return;
  }

  int months = numberOfDays / healthyWeek;
  int finalDays = (numberOfDays % healthyWeek);

  int worked = (months - 1) * healthyWeekWorked + workWeek * healthyDay;
  int nonRestFinals = (finalDays + restWeek) * tiredDay;
  int restFinals = 0;

  if (finalDays) {
    int x = min(workWeek, finalDays);
    restFinals = healthyDay * x;

    if (finalDays - workWeek) {
      restFinals += (finalDays - workWeek) * tiredDay;
    }
  }

  cout << worked + max(restFinals, nonRestFinals) << endl;
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
