/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc277/submissions/36421840
 * Submitted at: 2022-11-12 21:20:10
 * Problem URL: https://atcoder.jp/contests/abc277/tasks/abc277_d
 * Result: AC
 * Execution Time: 405 ms
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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());
  map<ll, ll> mp, mpinv, mpcnt;
  int cnt = 0;
  rep(i, n) {
    mpcnt[a[i]]++;
    if (mp.count(a[i]) == 0) {
      mp[a[i]] = cnt;
      mpinv[cnt] = a[i];
      cnt++;
    }
  }
  Debug(mpinv);
  dsu d(cnt);
  rep(i, n) {
    if (mp.count((a[i] + 1) % m) > 0) {
      d.merge(mp[a[i]], mp[(a[i] + 1) % m]);
    }
  }
  ll ans = 1e18;
  ll sum = accumulate(a.begin(), a.end(), 0LL);
  auto g = d.groups();
  for (auto v : g) {
    Debug(v);
    ll tmp = sum;
    for (auto x : v) {
      tmp -= mpinv[x] * mpcnt[mpinv[x]];
    }
    Debug(tmp);
    ans = min(ans, tmp);
  }
  cout << ans << endl;
  return 0;
}