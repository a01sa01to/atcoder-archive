/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/28782451
 * Submitted at: 2022-01-25 00:53:07
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bq
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

typedef modint1000000007 mint;

int main() {
  ll n, k;
  cin >> n >> k;
  // corner
  if (k == 1 && n == 1) cout << 1 << endl;
  else if (k == 1)
    cout << 0 << endl;
  else if (n == 1)
    cout << k << endl;
  else if (n == 2)
    cout << (mint(k) * mint(k - 1)).val() << endl;
  else {
    mint ans = k;                   // 最初
    ans *= k - 1;                   // 次
    ans *= mint(k - 2).pow(n - 2);  //それ以外
    cout << ans.val() << endl;
  }
  return 0;
}