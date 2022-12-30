/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202203-open/submissions/37640216
 * Submitted at: 2022-12-31 00:39:30
 * Problem URL: https://atcoder.jp/contests/past202203-open/tasks/past202203_a
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
  int a, b, c;
  cin >> a >> b >> c;
  auto v = { a * b, b * c, c * a };
  cout << min(v) << " " << max(v) << endl;
  return 0;
}