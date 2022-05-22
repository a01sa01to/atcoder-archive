/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc139/submissions/31903933
 * Submitted at: 2022-05-23 00:36:45
 * Problem URL: https://atcoder.jp/contests/arc139/tasks/arc139_a
 * Result: AC
 * Execution Time: 29 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  ll ans = 0;
  rep(i, n) {
    int t;
    cin >> t;
    ll p = 1LL << t;
    ans = ((ans / p) + 1) * p;
    if (ans % (2 * p) == 0) ans += p;
  }
  cout << ans << endl;
  return 0;
}