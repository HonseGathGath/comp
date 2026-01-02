
#include <bits/stdc++.h>

using namespace std;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  unsigned long long n;
  unsigned long long m = 0;

  cin >> n;
  unsigned long long sum = n * (n + 1) / 2;
  while (m < n - 1) {
    cin >> m;
    sum -= m;
  }
  cout << sum << endl;

  return 0;
}
