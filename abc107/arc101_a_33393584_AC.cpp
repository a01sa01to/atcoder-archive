/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc107/submissions/33393584
 * Submitted at: 2022-07-21 19:11:01
 * Problem URL: https://atcoder.jp/contests/abc107/tasks/arc101_a
 * Result: AC
 * Execution Time: 42 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> x(n);
  rep(i, n) cin >> x[i];
  ll ans = 1e18;
  for (int i = k; i <= n; i++) {
    ans = min(ans, abs(x[i - k]) + abs(x[i - k] - x[i - 1]));
    ans = min(ans, abs(x[i - 1]) + abs(x[i - 1] - x[i - k]));
  }
  cout << ans << endl;
  return 0;
}