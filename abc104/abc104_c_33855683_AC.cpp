/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc104/submissions/33855683
 * Submitted at: 2022-08-07 15:58:37
 * Problem URL: https://atcoder.jp/contests/abc104/tasks/abc104_c
 * Result: AC
 * Execution Time: 7 ms
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
  int d, g;
  cin >> d >> g;
  vector<pair<int, int>> v(d);
  rep(i, d) cin >> v[i].first >> v[i].second;
  int ans = 1e9;
  rep(bit, 1 << d) {
    int solved = 0;
    int score = 0;
    for (int i = d - 1; i >= 0; i--) {
      if (bit & (1 << i)) {
        for (int j = 1; j <= v[i].first; j++) {
          if (score >= g) {
            break;
          }
          score += 100 * (i + 1);
          solved++;
          if (j == v[i].first) {
            score += v[i].second;
          }
        }
      }
    }
    Debug(bit, solved, score);
    if (score >= g) ans = min(ans, solved);
  }
  cout << ans << endl;
  return 0;
}