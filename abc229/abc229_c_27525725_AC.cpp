/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc229/submissions/27525725
 * Submitted at: 2021-11-27 21:17:37
 * Problem URL: https://atcoder.jp/contests/abc229/tasks/abc229_c
 * Result: AC
 * Execution Time: 159 ms
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
  int n, w;
  cin >> n >> w;
  vector<P> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), [](P& a, P& b) {
    return a.first > b.first;
  });
  ll ans = 0;
  rep(i, n) {
    if (v[i].second < w) {
      ans += v[i].first * v[i].second;
      w -= v[i].second;
    }
    else {
      ans += v[i].first * w;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}