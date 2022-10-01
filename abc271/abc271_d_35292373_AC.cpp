/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/35292373
 * Submitted at: 2022-10-01 21:33:24
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_d
 * Result: AC
 * Execution Time: 339 ms
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
  int n, s;
  cin >> n >> s;
  vector<pair<int, int>> a(n);
  rep(i, n) cin >> a[i].first >> a[i].second;
  vector dp(n + 1, vector<int>(1e6 + 1, -1));
  dp[0][0] = 2;
  rep(i, n) {
    rep(j, 1e6 + 1) {
      if (dp[i][j] == -1) continue;
      // おもて
      if (j + a[i].first <= 1e6) {
        dp[i + 1][j + a[i].first] = 0;
      }
      // うら
      if (j + a[i].second <= 1e6) {
        dp[i + 1][j + a[i].second] = 1;
      }
    }
  }
  if (dp[n][s] == -1) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  string ans = "";
  int i = n, j = s;
  while (i > 0) {
    if (dp[i][j] == 0) {
      ans += "H";
      j -= a[i - 1].first;
    }
    else {
      ans += "T";
      j -= a[i - 1].second;
    }
    i--;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;

  return 0;
}