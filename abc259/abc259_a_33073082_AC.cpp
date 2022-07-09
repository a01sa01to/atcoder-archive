/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc259/submissions/33073082
 * Submitted at: 2022-07-09 21:01:52
 * Problem URL: https://atcoder.jp/contests/abc259/tasks/abc259_a
 * Result: AC
 * Execution Time: 2 ms
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
  int n, m, x, t, d;
  cin >> n >> m >> x >> t >> d;
  for (int i = n - 1; i >= m; i--) {
    if (i < x) {
      t -= d;
    }
  }
  cout << t << endl;
  return 0;
}