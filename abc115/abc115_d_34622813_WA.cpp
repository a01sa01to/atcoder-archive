/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc115/submissions/34622813
 * Submitted at: 2022-09-05 00:12:31
 * Problem URL: https://atcoder.jp/contests/abc115/tasks/abc115_d
 * Result: WA
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

vector<ll> a, p;
map<pair<ll, ll>, ll> memo;
ll solve(ll n, ll x) {
  if (memo.count({ n, x })) return memo[{ n, x }];
  if (n == 0) return memo[{ n, x }] = 1;
  if (1 < x && x < a[n - 1] + 2) return memo[{ n, x }] = solve(n - 1, x - 1);
  if (x == a[n - 1] + 2) return memo[{ n, x }] = p[n - 1] + 1;
  if (a[n - 1] + 2 < x && x <= 2 * (a[n] + 1)) return memo[{ n, x }] = p[n - 1] + 1 + solve(n - 1, x - a[n - 1] - 2);
  if (x == 2 * a[n - 1] + 3) return memo[{ n, x }] = p[n - 1] + 1;
  return 0;
}

int main() {
  ll n, x;
  cin >> n >> x;
  a.push_back(1), p.push_back(1);
  rep(i, n) {
    a.push_back(a.back() * 2 + 3);
    p.push_back(p.back() * 2 + 1);
  }

  cout << solve(n, x) << endl;
  return 0;
}