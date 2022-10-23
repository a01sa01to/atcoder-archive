/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tkppc3/submissions/35926696
 * Submitted at: 2022-10-24 00:06:41
 * Problem URL: https://atcoder.jp/contests/tkppc3/tasks/tkppc3_a
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

int main() {
  char c1, c2;
  int a, b;
  cin >> c1 >> a >> c2 >> b;
  cout << (c1 == c2 ? abs(a - b) : a + b) / 15 << endl;
  return 0;
}