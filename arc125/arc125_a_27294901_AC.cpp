/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc125/submissions/27294901
 * Submitted at: 2021-11-17 00:47:21
 * Problem URL: https://atcoder.jp/contests/arc125/tasks/arc125_a
 * Result: AC
 * Execution Time: 57 ms
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
  bool a0 = false, b0 = false, a1 = false, b1 = false;
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];
  rep(i, n) {
    if (a[i] == 0) a0 = true;
    else if (a[i] == 1)
      a1 = true;
  }
  rep(i, m) {
    if (b[i] == 0) b0 = true;
    else if (b[i] == 1)
      b1 = true;
  }
  if ((!a1 && b1) || (!a0 && b0)) {
    cout << -1 << endl;
    return 0;
  }
  ll delta = 1e9;
  rep(i, n) if (a[0] != a[i]) {
    delta = min({ delta, i, n - i });
  }
  ll ans = 0;
  int _ = a[0];
  rep(i, m) {
    if (_ == b[i]) ans++;
    else {
      ans += delta + 1;
      delta = 1;
      _ = !_;
    }
  }
  cout << ans << endl;
  return 0;
}