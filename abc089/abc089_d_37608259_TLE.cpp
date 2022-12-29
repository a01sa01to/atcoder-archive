/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc089/submissions/37608259
 * Submitted at: 2022-12-29 11:16:49
 * Problem URL: https://atcoder.jp/contests/abc089/tasks/abc089_d
 * Result: TLE
 * Execution Time: 2212 ms
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

int h, w, d;
map<int, pair<int, int>> mp;
map<pair<int, int>, int> cost;
int solve(int a, int b) {
  if (cost.count({ a, b })) return cost[{ a, b }];
  if (a == b) return 0;
  auto [x1, y1] = mp[a];
  auto [x2, y2] = mp[a + d];
  return cost[{ a, b }] = abs(x1 - x2) + abs(y1 - y2) + solve(a + d, b);
}

int main() {
  cin >> h >> w >> d;
  vector Grid(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];

  rep(i, h) rep(j, w) mp[Grid[i][j]] = { i, j };

  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << solve(l, r) << endl;
  }
  return 0;
}