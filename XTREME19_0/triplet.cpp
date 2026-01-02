#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int t, N;
  cin >> t;
  while (t--) {

    int d[3] = {0};
    cin >> N;
    for (int a = 1; a < N; a++) {
      int r = a ^ N;
      for (int b = 1; b < N; b++) {
        int c = b ^ r;
        if (a + b + c == 2 * N && a != b && a != c && b != c) {
          d[0] = a;
          d[1] = b;
          d[2] = c;
          break;
        }
      }
      if (a + d[1] + d[2] == 2 * N && a != d[1] && a != d[2] && d[1] != d[2]) {
        break;
      }
    }

    if (d[0] == 0 && d[1] == 0) {
      cout << -1;
    } else {
      for (int i = 0; i < 3; i++) {
        cout << d[i] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
