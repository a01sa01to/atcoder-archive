/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2015-quala/submissions/27754090
 * Submitted at: 2021-12-07 22:10:22
 * Problem URL: https://atcoder.jp/contests/code-festival-2015-quala/tasks/codefestival_2015_qualA_c
 * Result: AC
 * Execution Time: 56 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; ++i)

int main() {
  ll n, t;
  cin >> n >> t;
  vector<P> v(n);
  ll chk = 0;
  rep(i, n) cin >> v[i].first >> v[i].second;
  rep(i, n) chk += v[i].second;
  if (chk > t) {
    puts("-1");
    return 0;
  }
  ll sum = 0;
  rep(i, n) sum += v[i].first;
  sort(v.begin(), v.end(), [](P a, P b) {
    return a.first - a.second > b.first - b.second;
  });
  ll ans = 0;
  rep(i, n) {
    if (sum <= t) break;
    ++ans;
    sum -= v[i].first - v[i].second;
  }
  cout << ans << endl;
  return 0;
}