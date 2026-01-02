#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  while (t--) {
    long long n, a, b, c;
    cin >> n >> a >> b >> c;

    long long sum = a + b + c;
    long long full = n / sum;
    long long days = full * 3;
    long long remaining = n % sum;

    if (remaining == 0) {
      cout << days << "\n";
      continue;
    }

    if (remaining > 0) {
      days++;
      remaining -= a;
    }
    if (remaining > 0) {
      days++;
      remaining -= b;
    }
    if (remaining > 0) {
      days++;
    }

    cout << days << "\n";
  }

  return 0;
}
