#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
using namespace std;

using ll = long long;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    int dif = (a - 2 * b) / 3;

    if ((a + b) % 3 == 0 && max(a, b) <= 2 * min(a, b)) {
      cout << "YES";
    } else {
      cout << "NO";
    }
    cout << endl;
  }

  return 0;
}
