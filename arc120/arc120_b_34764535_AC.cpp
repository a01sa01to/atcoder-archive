/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc120/submissions/34764535
 * Submitted at: 2022-09-11 00:05:25
 * Problem URL: https://atcoder.jp/contests/arc120/tasks/arc120_b
 * Result: AC
 * Execution Time: 14 ms
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

using mint = modint998244353;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  vector<int> cntR(h + w, 0), cntB(h + w, 0), cntD(h + w, 0);
  rep(i, h) rep(j, w) {
    if (s[i][j] == 'R') cntR[i + j]++;
    if (s[i][j] == 'B') cntB[i + j]++;
    if (s[i][j] == '.') cntD[i + j]++;
  }
  mint ans = 1;
  rep(i, h + w) {
    if (cntR[i] == 0 && cntB[i] == 0 && cntD[i] > 0) ans *= 2;
    if (cntR[i] > 0 && cntB[i] > 0) ans = 0;
  }
  cout << ans.val() << endl;
  return 0;
}