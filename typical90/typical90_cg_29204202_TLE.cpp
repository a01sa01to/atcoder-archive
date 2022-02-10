/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/29204202
 * Submitted at: 2022-02-11 00:13:30
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_cg
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
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  ll k;
  cin >> k;
  ll ans = 0;
  for (ll a = 1; a <= k; ++a)
    for (ll b = a; a * b <= k; ++b) {
      if (k % (a * b) == 0 && k / (a * b) >= b) ++ans;
    }
  cout << ans << endl;
  return 0;
}