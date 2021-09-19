/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/atc002/submissions/25996088
 * Submitted at: 2021-09-19 23:58:57
 * Problem URL: https://atcoder.jp/contests/atc002/tasks/abc007_3
 * Result: AC
 * Execution Time: 3 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int r, c, sy, sx, gy, gx;
  cin >> r >> c >> sy >> sx >> gy >> gx;
  ll2d dist(r, ll1d(c));
  rep(i, r) rep(j, c) {
    char c;
    cin >> c;
    if (c == '#') dist[i][j] = -1;
    else
      dist[i][j] = 1e10;
  }
  queue<P> que;
  gy--, gx--;
  que.push({ --sy, --sx });
  dist[sy][sx] = 0;

  while (!que.empty()) {
    auto [y, x] = que.front();
    que.pop();
    if (dist[y - 1][x] == 1e10) {
      dist[y - 1][x] = dist[y][x] + 1;
      que.push({ y - 1, x });
    }
    if (dist[y + 1][x] == 1e10) {
      dist[y + 1][x] = dist[y][x] + 1;
      que.push({ y + 1, x });
    }
    if (dist[y][x - 1] == 1e10) {
      dist[y][x - 1] = dist[y][x] + 1;
      que.push({ y, x - 1 });
    }
    if (dist[y][x + 1] == 1e10) {
      dist[y][x + 1] = dist[y][x] + 1;
      que.push({ y, x + 1 });
    }
  }
  cout << dist[gy][gx] << endl;
  return 0;
}