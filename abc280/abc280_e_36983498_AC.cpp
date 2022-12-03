/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36983498
 * Submitted at: 2022-12-03 21:53:48
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_e
 * Result: AC
 * Execution Time: 144 ms
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
void operator<<(ostream &os, mint x) { os << x.val(); }

map<int, mint> memo;
mint solve(int n, int p) {
  if (n <= 0) return 0;
  if (memo.count(n)) return memo[n];
  return memo[n] = mint(100 - p) / 100 * solve(n - 1, p) + mint(p) / 100 * solve(n - 2, p) + 1;
}

int main() {
  int n, p;
  cin >> n >> p;
  cout << solve(n, p).val() << endl;
  return 0;
}