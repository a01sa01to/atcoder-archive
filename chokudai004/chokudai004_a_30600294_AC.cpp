/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/chokudai004/submissions/30600294
 * Submitted at: 2022-04-01 10:47:27
 * Problem URL: https://atcoder.jp/contests/chokudai004/tasks/chokudai004_a
 * Result: AC
 * Execution Time: 27 ms
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

int rand_int(int l, int r) {
  random_device rd;
  mt19937 mt(rd());
  uniform_int_distribution rand(l, r);
  return rand(mt);
}

int main() {
  int n, b1, b2, b3;
  cin >> n >> b1 >> b2 >> b3;
  vector Grid(n, vector<pair<int, int>>(n));
  rep(i, n) rep(j, n) cin >> Grid[i][j].first;
  rep(i, n) rep(j, n) cin >> Grid[i][j].second;

  rep(i, n) {
    rep(j, n) {
      auto [l, r] = Grid[i][j];
      cout << rand_int(l, r) << " ";
    }
    cout << endl;
  }
  return 0;
}