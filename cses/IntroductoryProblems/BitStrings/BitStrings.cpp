#include <bits/stdc++.h>
#include <cmath>
using namespace std;

using ll = long long;
const int MOD = 1000000007;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  ll n;
  cin >> n;

  ll result = 1;
  for (int i = 0; i < n; i++) {
    result = (result * 2) % MOD;
  }

  cout << result;

  return 0;
}
