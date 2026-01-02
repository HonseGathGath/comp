#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    vector<int> a(n);
    a[0] = 1;

    for (int i = 1; i < n; i++) {
      long long diff = b[i] - b[i - 1];
      if (diff == i + 1) {
        a[i] = i + 1;
      } else {
        int pos = i - diff;
        a[i] = (pos >= 0) ? a[pos] : 1;
      }
    }

    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}
