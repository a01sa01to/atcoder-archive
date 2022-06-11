/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc255/submissions/32372673
 * Submitted at: 2022-06-11 21:01:12
 * Problem URL: https://atcoder.jp/contests/abc255/tasks/abc255_a
 * Result: RE
 * Execution Time: 107 ms
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
  int r, c;
  cin >> r >> c;
  vector<vector<int>> a(r, vector<int>(c));
  rep(i, 2) rep(j, 2) cin >> a[i][j];
  cout << a[r - 1][c - 1] << endl;
  return 0;
}