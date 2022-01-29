/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28881550
 * Submitted at: 2022-01-30 00:22:23
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_cd
 * Result: WA
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

typedef modint1000000007 mint;

mint sum(ll l, ll r) {
  return mint(r - l + 1) * mint(r + l) / 2;
}

// 10^n ～ 10^(n+1) - 1 のn桁の数字、l～r→ans = n * Sum
mint solve(int n, ll l, ll r) {
  ll p = 1;
  rep(i, n) p *= 10;
  ll up = p * 10 - 1;
  if (l > up) return 0;
  if (r < p) return 0;
  Debug(max(l, p));
  Debug(min(r, up));
  Debug(sum(max(l, p), min(r, up)).val());
  return sum(max(l, p), min(r, up)) * (n + 1);
}

int main() {
  ll l, r;
  cin >> l >> r;
  mint ans = 0;
  rep(i, 18) ans += solve(i, l, r);
  ll l1e18 = 1e18;
  if (r == l1e18) ans += 18 * mint(l1e18);
  cout << ans.val() << endl;
  return 0;
}