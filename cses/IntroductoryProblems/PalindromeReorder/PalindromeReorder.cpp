#include <algorithm>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

using ll = long long;

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  string s;
  cin >> s;

  map<char, int> m;

  map<char, int> freq;
  for (char c : s) {
    freq[c]++;
  }

  char odd_char = 0;
  int odd_count = 0;
  string half = "";

  for (auto &p : freq) {
    if (p.second % 2 == 1) {
      odd_count++;
      odd_char = p.first;
      if (odd_count > 1) {
        cout << "NO SOLUTION";
        return 0;
      }
    }
    half += string(p.second / 2, p.first);
  }

  string result = half;
  if (odd_count) {
    result += odd_char;
  }
  reverse(half.begin(), half.end());
  result += half;

  cout << result;

  return 0;
}
