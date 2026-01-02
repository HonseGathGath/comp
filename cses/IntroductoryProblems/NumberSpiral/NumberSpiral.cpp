#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    long long y, x;
    cin >> y >> x;

    long long n = max(y, x);
    long long result;

    if (n % 2 == 1) {
      if (x >= y) {
        result = n * n - (y - 1);
      } else {
        result = (n - 1) * (n - 1) + x;
      }
    } else {
      if (x >= y) {
        result = (n - 1) * (n - 1) + y;
      } else {
        result = n * n - (x - 1);
      }
    }

    cout << result << "\n";
  }

  return 0;
}
