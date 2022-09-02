/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc034/submissions/34515431
 * Submitted at: 2022-09-03 00:08:05
 * Problem URL: https://atcoder.jp/contests/abc034/tasks/abc034_c
 * Result: AC
 * Execution Time: 8 ms
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

using mint = modint1000000007;

int main() {
  int w, h;
  cin >> w >> h;
  vector fact(w + h + 1, mint(1));
  rep(i, w + h) fact[i + 1] = fact[i] * (i + 1);
  cout << (fact[w + h - 2] / fact[w - 1] / fact[h - 1]).val() << endl;
  return 0;
}