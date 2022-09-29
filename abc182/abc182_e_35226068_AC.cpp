/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc182/submissions/35226068
 * Submitted at: 2022-09-29 12:51:27
 * Problem URL: https://atcoder.jp/contests/abc182/tasks/abc182_e
 * Result: AC
 * Execution Time: 210 ms
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
  constexpr int Light = 0b111;
  constexpr int Block = 0b011;

  int h, w, n, m;
  cin >> h >> w >> n >> m;
  vector Grid(h, vector<int>(w, 0));
  vector<pair<int, int>> v(n);
  rep(i, n) {
    cin >> v[i].first >> v[i].second;
    --v[i].first, --v[i].second;
  }
  rep(_, m) {
    int a, b;
    cin >> a >> b;
    Grid[a - 1][b - 1] = Block;
  }
  rep(i, n) {
    auto [x, y] = v[i];
    Grid[x][y] = Light;
    for (int i = x - 1; i >= 0; --i) {
      if (Grid[i][y] & 0b010) break;
      Grid[i][y] |= 0b110;
    }
    for (int i = x + 1; i < h; ++i) {
      if (Grid[i][y] & 0b010) break;
      Grid[i][y] |= 0b110;
    }
    for (int i = y - 1; i >= 0; --i) {
      if (Grid[x][i] & 0b001) break;
      Grid[x][i] |= 0b101;
    }
    for (int i = y + 1; i < w; ++i) {
      if (Grid[x][i] & 0b001) break;
      Grid[x][i] |= 0b101;
    }
  }
  int ans = 0;
  rep(i, h) rep(j, w) if (Grid[i][j] & 0b100)++ ans;
  cout << ans << endl;
  return 0;
}