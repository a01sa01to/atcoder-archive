/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc282/submissions/37325339
 * Submitted at: 2022-12-17 21:02:51
 * Problem URL: https://atcoder.jp/contests/abc282/tasks/abc282_b
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
  int n, m;
  cin >> n >> m;
  vector Grid(n, vector<char>(m));
  rep(i, n) rep(j, m) cin >> Grid[i][j];
  int ans = 0;
  rep(i, n) {
    for (int j = i + 1; j < n; j++) {
      int cnt = 0;
      rep(k, m) {
        if (Grid[i][k] == 'o' || Grid[j][k] == 'o') cnt++;
      }
      if (cnt == m) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}