/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc261/submissions/33481349
 * Submitted at: 2022-07-24 01:08:24
 * Problem URL: https://atcoder.jp/contests/abc261/tasks/abc261_e
 * Result: AC
 * Execution Time: 894 ms
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
  int n, c;
  cin >> n >> c;
  vector v(n + 1, vector(30, vector<int> { 0, 1 }));
  rep(i, n) {
    int t, a;
    cin >> t >> a;
    rep(j, 30) {
      if (t == 1) v[i + 1][j] = { v[i][j][0] & ((a >> j) & 1), v[i][j][1] & ((a >> j) & 1) };
      if (t == 2) v[i + 1][j] = { v[i][j][0] | ((a >> j) & 1), v[i][j][1] | ((a >> j) & 1) };
      if (t == 3) v[i + 1][j] = { v[i][j][0] ^ ((a >> j) & 1), v[i][j][1] ^ ((a >> j) & 1) };
    }
  }
  int x = c;
  rep(i, n) {
    int tmp = 0;
    rep(j, 30) {
      if (v[i + 1][j][(x >> j) & 1] == 1) tmp += (1 << j);
    }
    x = tmp;
    cout << x << endl;
  }
  return 0;
}