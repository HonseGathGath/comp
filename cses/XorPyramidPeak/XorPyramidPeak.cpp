#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int result = 0;

  // For XOR pyramid, top = XOR of a[i] where C(n-1, i) is odd
  // Using Lucas theorem: C(n-1, i) mod 2 = 1 iff (i & (n-1)) == i
  for (int i = 0; i < n; i++) {
    if (((i & (n - 1)) == i)) {
      result ^= a[i];
    }
  }

  cout << result << "\n";
  return 0;
}
