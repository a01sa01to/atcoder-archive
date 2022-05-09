/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc099/submissions/31575016
 * Submitted at: 2022-05-10 00:50:48
 * Problem URL: https://atcoder.jp/contests/abc099/tasks/abc099_c
 * Result: AC
 * Execution Time: 20 ms
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

int memo[100001];
int solve(int n) {
  if (n == 0) return memo[n] = 0;
  if (memo[n] != 0) return memo[n];
  memo[n] = solve(n - 1) + 1;

  int t = 6;
  while (t <= n) {
    memo[n] = min(memo[n], solve(n - t) + 1);
    t *= 6;
  }

  t = 9;
  while (t <= n) {
    memo[n] = min(memo[n], solve(n - t) + 1);
    t *= 9;
  }

  return memo[n];
}

int main() {
  int n;
  cin >> n;
  cout << solve(n) << endl;
  return 0;
}