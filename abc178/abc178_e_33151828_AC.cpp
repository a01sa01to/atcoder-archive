/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc178/submissions/33151828
 * Submitted at: 2022-07-11 01:38:30
 * Problem URL: https://atcoder.jp/contests/abc178/tasks/abc178_e
 * Result: AC
 * Execution Time: 133 ms
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
  int n;
  cin >> n;
  vector<pair<ll, ll>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  vector<ll> z(n), w(n);
  rep(i, n) z[i] = v[i].first + v[i].second;
  rep(i, n) w[i] = v[i].first - v[i].second;
  ll ans = *max_element(z.begin(), z.end()) - *min_element(z.begin(), z.end());
  ans = max(ans, *max_element(w.begin(), w.end()) - *min_element(w.begin(), w.end()));
  cout << ans << endl;
  return 0;
}