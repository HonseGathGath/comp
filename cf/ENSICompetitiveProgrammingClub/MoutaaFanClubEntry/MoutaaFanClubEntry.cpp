#include <bits/stdc++.h>
#include <iostream>
#include <numeric>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;

ll sum_permutations(ll counter) {
  ll sum = (ll)counter * (counter + 1) / 2;
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

  ll counter = 1;

  vector<pair<ll, ll>> a;
  for (int i = 1; i < n; i++) {
    if (b[i] == b[i - 1]) {
      counter++;
    } else {
      a.push_back(make_pair(sum_permutations(counter), counter));
      counter = 1;
    }
  }

  a.push_back(make_pair(sum_permutations(counter), counter));
  ll res =
      accumulate(
          a.begin(), a.end(), 0LL,
          [](ll total, const pair<ll, ll> &p) { return total + p.first; }) +
      b.size() -
      accumulate(a.begin(), a.end(), 0LL, [](ll total, const pair<ll, ll> &p) {
        return total + p.second;
      });

  cout << res;
  return 0;
}
