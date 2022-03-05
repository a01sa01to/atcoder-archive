/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc242/submissions/29863551
 * Submitted at: 2022-03-05 21:02:18
 * Problem URL: https://atcoder.jp/contests/abc242/tasks/abc242_a
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  double ans = 0;
  if (x <= a) ans = 1;
  else if (x <= b) {
    ans = double(c) / (b - a);
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}