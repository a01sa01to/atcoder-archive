/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc172/submissions/30915891
 * Submitted at: 2022-04-11 22:57:30
 * Problem URL: https://atcoder.jp/contests/abc172/tasks/abc172_d
 * Result: AC
 * Execution Time: 1205 ms
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
  vector<ll> a(n + 1, 1);
  for (ll i = 2; i <= n; ++i) {
    for (ll j = i; j <= n; j += i) {
      a[j]++;
    }
  }
  ll ans = 1;
  for (ll i = 2; i <= n; ++i) ans += i * a[i];
  cout << ans << endl;
  return 0;
}