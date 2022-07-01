/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc153/submissions/32872093
 * Submitted at: 2022-07-02 00:09:48
 * Problem URL: https://atcoder.jp/contests/abc153/tasks/abc153_e
 * Result: AC
 * Execution Time: 26 ms
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
  int h, n;
  cin >> h >> n;
  vector<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;

  vector<int> dp(h + 1, 1e9);
  dp[h] = 0;
  for (int i = h; i > 0; i--) {
    rep(j, n) {
      int idx = max(0, i - v[j].first);
      dp[idx] = min(dp[idx], dp[i] + v[j].second);
    }
    Debug(i, dp);
  }
  cout << dp[0] << endl;
  return 0;
}