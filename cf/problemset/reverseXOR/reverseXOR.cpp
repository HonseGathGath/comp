#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
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

bool hasZero(string bin) {
  for (char c : bin) {
    if (c == '0')
      return true;
  }
  return false;
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

int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);
  int x;
  cin >> x;
  while (x--) {
    int n;
    cin >> n;
    string bin = decToBin(n);
    string bin_1 = getTrailingZeros(bin) + bin;

    string rev_bin = bin;
    reverse(rev_bin.begin(), rev_bin.end());

    string rev_bin_1 = bin_1;
    reverse(rev_bin_1.begin(), rev_bin_1.end());
    int l = bin.length() / 2;
    int l_1 = bin_1.length() / 2;

    cout << bin << " " << bin_1 << " " << rev_bin << " " << rev_bin_1;

    if (bin.size() % 2 != 0 && bin[l] == 1) {
      cout << "no\n";
      continue;
    }
    if (bin_1.size() % 2 != 0 && bin_1[l_1] == 1) {
      cout << "no\n";
      continue;
    }

    if (rev_bin == bin) {
      cout << "yes";
    } else if (rev_bin_1 == bin_1) {
      cout << "yes";
    } else {
      cout << "no";
    }
    cout << endl;
  }
  return 0;
}
