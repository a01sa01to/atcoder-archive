/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc134/submissions/28869173
 * Submitted at: 2022-01-29 22:00:07
 * Problem URL: https://atcoder.jp/contests/arc134/tasks/arc134_a
 * Result: AC
 * Execution Time: 55 ms
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
  ll n, l, w;
  cin >> n >> l >> w;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll ans = 0, x = 0, i = 0;
  while (x < l) {
    Debug(x);
    Debug(i);
    if (i == n) {
      ll tmp = (l - x - 1) / w + 1;
      ans += tmp;
      break;
    }
    if (a[i] <= x) {
      x = max(a[i] + w, x);
      ++i;
    }
    else {
      ll tmp = (a[i] - x - 1) / w + 1;
      x += tmp * w;
      ans += tmp;
    }
  }
  cout << ans << endl;
  return 0;
}