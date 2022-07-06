/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc041/submissions/33024898
 * Submitted at: 2022-07-07 00:22:07
 * Problem URL: https://atcoder.jp/contests/arc041/tasks/arc041_b
 * Result: AC
 * Execution Time: 35 ms
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

int main() {
  int n, m;
  cin >> n >> m;
  vector b(n, vector<int>(m));
  rep(i, n) rep(j, m) {
    char c;
    cin >> c;
    b[i][j] = c - '0';
  }
  vector ans(n, vector<int>(m));
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < m - 1; j++) {
      int &w = b[i + 1][j], &x = b[i - 1][j], &y = b[i][j + 1], &z = b[i][j - 1];
      int v = min({ w, x, y, z });
      if (w && x && y && z) {
        ans[i][j] = v;
        w -= v, x -= v, y -= v, z -= v;
      }
      Debug(b, ans);
    }
  }
  rep(i, n) {
    rep(j, m) cout << ans[i][j];
    cout << endl;
  }
  return 0;
}