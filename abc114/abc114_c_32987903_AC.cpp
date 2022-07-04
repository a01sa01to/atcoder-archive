/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc114/submissions/32987903
 * Submitted at: 2022-07-05 00:24:27
 * Problem URL: https://atcoder.jp/contests/abc114/tasks/abc114_c
 * Result: AC
 * Execution Time: 9 ms
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

int n;

int dfs(ll x, bool s, bool f, bool t) {
  if (x > n) return 0;
  int ret = 0;
  if (s && f && t) ret++;
  ret += dfs(10 * x + 3, s, f, true);
  ret += dfs(10 * x + 5, s, true, t);
  ret += dfs(10 * x + 7, true, f, t);
  return ret;
}

int main() {
  cin >> n;
  cout << dfs(0, false, false, false) << endl;
  return 0;
}