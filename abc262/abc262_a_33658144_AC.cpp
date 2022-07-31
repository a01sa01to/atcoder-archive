/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc262/submissions/33658144
 * Submitted at: 2022-07-31 21:01:42
 * Problem URL: https://atcoder.jp/contests/abc262/tasks/abc262_a
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
  int n;
  cin >> n;
  cout << (n % 4 == 2 ? n : n + (6 - n % 4) % 4) << endl;
  return 0;
}