/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc019/submissions/34671513
 * Submitted at: 2022-09-07 18:23:29
 * Problem URL: https://atcoder.jp/contests/agc019/tasks/agc019_a
 * Result: AC
 * Execution Time: 5 ms
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
  ll q, h, s, d, n;
  cin >> q >> h >> s >> d >> n;
  ll ans = 0;
  if (n > 1) ans = min({ q * 8, h * 4, s * 2, d }) * (n / 2);
  ans += min({ q * 4, h * 2, s }) * (n % 2);
  cout << ans << endl;
  return 0;
}