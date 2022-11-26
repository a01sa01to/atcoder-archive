/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc279/submissions/36801148
 * Submitted at: 2022-11-26 21:07:51
 * Problem URL: https://atcoder.jp/contests/abc279/tasks/abc279_c
 * Result: WA
 * Execution Time: 111 ms
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
  int h, w;
  cin >> h >> w;
  vector<string> s(h), t(h);
  rep(i, h) cin >> s[i];
  rep(i, h) cin >> t[i];
  vector<int> sx(h, 0), sy(w, 0), tx(h, 0), ty(w, 0);
  rep(i, h) rep(j, w) {
    if (s[i][j] == '#') sx[i]++, sy[j]++;
    if (t[i][j] == '#') tx[i]++, ty[j]++;
  }
  sort(sx.begin(), sx.end());
  sort(sy.begin(), sy.end());
  sort(tx.begin(), tx.end());
  sort(ty.begin(), ty.end());
  if (sx == tx && sy == ty)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}