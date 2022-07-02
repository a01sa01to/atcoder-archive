/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc258/submissions/32909675
 * Submitted at: 2022-07-02 21:40:19
 * Problem URL: https://atcoder.jp/contests/abc258/tasks/abc258_d
 * Result: WA
 * Execution Time: 123 ms
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
  int n, x;
  cin >> n >> x;
  vector<pair<ll, ll>> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  ll ans = 1e18;
  ll sum = 0;
  ll minim = 9e18;
  rep(i, n) {
    sum += v[i].first;
    sum += v[i].second;
    minim = min(minim, v[i].second);
    --x;
    ans = min(ans, sum + x * v[i].second);
    ans = min(ans, sum + x * minim);
  }
  cout << ans << endl;
  return 0;
}