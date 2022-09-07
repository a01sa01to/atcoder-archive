/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc046/submissions/34671555
 * Submitted at: 2022-09-07 18:25:54
 * Problem URL: https://atcoder.jp/contests/abc046/tasks/abc046_b
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
  int n, k;
  cin >> n >> k;
  int ans = k;
  while (--n) ans *= k - 1;
  cout << ans << endl;
  return 0;
}