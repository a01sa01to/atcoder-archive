/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202010-open/submissions/31404529
 * Submitted at: 2022-05-03 01:18:00
 * Problem URL: https://atcoder.jp/contests/past202010-open/tasks/past202010_g
 * Result: AC
 * Execution Time: 4 ms
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

int main() {
  int n, m;
  cin >> n >> m;
  vector Grid(n, vector<char>(m));
  rep(i, n) rep(j, m) cin >> Grid[i][j];

  auto inRange = [&](int i, int j) {
    return 0 <= i && i < n && 0 <= j && j < m;
  };

  int cnt = 0;
  rep(i, n) rep(j, m) cnt += (Grid[i][j] == '.');
  ++cnt;

  int ans = 0;
  rep(i, n) rep(j, m) {
    if (Grid[i][j] == '.') continue;
    Grid[i][j] = '.';
    vector visited(n, vector<bool>(m, false));
    visited[i][j] = true;
    queue<pair<int, int>> q;
    q.push({ i, j });
    while (!q.empty()) {
      auto [x, y] = q.front();
      q.pop();
      if (inRange(x, y + 1) && !visited[x][y + 1] && Grid[x][y + 1] == '.') {
        visited[x][y + 1] = true;
        q.push({ x, y + 1 });
      }
      if (inRange(x, y - 1) && !visited[x][y - 1] && Grid[x][y - 1] == '.') {
        visited[x][y - 1] = true;
        q.push({ x, y - 1 });
      }
      if (inRange(x + 1, y) && !visited[x + 1][y] && Grid[x + 1][y] == '.') {
        visited[x + 1][y] = true;
        q.push({ x + 1, y });
      }
      if (inRange(x - 1, y) && !visited[x - 1][y] && Grid[x - 1][y] == '.') {
        visited[x - 1][y] = true;
        q.push({ x - 1, y });
      }
    }
    Debug(visited);
    int cnt2 = 0;
    rep(x, n) rep(y, m) cnt2 += visited[x][y];
    Debug(cnt, cnt2);
    if (cnt2 == cnt) ++ans;
    Grid[i][j] = '#';
  }
  cout << ans << endl;
  return 0;
}