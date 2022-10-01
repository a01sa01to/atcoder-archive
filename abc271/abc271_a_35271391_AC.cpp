/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc271/submissions/35271391
 * Submitted at: 2022-10-01 21:01:46
 * Problem URL: https://atcoder.jp/contests/abc271/tasks/abc271_a
 * Result: AC
 * Execution Time: 4 ms
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

char c(int x) {
  return (x < 10 ? '0' + x : 'A' + x - 10);
}

int main() {
  int n;
  cin >> n;
  int t = n / 16;
  int r = n % 16;
  cout << c(t) << c(r) << endl;
  return 0;
}