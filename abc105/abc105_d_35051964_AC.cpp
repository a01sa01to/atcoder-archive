/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc105/submissions/35051964
 * Submitted at: 2022-09-23 00:13:02
 * Problem URL: https://atcoder.jp/contests/abc105/tasks/abc105_d
 * Result: AC
 * Execution Time: 49 ms
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
  int n, m;
  cin >> n >> m;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<ll> sum(n + 1, 0);
  rep(i, n) sum[i + 1] = sum[i] + a[i];
  map<ll, ll> mp;
  rep(i, n + 1) mp[sum[i] % m]++;
  ll ans = 0;
  for (auto [k, v] : mp) ans += v * (v - 1) / 2;
  cout << ans << endl;
  return 0;
}