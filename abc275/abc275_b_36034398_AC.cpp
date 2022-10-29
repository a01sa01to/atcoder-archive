/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36034398
 * Submitted at: 2022-10-29 21:01:55
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_b
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

using mint = modint998244353;

int main() {
  ll a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;
  mint x = a;
  x *= b;
  x *= c;
  mint y = d;
  y *= e;
  y *= f;
  cout << (x - y).val() << endl;
  return 0;
}