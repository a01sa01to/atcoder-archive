/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35661996
 * Submitted at: 2022-10-15 21:01:29
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_a
 * Result: AC
 * Execution Time: 6 ms
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
  int ans = 1;
  rep(i, n) ans *= (i + 1);
  cout << ans << endl;
  return 0;
}