/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc051/submissions/32166105
 * Submitted at: 2022-06-03 00:04:08
 * Problem URL: https://atcoder.jp/contests/arc051/tasks/arc051_b
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int k;
  cin >> k;
  vector<int> fib(k + 2);
  fib[0] = 0;
  fib[1] = 1;
  rep(i, k) fib[i + 2] = fib[i] + fib[i + 1];
  printf("%d %d\n", fib[k], fib[k + 1]);
  return 0;
}