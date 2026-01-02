#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  while (t--) {
    string year;
    cin >> year;

    int n = stoi(year);
    int k = sqrt(n);
    if (k * k == n) {
      cout << 0 << endl;
      cout << k << endl;
    } else {
      cout << "-1" << endl;
    }
  }

  return 0;
}
