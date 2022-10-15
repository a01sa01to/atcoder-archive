/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc273/submissions/35667671
 * Submitted at: 2022-10-15 21:08:20
 * Problem URL: https://atcoder.jp/contests/abc273/tasks/abc273_b
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

int main() {
  ll x, k;
  cin >> x >> k;
  ll now = x, c = 1;
  rep(i, k) {
    Debug(now, c, now / c);
    if ((now / c) % 10 >= 5) {
      now = (now / (c * 10) + 1) * (c * 10);
    }
    else {
      now = (now / (c * 10)) * (c * 10);
    }
    c *= 10;
  }
  cout << now << endl;
  return 0;
}