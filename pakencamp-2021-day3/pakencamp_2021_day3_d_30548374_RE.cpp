/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day3/submissions/30548374
 * Submitted at: 2022-03-29 17:59:46
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day3/tasks/pakencamp_2021_day3_d
 * Result: RE
 * Execution Time: 2437 ms
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
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, t;
  cin >> n >> t;
  vector<pair<int, int>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;

  // subtask 1
  if (n <= 16) {
    int ans = 0;
    rep(b, 1 << n) {
      pair<int, int> ac = { 0, 0 }, bc = { 0, 0 };
      vector<pair<int, int>> u;
      rep(i, n) {
        if (b & (1 << i)) {
          u.push_back(v[i]);
        }
      }
      sort(u.begin(), u.end());
      rep(i, u.size()) {
        ac.first += u[i].first;
        if (ac.first <= t) ac.second++;
      }
      sort(u.begin(), u.end(), [](auto& a, auto& b) {
        return a.second < b.second;
      });
      rep(i, u.size()) {
        bc.first += u[i].second;
        if (bc.first <= t) bc.second++;
      }
      ans = max(ans, ac.second - bc.second);
    }
    cout << ans << endl;
  }
  else {
    vector dp(n + 1, vector<vector<int>>(t + 1, vector<int>(t + 1, 0)));
    rep(i, n) {
      rep(j, t + 1) rep(k, t + 1) {
        if (k + v[i].second > t && j + v[i].first < t) {
          dp[i + 1][j + v[i].first][k] = max(dp[i + 1][j + v[i].first][k], dp[i][j][k] + 1);
        }
      }
    }
    int maxim = 0;
    rep(i, t + 1) rep(j, t + 1) maxim = max(maxim, dp[n][i][j]);
    cout << maxim << endl;
  }
  return 0;
}