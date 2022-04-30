/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202112-open/submissions/31368643
 * Submitted at: 2022-05-01 00:23:37
 * Problem URL: https://atcoder.jp/contests/past202112-open/tasks/past202112_f
 * Result: AC
 * Execution Time: 8 ms
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
  const int n = 9;
  int a, b;
  cin >> a >> b;
  --a, --b;
  vector<string> s(3);
  rep(i, 3) cin >> s[i];
  vector visited(n, vector<bool>(n, false));
  queue<pair<int, int>> q;
  q.push({ a, b });
  visited[a][b] = true;
  auto inRange = [&](int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
  };
  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();
    rep(i, 3) rep(j, 3) {
      int nx = x + i - 1, ny = y + j - 1;
      if (s[i][j] == '#' && inRange(nx, ny) && !visited[nx][ny]) {
        q.push({ nx, ny });
        visited[nx][ny] = true;
      }
    }
  }
  int ans = 0;
  rep(i, n) rep(j, n) ans += visited[i][j];
  cout << ans << endl;
  return 0;
}