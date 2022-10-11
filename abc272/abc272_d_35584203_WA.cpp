/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc272/submissions/35584203
 * Submitted at: 2022-10-11 16:40:24
 * Problem URL: https://atcoder.jp/contests/abc272/tasks/abc272_d
 * Result: WA
 * Execution Time: 329 ms
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
  int n, m;
  cin >> n >> m;
  const int sqrtM = sqrt(m);
  vector ans(n, vector(n, -1));
  queue<pair<int, int>> q;
  ans[0][0] = 0;
  q.push({ 0, 0 });
  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();
    for (int dx = max(-sqrtM, -x); dx < min(sqrtM + 1, n - x); ++dx) {
      if (dx * dx > m) continue;
      double dy = sqrt(double(m) - dx * dx);
      if (dy != floor(dy)) continue;
      for (int ddy : { (int) dy, -(int) dy }) {
        if (ans[x + dx][y + ddy] != -1) continue;
        ans[x + dx][y + ddy] = ans[x][y] + 1;
        q.push({ x + dx, y + ddy });
      }
    }
  }
  rep(i, n) {
    rep(j, n) cout << ans[i][j] << " ";
    cout << endl;
  }
  return 0;
}