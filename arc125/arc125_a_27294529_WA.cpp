/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc125/submissions/27294529
 * Submitted at: 2021-11-17 00:12:23
 * Problem URL: https://atcoder.jp/contests/arc125/tasks/arc125_a
 * Result: WA
 * Execution Time: 55 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  ll delta = 1e9;
  rep(i, n) if (a[0] != a[i]) {
    delta = i;
    break;
  }
  if (delta == 1e9) {
    cout << -1 << endl;
    return 0;
  }
  rep(i, n) if (a[0] != a[n - i - 1]) {
    delta = min(delta, i+1);
    break;
  }
  ll ans = 0;
  ll idx = 0;
  rep(i, m) {
    if (b[i] == a[0] && idx == 0) ans++;
    else if (b[i] == a[0]) {
      ans += delta + 1, idx = 0;
    }
    else if (idx == 0) {
      ans += delta + 1, idx = delta;
    }
    else
      ans++;
  }
  cout << ans << endl;
  return 0;
}