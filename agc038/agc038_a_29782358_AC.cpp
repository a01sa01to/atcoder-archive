/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc038/submissions/29782358
 * Submitted at: 2022-03-01 10:21:35
 * Problem URL: https://atcoder.jp/contests/agc038/tasks/agc038_a
 * Result: AC
 * Execution Time: 57 ms
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
  int h, w, a, b;
  cin >> h >> w >> a >> b;
  vector ans(h, vector<int>(w, 0));
  rep(i, h) rep(j, w) {
    if (i < b ^ j < a) ans[i][j] = 1;
  }
  rep(i, h) {
    rep(j, w) cout << ans[i][j];
    cout << endl;
  }
  return 0;
}