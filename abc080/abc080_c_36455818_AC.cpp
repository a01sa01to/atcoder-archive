/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc080/submissions/36455818
 * Submitted at: 2022-11-13 00:16:20
 * Problem URL: https://atcoder.jp/contests/abc080/tasks/abc080_c
 * Result: AC
 * Execution Time: 6 ms
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
  int n;
  cin >> n;
  constexpr int m = 10;
  vector<int> f(n, 0);
  rep(i, n) {
    rep(j, m) {
      int a;
      cin >> a;
      f[i] |= a << j;
    }
  }
  vector p(n, vector<int>(m + 1));
  rep(i, n) rep(j, m + 1) cin >> p[i][j];
  int ans = -1e9;
  rep(bit, 1 << m) {
    if (bit == 0) continue;
    int tmp = 0;
    rep(i, n) {
      tmp += p[i][__builtin_popcount(bit & f[i])];
    }
    Debug(bit, tmp);
    ans = max(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}