/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc174/submissions/37381875
 * Submitted at: 2022-12-19 00:00:36
 * Problem URL: https://atcoder.jp/contests/abc174/tasks/abc174_e
 * Result: AC
 * Execution Time: 108 ms
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

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  ll ok = 1e9, ng = 0;
  while (ok - ng > 1) {
    ll mid = (ok + ng) / 2;
    ll cnt = 0;
    rep(i, n) cnt += (a[i] - 1) / mid;
    (cnt > k ? ng : ok) = mid;
  }
  cout << ok << endl;
  return 0;
}