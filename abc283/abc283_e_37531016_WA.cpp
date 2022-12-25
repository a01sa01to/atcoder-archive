/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc283/submissions/37531016
 * Submitted at: 2022-12-25 10:20:04
 * Problem URL: https://atcoder.jp/contests/abc283/tasks/abc283_e
 * Result: WA
 * Execution Time: 133 ms
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
  vector Grid(h, vector<int>(w, 0));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  vector dp(h + 1, array<int, 8>());
  constexpr int INF = 1e9;
  rep(i, h + 1) rep(j, 8) dp[i][j] = INF;
  auto inRange = [&](int i, int j) {
    return 0 <= i && i < h && 0 <= j && j < w;
  };
  rep(i, 8) dp[0][i] = 0;
  rep(i, h) {
    rep(bit, 8) {
      bool ok = true;
      rep(j, w) {
        bool tmp = false;
        tmp |= inRange(i - 1, j) && (Grid[i - 1][j] ^ (bit & 1) == Grid[i][j] ^ (bit & 2));
        tmp |= inRange(i, j - 1) && (Grid[i][j - 1] == Grid[i][j]);
        tmp |= inRange(i, j + 1) && (Grid[i][j + 1] == Grid[i][j]);
        tmp |= inRange(i + 1, j) && (Grid[i + 1][j] ^ (bit & 4) == Grid[i][j] ^ (bit & 2));
        ok &= tmp;
      }
      Debug(i, bit, ok);
      int s = (bit << 1) & 0b111;
      int t = min(dp[i][s], dp[i][s + 1]);
      if (ok) dp[i + 1][bit] = min(dp[i + 1][bit], t + (bit >> 1 & 1));
    }
  }
  Debug(dp);
  int ans = INF;
  rep(i, 3) ans = min({ ans, dp[h][i], dp[h][i + 4] });
  cout << (ans == INF ? -1 : ans) << endl;
  return 0;
}