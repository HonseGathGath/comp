#include <bits/stdc++.h>
#include <iostream>
using namespace std;

using ll = long long;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  if (n == 1) {
    cout << 1;
  } else if (n <= 3) {
    cout << "NO SOLUTION";
  } else {
    for (int i = 2; i <= n; i += 2) {
      cout << i << " ";
    }
    for (int i = 1; i <= n; i += 2) {
      cout << i << " ";
    }
  }
  return 0;
}
