/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2021yo1b/submissions/36686055
 * Submitted at: 2022-11-21 00:46:26
 * Problem URL: https://atcoder.jp/contests/joi2021yo1b/tasks/joi2021_yo1b_a
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
  int a, b, c;
  cin >> a >> c >> b;
  cout << (a <= b && b < c ? 1 : 0) << endl;
  return 0;
}