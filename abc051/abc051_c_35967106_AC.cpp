/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc051/submissions/35967106
 * Submitted at: 2022-10-26 01:15:36
 * Problem URL: https://atcoder.jp/contests/abc051/tasks/abc051_c
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
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;
  rep(i, ty - sy) cout << "U";
  rep(i, tx - sx) cout << "R";
  rep(i, ty - sy) cout << "D";
  rep(i, tx - sx) cout << "L";
  cout << "L";
  rep(i, ty - sy + 1) cout << "U";
  rep(i, tx - sx + 1) cout << "R";
  cout << "D";
  cout << "R";
  rep(i, ty - sy + 1) cout << "D";
  rep(i, tx - sx + 1) cout << "L";
  cout << "U";
  cout << endl;
  return 0;
}