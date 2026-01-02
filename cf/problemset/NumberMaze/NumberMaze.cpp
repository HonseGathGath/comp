#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  while (t--) {
    string n;
    int j, k;
    cin >> n >> j >> k;

    vector<string> perms;
    sort(n.begin(), n.end());
    do {
      perms.push_back(n);
    } while (next_permutation(n.begin(), n.end()));

    string a = perms[j - 1];
    string b = perms[k - 1];

    int A = 0, B = 0;
    int len = a.length();

    for (int i = 0; i < len; i++) {
      if (a[i] == b[i])
        A++;
    }

    vector<int> countA(10, 0), countB(10, 0);
    for (int i = 0; i < len; i++) {
      if (a[i] != b[i]) {
        countA[a[i] - '0']++;
        countB[b[i] - '0']++;
      }
    }

    for (int d = 0; d < 10; d++) {
      B += min(countA[d], countB[d]);
    }

    cout << A << "A" << B << "B\n";
  }

  return 0;
}
