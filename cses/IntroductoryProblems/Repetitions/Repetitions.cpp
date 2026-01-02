#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  string repition;
  cin >> repition;
  int n = 0;
  int max = 0;
  char l = repition[0];
  for (char c : repition) {
    if (l != c) {
      l = c;
      n = 1;
    } else {
      n += 1;
    }
    if (max < n) {
      max = n;
    }
  }
  cout << max << endl;

  return 0;
}
