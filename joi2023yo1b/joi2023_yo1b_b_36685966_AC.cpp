/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo1b/submissions/36685966
 * Submitted at: 2022-11-21 00:39:06
 * Problem URL: https://atcoder.jp/contests/joi2023yo1b/tasks/joi2023_yo1b_b
 * Result: AC
 * Execution Time: 14 ms
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
  if (a == b)
    cout << 0 << endl;
  else
    cout << (a - b) / abs(a - b) << endl;
  return 0;
}