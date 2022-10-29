/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc275/submissions/36047621
 * Submitted at: 2022-10-29 21:16:44
 * Problem URL: https://atcoder.jp/contests/abc275/tasks/abc275_d
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

map<ll, ll> memo;
ll solve(ll k) {
  if (k == 0) return 1;
  if (memo.count(k)) return memo[k];
  return memo[k] = solve(k / 2) + solve(k / 3);
}

int main() {
  ll n;
  cin >> n;
  cout << solve(n) << endl;
  return 0;
}