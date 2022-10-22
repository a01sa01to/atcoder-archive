/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc274/submissions/35873448
 * Submitted at: 2022-10-22 21:14:28
 * Problem URL: https://atcoder.jp/contests/abc274/tasks/abc274_d
 * Result: TLE
 * Execution Time: 2207 ms
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
  int n, x, y;
  cin >> n >> x >> y;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  set<tuple<int, int, int>> dp;
  dp.insert({ a[0], 0, 0 });
  rep(i, n - 1) {
    set<tuple<int, int, int>> ndp;
    for (auto [x, y, z] : dp) {
      if (z >= 2) {
        ndp.insert({ x + a[i + 1], y, 0 });
        ndp.insert({ x - a[i + 1], y, 1 });
      }
      else {
        ndp.insert({ x, y + a[i + 1], 2 });
        ndp.insert({ x, y - a[i + 1], 3 });
      }
    }
    swap(dp, ndp);
  }
  bool chk = false;
  rep(i, 4) {
    chk |= dp.count({ x, y, i });
  }
  cout << (chk ? "Yes" : "No") << endl;
  return 0;
}