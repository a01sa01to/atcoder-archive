/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33076428
 * Submitted at: 2022-07-09 21:06:24
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_b
 * Result: AC
 * Execution Time: 10 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  complex<double> a, b;
  int x, y;
  cin >> x >> y;
  a = complex<double>(x, y);
  double d;
  cin >> d;
  const double angle2rad = acos(-1) / 180;
  b = complex<double>(cos(d * angle2rad), sin(d * angle2rad));
  Debug(a, b, d);
  a *= b;
  Debug(a);
  cout << fixed << setprecision(10) << a.real() << " " << a.imag() << endl;
  return 0;
}