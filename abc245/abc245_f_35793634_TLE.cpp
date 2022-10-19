/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc245/submissions/35793634
 * Submitted at: 2022-10-19 23:50:32
 * Problem URL: https://atcoder.jp/contests/abc245/tasks/abc245_f
 * Result: TLE
 * Execution Time: 2275 ms
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
  constexpr int l = 30;
  vector dbl(l, vector<vector<int>>(n, vector<int>(0)));
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    dbl[0][--u].push_back(--v);
  }
  rep(i, l - 1) {
    rep(j, n) {
      for (int k : dbl[i][j]) {
        for (int l : dbl[i][k]) {
          dbl[i + 1][j].push_back(l);
        }
      }
    }
    Debug(i, dbl[i]);
  }
  int ans = 0;
  rep(i, n) {
    if (dbl[l - 1][i].size()) ans++;
  }
  cout << ans << endl;
  return 0;
}