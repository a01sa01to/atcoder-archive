/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day3/submissions/30546774
 * Submitted at: 2022-03-29 16:49:38
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day3/tasks/pakencamp_2021_day3_d
 * Result: WA
 * Execution Time: 11 ms
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
      rep(i, n) {
        if (b & (1 << i)) {
          ac.first += v[i].first;
          if (ac.first <= t) ac.second++;
          bc.first += v[i].second;
          if (bc.first <= t) bc.second++;
        }
      }
      ans = max(ans, ac.second - bc.second);
    }
    cout << ans << endl;
  }
  else {
    cout << 0 << endl;
  }
  return 0;
}