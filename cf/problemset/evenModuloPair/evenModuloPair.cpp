#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    bool found = false;
    for (int i = 0; i < n && !found; i++) {
      for (int j = i + 1; j < n && !found; j++) {
        if (a[j] % a[i] % 2 == 0) {
          cout << a[i] << "\n" << a[j] << "\n";
          found = true;
        }
      }
    }

    if (!found) {
      cout << "-1\n";
    }
  }

  return 0;
}
