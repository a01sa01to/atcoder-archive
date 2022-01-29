/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc134/submissions/28860010
 * Submitted at: 2022-01-29 21:10:17
 * Problem URL: https://atcoder.jp/contests/arc134/tasks/arc134_a
 * Result: WA
 * Execution Time: 53 ms
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
  a.push_back(l);
  ll ans = 0;
  if (a[0] >= w) ans += a[0] / w;
  rep(i, n - 1) ans += (a[i + 1] - a[i] - 1) / w;
  if (a[n - 1] + w < l) ans += (l - a[n - 1]) / w;
  cout << ans << endl;
  return 0;
}