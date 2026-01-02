#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
#include <vector>
using namespace std;
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  vector<int> a(3);
  for (int i = 0; i < 3; i++) {
    cin >> a[i];
  }

  auto MinMax = minmax_element(a.begin(), a.end());
  vector<int> result = {*MinMax.first, *MinMax.second};
  if (*MinMax.second - *MinMax.first >= 10) {
    cout << "check again";
  } else {
    cout << "final"
         << " "
         << accumulate(a.begin(), a.end(), 0) -
                accumulate(result.begin(), result.end(), 0);
  }

  return 0;
}
