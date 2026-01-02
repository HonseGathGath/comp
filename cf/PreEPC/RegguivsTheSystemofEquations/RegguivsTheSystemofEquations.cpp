#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int n, m;
  cin >> n >> m;

  int count = 0;
  for (int a = 0; a * a <= sqrt(n); a++) {
    int b = n - a * a;
    if (b >= 0 && a + b * b == m) {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}
