#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;
int main() {
  cin.tie(0);
  cout.tie(0);
  ios_base::sync_with_stdio(0);

  int q, n;
  cin >> q;
  char c;
  // boi

  while (q--) {

    priority_queue<char> sq, tq;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> c;
      sq.push(c);
    }
    for (int i = 0; i < n; i++) {
      cin >> c;
      tq.push(c);
    }
    while (true) {
      if (sq.top() != tq.top()) {

        cout << "NO";
        break;
      }
      sq.pop();
      tq.pop();
      if ((sq.empty() && tq.empty())) {
        break;
      }
    }
    if ((sq.empty() && tq.empty())) {
      cout << "YES";
    }
    cout << endl;
  }

  return 0;
}
