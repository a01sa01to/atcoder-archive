/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202203-open/submissions/37947694
 * Submitted at: 2023-01-12 00:04:44
 * Problem URL: https://atcoder.jp/contests/past202203-open/tasks/past202203_b
 * Result: AC
 * Execution Time: 5 ms
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
  int a, b, x, y;
  cin >> a >> b >> x >> y;
  cout << min(x / a, y / b) << endl;
  return 0;
}