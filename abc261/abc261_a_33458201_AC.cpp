/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33458201
 * Submitted at: 2022-07-23 21:36:57
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_a
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
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << max(0, min(b, d) - max(a, c)) << endl;
  return 0;
}