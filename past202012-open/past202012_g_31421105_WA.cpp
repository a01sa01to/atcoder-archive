/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202012-open/submissions/31421105
 * Submitted at: 2022-05-03 23:46:54
 * Problem URL: https://atcoder.jp/contests/past202012-open/tasks/past202012_g
 * Result: WA
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int h, w;
vector<vector<pair<int, int>>> ans(0);

void dfs(int x, int y, const vector<vector<char>>& Grid, vector<vector<bool>>& visited, vector<pair<int, int>> now) {
  bool chk = false;
  auto a = [&](int next_x, int next_y) {
    if (next_x < 0 || next_x >= h || next_y < 0 || next_y >= w) return;
    if (Grid[next_x][next_y] == '.') return;
    if (visited[next_x][next_y]) return;
    visited[next_x][next_y] = true;
    vector<pair<int, int>> tmp = now;
    tmp.push_back({ next_x, next_y });
    chk = true;
    dfs(next_x, next_y, Grid, visited, tmp);
  };
  a(x, y - 1);
  a(x, y + 1);
  a(x - 1, y);
  a(x + 1, y);
  if (!chk) ans.push_back(now);
}

int main() {
  cin >> h >> w;
  vector Grid(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];

  rep(i, h) rep(j, w) {
    if (Grid[i][j] == '.') continue;
    vector visited(h, vector<bool>(w, false));
    visited[i][j] = true;
    vector<pair<int, int>> now = { { i, j } };
    dfs(i, j, Grid, visited, now);
    visited[i][j] = false;
  }

  sort(ans.begin(), ans.end(), [](auto& a, auto& b) {
    return a.size() > b.size();
  });

  cout << ans[0].size() << endl;
  for (auto [x, y] : ans[0]) printf("%d %d\n", x + 1, y + 1);
  return 0;
}