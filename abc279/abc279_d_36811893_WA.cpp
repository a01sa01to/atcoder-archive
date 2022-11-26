/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36811893
 * Submitted at: 2022-11-26 21:32:40
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_d
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

int main() {
  ll a, b;
  cin >> a >> b;
  long double s = a / 2.0 / b;
  long double z = 0;
  long double t = max(z, round(pow(s, 2.0 / 3)) - 1);
  cout << fixed << setprecision(10) << a / sqrt(t + 1) + b * t << endl;
  return 0;
}