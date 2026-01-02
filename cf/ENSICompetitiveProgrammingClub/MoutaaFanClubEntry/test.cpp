#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;

int sum_permutations(int counter) {
  int sum = (ll)counter * (counter + 1) / 2;
  return sum;
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;
  vector<int> b;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    b.push_back(x);
  }

  int counter = 1;
  int xor_sequence = b[0];

  vector<pair<int, int>> a;
  for (int i = 1; i < n; i++) {
    xor_sequence ^= b[i];
    if (xor_sequence != 0) {
      a.push_back(make_pair(sum_permutations(counter), counter));
      xor_sequence = b[i];
      counter = 1;
    } else if (xor_sequence == 0) {
      counter++;
    }
  }
  a.push_back(make_pair(sum_permutations(counter), counter));

  int res =
      accumulate(
          a.begin(), a.end(), 0,
          [](int total, const pair<int, int> &p) { return total + p.first; }) +
      b.size() -
      accumulate(a.begin(), a.end(), 0, [](int total, const pair<int, int> &p) {
        return total + p.second;
      });

  cout << res;
  return 0;
}
