/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/nikkei2019-qual/submissions/36368960
 * Submitted at: 2022-11-11 00:18:34
 * Problem URL: https://atcoder.jp/contests/nikkei2019-qual/tasks/nikkei2019_qual_c
 * Result: AC
 * Execution Time: 71 ms
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
  ll n;
  cin >> n;
  vector<pair<ll, ll>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), [](auto a, auto b) {
    return a.first + a.second > b.first + b.second;
  });
  Debug(v);
  ll ans = 0;
  rep(i, n) ans -= v[i].second;
  rep(i, n) {
    if (i % 2 == 0) ans += v[i].first + v[i].second;
    Debug(i, ans);
  }
  cout << ans << endl;
  return 0;
}