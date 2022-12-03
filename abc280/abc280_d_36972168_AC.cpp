/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc280/submissions/36972168
 * Submitted at: 2022-12-03 21:24:55
 * Problem URL: https://atcoder.jp/contests/abc280/tasks/abc280_d
 * Result: AC
 * Execution Time: 20 ms
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

ll f(ll p, ll e) {
  ll ok = e, ng = 0;
  while (ok - ng > 1) {
    ll mid = (ok + ng) / 2;
    ll tmp = 0;
    ll x = mid;
    while (x > 0) {
      tmp += x;
      x /= p;
    }
    if (tmp >= e) {
      ok = mid;
    }
    else {
      ng = mid;
    }
  }
  return ok;
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
    ans = max(ans, f(p, e) * p);
    Debug(p, e, f(p, e) * p);
  }
  cout << ans << endl;
  return 0;
}