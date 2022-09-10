/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc120/submissions/34764406
 * Submitted at: 2022-09-11 00:00:45
 * Problem URL: https://atcoder.jp/contests/arc120/tasks/arc120_b
 * Result: WA
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

  mint ans = 1;
  rep(i, h - 1) rep(j, w - 1) {
    if (s[i + 1][j] == '.' && s[i][j + 1] == '.') ans *= 2;
    if (s[i + 1][j] == 'R' && s[i][j + 1] == 'B') ans = 0;
    if (s[i + 1][j] == 'B' && s[i][j + 1] == 'R') ans = 0;
  }
  cout << ans.val() << endl;
  return 0;
}