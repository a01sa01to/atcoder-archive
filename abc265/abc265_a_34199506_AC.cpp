/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/34199506
 * Submitted at: 2022-08-21 21:01:20
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_a
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

int main() {
  int x, y, n;
  cin >> x >> y >> n;
  int ans = 0;
  if (3 * x >= y) {
    while (n >= 3) {
      ans += y;
      n -= 3;
    }
  }
  cout << ans + x * n << endl;
  return 0;
}