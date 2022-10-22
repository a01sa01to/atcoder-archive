/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35861711
 * Submitted at: 2022-10-22 21:01:11
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_a
 * Result: AC
 * Execution Time: 12 ms
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
  int a, b;
  cin >> a >> b;
  printf("%.3lf\n", double(b) / a);
  return 0;
}