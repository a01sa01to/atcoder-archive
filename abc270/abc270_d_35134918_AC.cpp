/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc270/submissions/35134918
 * Submitted at: 2022-09-24 22:35:18
 * Problem URL: https://atcoder.jp/contests/abc270/tasks/abc270_d
 * Result: AC
 * Execution Time: 431 ms
 */

#pragma target("avx2")
#pragma optimize("O3")
#pragma optimize("unroll-loops")

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

map<pair<int, bool>, pair<int, int>> memo;
pair<int, int> solve(int n, vector<int>& a, bool aoki) {
  if (memo.count({ n, aoki })) return memo[{ n, aoki }];
  pair<int, int> ans = { 0, 0 };
  rep(i, a.size()) {
    if (a[i] > n) break;
    auto [x, y] = solve(n - a[i], a, !aoki);
    if (aoki) {
      if (ans.second < y + a[i]) ans = { x, y + a[i] };
    }
    else {
      if (ans.first < x + a[i]) ans = { x + a[i], y };
    }
  }
  return memo[{ n, aoki }] = ans;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(k);
  rep(i, k) cin >> a[i];
  cout << solve(n, a, false).first << endl;
  return 0;
}