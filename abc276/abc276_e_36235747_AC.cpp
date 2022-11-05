/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc276/submissions/36235747
 * Submitted at: 2022-11-05 21:18:03
 * Problem URL: https://atcoder.jp/contests/abc276/tasks/abc276_e
 * Result: AC
 * Execution Time: 117 ms
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

int h, w;

bool dfs(const vector<vector<char>>& Grid, pair<int, int> v, vector<vector<bool>>& visited, int dep) {
  if (v.first < 0 || v.first >= h || v.second < 0 || v.second >= w) return false;
  if (Grid[v.first][v.second] == 'S' && dep >= 4) return true;
  if (visited[v.first][v.second]) return false;
  if (Grid[v.first][v.second] == '#') return false;
  visited[v.first][v.second] = true;
  Debug(v, dep);
  bool ret = false;
  ret |= dfs(Grid, { v.first + 1, v.second }, visited, dep + 1);
  ret |= dfs(Grid, { v.first - 1, v.second }, visited, dep + 1);
  ret |= dfs(Grid, { v.first, v.second + 1 }, visited, dep + 1);
  ret |= dfs(Grid, { v.first, v.second - 1 }, visited, dep + 1);
  return ret;
}

int main() {
  cin >> h >> w;
  vector Grid(h, vector(w, '\0'));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  pair<int, int> start = { -1, -1 };
  rep(i, h) rep(j, w) if (Grid[i][j] == 'S') start = { i, j };
  vector visited(h, vector(w, false));
  cout << (dfs(Grid, start, visited, 0) ? "Yes" : "No") << endl;
  return 0;
}