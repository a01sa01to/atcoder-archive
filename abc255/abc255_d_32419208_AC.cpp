/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc255/submissions/32419208
 * Submitted at: 2022-06-11 23:14:42
 * Problem URL: https://atcoder.jp/contests/abc255/tasks/abc255_d
 * Result: AC
 * Execution Time: 539 ms
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
  int n, q;
  cin >> n >> q;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  vector<ll> sum(n + 1, 0);
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  while (q--) {
    ll x;
    cin >> x;
    auto itr = lower_bound(a.begin(), a.end(), x);
    auto itr2 = upper_bound(a.begin(), a.end(), x);
    ll d1 = max(ll(itr - a.begin()), 0LL);
    ll d2 = max(ll(a.end() - itr2), 0LL);
    ll l = d1 * x - sum[d1];
    ll r = sum[n] - sum[itr2 - a.begin()] - d2 * x;
    Debug(d1, d2, l, r);
    cout << l + r << endl;
  }
  return 0;
}