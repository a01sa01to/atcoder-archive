/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/joi2023yo1a/submissions/35712095
 * Submitted at: 2022-10-16 14:38:26
 * Problem URL: https://atcoder.jp/contests/joi2023yo1a/tasks/joi2023_yo1a_d
 * Result: AC
 * Execution Time: 6 ms
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
  int now = 0;
  rep(i, 2 * n - 1) {
    int x;
    cin >> x;
    now ^= x;
  }
  cout << now << endl;
  return 0;
}