/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33459270
 * Submitted at: 2022-07-23 21:39:44
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_b
 * Result: AC
 * Execution Time: 53 ms
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
  int n;
  cin >> n;
  vector a(n, vector<char>(n));
  rep(i, n) rep(j, n) cin >> a[i][j];
  bool chk = false;
  rep(i, n) rep(j, n) {
    if (a[i][j] == 'W' && a[j][i] != 'L') chk = true;
    if (a[i][j] == 'L' && a[j][i] != 'W') chk = true;
    if (a[i][j] == 'D' && a[j][i] != 'D') chk = true;
  }
  puts(chk ? "incorrect" : "correct");
  return 0;
}