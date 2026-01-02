
#include <bits/stdc++.h>
using namespace std;

string decToBin(int n) {
  if (n == 0)
    return "0";

  string binary = "";
  while (n > 0) {
    binary = to_string(n % 2) + binary;
    n /= 2;
  }
  return binary;
}

string getTrailingZeros(string bin) {
  string result = "";
  bool foundOne = false;

  for (int i = bin.length() - 1; i >= 0; i--) {
    char c = bin[i];
    if (c == '0') {
      result = '0' + result;
    } else if (c == '1') {
      foundOne = true;
      break;
    }
  }

  if (!foundOne) {
    return bin;
  }

  return result;
}

bool isPalindrome(string s) {
  int left = 0, right = s.length() - 1;
  while (left < right) {
    if (s[left] != s[right]) {
      return false;
    }
    left++;
    right--;
  }
  return true;
}

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    string bin = decToBin(n);
    string bin_with_zeros = getTrailingZeros(bin) + bin;

    bool valid = false;

    if (isPalindrome(bin)) {
      int len = bin.length();
      if (len % 2 == 0 || bin[len / 2] == '0') {
        valid = true;
      }
    }

    if (!valid && isPalindrome(bin_with_zeros)) {
      int len = bin_with_zeros.length();
      if (len % 2 == 0 || bin_with_zeros[len / 2] == '0') {
        valid = true;
      }
    }

    cout << (valid ? "YES" : "NO") << endl;
  }
  return 0;
}
