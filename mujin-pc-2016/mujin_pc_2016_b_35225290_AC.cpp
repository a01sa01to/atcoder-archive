/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/mujin-pc-2016/submissions/35225290
 * Submitted at: 2022-09-29 11:41:42
 * Problem URL: https://atcoder.jp/contests/mujin-pc-2016/tasks/mujin_pc_2016_b
 * Result: AC
 * Execution Time: 9 ms
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

inline double circleS(double r) {
  const double Pi = acos(-1);
  return r * r * Pi;
}

int main() {
  int _a, _b, _c;
  cin >> _a >> _b >> _c;
  cout << fixed << setprecision(10);
  int a = min({ _a, _b, _c }), c = max({ _a, _b, _c });
  int b = _a + _b + _c - a - c;
  int r;
  if (a + b < c) { r = c - (a + b); }
  else { r = 0; }
  cout << circleS(a + b + c) - circleS(r) << endl;
  return 0;
}