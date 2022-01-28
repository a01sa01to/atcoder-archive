/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28845313
 * Submitted at: 2022-01-29 00:15:04
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_ca
 * Result: WA
 * Execution Time: 13 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int h, w;
  cin >> h >> w;
  vector a(h, vector<int>(w)), b(h, vector<int>(w));
  int ans = 0;
  rep(i, h) rep(j, w) cin >> a[i][j];
  rep(i, h) rep(j, w) cin >> b[i][j];
  rep(i, h) rep(j, w) {
    if (i == h - 1 || j == w - 1) continue;
    int delta = b[i][j] - a[i][j];
    a[i][j] += delta;
    a[i + 1][j] += delta;
    a[i][j + 1] += delta;
    a[i + 1][j + 1] += delta;
    ans += abs(delta);
  }
  bool chk = a == b;
  Debug(a);
  Debug(b);
  cout << (chk ? "Yes" : "No") << endl;
  if (chk) cout << ans << endl;
  return 0;
}