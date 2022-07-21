/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc020/submissions/33398972
 * Submitted at: 2022-07-22 00:55:58
 * Problem URL: https://atcoder.jp/contests/abc020/tasks/abc020_c
 * Result: AC
 * Execution Time: 621 ms
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
  int h, w, t;
  cin >> h >> w >> t;
  vector Grid(h, vector<char>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  ll l = 0, r = t;
  pair<int, int> s, g;
  rep(i, h) rep(j, w) {
    if (Grid[i][j] == 'S') {
      s = { i, j };
    }
    if (Grid[i][j] == 'G') {
      g = { i, j };
    }
  }
  while (r - l > 1) {
    ll x = (l + r) / 2;
    priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<tuple<ll, int, int>>> pq;
    vector dist(h, vector<ll>(w, 1e18));
    pq.push({ 0, s.first, s.second });
    dist[s.first][s.second] = 0;
    while (!pq.empty()) {
      auto [d, i, j] = pq.top();
      pq.pop();
      const vector<int> dx = { 0, 0, 1, -1 };
      const vector<int> dy = { 1, -1, 0, 0 };
      rep(dir, 4) {
        int ni = i + dx[dir];
        int nj = j + dy[dir];
        if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
        ll nxtd = d + (Grid[ni][nj] == '#' ? x : 1);
        if (nxtd > dist[ni][nj]) continue;
        dist[ni][nj] = nxtd;
        pq.push({ nxtd, ni, nj });
      }
    }
    (dist[g.first][g.second] <= t ? l : r) = x;
  }
  cout << l << endl;
  return 0;
}