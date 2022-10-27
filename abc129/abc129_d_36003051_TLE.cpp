/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc129/submissions/36003051
 * Submitted at: 2022-10-28 01:14:45
 * Problem URL: https://atcoder.jp/contests/abc129/tasks/abc129_d
 * Result: TLE
 * Execution Time: 2212 ms
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

map<tuple<int, int, int>, int> memo;
vector<string> Grid;
int h, w;

int dfs(int x, int y, int d) {
  if (memo.count({ x, y, d })) return memo[{ x, y, d }];
  if (x < 0 || x >= h || y < 0 || y >= w) return 0;
  if (Grid[x][y] == '#') return 0;
  if (d == 0) return memo[{ x, y, d }] = dfs(x + 1, y, d) + 1;
  if (d == 1) return memo[{ x, y, d }] = dfs(x - 1, y, d) + 1;
  if (d == 2) return memo[{ x, y, d }] = dfs(x, y + 1, d) + 1;
  if (d == 3) return memo[{ x, y, d }] = dfs(x, y - 1, d) + 1;
  return 1e9;
}

int main() {
  cin >> h >> w;
  Grid.resize(h);
  rep(i, h) cin >> Grid[i];
  int ans = 0;
  rep(i, h) rep(j, w) {
    if (Grid[i][j] == '#') continue;
    int t = 0;
    rep(d, 4) {
      t += dfs(i, j, d);
    }
    Debug(i, j, t - 3);
    ans = max(ans, t - 3);
  }
  cout << ans << endl;
  return 0;
}