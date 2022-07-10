/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc178/submissions/33151821
 * Submitted at: 2022-07-11 01:36:48
 * Problem URL: https://atcoder.jp/contests/abc178/tasks/abc178_e
 * Result: WA
 * Execution Time: 139 ms
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
  sort(v.begin(), v.end());
  ll ans = 0;
  ans = max(ans, abs(v.back().first - v.front().first) + abs(v.back().second - v.front().second));
  sort(v.begin(), v.end(), [](auto& a, auto& b) {
    return a.second < b.second;
  });
  ans = max(ans, abs(v.back().first - v.front().first) + abs(v.back().second - v.front().second));
  cout << ans << endl;
  return 0;
}