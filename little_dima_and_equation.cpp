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
ll s(ll x) {
  ll ans = 0;
  while (x != 0) {
    ans += x % 10;
    x /= 10;
  }
  return ans;
}
ll power(ll a, ll b) {
  ll ans = 1;
  loop0(i, b) { ans *= a; }
  return ans;
}

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;

  vector<ll> ans;

  loop1(i, 81) {
    ll v = b * power(i, a) + c;
    if (s(v) == i && (v < 1000000000) && (v > 0)) {
      ans.push_back(v);
    }
  }
  int n = ans.size();
  cout << n << endl;
  if (n == 0)
    return;

  sort(ans.begin(), ans.end());
  loop0(i, n) cout << ans[i] << " ";
  cout << endl;
}