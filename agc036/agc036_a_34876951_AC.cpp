/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc036/submissions/34876951
 * Submitted at: 2022-09-15 23:59:16
 * Problem URL: https://atcoder.jp/contests/agc036/tasks/agc036_a
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
  ll s;
  cin >> s;
  constexpr ll I = 1e9;
  ll t = (I - s % I) % I;
  printf("%lld %lld %lld %lld %lld %lld\n", 0, 0, I, 1, t, (s + t) / I);
  return 0;
}