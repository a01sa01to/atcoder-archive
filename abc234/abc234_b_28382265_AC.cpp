/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc234/submissions/28382265
 * Submitted at: 2022-01-08 21:03:33
 * Problem URL: https://atcoder.jp/contests/abc234/tasks/abc234_b
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<P> v(n);
  rep(i, n) cin >> v[i].first >> v[i].second;
  ld ans = 0;
  rep(i, n) rep(j, n) {
    if (i >= j) continue;
    ans = max(ans, sqrt(ld(pow(v[i].first - v[j].first, 2) + pow(v[i].second - v[j].second, 2))));
  }
  cout << fixed << setprecision(15) << ans << endl;
  return 0;
}