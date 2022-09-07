/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc079/submissions/34671648
 * Submitted at: 2022-09-07 18:31:47
 * Problem URL: https://atcoder.jp/contests/abc079/tasks/abc079_d
 * Result: AC
 * Execution Time: 19 ms
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
  int h, w;
  cin >> h >> w;
  vector dst(10, vector(10, 1e9));
  rep(i, 10) rep(j, 10) cin >> dst[i][j];
  rep(k, 10) rep(i, 10) rep(j, 10) dst[i][j] = min(dst[i][j], dst[i][k] + dst[k][j]);

  vector<int> cnt(10, 0);
  rep(i, h) rep(j, w) {
    int a;
    cin >> a;
    if (a != -1) cnt[a]++;
  }
  int ans = 0;
  rep(i, 10) ans += cnt[i] * dst[i][1];
  cout << ans << endl;
  return 0;
}