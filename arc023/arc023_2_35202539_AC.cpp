/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc023/submissions/35202539
 * Submitted at: 2022-09-28 00:01:33
 * Problem URL: https://atcoder.jp/contests/arc023/tasks/arc023_2
 * Result: AC
 * Execution Time: 145 ms
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
  int r, c, d;
  cin >> r >> c >> d;
  vector<vector<int>> a(r, vector<int>(c));
  rep(i, r) rep(j, c) cin >> a[i][j];
  int ans = 0;
  rep(i, r) rep(j, c) {
    int dist = i + j;
    if (dist > d || dist % 2 != d % 2) continue;
    ans = max(ans, a[i][j]);
  }
  cout << ans << endl;
  return 0;
}