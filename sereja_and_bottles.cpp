#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
#define loop0(i, n) for (ll i = 0; i < n; i++)
#define loop1(i, n) for (ll i = 1; i <= n; i++)

#define mp make_pair;
#define F first;
#define S second;
#define pb push_back;

void solve();

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin >> t;

  while (t--)
    solve();

  return 0;
}

void solve() {
  int n, ans = 0, a, b;
  cin >> n;
  int arr[n][2];
  for (int i = 0; i < n; i++) {
    cin >> arr[i][0] >> arr[i][1];
  }
  set<int> s;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) {
        if (arr[i][1] == arr[j][0]) {
          s.insert(j);
        }
      }
    }
  }

  cout << n - s.size() << endl;
}