#include <bits/stdc++.h>
#define endl "\n"

void solve();

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}

void solve() {
  int n;
  cin >> n;
  int a, b, c;
  a = b = c = 0;
  int A = 0, B = 0, C = 0;
  while (n--) {
    cin >> a >> b >> c;
    A += a;
    B += b;
    C += c;
  }
  if (A == 0 && B == 0 && C == 0)
    cout << "YES";
  else
    cout << "NO";
  cout << endl;
}