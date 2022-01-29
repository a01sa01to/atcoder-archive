/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc134/submissions/28865465
 * Submitted at: 2022-01-29 21:37:45
 * Problem URL: https://atcoder.jp/contests/arc134/tasks/arc134_a
 * Result: WA
 * Execution Time: 54 ms
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
  vector<ll> a(0);
  rep(i, n) {
    ll x;
    cin >> x;
    a.push_back(x);
  }
  ll ans = 0;
  if (a[0] >= w) ans += (a[0] - 1) / w + 1;
  rep(i, n - 1) ans += (a[i + 1] - a[i] - 1) / w;
  if (a[n - 1] + w < l) ans += (l - a[n - 1] - w) / w + 1;
  cout << ans << endl;
  return 0;
}