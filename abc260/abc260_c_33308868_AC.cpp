/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc260/submissions/33308868
 * Submitted at: 2022-07-17 21:44:34
 * Problem URL: https://atcoder.jp/contests/abc260/tasks/abc260_c
 * Result: AC
 * Execution Time: 5 ms
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

int n, x, y;
ll f(ll r, ll cr, ll b, ll cb) {
  ll ret = 0;
  if (r == 1 && b == 1) return cb;
  if (r > 1) {
    ret += f(r - 1, cr, r, cr * x);
  }
  if (b > 1) {
    ret += f(b - 1, cb, b - 1, cb * y);
  }
  Debug(r, cr, b, cb, ret);
  return ret;
}

int main() {
  cin >> n >> x >> y;
  cout << f(n, 1, 0, 0) << endl;
  return 0;
}