/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc246/submissions/30636430
 * Submitted at: 2022-04-02 21:13:10
 * Problem URL: https://atcoder.jp/contests/abc246/tasks/abc246_b
 * Result: AC
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  double x, y;
  cin >> x >> y;
  double r = sqrt(x * x + y * y);
  printf("%.9lf %.9lf\n", x / r, y / r);
  return 0;
}