#include <bits/stdc++.h>
#include <cstdio>
using namespace std;
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int t;
  cin >> t;
  int x, y, z;
  while (t--) {

    cin >> x >> y >> z;
    if ((x | y | z) == (x ^ y ^ z)) {
      cout << "yes";
    } else {
      cout << "no";
    }
    cout << endl;
  }

  return 0;
}
