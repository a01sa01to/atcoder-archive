/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc269/submissions/34918481
 * Submitted at: 2022-09-17 21:01:02
 * Problem URL: https://atcoder.jp/contests/abc269/tasks/abc269_a
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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << (a + b) * (c - d) << endl;
  cout << "Takahashi" << endl;
  return 0;
}