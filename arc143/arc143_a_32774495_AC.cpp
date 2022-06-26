/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc143/submissions/32774495
 * Submitted at: 2022-06-26 21:22:07
 * Problem URL: https://atcoder.jp/contests/arc143/tasks/arc143_a
 * Result: AC
 * Execution Time: 9 ms
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
  ll _a, _b, _c;
  cin >> _a >> _b >> _c;
  ll a = min({ _a, _b, _c }), c = max({ _a, _b, _c });
  ll b = _a + _b + _c - a - c;
  if (a + b < c) {
    cout << -1 << endl;
  }
  else {
    cout << c << endl;
  }
  return 0;
}