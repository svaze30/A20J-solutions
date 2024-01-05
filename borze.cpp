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
  string s, ans = "";
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '.') {
      ans += '0';
    } else {
      if (s[i + 1] == '.')
        ans += '1';
      else
        ans += '2';
      i++;
    }
  }
  cout << ans << endl;
}