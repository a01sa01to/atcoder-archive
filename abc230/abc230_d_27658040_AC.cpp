/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/27658040
 * Submitted at: 2021-12-03 21:28:05
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_d
 * Result: AC
 * Execution Time: 136 ms
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
  int n, d;
  cin >> n >> d;
  vector<P> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), [](P& a, P& b) {
    return a.second < b.second;
  });
  ll ans = 0;
  ll i = 0;
  while (i < n) {
    ll j = i + 1;
    while (j < n && v[j].first - v[i].second < d) ++j;
    ++ans;
    i = j;
  }
  cout << ans << endl;
  return 0;
}