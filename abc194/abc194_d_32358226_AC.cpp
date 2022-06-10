/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/32358226
 * Submitted at: 2022-06-11 00:11:35
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_d
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  double ans = 0;
  for (int i = n - 1; i > 0; i--) {
    ans += double(n) / i;
  }
  cout << fixed << setprecision(15) << ans << endl;
  return 0;
}