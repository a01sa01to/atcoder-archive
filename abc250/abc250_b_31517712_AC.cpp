/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc250/submissions/31517712
 * Submitted at: 2022-05-08 21:06:34
 * Problem URL: https://atcoder.jp/contests/abc250/tasks/abc250_b
 * Result: AC
 * Execution Time: 7 ms
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
  int n, a, b;
  cin >> n >> a >> b;
  rep(i, n) rep(_, a) {
    rep(j, n) rep(_, b) cout << ((i + j) % 2 ? "#" : ".");
    cout << endl;
  }
  return 0;
}