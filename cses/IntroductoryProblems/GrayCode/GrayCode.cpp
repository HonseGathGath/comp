#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <memory>
using namespace std;

using ll = long long;

string intToBinary(int n) {
  if (n == 0)
    return "0";

  string binary = "";
  while (n > 0) {
    binary = char('0' + (n & 1)) + binary;
    n >>= 1;
  }
  return binary;
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  for (int i = 0; i < (1 << n); i++) {
    int gray = i ^ (i >> 1);

    for (int j = n - 1; j >= 0; j--) {
      cout << ((gray >> j) & 1);
    }
    cout << "\n";
  }

  return 0;
}
