#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>
using namespace std;
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n, 0);

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      if (x != -1 || (i == 0 || i == n - 1)) {
        a[i] = x;
      }
    }

    if (a[0] == -1) {
      if (a[n - 1] == -1) {
        a[0] = 0;
        a[n - 1] = 0;
      } else {
        a[0] = a[n - 1];
      }
    } else {
      if (a[n - 1] == -1) {
        a[n - 1] = a[0];
      }
    }
    cout << abs(a[0] - a[n - 1]) << endl;
    for (int i = 0; i < n; i++) {
      cout << a[i] << endl;
    }
    cout << endl;
  }

  return 0;
}
