/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28798346
 * Submitted at: 2022-01-26 00:01:18
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bl
 * Result: AC
 * Execution Time: 261 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;
  vector<ll> a(n), delta(n - 1);
  rep(i, n) cin >> a[i];
  ll ans = 0;
  rep(i, n - 1) {
    delta[i] = a[i + 1] - a[i];
    ans += abs(delta[i]);
  }
  rep(_, q) {
    ll l, r, v;
    cin >> l >> r >> v;
    --l, --r;
    ll prev = 0, cur = 0;
    if (l >= 1) {
      prev += abs(delta[l - 1]);
      delta[l - 1] += v;
      cur += abs(delta[l - 1]);
    }
    if (r < n - 1) {
      prev += abs(delta[r]);
      delta[r] -= v;
      cur += abs(delta[r]);
    }
    ans += cur - prev;
    cout << ans << endl;
  }
  return 0;
}