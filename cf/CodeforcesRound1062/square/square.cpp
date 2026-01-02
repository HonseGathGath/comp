#include <bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  while (t--) {
    set<int> square;

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    square.insert(a);
    square.insert(b);
    square.insert(c);
    square.insert(d);

    if (square.size() == 1) {
      cout << "YES";
    } else {
      cout << "NO";
    }
    cout << endl;
  }

  return 0;
}
