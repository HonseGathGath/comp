#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  ll count = 0;

  for (ll i = 5; i <= n; i *= 5) {
    count += n / i;
  }

  cout << count;

  return 0;
}
