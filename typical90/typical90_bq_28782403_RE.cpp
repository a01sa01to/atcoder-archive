/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28782403
 * Submitted at: 2022-01-25 00:48:44
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bq
 * Result: RE
 * Execution Time: 109 ms
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

int main() {
  ll n, k;
  cin >> n >> k;
  mint ans = k;                   // 最初
  ans *= k - 1;                   // 次
  ans *= mint(k - 2).pow(n - 2);  //それ以外
  cout << ans.val() << endl;
  return 0;
}