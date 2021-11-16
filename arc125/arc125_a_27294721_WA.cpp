/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc125/submissions/27294721
 * Submitted at: 2021-11-17 00:29:59
 * Problem URL: https://atcoder.jp/contests/arc125/tasks/arc125_a
 * Result: WA
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
    delta = i;
    break;
  }
  rep(i, n) if (a[0] != a[n - i - 1]) {
    delta = min(delta, i + 1);
    break;
  }
  ll ans = 0;
  bool add = false;
  bool isZero = a[0] == 0;
  rep(i, m) {
    if (b[i] == 0 && isZero) ans++;
    else if (b[i] == 0) {
      ans += 2;
      isZero = true;
    }
    else if (add && isZero) {
      ans += 2;
      isZero = false;
    }
    else if (isZero) {
      add = true;
      isZero = false;
      ans += delta + 1;
    }
    else
      ans++;
  }
  cout << ans << endl;
  return 0;
}