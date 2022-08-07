/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc037/submissions/33866707
 * Submitted at: 2022-08-08 00:41:39
 * Problem URL: https://atcoder.jp/contests/abc037/tasks/abc037_d
 * Result: AC
 * Execution Time: 545 ms
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
using mint = modint1000000007;
using T = tuple<int, int, int>;

void operator<<(ostream& os, const mint& m) { os << m.val(); }

int main() {
  int h, w;
  cin >> h >> w;
  vector Grid(h, vector<int>(w));
  rep(i, h) rep(j, w) cin >> Grid[i][j];
  priority_queue<T, vector<T>, greater<>> pq;
  rep(i, h) rep(j, w) {
    pq.push({ Grid[i][j], i, j });
  }
  vector t(h, vector<mint>(w, 1));
  while (!pq.empty()) {
    auto [v, i, j] = pq.top();
    pq.pop();
    const vector<int> dx = { 0, 0, 1, -1 };
    const vector<int> dy = { 1, -1, 0, 0 };
    rep(d, 4) {
      int ni = i + dx[d];
      int nj = j + dy[d];
      if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
      if (Grid[ni][nj] > v) {
        t[ni][nj] += t[i][j];
      }
    }
  }
  Debug(t);
  mint ans = 0;
  rep(i, h) rep(j, w) ans += t[i][j];
  cout << ans.val() << endl;
  return 0;
}