/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2021-day2/submissions/30521620
 * Submitted at: 2022-03-28 10:45:17
 * Problem URL: https://atcoder.jp/contests/pakencamp-2021-day2/tasks/pakencamp_2021_day2_e
 * Result: TLE
 * Execution Time: 2205 ms
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
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef modint998244353 mint;

int main() {
  ll n, m;
  cin >> n >> m;
  mint ans = mint(m) * mint(m - 1);
  rep(i, n - 2) ans *= mint(m - 2);
  cout << ans.val() << endl;
  return 0;
}