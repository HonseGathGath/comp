#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int missing = 0;
  for (int i = 1; i <= n; i++) {
    missing ^= i;
  }
  for (int i = 0; i < n - 1; i++) {
    int x;
    cin >> x;
    missing ^= x;
  }

  cout << missing << endl;
  return 0;
}
