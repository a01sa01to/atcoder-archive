/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/bcu30-2018/submissions/28345232
 * Submitted at: 2022-01-06 11:55:41
 * Problem URL: https://atcoder.jp/contests/bcu30-2018/tasks/bcu30_2018_b
 * Result: AC
 * Execution Time: 72 ms
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  --x, --y;

  vector Grid(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];

  vector<int> dx = { 0, 1, 0, -1 };
  vector<int> dy = { 1, 0, -1, 0 };

  vector ans(h, vector<bool>(w, false));
  while (true) {
    ans[x][y] = true;
    P minim = { Grid[x][y], -1 };
    rep(i, 4) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
      if (Grid[nx][ny] < minim.first) {
        minim = { Grid[nx][ny], i };
      }
    }
    if (minim.second == -1) break;
    x += dx[minim.second];
    y += dy[minim.second];
  }
  rep(i, h) {
    rep(j, w) cout << (ans[i][j] ? 'W' : '.');
    cout << endl;
  }
  return 0;
}