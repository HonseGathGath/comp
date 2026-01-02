#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
#include <set>
using namespace std;

using ll = long long;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  long long total = n * (n + 1) / 2;

  if (total % 2 != 0) {
    cout << "NO\n";
    return 0;
  }

  cout << "YES\n";

  vector<int> set1, set2;
  long long target = total / 2;

  if (n % 4 == 0) {
    for (int i = 1; i <= n; i++) {
      if (i % 4 == 1 || i % 4 == 0) {
        set1.push_back(i);
      } else {
        set2.push_back(i);
      }
    }
  } else {
    set1.push_back(1);
    set1.push_back(2);
    set2.push_back(3);

    for (int i = 4; i <= n; i++) {
      int offset = (i - 4) % 4;
      if (offset == 0 || offset == 3) {
        set1.push_back(i);
      } else {
        set2.push_back(i);
      }
    }
  }

  cout << set1.size() << "\n";
  for (size_t i = 0; i < set1.size(); i++) {
    cout << set1[i];
    if (i < set1.size() - 1)
      cout << " ";
  }
  cout << "\n";

  cout << set2.size() << "\n";
  for (size_t i = 0; i < set2.size(); i++) {
    cout << set2[i];
    if (i < set2.size() - 1)
      cout << " ";
  }
  cout << "\n";
  return 0;
}
