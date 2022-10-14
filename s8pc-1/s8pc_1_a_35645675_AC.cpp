/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/s8pc-1/submissions/35645675
 * Submitted at: 2022-10-15 00:36:42
 * Problem URL: https://atcoder.jp/contests/s8pc-1/tasks/s8pc_1_a
 * Result: AC
 * Execution Time: 7 ms
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
  cout << fixed << setprecision(9) << 1080.0 / (n - 1) << endl;
  return 0;
}