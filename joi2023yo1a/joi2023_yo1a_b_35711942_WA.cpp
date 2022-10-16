/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo1a/submissions/35711942
 * Submitted at: 2022-10-16 14:35:54
 * Problem URL: https://atcoder.jp/contests/joi2023yo1a/tasks/joi2023_yo1a_b
 * Result: WA
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
  int n;
  cin >> n;
  cout << (n / 10 == n % 10 ? "Yes" : "No") << endl;
  return 0;
}