/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc177/submissions/27771176
 * Submitted at: 2021-12-09 00:13:12
 * Problem URL: https://atcoder.jp/contests/abc177/tasks/abc177_d
 * Result: AC
 * Execution Time: 97 ms
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
  int n, m;
  cin >> n >> m;
  dsu d(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    d.merge(a - 1, b - 1);
  }
  int ans = 0;
  rep(i, n) {
    ans = max(ans, d.size(i));
  }
  cout << ans << endl;
  return 0;
}