#include <bits/stdc++.h>
#include <vector>
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

  long long s = 0;
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      s += a[i] - a[i + 1];
      a[i + 1] = a[i];
    }
  }

  cout << s;

  return 0;
}
