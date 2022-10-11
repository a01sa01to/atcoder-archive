/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc272/submissions/35584123
 * Submitted at: 2022-10-11 16:36:39
 * Problem URL: https://atcoder.jp/contests/abc272/tasks/abc272_d
 * Result: TLE
 * Execution Time: 2205 ms
 */

#pragma target("avx2")
#pragma optimize("O3")
#pragma optimize("unroll-loops")

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
      for (int dy = max(-sqrtM, -y); dy < min(sqrtM + 1, n - y); ++dy) {
        if (dx * dx + dy * dy != m) continue;
        if (ans[x + dx][y + dy] != -1) continue;
        ans[x + dx][y + dy] = ans[x][y] + 1;
        q.push({ x + dx, y + dy });
      }
    }
  }
  rep(i, n) {
    rep(j, n) cout << ans[i][j] << " ";
    cout << endl;
  }
  return 0;
}