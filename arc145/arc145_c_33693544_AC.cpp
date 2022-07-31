/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc145/submissions/33693544
 * Submitted at: 2022-08-01 00:01:51
 * Problem URL: https://atcoder.jp/contests/arc145/tasks/arc145_c
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
using mint = modint998244353;

int main() {
  int n;
  cin >> n;
  mint ans = mint(2).pow(n);
  for (int i = n + 2; i <= 2 * n; i++) {
    ans *= i;
  }
  cout << ans.val() << endl;
  return 0;
}