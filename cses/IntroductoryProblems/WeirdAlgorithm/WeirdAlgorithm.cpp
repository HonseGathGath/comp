#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  unsigned long long a;
  cin >> a;
  while (a != 1) {
    cout << a << " ";
    if (a % 2 == 0) {
      a = a / 2;
    } else {
      a = 3 * a + 1;
    }
  }
  cout << a << endl;

  return 0;
}
