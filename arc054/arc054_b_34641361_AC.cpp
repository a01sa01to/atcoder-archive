/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc054/submissions/34641361
 * Submitted at: 2022-09-06 00:01:26
 * Problem URL: https://atcoder.jp/contests/arc054/tasks/arc054_b
 * Result: AC
 * Execution Time: 13 ms
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
  double p;
  cin >> p;
  double l = 0, r = 1e9;
  while (r - l > 1e-9) {
    double c1 = l + (r - l) / 3;
    double c2 = r - (r - l) / 3;
    double f1 = c1 + p / pow(2, c1 / 1.5);
    double f2 = c2 + p / pow(2, c2 / 1.5);
    if (f1 < f2) r = c2;
    else l = c1;
  }
  cout << fixed << setprecision(10) << l + p / pow(2, l / 1.5) << endl;
  return 0;
}