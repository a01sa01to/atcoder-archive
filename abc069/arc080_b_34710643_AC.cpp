/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc069/submissions/34710643
 * Submitted at: 2022-09-10 00:31:30
 * Problem URL: https://atcoder.jp/contests/abc069/tasks/arc080_b
 * Result: AC
 * Execution Time: 14 ms
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
  int h, w, n;
  cin >> h >> w >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector ans(h, vector<int>(w));
  int idx = 0;
  rep(i, h) rep(j, w) {
    ans[i][j] = idx + 1;
    a[idx]--;
    if (a[idx] == 0) idx++;
  }
  for (int i = 1; i < h; i += 2) reverse(ans[i].begin(), ans[i].end());
  rep(i, h) {
    rep(j, w) cout << ans[i][j] << " ";
    cout << endl;
  }
  return 0;
}