/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc108/submissions/35757250
 * Submitted at: 2022-10-18 00:02:10
 * Problem URL: https://atcoder.jp/contests/abc108/tasks/arc102_a
 * Result: AC
 * Execution Time: 8 ms
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

inline ll cubic(ll x) { return x * x * x; }

int main() {
  int n, k;
  cin >> n >> k;
  ll ans = cubic(n / k);
  Debug(n / k, (n + k / 2) / k);
  if (k % 2 == 0) {
    ans = cubic(n / k) + cubic((n + k / 2) / k);
  }
  cout << ans << endl;
  return 0;
}