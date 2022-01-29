/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28881651
 * Submitted at: 2022-01-30 00:25:52
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_cd
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

typedef unsigned long long ull;
typedef modint1000000007 mint;

mint sum(mint l, mint r) {
  return (r - l + 1) * (r + l) / 2;
}

// 10^n ～ 10^(n+1) - 1 のn桁の数字、l～r→ans = n * Sum
mint solve(int n, ull l, ull r) {
  ull p = 1;
  rep(i, n) p *= 10;
  ull up = p * 10 - 1;
  if (l > up) return 0;
  if (r < p) return 0;
  return sum(max(l, p), min(r, up)) * (n + 1);
}

int main() {
  ull l, r;
  cin >> l >> r;
  mint ans = 0;
  rep(i, 19) ans += solve(i, l, r);
  cout << ans.val() << endl;
  return 0;
}