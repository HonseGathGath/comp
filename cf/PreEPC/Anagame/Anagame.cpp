#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), x(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> x[i];
    }

    vector<pair<int, int>> monsters;
    for (int i = 0; i < n; i++) {
      monsters.push_back({abs(x[i]), a[i]});
    }
    sort(monsters.begin(), monsters.end());

    ll total_health = 0;
    bool ok = true;
    for (auto [dist, health] : monsters) {
      total_health += health;
      if (total_health > (ll)k * dist) {
        ok = false;
        break;
      }
    }

    cout << (ok ? "YES" : "NO") << "\n";
  }

  return 0;
}
