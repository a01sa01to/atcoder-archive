/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc142/submissions/32629504
 * Submitted at: 2022-06-21 00:04:36
 * Problem URL: https://atcoder.jp/contests/arc142/tasks/arc142_b
 * Result: AC
 * Execution Time: 32 ms
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
  vector ans(n, vector<int>(n, 0));
  int cnt = 0;
  rep(i, n - n / 2) rep(j, n) {
    ans[2 * i][j] = ++cnt;
  }
  rep(i, n / 2) rep(j, n) {
    ans[2 * i + 1][j] = ++cnt;
  }
  rep(i, n) {
    rep(j, n) cout << ans[i][j] << " ";
    cout << endl;
  }
  return 0;
}