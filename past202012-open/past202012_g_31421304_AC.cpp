/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202012-open/submissions/31421304
 * Submitted at: 2022-05-04 00:00:34
 * Problem URL: https://atcoder.jp/contests/past202012-open/tasks/past202012_g
 * Result: AC
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
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int h, w;
bool dfs(int x, int y, int dep, vector<vector<bool>>& visited, const vector<vector<char>>& Grid, const int cnt) {
  if (x < 0 || x >= h || y < 0 || y >= w) return false;
  if (Grid[x][y] == '.') return false;
  if (visited[x][y]) return false;
  visited[x][y] = true;
  if (dep == cnt) {
    printf("%d %d\n", x + 1, y + 1);
    return true;
  }
  Debug(x, y, dep);
  bool ret = false;
  ret |= dfs(x + 1, y, dep + 1, visited, Grid, cnt);
  ret |= dfs(x - 1, y, dep + 1, visited, Grid, cnt);
  ret |= dfs(x, y + 1, dep + 1, visited, Grid, cnt);
  ret |= dfs(x, y - 1, dep + 1, visited, Grid, cnt);
  if (ret) printf("%d %d\n", x + 1, y + 1);
  visited[x][y] = false;
  return ret;
}

int main() {
  cin >> h >> w;
  vector Grid(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];

  int cnt = 0;
  rep(i, h) rep(j, w) if (Grid[i][j] == '#') cnt++;
  cout << cnt << endl;

  bool fin = false;
  rep(i, h) rep(j, w) {
    if (fin) break;
    if (Grid[i][j] == '.') continue;
    vector visited(h, vector<bool>(w, false));
    fin = dfs(i, j, 1, visited, Grid, cnt);
  }
  return 0;
}