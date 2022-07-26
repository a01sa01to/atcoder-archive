/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc077/submissions/33538523
 * Submitted at: 2022-07-27 00:16:06
 * Problem URL: https://atcoder.jp/contests/abc077/tasks/arc084_a
 * Result: AC
 * Execution Time: 112 ms
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
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) cin >> c[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());
  Debug(a, b, c);
  ll ans = 0;
  rep(i, n) {
    auto itra = lower_bound(a.begin(), a.end(), b[i]);
    auto itrc = upper_bound(c.begin(), c.end(), b[i]);
    Debug(i, b[i], itra - a.begin() - 1, itrc - c.begin());
    ans += (itra - a.begin()) * (c.end() - itrc);
  }
  cout << ans << endl;
  return 0;
}