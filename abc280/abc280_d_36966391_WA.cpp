/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36966391
 * Submitted at: 2022-12-03 21:15:34
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_d
 * Result: WA
 * Execution Time: 19 ms
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

ll f(ll n) {
  // x * (x + 1) / 2 = n
  // x^2 + x - 2n = 0
  // x = (-1 + sqrt(1 + 8n)) / 2
  return ceil((-1 + sqrt(1 + 8 * n)) / 2);
}

int main() {
  ll k;
  cin >> k;
  map<ll, ll> prime_fact;
  for (ll i = 2; i * i <= k; i++) {
    while (k % i == 0) {
      prime_fact[i]++;
      k /= i;
    }
  }
  if (k != 1) prime_fact[k]++;
  ll ans = 0;
  for (auto [p, e] : prime_fact) {
    ans = max(ans, f(e) * p);
  }
  cout << ans << endl;
  return 0;
}