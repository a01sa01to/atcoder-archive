/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc144/submissions/33270159
 * Submitted at: 2022-07-16 22:21:11
 * Problem URL: https://atcoder.jp/contests/arc144/tasks/arc144_a
 * Result: AC
 * Execution Time: 12 ms
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
  cout << 2 * n << endl;
  if (n % 4) cout << n % 4;
  rep(_, n / 4) cout << 4;
  cout << endl;
  return 0;
}