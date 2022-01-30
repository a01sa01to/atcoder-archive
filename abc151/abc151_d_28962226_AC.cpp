/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc151/submissions/28962226
 * Submitted at: 2022-01-31 01:15:15
 * Problem URL: https://atcoder.jp/contests/abc151/tasks/abc151_d
 * Result: AC
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector Grid(h, vector<bool>(w));
  rep(i, h) rep(j, w) {
    char c;
    cin >> c;
    Grid[i][j] = (c == '#');
  }
  int ans = 0;
  rep(i, h) rep(j, w) {
    if (Grid[i][j]) continue;
    vector seen(h, vector<bool>(w, false));
    queue<tuple<int, int, int>> que;
    que.push({ i, j, 0 });
    while (!que.empty()) {
      Debug(que.front());
      auto [x, y, d] = que.front();
      que.pop();
      if (seen[x][y] || Grid[x][y]) continue;
      ans = max(ans, d);
      seen[x][y] = true;
      if (x > 0) que.push({ x - 1, y, d + 1 });
      if (x < h - 1) que.push({ x + 1, y, d + 1 });
      if (y > 0) que.push({ x, y - 1, d + 1 });
      if (y < w - 1) que.push({ x, y + 1, d + 1 });
    }
  }
  cout << ans << endl;
  return 0;
}