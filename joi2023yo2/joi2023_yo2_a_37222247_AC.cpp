/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo2/submissions/37222247
 * Submitted at: 2022-12-12 00:50:14
 * Problem URL: https://atcoder.jp/contests/joi2023yo2/tasks/joi2023_yo2_a
 * Result: AC
 * Execution Time: 437 ms
 */

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize("O3")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("unroll-loops")

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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int maxim = 0, minim = 1e9;
  rep(i, n) {
    maxim = max(maxim, a[i]);
    minim = min(minim, a[i]);
  }
  rep(i, n) {
    cout << max(abs(maxim - a[i]), abs(minim - a[i])) << endl;
  }
  return 0;
}