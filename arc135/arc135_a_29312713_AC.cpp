/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc135/submissions/29312713
 * Submitted at: 2022-02-13 22:23:11
 * Problem URL: https://atcoder.jp/contests/arc135/tasks/arc135_a
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef modint998244353 mint;

map<ll, mint> memo;

mint dfs(ll x) {
  if (memo[x].val()) return memo[x];
  if (x <= 3) return memo[x] = x;
  return memo[x] = dfs(x / 2) * dfs((x + 1) / 2);
}

int main() {
  ll x;
  cin >> x;
  cout << dfs(x).val() << endl;
  return 0;
}