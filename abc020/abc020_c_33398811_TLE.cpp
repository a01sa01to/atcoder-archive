/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc020/submissions/33398811
 * Submitted at: 2022-07-22 00:41:43
 * Problem URL: https://atcoder.jp/contests/abc020/tasks/abc020_c
 * Result: TLE
 * Execution Time: 2205 ms
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

ll h, w, t;
ll ans = -1;
void dfs(int i, int j, const vector<vector<char>>& Grid, ll wh, ll b, vector<vector<bool>>& visited) {
  visited[i][j] = true;
  Debug(i, j, Grid[i][j], wh, b);
  if (Grid[i][j] == 'G') {
    Debug(i, j, wh, b);
    ans = max(ans, (t - wh) / b);
    visited[i][j] = false;
    return;
  }
  const vector<int> dx = { 0, 0, 1, -1 };
  const vector<int> dy = { 1, -1, 0, 0 };
  rep(d, 4) {
    int nx = i + dx[d];
    int ny = j + dy[d];
    Debug(nx, ny, h, w);
    if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
    Debug(nx, ny, visited[nx][ny], Grid[nx][ny]);
    if (visited[nx][ny]) continue;
    bool bk = (Grid[nx][ny] == '#');
    dfs(nx, ny, Grid, wh + !bk, b + bk, visited);
  }
  visited[i][j] = false;
}

int main() {
  cin >> h >> w >> t;
  vector Grid(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  vector visited(h, vector<bool>(w, false));
  rep(i, h) rep(j, w) if (Grid[i][j] == 'S') dfs(i, j, Grid, 0, 0, visited);
  cout << ans << endl;
  return 0;
}