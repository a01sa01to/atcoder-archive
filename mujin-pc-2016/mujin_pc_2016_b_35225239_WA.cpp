/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/mujin-pc-2016/submissions/35225239
 * Submitted at: 2022-09-29 11:37:33
 * Problem URL: https://atcoder.jp/contests/mujin-pc-2016/tasks/mujin_pc_2016_b
 * Result: WA
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

inline double circleS(double r) {
  const double Pi = acos(-1);
  return r * r * Pi;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  cout << fixed << setprecision(10);
  if (a - b <= c && c <= a + b) {
    cout << circleS(a + b + c) << endl;
  }
  else {
    cout << circleS(a + b + c) - circleS(min({ abs(c - a - b), abs(a - b - c), abs(b - c - a) })) << endl;
  }
  return 0;
}