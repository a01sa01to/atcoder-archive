/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo1c/submissions/37189672
 * Submitted at: 2022-12-11 00:07:33
 * Problem URL: https://atcoder.jp/contests/joi2023yo1c/tasks/joi2023_yo1c_b
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
  int a, b;
  cin >> a >> b;
  cout << (a + 7 * b <= 30 ? 1 : 0) << endl;
  return 0;
}